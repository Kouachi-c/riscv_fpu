/********************************************************************************************************
* @file    faddsub.sv
* @brief   64-bit floating point adder/subtractor
* @details 4-stage pipeline: align+GRS capture → add/sub → normalize+GRS update → output register.
*          Outputs normalized unpacked fields + GRS to fround downstream.
*          Pipeline: funpack → fadd_sub → fround → fpack
*
*          Special cases handled in Stage 1:
*            - NaN (any input)        → is_nan propagated, NV if sNaN
*            - inf − inf              → is_nan + NV flag
*            - inf + finite           → is_inf propagated with correct sign
*            - Both zeros             → arithmetic naturally gives 0
*
* @author  ekonihc
* @date    25/02/2026
********************************************************************************************************/

`include "fpu_pkg.sv"
import fpkg::*;

module faddsub #(
    parameter XLEN = 64
)(
    input  logic clk,
    input  logic rst_n,

    input  logic valid_in,
    output logic ready_in,
    output logic valid_out,
    input  logic ready_out,

    input  fpu_op_e  op,
    input  logic [2:0] rm,  // rounding mode forwarded to fround: RNE=000 RTZ=001 RDN=010 RUP=011 RMM=100

    // operands (unpacked by funpack upstream)
    input  logic               sign_a,
    input  logic signed [12:0] exp_a,
    input  logic [52:0]        mant_a,
    input  logic               is_nan_a,
    input  logic               is_snan_a,
    input  logic               is_inf_a,
    input  logic               is_zero_a,

    input  logic               sign_b,
    input  logic signed [12:0] exp_b,
    input  logic [52:0]        mant_b,
    input  logic               is_nan_b,
    input  logic               is_snan_b,
    input  logic               is_inf_b,
    input  logic               is_zero_b,

    // normalized result fields → fround
    output logic               sign_out,
    output logic signed [12:0] exp_out,
    output logic [54:0]        mant_out,  // 55-bit normalized mantissa, hidden bit at [52]
    output logic [2:0]         grs_out,   // guard, round, sticky bits for fround
    output logic [2:0]         rm_out,    // pipelined rounding mode
    output logic               is_nan_out,
    output logic               is_inf_out,
    output logic               is_zero_out,
    output logic [4:0]         fflags_out // NV + OF + UF (NX added by fround)
);

    // =========================================================
    // VALID PIPELINE
    // =========================================================

    logic [3:0] valid_pipe;

    assign ready_in = !valid_pipe[3] || ready_out;

    always_ff @(posedge clk) begin
        if (!rst_n)
            valid_pipe <= 4'b0;
        else if (ready_in)
            valid_pipe <= {valid_pipe[2:0], valid_in};
    end

    assign valid_out = valid_pipe[3];

    // =========================================================
    // FLAGS PIPELINE
    // =========================================================

    logic [4:0] fflags_s1, fflags_s2, fflags_s3;

    // =========================================================
    // STAGE 1 : ALIGN + GRS capture + special case detection
    //
    // GRS extraction: left-shift the original mantissa by (54 - shift_amt).
    //   bit[53] → Guard, bit[52] → Round, |bit[51:0] → Sticky
    //
    // Special cases resolved here (before alignment):
    //   - inf − inf  → NaN + NV
    //   - inf + X    → is_inf flagged, inf sign captured
    //   - NaN on any → is_nan propagated, NV if sNaN
    // =========================================================

    logic signed [12:0] s1_exp;
    logic [53:0]        s1_mant_a, s1_mant_b;
    logic               s1_sign_a, s1_sign_b;
    fpu_op_e            s1_op;
    logic               s1_is_nan;
    logic               s1_is_inf;
    logic               s1_inf_sign;   // sign of the inf result if is_inf
    logic [2:0]         s1_grs;
    logic [2:0]         s1_rm;

    // module-scope blocking intermediates used inside always_ff
    logic signed [12:0] align_diff;
    logic [6:0]         shift_amt;     // unsigned shift, max 53
    logic [53:0]        grs_ext;
    logic               eff_sign_b;    // effective sign of B (flipped for SUB)
    logic               inf_minus_inf; // true when inf + (-inf) → NaN

    always_ff @(posedge clk) begin
        if (valid_in && ready_in) begin

            s1_sign_a <= sign_a;
            s1_sign_b <= sign_b;
            s1_op     <= op;
            s1_rm     <= rm;

            // --------------------------------------------------
            // Special case detection (blocking — read inputs)
            // --------------------------------------------------
            eff_sign_b    = sign_b ^ (op == FPU_SUB);
            inf_minus_inf = is_inf_a && is_inf_b && (sign_a != eff_sign_b);

            s1_is_nan  <= is_nan_a || is_nan_b || inf_minus_inf;
            s1_is_inf  <= (is_inf_a || is_inf_b) &&
                          !(is_nan_a || is_nan_b) &&
                          !inf_minus_inf;
            // when both are inf with same sign, is_inf_a picks the sign
            s1_inf_sign <= is_inf_a ? sign_a : eff_sign_b;

            // NV: sNaN on any input, or inf − inf
            fflags_s1 <= 5'b0;
            if (is_snan_a || is_snan_b || inf_minus_inf)
                fflags_s1[4] <= 1'b1;

            // --------------------------------------------------
            // Alignment (runs unconditionally; result is don't-care
            // when is_nan or is_inf is set, fpack/fround ignore it)
            // --------------------------------------------------
            align_diff = exp_a - exp_b;

            if (align_diff >= 54) begin
                // mant_b shifted out entirely: only sticky bit survives
                s1_exp    <= exp_a;
                s1_mant_a <= {1'b0, mant_a};
                s1_mant_b <= '0;
                s1_grs    <= {2'b00, |mant_b};
            end else if (align_diff > 0) begin
                shift_amt  = 7'(align_diff);
                grs_ext    = {1'b0, mant_b} << (7'd54 - shift_amt);
                s1_exp    <= exp_a;
                s1_mant_a <= {1'b0, mant_a};
                s1_mant_b <= {1'b0, mant_b} >> shift_amt;
                s1_grs    <= {grs_ext[53], grs_ext[52], |grs_ext[51:0]};
            end else if (align_diff <= -54) begin
                // mant_a shifted out entirely
                s1_exp    <= exp_b;
                s1_mant_a <= '0;
                s1_mant_b <= {1'b0, mant_b};
                s1_grs    <= {2'b00, |mant_a};
            end else if (align_diff < 0) begin
                shift_amt  = 7'(-align_diff);
                grs_ext    = {1'b0, mant_a} << (7'd54 - shift_amt);
                s1_exp    <= exp_b;
                s1_mant_a <= {1'b0, mant_a} >> shift_amt;
                s1_mant_b <= {1'b0, mant_b};
                s1_grs    <= {grs_ext[53], grs_ext[52], |grs_ext[51:0]};
            end else begin
                // align_diff == 0, no shift needed
                s1_exp    <= exp_a;
                s1_mant_a <= {1'b0, mant_a};
                s1_mant_b <= {1'b0, mant_b};
                s1_grs    <= 3'b0;
            end

        end
    end

    // =========================================================
    // STAGE 2 : ADD/SUB
    // GRS passes through unchanged: represents bits below the
    // aligned integer mantissas, unaffected by the integer add.
    // =========================================================

    logic signed [12:0] s2_exp;
    logic [53:0]        s2_mant;
    logic               s2_sign;
    logic               s2_is_nan;
    logic               s2_is_inf;
    logic               s2_inf_sign;
    logic [2:0]         s2_grs;
    logic [2:0]         s2_rm;

    always_ff @(posedge clk) begin
        if (valid_pipe[0]) begin

            s2_exp      <= s1_exp;
            s2_is_nan   <= s1_is_nan;
            s2_is_inf   <= s1_is_inf;
            s2_inf_sign <= s1_inf_sign;
            s2_grs      <= s1_grs;
            s2_rm       <= s1_rm;
            fflags_s2   <= fflags_s1;

            if (s1_op == FPU_ADD) begin
                if (s1_sign_a == s1_sign_b) begin
                    s2_mant <= s1_mant_a + s1_mant_b;
                    s2_sign <= s1_sign_a;
                end else if (s1_mant_a >= s1_mant_b) begin
                    s2_mant <= s1_mant_a - s1_mant_b;
                    s2_sign <= s1_sign_a;
                end else begin
                    s2_mant <= s1_mant_b - s1_mant_a;
                    s2_sign <= s1_sign_b;
                end
            end else begin
                if (s1_sign_a != s1_sign_b) begin
                    s2_mant <= s1_mant_a + s1_mant_b;
                    s2_sign <= s1_sign_a;
                end else if (s1_mant_a >= s1_mant_b) begin
                    s2_mant <= s1_mant_a - s1_mant_b;
                    s2_sign <= s1_sign_a;
                end else begin
                    s2_mant <= s1_mant_b - s1_mant_a;
                    s2_sign <= ~s1_sign_a;
                end
            end
        end
    end

    // =========================================================
    // STAGE 3 : NORMALIZE + GRS update + OF/UF detection
    //
    // Right shift (carry out from addition):
    //   new_GRS = { mant[0], old_G, old_R | old_S }
    //   (mant LSB folds into guard; old guard and round merge into sticky)
    //
    // Left shift (no implicit 1 at bit 52, cancellation):
    //   old guard folds into mant LSB
    //   new_GRS = { old_R, old_S, 0 }
    // =========================================================

    logic signed [12:0] s3_exp;
    logic [54:0]        s3_mant;
    logic               s3_sign;
    logic               s3_is_nan;
    logic               s3_is_inf;
    logic               s3_inf_sign;
    logic [2:0]         s3_grs;
    logic [2:0]         s3_rm;

    always_ff @(posedge clk) begin
        if (valid_pipe[1]) begin

            s3_sign     <= s2_sign;
            s3_is_nan   <= s2_is_nan;
            s3_is_inf   <= s2_is_inf;
            s3_inf_sign <= s2_inf_sign;
            s3_rm       <= s2_rm;
            fflags_s3   <= fflags_s2;

            if (s2_mant[53]) begin
                // addition carry: shift right by 1
                s3_mant <= {2'b0, s2_mant[53:1]};
                s3_exp  <= s2_exp + 1;
                s3_grs  <= {s2_mant[0], s2_grs[2], s2_grs[1] | s2_grs[0]};
            end else if (!s2_mant[52] && |s2_mant) begin
                // no implicit 1 at bit 52: shift left by 1, guard → mant LSB
                s3_mant <= {1'b0, s2_mant[52:0], s2_grs[2]};
                s3_exp  <= s2_exp - 1;
                s3_grs  <= {s2_grs[1], s2_grs[0], 1'b0};
            end else begin
                s3_mant <= {1'b0, s2_mant};
                s3_exp  <= s2_exp;
                s3_grs  <= s2_grs;
            end

            // OF/UF on s2_exp (before normalization shift, same NBA rule as before)
            if ((s2_exp + 1023) >= 2047)
                fflags_s3[2] <= 1'b1;
            if ((s2_exp + 1023) <= 0)
                fflags_s3[1] <= 1'b1;
        end
    end

    // =========================================================
    // STAGE 4 : OUTPUT REGISTER → fround
    //
    // Priority: NaN > inf (from input or overflow) > normal/zero
    // For infinity from an input operand, the sign comes from
    // s3_inf_sign (captured in Stage 1). For arithmetic overflow,
    // the sign is the arithmetic result sign (s3_sign).
    // =========================================================

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            sign_out    <= 0;
            exp_out     <= 0;
            mant_out    <= 0;
            grs_out     <= 0;
            rm_out      <= 0;
            is_nan_out  <= 0;
            is_inf_out  <= 0;
            is_zero_out <= 0;
            fflags_out  <= 0;
        end else if (valid_pipe[2]) begin
            exp_out    <= s3_exp;
            mant_out   <= s3_mant;
            grs_out    <= s3_grs;
            rm_out     <= s3_rm;
            is_nan_out <= s3_is_nan;
            fflags_out <= fflags_s3;

            // inf from input operand: use the pipelined sign;
            // overflow (finite result exceeded max): use arithmetic sign
            if (s3_is_inf && !s3_is_nan)
                sign_out <= s3_inf_sign;
            else
                sign_out <= s3_sign;

            is_inf_out  <= (s3_is_inf || fflags_s3[2]) && !s3_is_nan;
            is_zero_out <= (s3_mant == 0) && !s3_is_nan && !s3_is_inf;
        end
    end

endmodule
