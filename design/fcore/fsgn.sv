/*******************************************************************************
 * @file fsgn.sv
 * @brief Implements FSGNJ, FSGNJN, and FSGNJX operations for 64-bit floating point numbers.
 *        This module takes two raw IEEE754 floating point inputs and produces an output with the sign bit modified according to the specified operation.
 * 
 * @details The module supports three operations:
 *          - FSGNJ: rd.sign = rs2.sign
 *          - FSGNJN: rd.sign = ~rs2.sign
 *          - FSGNJX: rd.sign = rs1.sign ^ rs2.sign
 *        The magnitude of the result is taken from the first operand (rs1).
*
* @author ekonihc
* @date 08/05/2026
 ******************************************************************************/

`include "fpu_pkg.sv"

module fsgn #(
    parameter FP_WIDTH = 64
)(
    input  logic clk,
    input  logic rst_n,

    input  logic valid_in,
    output logic ready_in,

    output logic valid_out,
    input  logic ready_out,

    input  fpu_op_e op,

    // raw IEEE754 operands
    input  logic [FP_WIDTH-1:0] a,
    input  logic [FP_WIDTH-1:0] b,

    // output
    output logic [FP_WIDTH-1:0] result,

    output logic [4:0] fflags_out
);

    // =========================================================
    // HANDSHAKE
    // =========================================================

    logic valid_r;

    assign ready_in  = !valid_r || ready_out;
    assign valid_out = valid_r;

    // =========================================================
    // INTERNALS
    // =========================================================

    logic result_sign;

    logic [FP_WIDTH-2:0] magnitude_a;

    always_comb begin

        magnitude_a = a[FP_WIDTH-2:0];

        case (op)

            // =================================================
            // FSGNJ
            // rd.sign = rs2.sign
            // =================================================

            FPU_SGNJ:
                result_sign = b[FP_WIDTH-1];

            // =================================================
            // FSGNJN
            // rd.sign = ~rs2.sign
            // =================================================

            FPU_SGNJN:
                result_sign = ~b[FP_WIDTH-1];

            // =================================================
            // FSGNJX
            // rd.sign = rs1.sign ^ rs2.sign
            // =================================================

            FPU_SGNJX:
                result_sign = a[FP_WIDTH-1] ^ b[FP_WIDTH-1];

            default:
                result_sign = a[FP_WIDTH-1];

        endcase
    end

    // =========================================================
    // PIPELINE REG
    // =========================================================

    always_ff @(posedge clk) begin

        if (!rst_n) begin

            valid_r     <= 0;
            result      <= 0;
            fflags_out  <= 0;

        end

        else if (ready_in) begin

            valid_r <= valid_in;

            if (valid_in) begin

                result <= {
                    result_sign,
                    magnitude_a
                };

                // no IEEE754 exceptions
                fflags_out <= 5'b0;
            end
        end
    end

endmodule