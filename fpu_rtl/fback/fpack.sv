/********************************************************************************************************
* @file    fpack.sv
* @brief   64-bit floating point semantic merge module
* @details This module merges semantic information (Sign, Exponent, Mantissa) back into a 64-bit floating point reg.
*
* @author  ekonihc
* @date    25/02/2026
********************************************************************************************************/

`include "fpu_pkg.sv"

module fpack #(
    parameter EXP_WIDTH = 11,
    parameter MAN_WIDTH = 52,
    parameter BIAS      = 1023
)(
    input  logic                     sign,
    input  logic signed [12:0]       exp_in,     // unbiased exponent
    input  logic [MAN_WIDTH:0]       mant_in,    // with hidden bit

    // classification
    input  logic is_nan,
    input  logic is_inf,
    input  logic is_zero,

    // output
    output logic [EXP_WIDTH+MAN_WIDTH:0] result,

    // flags
    output logic of,
    output logic uf
);

    // internals
    logic signed [12:0]      exp_biased;
    logic [EXP_WIDTH-1:0]    exp_field;
    logic [MAN_WIDTH-1:0]    mant_field;

    // FIX #1: declared at module scope (were illegally declared inside always_comb)
    logic [MAN_WIDTH:0]      mant_shifted;
    logic [6:0]              shift;          // max shift = MAN_WIDTH+1 = 53, fits in 7 bits

    always_comb begin

        // defaults
        result       = '0;
        of           = 0;
        uf           = 0;

        // FIX #2: defaults for intermediate signals to prevent latch inference
        exp_biased   = '0;
        exp_field    = '0;
        mant_field   = '0;
        mant_shifted = '0;
        shift        = '0;

        // =====================================================
        // SPECIAL CASES
        // =====================================================

        if (is_nan) begin
            // canonical quiet NaN
            result = {1'b0, {EXP_WIDTH{1'b1}}, 1'b1, {(MAN_WIDTH-1){1'b0}}};
        end

        else if (is_inf) begin
            result = {sign, {EXP_WIDTH{1'b1}}, {MAN_WIDTH{1'b0}}};
        end

        else if (is_zero) begin
            result = {sign, {EXP_WIDTH{1'b0}}, {MAN_WIDTH{1'b0}}};
        end

        // =====================================================
        // NORMAL CASE
        // =====================================================

        else begin

            // apply bias
            exp_biased = exp_in + BIAS;

            // =================================================
            // OVERFLOW → Inf
            // =================================================
            if (exp_biased >= (2**EXP_WIDTH - 1)) begin
                of     = 1;
                result = {sign, {EXP_WIDTH{1'b1}}, {MAN_WIDTH{1'b0}}};
            end

            // =================================================
            // UNDERFLOW → subnormal or zero
            // =================================================
            else if (exp_biased <= 0) begin
                uf    = 1;
                shift = 7'(13'sd1 - exp_biased);

                if (shift > MAN_WIDTH + 1) begin
                    // too small to represent → flush to zero
                    result = {sign, {EXP_WIDTH{1'b0}}, {MAN_WIDTH{1'b0}}};
                end else begin
                    mant_shifted = mant_in >> shift;

                    result = {
                        sign,
                        {EXP_WIDTH{1'b0}},           // exp = 0 (subnormal)
                        mant_shifted[MAN_WIDTH-1:0]
                    };
                end
            end

            // =================================================
            // NORMAL
            // =================================================
            else begin
                exp_field  = exp_biased[EXP_WIDTH-1:0];
                mant_field = mant_in[MAN_WIDTH-1:0];   // strip hidden bit

                result = {sign, exp_field, mant_field};
            end

        end

    end

endmodule
