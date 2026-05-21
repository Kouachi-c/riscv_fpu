/********************************************************************************************************
* @file    fround.sv
* @brief   IEEE 754 rounding and re-normalization module
* @details Combinational module placed between fadd_sub and fpack.
*          Applies the selected rounding mode using the Guard/Round/Sticky bits,
*          then re-normalizes if rounding produced a carry (1.111...1 + 1ULP → 10.000...0).
*          Pipeline: funpack → fadd_sub → fround → fpack
*
* Rounding modes (RISC-V rm field):
*   000 RNE  Round to Nearest, ties to Even
*   001 RTZ  Round toward Zero  (truncate)
*   010 RDN  Round Down         (toward -inf)
*   011 RUP  Round Up           (toward +inf)
*   100 RMM  Round to Nearest,  ties to Max Magnitude
*
* @author  ekonihc
* @date    01/05/2026  (DD/MM/YYYY)
********************************************************************************************************/

`include "fpu_pkg.sv"

module fround (
    // from fadd_sub stage 4
    input  logic               sign_in,
    input  logic signed [12:0] exp_in,     // normalized unbiased exponent
    input  logic [54:0]        mant_in,    // normalized mantissa, hidden bit at [52]
    input  logic [2:0]         grs_in,     // {guard, round, sticky}
    input  logic [2:0]         rm,         // rounding mode

    input  logic               is_nan_in,
    input  logic               is_inf_in,
    input  logic               is_zero_in,
    input  logic [4:0]         fflags_in,  // partial flags from fadd (NV, OF, UF already set)

    // to fpack
    output logic               sign_out,
    output logic signed [12:0] exp_out,
    output logic [52:0]        mant_out,   // hidden bit at [52], matches fpack mant_in[52:0]
    output logic               is_nan_out,
    output logic               is_inf_out,
    output logic               is_zero_out,
    output logic [4:0]         fflags
);

    // =========================================================
    // INTERNALS
    // =========================================================

    logic        round_up;
    logic [53:0] round_result;      // 54 bits to capture rounding carry
    logic        round_carry;       // 1.111...1 + 1ULP overflowed the mantissa
    logic signed [12:0] renorm_exp; // exponent after re-normalization

    // =========================================================
    // STEP 1 — ROUND UP DECISION
    //
    // round_up is asserted only for normal (non-special) results.
    // mant_in[0]: LSB of the normalized mantissa, used by RNE for
    // ties-to-even (round up on exact halfway only when result is odd).
    // =========================================================

    always_comb begin

        round_up = 1'b0;

        if (!is_nan_in && !is_inf_in && !is_zero_in) begin
            case (rm)
                3'b000: round_up = grs_in[2] & (grs_in[1] | grs_in[0] | mant_in[0]); // RNE
                3'b001: round_up = 1'b0;                                                // RTZ
                3'b010: round_up =  sign_in & |grs_in;                                 // RDN
                3'b011: round_up = ~sign_in & |grs_in;                                 // RUP
                3'b100: round_up = grs_in[2];                                          // RMM
                default: round_up = 1'b0;
            endcase
        end

        // =====================================================
        // STEP 2 — ADD 1 ULP TO MANTISSA
        // mant_in[52:0]: 53-bit mantissa (hidden bit + 52-bit fraction).
        // The extra bit at [53] captures the carry when all 53 bits are 1.
        // =====================================================

        round_result = {1'b0, mant_in[52:0]} + {53'b0, round_up};
        round_carry  = round_result[53];

        // =====================================================
        // STEP 3 — RE-NORMALIZE
        // round_carry means 1.111...1 + 1 = 10.000...0:
        //   mantissa resets to {1, 52'b0}, exponent increments by 1.
        // This is the only case: rounding shifts the result right by
        // at most 1 position, so a single exponent increment suffices.
        // =====================================================

        renorm_exp = exp_in + {{12{1'b0}}, round_carry};

        // =====================================================
        // STEP 4 — OUTPUTS
        // =====================================================

        sign_out    = sign_in;
        is_nan_out  = is_nan_in;
        is_zero_out = is_zero_in;

        if (is_nan_in) begin
            // fpack will produce canonical NaN; these values are don't-cares
            exp_out    = '0;
            mant_out   = '0;
            is_inf_out = 1'b0;
        end else if (is_inf_in || ((renorm_exp + 1023) >= 2047)) begin
            // overflow: original or induced by rounding carry
            exp_out    = '0;            // don't-care, fpack handles inf
            mant_out   = '0;
            is_inf_out = 1'b1;
        end else begin
            exp_out    = renorm_exp;
            mant_out   = round_carry ? {1'b1, 52'b0} : round_result[52:0];
            is_inf_out = 1'b0;
        end

        // NX (inexact): any precision bit was lost (GRS != 0).
        // NX is raised alongside OF on overflow (IEEE 754 / RISC-V requirement).
        // Only suppressed for NaN (NaN raises NV, not NX).
        fflags = fflags_in | ((|grs_in && !is_nan_in) ? 5'b00001 : 5'b00000);

    end

endmodule
