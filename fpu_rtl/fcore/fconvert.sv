/********************************************************************************************************
* @file    fconvert.sv
* @brief   64-bit floating point Conversion Module
* @details Converts between different floating point formats and between floating point and integer formats. Supports FP16, FP32, FP64, and INT64 formats.
*
* @author  ekonihc
* @date    15/05/2026
********************************************************************************************************/



`include "fpu_pkg.sv"

import fpkg::*;

module fconvert (

    input  logic clk,
    input  logic rst_n,

    // =========================================================
    // Handshake
    // =========================================================

    input  logic valid_in,
    output logic ready_in,

    output logic valid_out,
    input  logic ready_out,

    // =========================================================
    // Operation
    // =========================================================

    input  fpu_op_e  op,        // FPU_F2F / FPU_I2F / FPU_F2I
    input  fpu_fmt_e src_fmt,
    input  fpu_fmt_e dst_fmt,

    input  logic [2:0] rm,

    // =========================================================
    // Input data
    // =========================================================

    input  logic [63:0] in_data,

    // =========================================================
    // Output data
    // =========================================================

    output logic [63:0] out_data,
    output logic [4:0]  fflags_out
);

    // =========================================================
    // Handshake
    // =========================================================

    logic valid_r;

    assign ready_in  = !valid_r || ready_out;
    assign valid_out = valid_r;

    // =========================================================
    // Internal decode
    // =========================================================

    logic sign;

    logic [10:0] exp64;
    logic [7:0]  exp32;
    logic [4:0]  exp16;

    logic [51:0] mant64;
    logic [22:0] mant32;
    logic [9:0]  mant16;

    logic signed [12:0] exp_unbiased;

    logic [52:0] mant_norm;

    logic is_nan;
    logic is_inf;
    logic is_zero;
    logic is_subnormal;

    // =========================================================
    // Internal result
    // =========================================================

    logic [63:0] result;
    logic [4:0]  fflags;

    integer lz;

    // =========================================================
    // Main
    // =========================================================

    always_ff @(posedge clk) begin

        if (!rst_n) begin

            valid_r     <= 0;
            out_data    <= 0;
            fflags_out  <= 0;

        end

        else if (ready_in) begin

            valid_r <= valid_in;

            if (valid_in) begin

                // =================================================
                // defaults
                // =================================================

                result = 0;
                fflags = 0;

                sign = 0;

                exp_unbiased = 0;
                mant_norm    = 0;

                is_nan       = 0;
                is_inf       = 0;
                is_zero      = 0;
                is_subnormal = 0;

                // =================================================
                // SOURCE DECODE
                // =================================================

                case (src_fmt)

                // =================================================
                // FP16
                // =================================================

                FMT_FP16: begin

                    sign   = in_data[15];
                    exp16  = in_data[14:10];
                    mant16 = in_data[9:0];

                    is_zero      = (exp16 == 0)     && (mant16 == 0);
                    is_subnormal = (exp16 == 0)     && (mant16 != 0);
                    is_inf       = (exp16 == 5'h1F) && (mant16 == 0);
                    is_nan       = (exp16 == 5'h1F) && (mant16 != 0);

                    if (is_subnormal) begin

                        lz = 0;

                        for (int i = 9; i >= 0; i--) begin
                            if (mant16[i])
                                break;
                            lz++;
                        end

                        exp_unbiased = -14 - lz;

                        mant_norm =
                            ({1'b0, mant16, 42'b0}) << (lz + 1);
                    end

                    else begin

                        exp_unbiased =
                            $signed({1'b0, exp16}) - 15;

                        mant_norm =
                            {1'b1, mant16, 42'b0};
                    end
                end

                // =================================================
                // FP32
                // =================================================

                FMT_FP32: begin

                    sign   = in_data[31];
                    exp32  = in_data[30:23];
                    mant32 = in_data[22:0];

                    is_zero      = (exp32 == 0)     && (mant32 == 0);
                    is_subnormal = (exp32 == 0)     && (mant32 != 0);
                    is_inf       = (exp32 == 8'hFF) && (mant32 == 0);
                    is_nan       = (exp32 == 8'hFF) && (mant32 != 0);

                    if (is_subnormal) begin

                        lz = 0;

                        for (int i = 22; i >= 0; i--) begin
                            if (mant32[i])
                                break;
                            lz++;
                        end

                        exp_unbiased = -126 - lz;

                        mant_norm =
                            ({1'b0, mant32, 29'b0}) << (lz + 1);
                    end

                    else begin

                        exp_unbiased =
                            $signed({1'b0, exp32}) - 127;

                        mant_norm =
                            {1'b1, mant32, 29'b0};
                    end
                end

                // =================================================
                // FP64
                // =================================================

                FMT_FP64: begin

                    sign   = in_data[63];
                    exp64  = in_data[62:52];
                    mant64 = in_data[51:0];

                    is_zero      = (exp64 == 0)      && (mant64 == 0);
                    is_subnormal = (exp64 == 0)      && (mant64 != 0);
                    is_inf       = (exp64 == 11'h7FF)&& (mant64 == 0);
                    is_nan       = (exp64 == 11'h7FF)&& (mant64 != 0);

                    if (is_subnormal) begin

                        lz = 0;

                        for (int i = 51; i >= 0; i--) begin
                            if (mant64[i])
                                break;
                            lz++;
                        end

                        exp_unbiased = -1022 - lz;

                        mant_norm = mant64 << (lz + 1);
                    end

                    else begin

                        exp_unbiased =
                            $signed({1'b0, exp64}) - 1023;

                        mant_norm = {1'b1, mant64};
                    end
                end

                // =================================================
                // INT64
                // =================================================

                FMT_INT: begin

                    logic signed [63:0] int_val;
                    logic [63:0]        abs_val;
                    logic [64:0]        tmp_mant;

                    int_val = in_data;

                    sign = int_val[63];

                    if (int_val == 0) begin

                        is_zero = 1;

                    end

                    else begin

                        if (sign)
                            abs_val = -int_val;
                        else
                            abs_val = int_val;

                        lz = 0;

                        for (int i = 63; i >= 0; i--) begin
                            if (abs_val[i])
                                break;
                            lz++;
                        end

                        exp_unbiased = 63 - lz;

                        // Shift so the leading 1 lands at bit 64 of tmp_mant,
                        // then extract bits [64:12] → leading 1 at mant_norm[52].
                        tmp_mant  = {abs_val, 1'b0} << lz;
                        mant_norm = tmp_mant[64:12];
                    end
                end

                endcase

                // =================================================
                // NaN
                // =================================================

                if (is_nan) begin

                    if (op == FPU_CVT_F2I) begin
                        // RISC-V: NaN → INT_MAX + NV
                        fflags[4] = 1'b1;
                        result    = 64'h7FFFFFFFFFFFFFFF;
                    end else begin
                        case (dst_fmt)
                        FMT_FP16: result[15:0] = 16'h7E00;
                        FMT_FP32: result[31:0] = 32'h7FC00000;
                        default:  result       = 64'h7FF8000000000000;
                        endcase
                    end
                end

                // =================================================
                // INF
                // =================================================

                else if (is_inf) begin

                    if (op == FPU_CVT_F2I) begin
                        // RISC-V: +inf → INT_MAX, -inf → INT_MIN + NV
                        fflags[4] = 1'b1;
                        result    = sign ? 64'h8000000000000000
                                        : 64'h7FFFFFFFFFFFFFFF;
                    end else begin
                        case (dst_fmt)
                        FMT_FP16: result[15:0] = {sign, 5'h1F, 10'b0};
                        FMT_FP32: result[31:0] = {sign, 8'hFF, 23'b0};
                        default:  result       = {sign, 11'h7FF, 52'b0};
                        endcase
                    end
                end

                // =================================================
                // FLOAT -> FLOAT / INT -> FLOAT  (zero shortcut)
                // =================================================

                else if ((op == FPU_CVT_F2F || op == FPU_CVT_I2F) &&
                          is_zero) begin

                    // Preserve sign (-0.0 → -0.0 for F2F)
                    case (dst_fmt)
                    FMT_FP16: result[15:0] = {sign, 15'b0};
                    FMT_FP32: result[31:0] = {sign, 31'b0};
                    default:  result       = {sign, 63'b0};
                    endcase
                end

                // =================================================
                // FLOAT -> FLOAT / INT -> FLOAT
                // =================================================

                else if (op == FPU_CVT_F2F ||
                         op == FPU_CVT_I2F) begin

                    case (dst_fmt)

                    // =============================================
                    // FP16
                    // =============================================

                    FMT_FP16: begin

                        logic signed [12:0] exp_b;

                        exp_b = exp_unbiased + 15;

                        if (exp_b >= 31) begin

                            fflags[2] = 1'b1;

                            result[15:0] = {
                                sign,
                                5'h1F,
                                10'b0
                            };
                        end

                        else if (exp_b <= 0) begin

                            fflags[1] = 1'b1;

                            result[15:0] = 0;
                        end

                        else begin

                            result[15:0] = {
                                sign,
                                exp_b[4:0],
                                mant_norm[51:42]
                            };

                            if (|mant_norm[41:0])
                                fflags[0] = 1'b1;
                        end
                    end

                    // =============================================
                    // FP32
                    // =============================================

                    FMT_FP32: begin

                        logic signed [12:0] exp_b;

                        exp_b = exp_unbiased + 127;

                        if (exp_b >= 255) begin

                            fflags[2] = 1'b1;

                            result[31:0] = {
                                sign,
                                8'hFF,
                                23'b0
                            };
                        end

                        else if (exp_b <= 0) begin

                            fflags[1] = 1'b1;

                            result[31:0] = 0;
                        end

                        else begin

                            result[31:0] = {
                                sign,
                                exp_b[7:0],
                                mant_norm[51:29]
                            };

                            if (|mant_norm[28:0])
                                fflags[0] = 1'b1;
                        end
                    end

                    // =============================================
                    // FP64
                    // =============================================

                    default: begin

                        logic signed [12:0] exp_b;

                        exp_b = exp_unbiased + 1023;

                        if (exp_b >= 2047) begin

                            fflags[2] = 1'b1;

                            result = {
                                sign,
                                11'h7FF,
                                52'b0
                            };
                        end

                        else if (exp_b <= 0) begin

                            fflags[1] = 1'b1;

                            result = 0;
                        end

                        else begin

                            result = {
                                sign,
                                exp_b[10:0],
                                mant_norm[51:0]
                            };
                        end
                    end

                    endcase
                end

                // =================================================
                // FLOAT -> INT
                // =================================================

                else if (op == FPU_CVT_F2I) begin

                    logic signed [63:0] int_res;

                    if (exp_unbiased < 0) begin

                        int_res = 0;

                        if (!is_zero)
                            fflags[0] = 1'b1;
                    end

                    else if (exp_unbiased > 62) begin

                        fflags[4] = 1'b1;

                        if (sign)
                            int_res =
                                64'h8000000000000000;
                        else
                            int_res =
                                64'h7FFFFFFFFFFFFFFF;
                    end

                    else begin

                        int_res =
                            mant_norm >>
                            (52 - exp_unbiased);

                        if (sign)
                            int_res = -int_res;
                    end

                    result = int_res;
                end

                // =================================================
                // outputs
                // =================================================

                out_data   <= result;
                fflags_out <= fflags;

            end
        end
    end

endmodule