/********************************************************************************************************
* @file    fdivsqrt.sv
* @brief   64-bit floating Divisor and Square Root Module
* @details This module implements a floating point (single precision, double precision and half precision) divisor and square root.
*          It takes two floating point inputs and produces a floating point quotient or root output.
*
* @author  ekonihc
* @date    25/02/2026
********************************************************************************************************/

`include "fpu_pkg.sv"
import fpkg::*;

module fdivsqrt (

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

    input  fpu_op_e op,      // FPU_DIV / FPU_SQRT
    input  logic [2:0] rm,

    // =========================================================
    // Operand A
    // =========================================================

    input  logic               sign_a,
    input  logic signed [12:0] exp_a,
    input  logic [52:0]        mant_a,

    input  logic               is_nan_a,
    input  logic               is_snan_a,
    input  logic               is_inf_a,
    input  logic               is_zero_a,

    // =========================================================
    // Operand B
    // =========================================================

    input  logic               sign_b,
    input  logic signed [12:0] exp_b,
    input  logic [52:0]        mant_b,

    input  logic               is_nan_b,
    input  logic               is_snan_b,
    input  logic               is_inf_b,
    input  logic               is_zero_b,

    // =========================================================
    // Outputs toward fp_round
    // =========================================================

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
    // Iterative divider/sqrt
    // =========================================================
    //
    // Latency:
    //   DIV  : ~56 cycles
    //   SQRT : ~56 cycles
    //
    // Simplified radix-2 implementation.
    //
    // =========================================================

    typedef enum logic [1:0] {
        IDLE,
        PREP,
        ITER,
        DONE
    } state_e;

    state_e state;

    // =========================================================
    // Internal registers
    // =========================================================

    logic        op_sqrt;

    logic        sign_r;
    logic signed [12:0] exp_r;

    logic [105:0] dividend;
    logic [105:0] divisor;

    logic [105:0] remainder;
    logic [55:0]  quotient;

    logic [6:0]  iter_cnt;
    logic [105:0] rem_shifted;

    logic [4:0] fflags_r;

    logic is_nan_r;
    logic is_inf_r;
    logic is_zero_r;

    logic [2:0] rm_r;

    // =========================================================
    // Combinatorial shifted remainder (avoids NBA conflict in ITER)
    // =========================================================

    assign rem_shifted = {remainder[104:0], dividend[105]};

    // =========================================================
    // Handshake
    // =========================================================

    assign ready_in  = (state == IDLE);
    assign valid_out = (state == DONE);

    // =========================================================
    // Main FSM
    // =========================================================

    always_ff @(posedge clk) begin

        if (!rst_n) begin

            state <= IDLE;

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

        else begin

            case (state)

            // =================================================
            // IDLE
            // =================================================

            IDLE: begin

                if (valid_in) begin

                    fflags_r <= 0;

                    is_nan_r  <= 0;
                    is_inf_r  <= 0;
                    is_zero_r <= 0;

                    rm_r <= rm;

                    op_sqrt <= (op == FPU_SQRT);

                    // =========================================
                    // Invalid
                    // =========================================

                    if (is_snan_a || is_snan_b)
                        fflags_r[4] <= 1'b1;

                    // sqrt(negative)
                    if ((op == FPU_SQRT) &&
                        sign_a &&
                        !is_zero_a) begin

                        fflags_r[4] <= 1'b1;
                        is_nan_r <= 1'b1;
                    end

                    // 0/0
                    else if ((op == FPU_DIV) &&
                             is_zero_a &&
                             is_zero_b) begin

                        fflags_r[4] <= 1'b1;
                        is_nan_r <= 1'b1;
                    end

                    // inf/inf
                    else if ((op == FPU_DIV) &&
                             is_inf_a &&
                             is_inf_b) begin

                        fflags_r[4] <= 1'b1;
                        is_nan_r <= 1'b1;
                    end

                    // divide by zero
                    else if ((op == FPU_DIV) &&
                             !is_zero_a &&
                             is_zero_b) begin

                        fflags_r[3] <= 1'b1;
                        is_inf_r <= 1'b1;
                    end

                    // NaNs
                    else if (is_nan_a || is_nan_b) begin
                        is_nan_r <= 1'b1;
                    end

                    // inf handling
                    else if (is_inf_a || is_inf_b) begin

                        if (op == FPU_DIV) begin

                            if (is_inf_a)
                                is_inf_r <= 1'b1;
                            else
                                is_zero_r <= 1'b1;

                        end
                        else begin
                            is_inf_r <= 1'b1;
                        end
                    end

                    // zero handling
                    else if (is_zero_a) begin
                        is_zero_r <= 1'b1;
                    end

                    // =========================================
                    // Normal operation
                    // =========================================

                    sign_r <= sign_a ^ sign_b;

                    if (op == FPU_DIV)
                        exp_r <= exp_a - exp_b;
                    else
                        exp_r <= exp_a >>> 1;

                    dividend <= {mant_a, 53'b0};
                    divisor  <= {mant_b, 53'b0};

                    quotient  <= 0;
                    remainder <= 0;

                    iter_cnt <= 0;

                    state <= PREP;

                end
            end

            // =================================================
            // PREP
            // =================================================

            PREP: begin
                state <= ITER;
            end

            // =================================================
            // ITERATIVE DIVISION
            // =================================================

            ITER: begin

                if (iter_cnt < 56) begin

                    dividend <= {dividend[104:0], 1'b0};

                    // rem_shifted = {remainder[104:0], dividend[105]} (combinatorial)
                    if (rem_shifted >= divisor) begin
                        remainder <= rem_shifted - divisor;
                        quotient  <= {quotient[54:0], 1'b1};
                    end
                    else begin
                        remainder <= rem_shifted;
                        quotient  <= {quotient[54:0], 1'b0};
                    end

                    iter_cnt <= iter_cnt + 1;

                end
                else begin

                    // Latch outputs here so they are stable when valid_out
                    // asserts on the next cycle (combinatorial from state==DONE).
                    sign_out <= sign_r;
                    exp_out  <= exp_r;

                    // Special cases (NaN/inf/zero) don't use the quotient.
                    // Zero the mantissa and GRS to avoid spurious NX in fround.
                    if (is_nan_r || is_inf_r || is_zero_r) begin
                        mant_out <= '0;
                        grs_out  <= 3'b0;
                    end else begin
                        mant_out   <= quotient[55:1];
                        grs_out[2] <= quotient[0];
                        grs_out[1] <= |rem_shifted;
                        grs_out[0] <= |rem_shifted;
                    end

                    rm_out <= rm_r;

                    is_nan_out  <= is_nan_r;
                    is_inf_out  <= is_inf_r;
                    is_zero_out <= is_zero_r;

                    fflags_out <= fflags_r;

                    if ((exp_r + 1023) >= 2047)
                        fflags_out[2] <= 1'b1;

                    if ((exp_r + 1023) <= 0)
                        fflags_out[1] <= 1'b1;

                    state <= DONE;

                end
            end

            // =================================================
            // DONE — outputs already latched in ITER else branch
            // =================================================

            DONE: begin

                if (ready_out)
                    state <= IDLE;

            end

            endcase
        end
    end

endmodule