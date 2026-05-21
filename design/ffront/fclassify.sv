/********************************************************************************************************
* @file    fclassify.sv
* @brief   64-bit floating point classification module
* @details This module classifies a 64-bit floating point number into different categories.
*
* @author  ekonihc
* @date    28/04/2026
********************************************************************************************************/


`include "fpu_pkg.sv"
import fpkg::*;

module fclassify #(
    parameter XLEN = 64
)(
    input  logic [XLEN-1:0]     in,
    input  fpu_fmt_e            fmt,

    output fp_class_e           class_out,

    output logic                sign,
    output logic                is_zero,
    output logic                is_inf,
    output logic                is_qnan,
    output logic                is_snan,
    output logic                is_subnormal
);

    // =========================================================
    // INTERNAL FIELDS (FP64/32/16)
    // =========================================================
    logic [10:0] exp64;
    logic [51:0] mant64;

    logic [7:0]  exp32;
    logic [22:0] mant32;

    logic [4:0]  exp16;
    logic [9:0]  mant16;

    always_comb begin

        // defaults
        class_out    = FP_NORMAL;
        sign         = 0;

        is_zero      = 0;
        is_inf       = 0;
        is_qnan      = 0;
        is_snan      = 0;
        is_subnormal = 0;

        case (fmt)

            // =====================================================
            // FP64
            // =====================================================
            FMT_FP64: begin
                sign   = in[63];
                exp64  = in[62:52];
                mant64 = in[51:0];

                if (exp64 == 0) begin
                    if (mant64 == 0) begin
                        class_out = FP_ZERO;
                        is_zero = 1;
                    end else begin
                        class_out = FP_SUBNORMAL;
                        is_subnormal = 1;
                    end
                end

                else if (exp64 == 11'h7FF) begin
                    if (mant64 == 0) begin
                        class_out = FP_INF;
                        is_inf = 1;
                    end else begin
                        // NaN split
                        if (mant64[51] == 1'b1) begin
                            class_out = FP_QNAN;
                            is_qnan = 1;
                        end else begin
                            class_out = FP_SNAN;
                            is_snan = 1;
                        end
                    end
                end

                else begin
                    class_out = FP_NORMAL;
                end
            end

            // =====================================================
            // FP32
            // =====================================================
            FMT_FP32: begin
                // RISC-V NaN-boxing : bits [63:32] doivent être tous à 1
                if (in[63:32] != 32'hFFFF_FFFF) begin
                    class_out = FP_QNAN;
                    is_qnan   = 1;
                end else begin
                    sign   = in[31];
                    exp32  = in[30:23];
                    mant32 = in[22:0];

                    if (exp32 == 0) begin
                        if (mant32 == 0) begin
                            class_out = FP_ZERO;
                            is_zero = 1;
                        end else begin
                            class_out = FP_SUBNORMAL;
                            is_subnormal = 1;
                        end
                    end

                    else if (exp32 == 8'hFF) begin
                        if (mant32 == 0) begin
                            class_out = FP_INF;
                            is_inf = 1;
                        end else begin
                            if (mant32[22] == 1'b1) begin
                                class_out = FP_QNAN;
                                is_qnan = 1;
                            end else begin
                                class_out = FP_SNAN;
                                is_snan = 1;
                            end
                        end
                    end

                    else begin
                        class_out = FP_NORMAL;
                    end
                end
            end

            // =====================================================
            // FP16
            // =====================================================
            FMT_FP16: begin
                sign   = in[15];
                exp16  = in[14:10];
                mant16 = in[9:0];

                if (exp16 == 0) begin
                    if (mant16 == 0) begin
                        class_out = FP_ZERO;
                        is_zero = 1;
                    end else begin
                        class_out = FP_SUBNORMAL;
                        is_subnormal = 1;
                    end
                end

                else if (exp16 == 5'h1F) begin
                    if (mant16 == 0) begin
                        class_out = FP_INF;
                        is_inf = 1;
                    end else begin
                        if (mant16[9] == 1'b1) begin
                            class_out = FP_QNAN;
                            is_qnan = 1;
                        end else begin
                            class_out = FP_SNAN;
                            is_snan = 1;
                        end
                    end
                end

                else begin
                    class_out = FP_NORMAL;
                end
            end

            default : begin
                class_out = FP_NORMAL;
                sign  = 0;
                is_zero = 0;
                is_inf = 0;
                is_qnan = 0;
                is_snan = 0;
                is_subnormal = 0;
            end

        endcase

    end

endmodule