/********************************************************************************************************
* @file    fminmax.sv
* @brief   RISC-V FMIN / FMAX instruction implementation
* @details Implements IEEE 754-2008 minNum / maxNum semantics:
*            - Both NaN                → canonical qNaN,  NV raised
*            - One NaN, one number     → return the number, NV if sNaN
*            - FMIN(-0, +0) = -0 ; FMAX(-0, +0) = +0
*            - Otherwise               → smaller / larger of the two operands
*          1-cycle latency: combinational compare + output register.
*          Result goes to the FP register bank (fp_wen, not int_wen).
*
* @author  ekonihc
* @date    07/05/2026
********************************************************************************************************/

`include "fpu_pkg.sv"
import fpkg::*;

module fminmax (

    input  logic clk,
    input  logic rst_n,

    input  logic valid_in,
    output logic ready_in,
    output logic valid_out,
    input  logic ready_out,

    input  fpu_op_e  op,
    input  fpu_fmt_e fmt,

    // raw inputs — returned verbatim when selected as the result
    input  logic [63:0]        rs1,
    input  logic [63:0]        rs2,

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

    output logic [63:0]        result,
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
    // CANONICAL qNaN PER FORMAT
    // =========================================================

    logic [63:0] canonical_nan;

    always_comb begin
        case (fmt)
            FMT_FP64: canonical_nan = 64'h7FF8_0000_0000_0000;
            FMT_FP32: canonical_nan = 64'hFFFF_FFFF_7FC0_0000; // NaN-boxed
            FMT_FP16: canonical_nan = 64'hFFFF_FFFF_FFFF_7E00; // NaN-boxed
            default:  canonical_nan = 64'h7FF8_0000_0000_0000;
        endcase
    end

    // =========================================================
    // COMPARISON: is A strictly less than B?
    //   Ignores NaN (handled separately below).
    //   Handles -0 < +0 ordering per RISC-V / IEEE 754-2008.
    // =========================================================

    logic a_lt_b;

    always_comb begin
        if (is_zero_a && is_zero_b) begin
            // -0 < +0 per minNum/maxNum; same-sign zeros are equal
            a_lt_b = sign_a & ~sign_b;

        end else if (is_inf_a && is_inf_b) begin
            // -inf < +inf; same-sign infinities are equal (not less-than)
            a_lt_b = sign_a & ~sign_b;

        end else if (is_inf_a) begin
            // A is infinity: -inf < everything, +inf > everything
            a_lt_b = sign_a;

        end else if (is_inf_b) begin
            // B is infinity: +inf means B > A, -inf means B < A
            a_lt_b = ~sign_b;

        end else if (sign_a ^ sign_b) begin
            // different signs (no inf): negative < positive
            a_lt_b = sign_a;

        end else if (!sign_a) begin
            // both positive normal/subnormal
            a_lt_b = (exp_a < exp_b) || (exp_a == exp_b && mant_a < mant_b);

        end else begin
            // both negative: larger magnitude = smaller value
            a_lt_b = (exp_a > exp_b) || (exp_a == exp_b && mant_a > mant_b);
        end
    end

    // =========================================================
    // SELECT RESULT AND FLAGS (combinational)
    //
    // IEEE 754-2008 minNum/maxNum / RISC-V rules:
    //   both NaN      → canonical qNaN, NV
    //   only A is NaN → B,             NV if sNaN_a
    //   only B is NaN → A,             NV if sNaN_b
    //   FMIN          → a_lt_b ? rs1 : rs2
    //   FMAX          → a_lt_b ? rs2 : rs1
    // =========================================================

    logic [63:0] comb_result;
    logic [4:0]  comb_fflags;

    always_comb begin
        comb_result = canonical_nan;
        comb_fflags = 5'b0;

        if (is_nan_a && is_nan_b) begin
            comb_result    = canonical_nan;
            comb_fflags[4] = 1'b1; // NV

        end else if (is_nan_a) begin
            comb_result    = rs2;
            comb_fflags[4] = is_snan_a; // NV only for sNaN

        end else if (is_nan_b) begin
            comb_result    = rs1;
            comb_fflags[4] = is_snan_b;

        end else begin
            if (op == FPU_MIN)
                comb_result = a_lt_b ? rs1 : rs2;
            else // FPU_MAX
                comb_result = a_lt_b ? rs2 : rs1;
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
