/********************************************************************************************************
* @file    fcmp.sv
* @brief   RISC-V FEQ / FLT / FLE instruction implementation
* @details IEEE 754-2008 quiet comparison semantics:
*
*            FEQ  : result = (rs1 == rs2) ? 1 : 0
*                   NaN input → 0, NV only if sNaN
*            FLT  : result = (rs1 <  rs2) ? 1 : 0
*                   any NaN   → 0, NV raised
*            FLE  : result = (rs1 <= rs2) ? 1 : 0
*                   any NaN   → 0, NV raised
*
*          +0 == -0 per IEEE 754.
*          Infinity is handled explicitly (funpack leaves exp/mant at 0 for inf).
*          1-cycle latency: combinational compare + output register.
*          Result is a 1-bit integer written to the integer register bank (int_wen).
*
* @author  ekonihc
* @date    07/05/2026
********************************************************************************************************/

`include "fpu_pkg.sv"
import fpkg::*;

module fcmp #(
    parameter XLEN = 64
)(
    input  logic clk,
    input  logic rst_n,

    input  logic valid_in,
    output logic ready_in,
    output logic valid_out,
    input  logic ready_out,

    input  fpu_op_e op,

    // unpacked operand A (from funpack)
    input  logic               sign_a,
    input  logic signed [12:0] exp_a,
    input  logic [52:0]        mant_a,
    input  logic               is_nan_a,
    input  logic               is_snan_a,
    input  logic               is_inf_a,
    input  logic               is_zero_a,

    // unpacked operand B (from funpack)
    input  logic               sign_b,
    input  logic signed [12:0] exp_b,
    input  logic [52:0]        mant_b,
    input  logic               is_nan_b,
    input  logic               is_snan_b,
    input  logic               is_inf_b,
    input  logic               is_zero_b,

    output logic [XLEN-1:0]    result,       // 0 or 1, zero-extended to XLEN
    output logic [4:0]         fflags_out
);

    // =========================================================
    // VALID PIPELINE (1 stage)
    // =========================================================

    logic valid_pipe;

    assign ready_in  = !valid_pipe || ready_out;
    assign valid_out = valid_pipe;

    always_ff @(posedge clk) begin
        if (!rst_n)
            valid_pipe <= 1'b0;
        else if (ready_in)
            valid_pipe <= valid_in;
    end

    // =========================================================
    // EQUALITY: is A == B?
    //   +0 == -0 per IEEE 754.
    //   Infinity: same sign and both inf → equal.
    //   Normal: sign + exp + mant must all match.
    //   NaN inputs are handled separately below.
    // =========================================================

    logic a_eq_b;

    always_comb begin
        if (is_zero_a && is_zero_b) begin
            a_eq_b = 1'b1;                                      // +0 == -0

        end else if (is_inf_a && is_inf_b) begin
            a_eq_b = (sign_a == sign_b);                        // +inf==+inf, -inf==-inf

        end else if (is_inf_a || is_inf_b) begin
            a_eq_b = 1'b0;                                      // inf != finite

        end else begin
            a_eq_b = (sign_a == sign_b) &&
                     (exp_a  == exp_b)  &&
                     (mant_a == mant_b);
        end
    end

    // =========================================================
    // LESS-THAN: is A < B?
    //   Handles -0/+0, infinity, sign-magnitude ordering.
    //   NaN inputs are handled separately below.
    // =========================================================

    logic a_lt_b;

    always_comb begin
        if (is_zero_a && is_zero_b) begin
            a_lt_b = 1'b0;                                      // +0 == -0, not less

        end else if (is_inf_a && is_inf_b) begin
            a_lt_b = sign_a & ~sign_b;                          // -inf < +inf

        end else if (is_inf_a) begin
            a_lt_b = sign_a;                                    // -inf<anything, +inf>anything

        end else if (is_inf_b) begin
            a_lt_b = ~sign_b;                                   // +inf means B>A, -inf means B<A

        end else if (sign_a ^ sign_b) begin
            a_lt_b = sign_a;                                    // negative < positive

        end else if (!sign_a) begin
            a_lt_b = (exp_a < exp_b) ||                        // both positive
                     (exp_a == exp_b && mant_a < mant_b);

        end else begin
            a_lt_b = (exp_a > exp_b) ||                        // both negative: larger mag = smaller
                     (exp_a == exp_b && mant_a > mant_b);
        end
    end

    // =========================================================
    // RESULT + FLAGS (combinational)
    //
    // NaN rules (RISC-V / IEEE 754-2008):
    //   FEQ + qNaN : result=0, no NV
    //   FEQ + sNaN : result=0, NV raised
    //   FLT/FLE + any NaN : result=0, NV raised
    // =========================================================

    logic [XLEN-1:0] comb_result;
    logic [4:0]      comb_fflags;

    always_comb begin
        comb_result = '0;
        comb_fflags = 5'b0;

        if (is_nan_a || is_nan_b) begin
            comb_result = '0;
            case (op)
                FPU_CMP_EQ: comb_fflags[4] = is_snan_a | is_snan_b; // NV for sNaN only
                FPU_CMP_LT,
                FPU_CMP_LE: comb_fflags[4] = 1'b1;                  // NV for any NaN
                default:    comb_fflags = 5'b0;
            endcase
        end else begin
            case (op)
                FPU_CMP_EQ: comb_result = {{(XLEN-1){1'b0}}, a_eq_b};
                FPU_CMP_LT: comb_result = {{(XLEN-1){1'b0}}, a_lt_b};
                FPU_CMP_LE: comb_result = {{(XLEN-1){1'b0}}, a_lt_b | a_eq_b};
                default:    comb_result = '0;
            endcase
        end
    end

    // =========================================================
    // OUTPUT REGISTER
    // =========================================================

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            result     <= '0;
            fflags_out <= '0;
        end else if (valid_in && ready_in) begin
            result     <= comb_result;
            fflags_out <= comb_fflags;
        end
    end

endmodule
