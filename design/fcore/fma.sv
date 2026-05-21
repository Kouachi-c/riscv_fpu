/********************************************************************************************************
* @file    fma.sv
* @brief   64-bit floating point FMA Module
* @details Fused Multiply-Add: result = (A * B) + C with a single rounding step.
*          5-stage pipeline: MUL | NORM_PROD | ALIGN | ADD | NORM_OUT
*
*          Key design note:
*          mant_c is extended as {1'b0, mant_c, 52'b0} (hidden bit at [104]),
*          consistent with the product's post-normalisation reference at bit 104.
*          Alignment shifts are then (exp_mul - exp_c) / (exp_c - exp_mul).
*
* @author  ekonihc
* @date    08/05/2026
********************************************************************************************************/

`include "fpu_pkg.sv"
import fpkg::*;

module fma (

    input  logic clk,
    input  logic rst_n,

    input  logic valid_in,
    output logic ready_in,
    output logic valid_out,
    input  logic ready_out,

    input  logic [2:0] rm,

    // =====================================================
    // A
    // =====================================================

    input logic               sign_a,
    input logic signed [12:0] exp_a,
    input logic [52:0]        mant_a,

    input logic               is_nan_a,
    input logic               is_snan_a,
    input logic               is_inf_a,
    input logic               is_zero_a,

    // =====================================================
    // B
    // =====================================================

    input logic               sign_b,
    input logic signed [12:0] exp_b,
    input logic [52:0]        mant_b,

    input logic               is_nan_b,
    input logic               is_snan_b,
    input logic               is_inf_b,
    input logic               is_zero_b,

    // =====================================================
    // C
    // =====================================================

    input logic               sign_c,
    input logic signed [12:0] exp_c,
    input logic [52:0]        mant_c,

    input logic               is_nan_c,
    input logic               is_snan_c,
    input logic               is_inf_c,
    input logic               is_zero_c,

    // =====================================================
    // OUTPUT → fp_round
    // =====================================================

    output logic               sign_out,
    output logic signed [12:0] exp_out,
    output logic [54:0]        mant_out,
    output logic [2:0]         grs_out,

    output logic [2:0]         rm_out,

    output logic               is_nan_out,
    output logic               is_inf_out,
    output logic               is_zero_out,

    output logic [4:0]         fflags_out
);

    // =====================================================
    // VALID PIPELINE
    // =====================================================

    logic [4:0] valid_pipe;

    assign ready_in  = !valid_pipe[4] || ready_out;
    assign valid_out = valid_pipe[4];

    always_ff @(posedge clk) begin
        if (!rst_n)
            valid_pipe <= 0;
        else if (ready_in)
            valid_pipe <= {valid_pipe[3:0], valid_in};
    end

    // =====================================================
    // STAGE 1 : MUL + SPECIAL CASES
    // =====================================================

    logic [2:0]         s1_rm;
    logic               s1_sign_mul;
    logic signed [12:0] s1_exp_mul;
    logic [105:0]       s1_prod;

    logic               s1_sign_c;
    logic signed [12:0] s1_exp_c;
    logic [52:0]        s1_mant_c;

    logic [4:0]         s1_fflags;
    logic               s1_is_nan;
    logic               s1_is_inf;
    logic               s1_sign_sp;  // sign of special-case result (inf)

    always_ff @(posedge clk) begin
        if (valid_in && ready_in) begin

            s1_rm <= rm;

            s1_fflags  <= 0;
            s1_is_nan  <= 0;
            s1_is_inf  <= 0;
            s1_sign_sp <= 0;

            // sNaN → NV
            if (is_snan_a || is_snan_b || is_snan_c)
                s1_fflags[4] <= 1'b1;

            // any NaN → NaN out (no additional NV for quiet NaN)
            if (is_nan_a || is_nan_b || is_nan_c) begin
                s1_is_nan <= 1'b1;
            end
            // 0 × ∞ → invalid
            else if ((is_zero_a && is_inf_b) || (is_inf_a && is_zero_b)) begin
                s1_is_nan    <= 1'b1;
                s1_fflags[4] <= 1'b1;
            end
            // ∞ × finite (or finite × ∞)
            else if (is_inf_a || is_inf_b) begin
                // ∞ + (−∞) → NaN + NV
                if (is_inf_c && ((sign_a ^ sign_b) != sign_c)) begin
                    s1_is_nan    <= 1'b1;
                    s1_fflags[4] <= 1'b1;
                end else begin
                    s1_is_inf  <= 1'b1;
                    s1_sign_sp <= is_inf_c ? sign_c : (sign_a ^ sign_b);
                end
            end
            // finite × finite + ∞
            else if (is_inf_c) begin
                s1_is_inf  <= 1'b1;
                s1_sign_sp <= sign_c;
            end

            s1_sign_mul <= sign_a ^ sign_b;
            s1_exp_mul  <= exp_a + exp_b;
            s1_prod     <= mant_a * mant_b;

            s1_sign_c <= sign_c;
            s1_exp_c  <= exp_c;
            s1_mant_c <= mant_c;
        end
    end

    // =====================================================
    // STAGE 2 : NORMALIZE PRODUCT + EXTEND C
    //
    // After normalisation s2_prod[104] is the hidden bit.
    // C is extended as {1'b0, mant_c, 52'b0} so its hidden bit
    // also lands at bit 104, giving both operands the same
    // scale factor 2^(exp - 104).  Alignment shift = exp_mul - exp_c.
    // =====================================================

    logic [2:0]         s2_rm;
    logic               s2_sign_mul;
    logic signed [12:0] s2_exp_mul;
    logic [105:0]       s2_prod;

    logic               s2_sign_c;
    logic signed [12:0] s2_exp_c;
    logic [105:0]       s2_mant_c_ext;

    logic [4:0]         s2_fflags;
    logic               s2_is_nan;
    logic               s2_is_inf;
    logic               s2_sign_sp;

    always_ff @(posedge clk) begin
        if (valid_pipe[0]) begin

            s2_rm      <= s1_rm;
            s2_fflags  <= s1_fflags;
            s2_is_nan  <= s1_is_nan;
            s2_is_inf  <= s1_is_inf;
            s2_sign_sp <= s1_sign_sp;

            s2_sign_mul <= s1_sign_mul;
            s2_exp_mul  <= s1_exp_mul;
            s2_prod     <= s1_prod;

            if (s1_prod[105]) begin
                s2_prod    <= s1_prod >> 1;
                s2_exp_mul <= s1_exp_mul + 1;
            end

            s2_sign_c     <= s1_sign_c;
            s2_exp_c      <= s1_exp_c;
            // hidden bit at [104], consistent with product reference
            s2_mant_c_ext <= {1'b0, s1_mant_c, 52'b0};
        end
    end

    // =====================================================
    // STAGE 3 : ALIGN
    // =====================================================

    logic [2:0]         s3_rm;
    logic               s3_sign_big, s3_sign_small;
    logic signed [12:0] s3_exp;
    logic [105:0]       s3_big;
    logic [105:0]       s3_small;
    logic [4:0]         s3_fflags;
    logic               s3_is_nan;
    logic               s3_is_inf;
    logic               s3_sign_sp;

    always_ff @(posedge clk) begin
        if (valid_pipe[1]) begin

            s3_rm      <= s2_rm;
            s3_fflags  <= s2_fflags;
            s3_is_nan  <= s2_is_nan;
            s3_is_inf  <= s2_is_inf;
            s3_sign_sp <= s2_sign_sp;

            if (s2_exp_mul >= s2_exp_c) begin
                s3_exp        <= s2_exp_mul;
                s3_big        <= s2_prod;
                s3_small      <= s2_mant_c_ext >> (s2_exp_mul - s2_exp_c);
                s3_sign_big   <= s2_sign_mul;
                s3_sign_small <= s2_sign_c;
            end else begin
                s3_exp        <= s2_exp_c;
                s3_big        <= s2_mant_c_ext;
                s3_small      <= s2_prod >> (s2_exp_c - s2_exp_mul);
                s3_sign_big   <= s2_sign_c;
                s3_sign_small <= s2_sign_mul;
            end
        end
    end

    // =====================================================
    // STAGE 4 : ADD / SUB
    // =====================================================

    logic [2:0]         s4_rm;
    logic               s4_sign;
    logic signed [12:0] s4_exp;
    logic [106:0]       s4_sum;
    logic [4:0]         s4_fflags;
    logic               s4_is_nan;
    logic               s4_is_inf;
    logic               s4_sign_sp;

    always_ff @(posedge clk) begin
        if (valid_pipe[2]) begin

            s4_rm      <= s3_rm;
            s4_fflags  <= s3_fflags;
            s4_is_nan  <= s3_is_nan;
            s4_is_inf  <= s3_is_inf;
            s4_sign_sp <= s3_sign_sp;

            s4_exp <= s3_exp;

            if (s3_sign_big == s3_sign_small) begin
                s4_sum  <= s3_big + s3_small;
                s4_sign <= s3_sign_big;
            end else begin
                if (s3_big >= s3_small) begin
                    s4_sum  <= s3_big - s3_small;
                    s4_sign <= s3_sign_big;
                end else begin
                    s4_sum  <= s3_small - s3_big;
                    s4_sign <= s3_sign_small;
                end
            end
        end
    end

    // =====================================================
    // STAGE 5 : NORMALIZE + GRS + OUTPUT
    //
    // Combinational normalisation:
    //   bit 106 set → right shift 2, exp+2
    //   bit 105 set → right shift 1, exp+1
    //   bit 104 set → already normalised
    //   none set    → cancellation: left-shift to bit 104, exp adjusted
    //
    // fround expects hidden bit at mant_in[52].
    // Extraction: mant_out = {2'b00, s5_norm[104:52]}
    // GRS       : s5_norm[51], s5_norm[50], |s5_norm[49:0]
    // =====================================================

    // Leading-bit position in s4_sum[103:0] (used for left normalisation)
    logic [6:0] lz_pos;

    always_comb begin
        lz_pos = 7'd0;
        for (int i = 0; i <= 103; i++)
            if (s4_sum[i]) lz_pos = 7'(i);
    end

    logic [106:0]       s5_norm;
    logic signed [12:0] s5_exp;

    always_comb begin
        if (s4_sum[106]) begin
            s5_norm = s4_sum >> 2;
            s5_exp  = s4_exp + 13'sd2;
        end else if (s4_sum[105]) begin
            s5_norm = s4_sum >> 1;
            s5_exp  = s4_exp + 13'sd1;
        end else if (s4_sum[104]) begin
            s5_norm = s4_sum;
            s5_exp  = s4_exp;
        end else if (s4_sum != 0) begin
            // cancellation: left-shift so hidden bit lands at [104]
            s5_norm = s4_sum << (7'd104 - lz_pos);
            s5_exp  = s4_exp - $signed({{6{1'b0}}, (7'd104 - lz_pos)});
        end else begin
            s5_norm = '0;
            s5_exp  = s4_exp;
        end
    end

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
        end

        else if (valid_pipe[3]) begin

            rm_out     <= s4_rm;
            fflags_out <= s4_fflags;

            if (s4_is_nan) begin
                sign_out    <= 1'b0;
                exp_out     <= '0;
                mant_out    <= '0;
                grs_out     <= '0;
                is_nan_out  <= 1'b1;
                is_inf_out  <= 1'b0;
                is_zero_out <= 1'b0;
            end

            else if (s4_is_inf) begin
                sign_out    <= s4_sign_sp;
                exp_out     <= '0;
                mant_out    <= '0;
                grs_out     <= '0;
                is_nan_out  <= 1'b0;
                is_inf_out  <= 1'b1;
                is_zero_out <= 1'b0;
            end

            else if (s4_sum == 0) begin
                sign_out    <= s4_sign;
                exp_out     <= '0;
                mant_out    <= '0;
                grs_out     <= '0;
                is_nan_out  <= 1'b0;
                is_inf_out  <= 1'b0;
                is_zero_out <= 1'b1;
            end

            else begin
                sign_out   <= s4_sign;
                exp_out    <= s5_exp;
                // hidden bit at mant_out[52], matching fround's contract
                mant_out   <= {2'b00, s5_norm[104:52]};
                grs_out[2] <= s5_norm[51];
                grs_out[1] <= s5_norm[50];
                grs_out[0] <= |s5_norm[49:0];

                is_nan_out  <= 1'b0;
                is_inf_out  <= 1'b0;
                is_zero_out <= 1'b0;

                // overflow → treat as inf (fround also catches this via renorm_exp)
                if ((s5_exp + 13'sd1023) >= 13'sd2047)
                    fflags_out[2] <= 1'b1;

                // underflow
                if ((s5_exp + 13'sd1023) <= 13'sd0)
                    fflags_out[1] <= 1'b1;
            end
        end
    end

endmodule
