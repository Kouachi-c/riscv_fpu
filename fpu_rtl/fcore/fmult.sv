/********************************************************************************************************
* @file    fmult.sv
* @brief   64-bit floating Multiplier Module
* @details This module implements a floating point (single precision & double precision) multiplier.
*          It takes two floating point inputs and produces a floating point product output.
*
* @author  ekonihc
* @date    25/02/2026
********************************************************************************************************/

`include "fpu_pkg.sv"
import fpkg::*;

module fmult (

    input  logic clk,
    input  logic rst_n,

    input  logic valid_in,
    output logic ready_in,
    output logic valid_out,
    input  logic ready_out,

    input  fpu_op_e  op,
    input  logic [2:0] rm,

    // operands
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

    // outputs toward fp_round
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

    // =========================================================
    // VALID PIPELINE
    // =========================================================

    logic [3:0] valid_pipe;

    assign ready_in = !valid_pipe[3] || ready_out;
    assign valid_out = valid_pipe[3];

    always_ff @(posedge clk) begin
        if (!rst_n)
            valid_pipe <= 0;
        else if (ready_in)
            valid_pipe <= {valid_pipe[2:0], valid_in};
    end

    // =========================================================
    // STAGE 1
    // =========================================================

    logic s1_sign;
    logic signed [12:0] s1_exp;
    logic [105:0] s1_prod;

    logic [4:0] s1_fflags;

    logic s1_is_nan;
    logic s1_is_inf;
    logic s1_is_zero;

    logic [2:0] s1_rm;

    always_ff @(posedge clk) begin
        if (valid_in && ready_in) begin

            s1_fflags <= 0;

            s1_rm <= rm;

            // sign
            s1_sign <= sign_a ^ sign_b;

            // exponent
            s1_exp <= exp_a + exp_b;

            // multiply
            s1_prod <= mant_a * mant_b;

            // =================================================
            // SPECIAL CASES
            // =================================================

            s1_is_nan  <= 0;
            s1_is_inf  <= 0;
            s1_is_zero <= 0;

            // signaling NaN
            if (is_snan_a || is_snan_b)
                s1_fflags[4] <= 1'b1;

            // NaN propagation
            if (is_nan_a || is_nan_b) begin
                s1_is_nan <= 1'b1;
            end

            // 0 * inf = invalid
            else if ((is_zero_a && is_inf_b) ||
                     (is_inf_a  && is_zero_b)) begin

                s1_fflags[4] <= 1'b1;
                s1_is_nan <= 1'b1;
            end

            else if (is_inf_a || is_inf_b) begin
                s1_is_inf <= 1'b1;
            end

            else if (is_zero_a || is_zero_b) begin
                s1_is_zero <= 1'b1;
            end

        end
    end

    // =========================================================
    // STAGE 2 : NORMALIZATION
    // =========================================================

    logic s2_sign;
    logic signed [12:0] s2_exp;
    logic [105:0] s2_prod;

    logic [4:0] s2_fflags;

    logic s2_is_nan;
    logic s2_is_inf;
    logic s2_is_zero;

    logic [2:0] s2_rm;

    always_ff @(posedge clk) begin
        if (valid_pipe[0]) begin

            s2_sign <= s1_sign;
            s2_exp  <= s1_exp;
            s2_prod <= s1_prod;

            s2_fflags <= s1_fflags;

            s2_is_nan  <= s1_is_nan;
            s2_is_inf  <= s1_is_inf;
            s2_is_zero <= s1_is_zero;

            s2_rm <= s1_rm;

            // normalization
            if (s1_prod[105]) begin
                s2_prod <= s1_prod >> 1;
                s2_exp  <= s1_exp + 1;
            end
        end
    end

    // =========================================================
    // STAGE 3 : EXTRACT MANT + GRS
    // =========================================================

    logic s3_sign;
    logic signed [12:0] s3_exp;

    logic [54:0] s3_mant;
    logic [2:0]  s3_grs;

    logic [4:0] s3_fflags;

    logic s3_is_nan;
    logic s3_is_inf;
    logic s3_is_zero;

    logic [2:0] s3_rm;

    always_ff @(posedge clk) begin
        if (valid_pipe[1]) begin

            s3_sign <= s2_sign;
            s3_exp  <= s2_exp;

            s3_fflags <= s2_fflags;

            s3_is_nan  <= s2_is_nan;
            s3_is_inf  <= s2_is_inf;
            s3_is_zero <= s2_is_zero;

            s3_rm <= s2_rm;

            // MSB of normalized product is at s2_prod[104].
            // fround expects hidden bit at mant_out[52], so align here.
            s3_mant <= {2'b00, s2_prod[104:52]};

            // GRS bits immediately below the extracted mantissa
            s3_grs[2] <= s2_prod[51];      // guard
            s3_grs[1] <= s2_prod[50];      // round
            s3_grs[0] <= |s2_prod[49:0];   // sticky
        end
    end

    // =========================================================
    // STAGE 4 : OUTPUT + FLAGS
    // =========================================================

    always_ff @(posedge clk) begin
        if (!rst_n) begin

            sign_out <= 0;
            exp_out  <= 0;
            mant_out <= 0;
            grs_out  <= 0;

            rm_out <= 0;

            is_nan_out  <= 0;
            is_inf_out  <= 0;
            is_zero_out <= 0;

            fflags_out <= 0;

        end

        else if (valid_pipe[2]) begin

            sign_out <= s3_sign;
            exp_out  <= s3_exp;

            mant_out <= s3_mant;
            grs_out  <= s3_grs;

            rm_out <= s3_rm;

            is_nan_out  <= s3_is_nan;
            is_inf_out  <= s3_is_inf;
            is_zero_out <= s3_is_zero;

            fflags_out <= s3_fflags;

            // overflow
            if ((s3_exp + 1023) >= 2047)
                fflags_out[2] <= 1'b1;

            // underflow
            if ((s3_exp + 1023) <= 0)
                fflags_out[1] <= 1'b1;

        end
    end

endmodule