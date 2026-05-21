/********************************************************************************************************
* @file    fclass.sv
* @brief   RISC-V FCLASS instruction implementation
* @details Wraps fclassify and maps its output to the RISC-V 10-bit one-hot mask,
*          zero-extended to XLEN bits. Result is written to an integer destination register.
*          1-cycle latency pipeline (combinational classify + output register).
*
*          RISC-V FCLASS bit mapping:
*            bit 0 : -infinity
*            bit 1 : negative normal
*            bit 2 : negative subnormal
*            bit 3 : -0
*            bit 4 : +0
*            bit 5 : positive subnormal
*            bit 6 : positive normal
*            bit 7 : +infinity
*            bit 8 : signaling NaN
*            bit 9 : quiet NaN
*
*          FCLASS never raises any floating-point exception flags.
*
* @author  ekonihc
* @date    02/05/2026  (DD/MM/YYYY)
********************************************************************************************************/

`include "fpu_pkg.sv"
import fpkg::*;

module fclass #(
    parameter XLEN = 64
)(
    input  logic clk,
    input  logic rst_n,

    input  logic valid_in,
    output logic ready_in,
    output logic valid_out,
    input  logic ready_out,

    input  logic [XLEN-1:0] in,
    input  fpu_fmt_e        fmt,

    output logic [XLEN-1:0] result,  // 10-bit FCLASS mask, zero-extended to XLEN
    output logic [4:0]      fflags   // always 0: FCLASS raises no FP exceptions
);

    // =========================================================
    // VALID PIPELINE (1 stage)
    // =========================================================

    logic valid_pipe;

    assign ready_in = !valid_pipe || ready_out;

    always_ff @(posedge clk) begin
        if (!rst_n)
            valid_pipe <= 1'b0;
        else if (ready_in)
            valid_pipe <= valid_in;
    end

    assign valid_out = valid_pipe;

    // =========================================================
    // FCLASSIFY INSTANCE (combinational)
    // =========================================================

    fp_class_e class_out;
    logic      sign;
    logic      is_zero;
    logic      is_inf;
    logic      is_qnan;
    logic      is_snan;
    logic      is_subnormal;

    fclassify #(.XLEN(XLEN)) u_fclassify (
        .in          (in),
        .fmt         (fmt),
        .class_out   (class_out),
        .sign        (sign),
        .is_zero     (is_zero),
        .is_inf      (is_inf),
        .is_qnan     (is_qnan),
        .is_snan     (is_snan),
        .is_subnormal(is_subnormal)
    );

    // =========================================================
    // RISC-V 10-BIT FCLASS MASK (combinational)
    //
    // One-hot: exactly one bit is set per input value.
    // NaN bits (8-9) ignore the sign field.
    // =========================================================

    logic        is_normal;
    logic [9:0]  fclass_mask;

    assign is_normal = (class_out == FP_NORMAL);

    always_comb begin
        fclass_mask    = 10'b0;
        fclass_mask[0] =  sign & is_inf;       // -infinity
        fclass_mask[1] =  sign & is_normal;    // negative normal
        fclass_mask[2] =  sign & is_subnormal; // negative subnormal
        fclass_mask[3] =  sign & is_zero;      // -0
        fclass_mask[4] = ~sign & is_zero;      // +0
        fclass_mask[5] = ~sign & is_subnormal; // positive subnormal
        fclass_mask[6] = ~sign & is_normal;    // positive normal
        fclass_mask[7] = ~sign & is_inf;       // +infinity
        fclass_mask[8] = is_snan;              // signaling NaN
        fclass_mask[9] = is_qnan;              // quiet NaN
    end

    // =========================================================
    // OUTPUT REGISTER
    // Captures the combinational result when a valid transaction
    // is accepted (valid_in & ready_in). Result is stable while
    // valid_out is high.
    // =========================================================

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            result <= '0;
            fflags <= '0;
        end else if (valid_in && ready_in) begin
            result <= {{(XLEN-10){1'b0}}, fclass_mask};
            fflags <= 5'b0;
        end
    end

endmodule
