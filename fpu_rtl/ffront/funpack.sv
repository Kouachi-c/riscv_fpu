/********************************************************************************************************
* @file    funpack.sv
* @brief   64-bit floating point semantic extraction module
* @details This module extracts semantic information (Sign, Exponent, Mantissa) from a 64-bit floating point number.
*
* @author  ekonihc
* @date    28/04/2026
********************************************************************************************************/



`include "fpu_pkg.sv"
import fpkg::*;

module funpack #(
    parameter XLEN = 64
)(
    input  logic [XLEN-1:0]     in          ,
    input  fpu_fmt_e            fmt         ,

    output logic                sign        ,
    output logic signed [12:0]  exp         ,     // large for bias + overflow
    output logic [52:0]         mant        ,      // hidden bit + mantissa

    output logic                is_zero     ,
    output logic                is_inf      ,
    output logic                is_nan      ,
    output logic                is_qnan     ,
    output logic                is_snan     ,
    output logic                is_subnormal
);

    // =========================================================
    // INTERNAL FIELDS
    // =========================================================

    logic [10:0] exp64;
    logic [51:0] mant64;

    logic [7:0]  exp32;
    logic [22:0] mant32;

    logic [4:0]  exp16;
    logic [9:0]  mant16;

    // =========================================================
    // UNPACK LOGIC
    // =========================================================

    always_comb begin

        // defaults
        sign = 0;
        exp  = 0;
        mant = 0;

        is_zero      = 0;
        is_inf       = 0;
        is_nan       = 0;
        is_qnan      = 0;
        is_snan      = 0;
        is_subnormal = 0;

        case (fmt)

            // =====================================================
            // FP64
            // =====================================================
            FMT_FP64: begin
                sign    = in[63];
                exp64   = in[62:52];
                mant64  = in[51:0];

                if (exp64 == 0) begin
                    if (mant64 == 0) begin
                        is_zero = 1;
                    end else begin
                        is_subnormal = 1;
                        exp = -1022;
                        mant = {1'b0, mant64}; // no hidden bit
                    end
                end else if (exp64 == 11'h7FF) begin
                    if (mant64 == 0) begin
                        is_inf = 1;
                    end else begin
                        is_nan = 1;
                        if (mant64[51]) begin is_qnan = 1; end
                        else            begin is_snan = 1; end
                    end
                end else begin
                    exp  = 13'(exp64) - 1023;
                    mant = {1'b1, mant64}; // hidden bit
                end
            end

            // =====================================================
            // FP32
            // =====================================================
            FMT_FP32: begin
                // RISC-V NaN-boxing : bits [63:32] doivent être tous à 1
                if (in[63:32] != 32'hFFFF_FFFF) begin
                    is_nan  = 1;
                    is_qnan = 1;  // invalid box → canonical qNaN
                end else begin
                    sign   = in[31];
                    exp32  = in[30:23];
                    mant32 = in[22:0];

                    if (exp32 == 0) begin
                        if (mant32 == 0) begin
                            is_zero = 1;
                        end else begin
                            is_subnormal = 1;
                            exp = -126;
                            mant = {1'b0, mant32, 29'b0};
                        end
                    end else if (exp32 == 8'hFF) begin
                        if (mant32 == 0) begin
                            is_inf = 1;
                        end else begin
                            is_nan = 1;
                            if (mant32[22]) begin is_qnan = 1; end
                            else            begin is_snan = 1; end
                        end
                    end else begin
                        exp  = 13'(exp32) - 127;
                        mant = {1'b1, mant32, 29'b0};
                    end
                end
            end

            // =====================================================
            // FP16 (IEEE 754 half precision)
            // =====================================================
            FMT_FP16: begin
                sign   = in[15];
                exp16  = in[14:10];
                mant16 = in[9:0];

                if (exp16 == 0) begin
                    if (mant16 == 0) begin
                        is_zero = 1;
                    end else begin
                        is_subnormal = 1;
                        exp = -14;
                        mant = {1'b0, mant16, 42'b0}; 
                    end
                end else if (exp16 == 5'h1F) begin
                    if (mant16 == 0) begin
                        is_inf = 1;
                    end else begin
                        is_nan = 1;
                        if (mant16[9]) begin is_qnan = 1; end
                        else           begin is_snan = 1; end
                    end
                end else begin
                    exp  = 13'(exp16) - 15;
                    mant = {1'b1, mant16, 42'b0};
                end
            end

            default : begin
                sign  = 0;
                exp   = 0;
                mant  = 0;
                is_zero = 0;
                is_inf = 0;
                is_nan = 0;
                is_qnan = 0;
                is_snan = 0;
                is_subnormal = 0;
                
            end

        endcase

    end

endmodule