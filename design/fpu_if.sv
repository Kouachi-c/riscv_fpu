`include "fpu_pkg.sv"

`ifndef FPU_IF_SV
`define FPU_IF_SV

interface fpu_if #(
    parameter XLEN = 64
);

    import fpkg::*;

    // =========================
    // HANDSHAKE
    // =========================
    logic valid_in;
    logic ready_out;   // FPU ready to accept a new operation

    logic valid_out;
    logic ready_in;    // CPU ready to accept the result

    // =========================
    // INSTRUCTION (CPU → FPU)
    // =========================
    fpu_op_e     op;
    fpu_fmt_e    fmt;
    fpu_rm_e     rm;
    logic [4:0]  rd;   // destination register (pipelined internally by FPU)

    // =========================
    // OPERANDS (CPU → FPU)
    // =========================
    logic [XLEN-1:0] rs1;
    logic [XLEN-1:0] rs2;
    logic [XLEN-1:0] rs3;  // FMA third operand

    // =========================
    // RESULT (FPU → CPU)
    // =========================
    logic [4:0]      rd_out;  // destination register aligned with result
    logic [XLEN-1:0] result;  // FP or integer result (64-bit in both cases)

    // =========================
    // WRITEBACK CONTROL (FPU → CPU)
    // Tells the CPU which register bank receives the result.
    // Exactly one of these is asserted when valid_out is high.
    // =========================
    logic fp_wen;   // write to FP register bank  (FADD, FMUL, FMA, …)
    logic int_wen;  // write to integer register bank (FCLASS, FCVT, FMV.X)

    // =========================
    // FLAGS IEEE 754 (FPU → CPU)
    // =========================
    logic [4:0] fflags;  // {NV, DZ, OF, UF, NX}

    // =========================
    // MODPORT CPU
    // =========================
    modport cpu (
        output valid_in,
        input  ready_out,

        output op, fmt, rm, rd,
        output rs1, rs2, rs3,

        input  valid_out,
        output ready_in,

        input  rd_out,
        input  result,
        input  fp_wen,
        input  int_wen,
        input  fflags
    );

    // =========================
    // MODPORT FPU
    // =========================
    modport fpu (
        input  valid_in,
        output ready_out,

        input  op, fmt, rm, rd,
        input  rs1, rs2, rs3,

        output valid_out,
        input  ready_in,

        output rd_out,
        output result,
        output fp_wen,
        output int_wen,
        output fflags
    );

endinterface

`endif // FPU_IF_SV
