/********************************************************************************************************
* @file    fpu_tb.sv
* @brief   FPU testbench — FADD / FSUB / FMUL / FMIN / FMAX / FEQ / FLT / FLE / FCLASS / FMADD / FMSUB / FNMSUB / FNMADD / FSGNJ / FSGNJN / FSGNJX / FDIV / FSQRT / FCVT_F2F / FCVT_F2I / FCVT_I2F
*
* Test structure:
*   run_op  — drives one operation, waits for valid_out, latches result
*   chk     — compares result/fflags/wen/rd_out against expected values
*
* All expected values have been manually verified against IEEE 754.
*
* Compile + sim:
*   cd tb_and_verification/testbench
*   make sim
*   make waves       (opens gtkwave)
*
* @author  ekonihc
* @date    04/05/2026
********************************************************************************************************/

`timescale 1ns/1ps

module fpu_tb;

    import fpkg::*;

    // =========================================================
    // CLOCK / RESET
    // =========================================================

    logic clk = 0, rst_n = 0;
    always #1 clk = ~clk;   // 500MHz clock

    // =========================================================
    // INTERFACE + DUT
    // =========================================================

    fpu_if #(.XLEN(64)) bus ();

    fpu #(.XLEN(64)) dut (
        .clk    (clk),
        .rst_n  (rst_n),
        .fpu_bus(bus)
    );

    // =========================================================
    // RESULT CAPTURE
    // =========================================================

    logic [63:0] res;
    logic [4:0]  rd_o, ff;
    logic        fpw, intw;

    // =========================================================
    // TASK : run_op
    //
    // Drives one FPU operation through the bus and waits until
    // valid_out is asserted, then latches the outputs.
    // rs3 is unused for FADD/FSUB/FCLASS; tied to 0.
    // =========================================================

    task automatic run_op(
        input fpu_op_e  op,
        input fpu_fmt_e fmt,
        input fpu_rm_e  rm,
        input [4:0]     rd,
        input [63:0]    rs1,
        input [63:0]    rs2
    );
        // Drive op before checking ready_out so the mux uses the right unit
        bus.op  = op;
        bus.fmt = fmt;
        bus.rm  = rm;
        bus.rd  = rd;
        bus.rs1 = rs1;
        bus.rs2 = rs2;

        // Wait for the target unit to be ready
        @(posedge clk);
        while (!bus.ready_out) @(posedge clk);

        // Assert valid_in for exactly one cycle
        bus.valid_in = 1'b1;
        @(posedge clk);   // DUT captures the operation
        bus.valid_in = 1'b0;

        // Poll for result.  After the capture edge valid_out is already 1
        // for FCLASS (1-cycle); for FADD/FSUB the while loop waits 3 more.
        while (!bus.valid_out) @(posedge clk);

        // Latch outputs
        res  = bus.result;
        rd_o = bus.rd_out;
        ff   = bus.fflags;
        fpw  = bus.fp_wen;
        intw = bus.int_wen;
    endtask

    // =========================================================
    // TASK : run_op3
    //
    // Same as run_op but also drives rs3 (required for FMA ops).
    // =========================================================

    task automatic run_op3(
        input fpu_op_e  op,
        input fpu_fmt_e fmt,
        input fpu_rm_e  rm,
        input [4:0]     rd,
        input [63:0]    rs1,
        input [63:0]    rs2,
        input [63:0]    rs3
    );
        bus.op  = op;
        bus.fmt = fmt;
        bus.rm  = rm;
        bus.rd  = rd;
        bus.rs1 = rs1;
        bus.rs2 = rs2;
        bus.rs3 = rs3;

        @(posedge clk);
        while (!bus.ready_out) @(posedge clk);

        bus.valid_in = 1'b1;
        @(posedge clk);
        bus.valid_in = 1'b0;

        while (!bus.valid_out) @(posedge clk);

        res  = bus.result;
        rd_o = bus.rd_out;
        ff   = bus.fflags;
        fpw  = bus.fp_wen;
        intw = bus.int_wen;
    endtask

    // =========================================================
    // TASK : chk
    //
    // Compares all output fields against expected values and
    // prints PASS / FAIL with a detailed diff on failure.
    // =========================================================

    int pass_cnt = 0, fail_cnt = 0;

    task automatic chk(
        input string    name,
        input [63:0]    exp_res,
        input [4:0]     exp_ff,      // {NV, DZ, OF, UF, NX}
        input           exp_fp_wen,
        input           exp_int_wen,
        input [4:0]     exp_rd
    );
        logic all_ok;
        all_ok = (res  === exp_res)     &&
                 (ff   === exp_ff)      &&
                 (fpw  === exp_fp_wen)  &&
                 (intw === exp_int_wen) &&
                 (rd_o === exp_rd);

        if (all_ok) begin
            $display("  PASS  %-40s | result=0x%016h  fflags=%05b",
                     name, res, ff);
            pass_cnt++;
        end else begin
            $display("  FAIL  %-40s", name);
            if (res  !== exp_res)
                $display("         result  : got 0x%016h  exp 0x%016h", res, exp_res);
            if (ff   !== exp_ff)
                $display("         fflags  : got %05b  exp %05b", ff, exp_ff);
            if (fpw  !== exp_fp_wen)
                $display("         fp_wen  : got %0b  exp %0b", fpw, exp_fp_wen);
            if (intw !== exp_int_wen)
                $display("         int_wen : got %0b  exp %0b", intw, exp_int_wen);
            if (rd_o !== exp_rd)
                $display("         rd_out  : got %0d  exp %0d", rd_o, exp_rd);
            fail_cnt++;
        end
    endtask

    // =========================================================
    // MAIN TEST SEQUENCE
    // =========================================================

    initial begin
        $dumpfile("fpu_tb.vcd");
        $dumpvars(0, fpu_tb);

        // --- Init interface ---
        bus.valid_in = 0;
        bus.ready_in = 1;
        bus.op  = FPU_ADD;
        bus.fmt = FMT_FP64;
        bus.rm  = RM_RNE;
        bus.rd  = '0;
        bus.rs1 = '0;
        bus.rs2 = '0;
        bus.rs3 = '0;

        // --- Reset ---
        repeat(4) @(posedge clk);
        rst_n = 1;
        @(posedge clk);

        // ===========================================================
        // FADD — FP64
        //
        // FP64 bit patterns:
        //   1.0  = 0x3FF0_0000_0000_0000
        //   1.5  = 0x3FF8_0000_0000_0000
        //   2.0  = 0x4000_0000_0000_0000
        //   0.5  = 0x3FE0_0000_0000_0000
        //   3.0  = 0x4008_0000_0000_0000
        //  -1.0  = 0xBFF0_0000_0000_0000
        //  +inf  = 0x7FF0_0000_0000_0000
        //  -inf  = 0xFFF0_0000_0000_0000
        //  qNaN  = 0x7FF8_0000_0000_0000  (canonical quiet NaN)
        //  sNaN  = 0x7FF0_0000_0000_0001  (quiet bit = 0, mant ≠ 0)
        // ===========================================================
        $display("\n======= FADD FP64 =======");

        run_op(FPU_ADD, FMT_FP64, RM_RNE, 5'd1,
               64'h3FF0_0000_0000_0000,   // 1.0
               64'h4000_0000_0000_0000);  // 2.0
        chk("1.0 + 2.0 = 3.0",
            64'h4008_0000_0000_0000, 5'b0, 1, 0, 5'd1);

        run_op(FPU_ADD, FMT_FP64, RM_RNE, 5'd2,
               64'h3FF8_0000_0000_0000,   // 1.5
               64'h3FE0_0000_0000_0000);  // 0.5
        chk("1.5 + 0.5 = 2.0",
            64'h4000_0000_0000_0000, 5'b0, 1, 0, 5'd2);

        run_op(FPU_ADD, FMT_FP64, RM_RNE, 5'd3,
               64'h7FF0_0000_0000_0000,   // +inf
               64'h3FF0_0000_0000_0000);  // 1.0
        chk("+inf + 1.0 = +inf",
            64'h7FF0_0000_0000_0000, 5'b0, 1, 0, 5'd3);

        // inf + (-inf) → NaN, NV flag
        run_op(FPU_ADD, FMT_FP64, RM_RNE, 5'd4,
               64'h7FF0_0000_0000_0000,   // +inf
               64'hFFF0_0000_0000_0000);  // -inf
        chk("+inf + (-inf) = qNaN + NV",
            64'h7FF8_0000_0000_0000, 5'b10000, 1, 0, 5'd4);

        // qNaN on input → qNaN result, no NV
        run_op(FPU_ADD, FMT_FP64, RM_RNE, 5'd5,
               64'h7FF8_0000_0000_0000,   // qNaN
               64'h3FF0_0000_0000_0000);  // 1.0
        chk("qNaN + 1.0 = qNaN (no NV)",
            64'h7FF8_0000_0000_0000, 5'b00000, 1, 0, 5'd5);

        // sNaN on input → qNaN result + NV
        run_op(FPU_ADD, FMT_FP64, RM_RNE, 5'd6,
               64'h7FF0_0000_0000_0001,   // sNaN
               64'h3FF0_0000_0000_0000);  // 1.0
        chk("sNaN + 1.0 = qNaN + NV",
            64'h7FF8_0000_0000_0000, 5'b10000, 1, 0, 5'd6);

        // ===========================================================
        // FSUB — FP64
        // ===========================================================
        $display("\n======= FSUB FP64 =======");

        run_op(FPU_SUB, FMT_FP64, RM_RNE, 5'd7,
               64'h4008_0000_0000_0000,   // 3.0
               64'h3FF0_0000_0000_0000);  // 1.0
        chk("3.0 - 1.0 = 2.0",
            64'h4000_0000_0000_0000, 5'b0, 1, 0, 5'd7);

        run_op(FPU_SUB, FMT_FP64, RM_RNE, 5'd8,
               64'h3FF0_0000_0000_0000,   // 1.0
               64'h4000_0000_0000_0000);  // 2.0
        chk("1.0 - 2.0 = -1.0",
            64'hBFF0_0000_0000_0000, 5'b0, 1, 0, 5'd8);

        // +inf - (+inf) → NaN, NV
        run_op(FPU_SUB, FMT_FP64, RM_RNE, 5'd9,
               64'h7FF0_0000_0000_0000,   // +inf
               64'h7FF0_0000_0000_0000);  // +inf
        chk("+inf - (+inf) = qNaN + NV",
            64'h7FF8_0000_0000_0000, 5'b10000, 1, 0, 5'd9);

        // -inf - (-inf) → NaN, NV
        run_op(FPU_SUB, FMT_FP64, RM_RNE, 5'd10,
               64'hFFF0_0000_0000_0000,   // -inf
               64'hFFF0_0000_0000_0000);  // -inf
        chk("(-inf) - (-inf) = qNaN + NV",
            64'h7FF8_0000_0000_0000, 5'b10000, 1, 0, 5'd10);

        // ===========================================================
        // FCLASS — FP64
        //
        // RISC-V one-hot mask (10 bits, zero-extended to 64):
        //   bit 0  -inf      0x001
        //   bit 1  neg_norm  0x002
        //   bit 2  neg_subn  0x004
        //   bit 3  -0        0x008
        //   bit 4  +0        0x010
        //   bit 5  pos_subn  0x020
        //   bit 6  pos_norm  0x040
        //   bit 7  +inf      0x080
        //   bit 8  sNaN      0x100
        //   bit 9  qNaN      0x200
        // ===========================================================
        $display("\n======= FCLASS FP64 =======");

        run_op(FPU_CLASS, FMT_FP64, RM_RNE, 5'd11,
               64'h3FF0_0000_0000_0000,   // +1.0  → pos_normal
               64'h0);
        chk("FCLASS(+1.0)  = pos_normal  [bit 6]",
            64'h40, 5'b0, 0, 1, 5'd11);

        run_op(FPU_CLASS, FMT_FP64, RM_RNE, 5'd12,
               64'hBFF0_0000_0000_0000,   // -1.0  → neg_normal
               64'h0);
        chk("FCLASS(-1.0)  = neg_normal  [bit 1]",
            64'h02, 5'b0, 0, 1, 5'd12);

        run_op(FPU_CLASS, FMT_FP64, RM_RNE, 5'd13,
               64'h0000_0000_0000_0000,   // +0.0  → pos_zero
               64'h0);
        chk("FCLASS(+0.0)  = pos_zero    [bit 4]",
            64'h10, 5'b0, 0, 1, 5'd13);

        run_op(FPU_CLASS, FMT_FP64, RM_RNE, 5'd14,
               64'h8000_0000_0000_0000,   // -0.0  → neg_zero
               64'h0);
        chk("FCLASS(-0.0)  = neg_zero    [bit 3]",
            64'h08, 5'b0, 0, 1, 5'd14);

        run_op(FPU_CLASS, FMT_FP64, RM_RNE, 5'd15,
               64'h7FF0_0000_0000_0000,   // +inf
               64'h0);
        chk("FCLASS(+inf)  = pos_inf     [bit 7]",
            64'h80, 5'b0, 0, 1, 5'd15);

        run_op(FPU_CLASS, FMT_FP64, RM_RNE, 5'd16,
               64'hFFF0_0000_0000_0000,   // -inf
               64'h0);
        chk("FCLASS(-inf)  = neg_inf     [bit 0]",
            64'h01, 5'b0, 0, 1, 5'd16);

        run_op(FPU_CLASS, FMT_FP64, RM_RNE, 5'd17,
               64'h7FF8_0000_0000_0000,   // canonical qNaN
               64'h0);
        chk("FCLASS(qNaN)  = quiet_nan   [bit 9]",
            64'h200, 5'b0, 0, 1, 5'd17);

        run_op(FPU_CLASS, FMT_FP64, RM_RNE, 5'd18,
               64'h7FF0_0000_0000_0001,   // sNaN (quiet bit=0, mant≠0)
               64'h0);
        chk("FCLASS(sNaN)  = sig_nan     [bit 8]",
            64'h100, 5'b0, 0, 1, 5'd18);

        run_op(FPU_CLASS, FMT_FP64, RM_RNE, 5'd19,
               64'h0000_0000_0000_0001,   // min positive subnormal
               64'h0);
        chk("FCLASS(+subn) = pos_subnorm [bit 5]",
            64'h20, 5'b0, 0, 1, 5'd19);

        run_op(FPU_CLASS, FMT_FP64, RM_RNE, 5'd20,
               64'h8000_0000_0000_0001,   // min negative subnormal
               64'h0);
        chk("FCLASS(-subn) = neg_subnorm [bit 2]",
            64'h04, 5'b0, 0, 1, 5'd20);

        // ===========================================================
        // FMUL — FP64
        //
        // FP64 bit patterns used:
        //   1.0  = 0x3FF0_0000_0000_0000
        //   2.0  = 0x4000_0000_0000_0000
        //   3.0  = 0x4008_0000_0000_0000
        //   6.0  = 0x4018_0000_0000_0000
        //  -1.0  = 0xBFF0_0000_0000_0000
        //  -2.0  = 0xC000_0000_0000_0000
        //  +inf  = 0x7FF0_0000_0000_0000
        //  qNaN  = 0x7FF8_0000_0000_0000
        //  sNaN  = 0x7FF0_0000_0000_0001
        // ===========================================================
        $display("\n======= FMUL FP64 =======");

        run_op(FPU_MUL, FMT_FP64, RM_RNE, 5'd21,
               64'h3FF0_0000_0000_0000,   // 1.0
               64'h3FF0_0000_0000_0000);  // 1.0
        chk("1.0 * 1.0 = 1.0",
            64'h3FF0_0000_0000_0000, 5'b0, 1, 0, 5'd21);

        run_op(FPU_MUL, FMT_FP64, RM_RNE, 5'd22,
               64'h4000_0000_0000_0000,   // 2.0
               64'h4008_0000_0000_0000);  // 3.0
        chk("2.0 * 3.0 = 6.0",
            64'h4018_0000_0000_0000, 5'b0, 1, 0, 5'd22);

        // negative result: sign = XOR of both signs
        run_op(FPU_MUL, FMT_FP64, RM_RNE, 5'd23,
               64'hBFF0_0000_0000_0000,   // -1.0
               64'h4000_0000_0000_0000);  // 2.0
        chk("-1.0 * 2.0 = -2.0",
            64'hC000_0000_0000_0000, 5'b0, 1, 0, 5'd23);

        // inf * finite → inf
        run_op(FPU_MUL, FMT_FP64, RM_RNE, 5'd24,
               64'h7FF0_0000_0000_0000,   // +inf
               64'h4000_0000_0000_0000);  // 2.0
        chk("+inf * 2.0 = +inf",
            64'h7FF0_0000_0000_0000, 5'b0, 1, 0, 5'd24);

        // 0 * inf = invalid → qNaN + NV
        run_op(FPU_MUL, FMT_FP64, RM_RNE, 5'd25,
               64'h0000_0000_0000_0000,   // +0
               64'h7FF0_0000_0000_0000);  // +inf
        chk("0 * +inf = qNaN + NV",
            64'h7FF8_0000_0000_0000, 5'b10000, 1, 0, 5'd25);

        // qNaN on input → qNaN result, no NV
        run_op(FPU_MUL, FMT_FP64, RM_RNE, 5'd26,
               64'h7FF8_0000_0000_0000,   // qNaN
               64'h3FF0_0000_0000_0000);  // 1.0
        chk("qNaN * 1.0 = qNaN (no NV)",
            64'h7FF8_0000_0000_0000, 5'b00000, 1, 0, 5'd26);

        // sNaN on input → qNaN result + NV
        run_op(FPU_MUL, FMT_FP64, RM_RNE, 5'd27,
               64'h7FF0_0000_0000_0001,   // sNaN
               64'h3FF0_0000_0000_0000);  // 1.0
        chk("sNaN * 1.0 = qNaN + NV",
            64'h7FF8_0000_0000_0000, 5'b10000, 1, 0, 5'd27);

        // ===========================================================
        // FMIN / FMAX — FP64
        //
        // FP64 bit patterns:
        //   1.0   = 0x3FF0_0000_0000_0000
        //   2.0   = 0x4000_0000_0000_0000
        //   3.0   = 0x4008_0000_0000_0000
        //  -1.0   = 0xBFF0_0000_0000_0000
        //  +0.0   = 0x0000_0000_0000_0000
        //  -0.0   = 0x8000_0000_0000_0000
        //  +inf   = 0x7FF0_0000_0000_0000
        //  qNaN   = 0x7FF8_0000_0000_0000
        //  sNaN   = 0x7FF0_0000_0000_0001
        // ===========================================================
        $display("\n======= FMIN / FMAX FP64 =======");

        // FMIN: basic — 1.0 vs 3.0
        run_op(FPU_MIN, FMT_FP64, RM_RNE, 5'd28,
               64'h3FF0_0000_0000_0000,   // 1.0
               64'h4008_0000_0000_0000);  // 3.0
        chk("FMIN(1.0, 3.0) = 1.0",
            64'h3FF0_0000_0000_0000, 5'b0, 1, 0, 5'd28);

        // FMAX: basic — 1.0 vs 3.0
        run_op(FPU_MAX, FMT_FP64, RM_RNE, 5'd29,
               64'h3FF0_0000_0000_0000,   // 1.0
               64'h4008_0000_0000_0000);  // 3.0
        chk("FMAX(1.0, 3.0) = 3.0",
            64'h4008_0000_0000_0000, 5'b0, 1, 0, 5'd29);

        // FMIN: negative vs positive
        run_op(FPU_MIN, FMT_FP64, RM_RNE, 5'd30,
               64'hBFF0_0000_0000_0000,   // -1.0
               64'h4000_0000_0000_0000);  // 2.0
        chk("FMIN(-1.0, 2.0) = -1.0",
            64'hBFF0_0000_0000_0000, 5'b0, 1, 0, 5'd30);

        // FMAX: negative vs positive
        run_op(FPU_MAX, FMT_FP64, RM_RNE, 5'd31,
               64'hBFF0_0000_0000_0000,   // -1.0
               64'h4000_0000_0000_0000);  // 2.0
        chk("FMAX(-1.0, 2.0) = 2.0",
            64'h4000_0000_0000_0000, 5'b0, 1, 0, 5'd31);

        // FMIN: -0 vs +0 → -0
        run_op(FPU_MIN, FMT_FP64, RM_RNE, 5'd0,
               64'h8000_0000_0000_0000,   // -0.0
               64'h0000_0000_0000_0000);  // +0.0
        chk("FMIN(-0, +0) = -0",
            64'h8000_0000_0000_0000, 5'b0, 1, 0, 5'd0);

        // FMAX: -0 vs +0 → +0
        run_op(FPU_MAX, FMT_FP64, RM_RNE, 5'd1,
               64'h8000_0000_0000_0000,   // -0.0
               64'h0000_0000_0000_0000);  // +0.0
        chk("FMAX(-0, +0) = +0",
            64'h0000_0000_0000_0000, 5'b0, 1, 0, 5'd1);

        // FMIN: qNaN vs 1.0 → 1.0 (NaN treated as missing operand), no NV
        run_op(FPU_MIN, FMT_FP64, RM_RNE, 5'd2,
               64'h7FF8_0000_0000_0000,   // qNaN
               64'h3FF0_0000_0000_0000);  // 1.0
        chk("FMIN(qNaN, 1.0) = 1.0 (no NV)",
            64'h3FF0_0000_0000_0000, 5'b00000, 1, 0, 5'd2);

        // FMIN: sNaN vs 1.0 → 1.0 + NV
        run_op(FPU_MIN, FMT_FP64, RM_RNE, 5'd3,
               64'h7FF0_0000_0000_0001,   // sNaN
               64'h3FF0_0000_0000_0000);  // 1.0
        chk("FMIN(sNaN, 1.0) = 1.0 + NV",
            64'h3FF0_0000_0000_0000, 5'b10000, 1, 0, 5'd3);

        // FMIN: both NaN → canonical qNaN + NV
        run_op(FPU_MIN, FMT_FP64, RM_RNE, 5'd4,
               64'h7FF8_0000_0000_0000,   // qNaN
               64'h7FF8_0000_0000_0000);  // qNaN
        chk("FMIN(qNaN, qNaN) = qNaN + NV",
            64'h7FF8_0000_0000_0000, 5'b10000, 1, 0, 5'd4);

        // FMAX: +inf vs 1.0 → +inf
        run_op(FPU_MAX, FMT_FP64, RM_RNE, 5'd5,
               64'h7FF0_0000_0000_0000,   // +inf
               64'h3FF0_0000_0000_0000);  // 1.0
        chk("FMAX(+inf, 1.0) = +inf",
            64'h7FF0_0000_0000_0000, 5'b0, 1, 0, 5'd5);

        // ===========================================================
        // FEQ / FLT / FLE — FP64
        //
        // Result = 0 ou 1 écrit dans le registre entier (int_wen=1, fp_wen=0).
        //
        // FP64 bit patterns:
        //   1.0   = 0x3FF0_0000_0000_0000
        //   2.0   = 0x4000_0000_0000_0000
        //  -1.0   = 0xBFF0_0000_0000_0000
        //  +0.0   = 0x0000_0000_0000_0000
        //  -0.0   = 0x8000_0000_0000_0000
        //  -inf   = 0xFFF0_0000_0000_0000
        //  +inf   = 0x7FF0_0000_0000_0000
        //  qNaN   = 0x7FF8_0000_0000_0000
        //  sNaN   = 0x7FF0_0000_0000_0001
        // ===========================================================
        $display("\n======= FEQ / FLT / FLE FP64 =======");

        // FEQ: 1.0 == 1.0 → 1
        run_op(FPU_CMP_EQ, FMT_FP64, RM_RNE, 5'd6,
               64'h3FF0_0000_0000_0000,   // 1.0
               64'h3FF0_0000_0000_0000);  // 1.0
        chk("FEQ(1.0, 1.0) = 1",
            64'h1, 5'b0, 0, 1, 5'd6);

        // FEQ: 1.0 == 2.0 → 0
        run_op(FPU_CMP_EQ, FMT_FP64, RM_RNE, 5'd7,
               64'h3FF0_0000_0000_0000,   // 1.0
               64'h4000_0000_0000_0000);  // 2.0
        chk("FEQ(1.0, 2.0) = 0",
            64'h0, 5'b0, 0, 1, 5'd7);

        // FEQ: +0 == -0 → 1 (IEEE 754)
        run_op(FPU_CMP_EQ, FMT_FP64, RM_RNE, 5'd8,
               64'h0000_0000_0000_0000,   // +0.0
               64'h8000_0000_0000_0000);  // -0.0
        chk("FEQ(+0, -0) = 1",
            64'h1, 5'b0, 0, 1, 5'd8);

        // FEQ: +inf == +inf → 1
        run_op(FPU_CMP_EQ, FMT_FP64, RM_RNE, 5'd9,
               64'h7FF0_0000_0000_0000,   // +inf
               64'h7FF0_0000_0000_0000);  // +inf
        chk("FEQ(+inf, +inf) = 1",
            64'h1, 5'b0, 0, 1, 5'd9);

        // FEQ: qNaN == 1.0 → 0, pas de NV
        run_op(FPU_CMP_EQ, FMT_FP64, RM_RNE, 5'd10,
               64'h7FF8_0000_0000_0000,   // qNaN
               64'h3FF0_0000_0000_0000);  // 1.0
        chk("FEQ(qNaN, 1.0) = 0 (no NV)",
            64'h0, 5'b00000, 0, 1, 5'd10);

        // FEQ: sNaN == 1.0 → 0 + NV
        run_op(FPU_CMP_EQ, FMT_FP64, RM_RNE, 5'd11,
               64'h7FF0_0000_0000_0001,   // sNaN
               64'h3FF0_0000_0000_0000);  // 1.0
        chk("FEQ(sNaN, 1.0) = 0 + NV",
            64'h0, 5'b10000, 0, 1, 5'd11);

        // FLT: 1.0 < 2.0 → 1
        run_op(FPU_CMP_LT, FMT_FP64, RM_RNE, 5'd12,
               64'h3FF0_0000_0000_0000,   // 1.0
               64'h4000_0000_0000_0000);  // 2.0
        chk("FLT(1.0, 2.0) = 1",
            64'h1, 5'b0, 0, 1, 5'd12);

        // FLT: 2.0 < 1.0 → 0
        run_op(FPU_CMP_LT, FMT_FP64, RM_RNE, 5'd13,
               64'h4000_0000_0000_0000,   // 2.0
               64'h3FF0_0000_0000_0000);  // 1.0
        chk("FLT(2.0, 1.0) = 0",
            64'h0, 5'b0, 0, 1, 5'd13);

        // FLT: -1.0 < 1.0 → 1 (négatif < positif)
        run_op(FPU_CMP_LT, FMT_FP64, RM_RNE, 5'd14,
               64'hBFF0_0000_0000_0000,   // -1.0
               64'h3FF0_0000_0000_0000);  // 1.0
        chk("FLT(-1.0, 1.0) = 1",
            64'h1, 5'b0, 0, 1, 5'd14);

        // FLT: -inf < 1.0 → 1
        run_op(FPU_CMP_LT, FMT_FP64, RM_RNE, 5'd15,
               64'hFFF0_0000_0000_0000,   // -inf
               64'h3FF0_0000_0000_0000);  // 1.0
        chk("FLT(-inf, 1.0) = 1",
            64'h1, 5'b0, 0, 1, 5'd15);

        // FLT: qNaN < 1.0 → 0 + NV
        run_op(FPU_CMP_LT, FMT_FP64, RM_RNE, 5'd16,
               64'h7FF8_0000_0000_0000,   // qNaN
               64'h3FF0_0000_0000_0000);  // 1.0
        chk("FLT(qNaN, 1.0) = 0 + NV",
            64'h0, 5'b10000, 0, 1, 5'd16);

        // FLE: 1.0 <= 1.0 → 1 (égalité)
        run_op(FPU_CMP_LE, FMT_FP64, RM_RNE, 5'd17,
               64'h3FF0_0000_0000_0000,   // 1.0
               64'h3FF0_0000_0000_0000);  // 1.0
        chk("FLE(1.0, 1.0) = 1",
            64'h1, 5'b0, 0, 1, 5'd17);

        // FLE: 2.0 <= 1.0 → 0
        run_op(FPU_CMP_LE, FMT_FP64, RM_RNE, 5'd18,
               64'h4000_0000_0000_0000,   // 2.0
               64'h3FF0_0000_0000_0000);  // 1.0
        chk("FLE(2.0, 1.0) = 0",
            64'h0, 5'b0, 0, 1, 5'd18);

        // FLE: sNaN <= 1.0 → 0 + NV
        run_op(FPU_CMP_LE, FMT_FP64, RM_RNE, 5'd19,
               64'h7FF0_0000_0000_0001,   // sNaN
               64'h3FF0_0000_0000_0000);  // 1.0
        chk("FLE(sNaN, 1.0) = 0 + NV",
            64'h0, 5'b10000, 0, 1, 5'd19);

        // ===========================================================
        // FMADD / FMSUB / FNMSUB / FNMADD — FP64  (5-cycle pipeline)
        //
        // FP64 values:
        //   1.0  = 0x3FF0_0000_0000_0000
        //   2.0  = 0x4000_0000_0000_0000
        //   3.0  = 0x4008_0000_0000_0000
        //   5.0  = 0x4014_0000_0000_0000
        //   6.0  = 0x4018_0000_0000_0000
        //   7.0  = 0x401C_0000_0000_0000
        //  -1.0  = 0xBFF0_0000_0000_0000
        //  -5.0  = 0xC014_0000_0000_0000
        //  -7.0  = 0xC01C_0000_0000_0000
        //  +inf  = 0x7FF0_0000_0000_0000
        //  qNaN  = 0x7FF8_0000_0000_0000
        //  sNaN  = 0x7FF0_0000_0000_0001
        //
        // Sign manipulation applied in fpu.sv before fp_fma:
        //   FMADD  : A*B + C     (no flip)
        //   FMSUB  : A*B - C     (flip sign_c)
        //   FNMSUB : -(A*B) + C  (flip sign_a)
        //   FNMADD : -(A*B + C)  (flip sign_a and sign_c)
        // ===========================================================
        $display("\n======= FMADD FP64 =======");

        run_op3(FPU_FMA, FMT_FP64, RM_RNE, 5'd20,
                64'h4000_0000_0000_0000,   // 2.0
                64'h4008_0000_0000_0000,   // 3.0
                64'h3FF0_0000_0000_0000);  // 1.0
        chk("2.0 * 3.0 + 1.0 = 7.0",
            64'h401C_0000_0000_0000, 5'b0, 1, 0, 5'd20);

        run_op3(FPU_FMA, FMT_FP64, RM_RNE, 5'd21,
                64'hBFF0_0000_0000_0000,   // -1.0
                64'h4000_0000_0000_0000,   // 2.0
                64'h4008_0000_0000_0000);  // 3.0
        chk("-1.0 * 2.0 + 3.0 = 1.0",
            64'h3FF0_0000_0000_0000, 5'b0, 1, 0, 5'd21);

        // +inf * finite + finite = +inf
        run_op3(FPU_FMA, FMT_FP64, RM_RNE, 5'd22,
                64'h7FF0_0000_0000_0000,   // +inf
                64'h4000_0000_0000_0000,   // 2.0
                64'h3FF0_0000_0000_0000);  // 1.0
        chk("+inf * 2.0 + 1.0 = +inf",
            64'h7FF0_0000_0000_0000, 5'b0, 1, 0, 5'd22);

        // 0 * inf → invalid → qNaN + NV
        run_op3(FPU_FMA, FMT_FP64, RM_RNE, 5'd23,
                64'h0000_0000_0000_0000,   // +0.0
                64'h7FF0_0000_0000_0000,   // +inf
                64'h3FF0_0000_0000_0000);  // 1.0
        chk("0 * +inf + 1.0 = qNaN + NV",
            64'h7FF8_0000_0000_0000, 5'b10000, 1, 0, 5'd23);

        // qNaN propagates silently, no NV
        run_op3(FPU_FMA, FMT_FP64, RM_RNE, 5'd24,
                64'h7FF8_0000_0000_0000,   // qNaN
                64'h3FF0_0000_0000_0000,   // 1.0
                64'h3FF0_0000_0000_0000);  // 1.0
        chk("qNaN * 1.0 + 1.0 = qNaN (no NV)",
            64'h7FF8_0000_0000_0000, 5'b00000, 1, 0, 5'd24);

        // sNaN raises NV
        run_op3(FPU_FMA, FMT_FP64, RM_RNE, 5'd25,
                64'h7FF0_0000_0000_0001,   // sNaN
                64'h3FF0_0000_0000_0000,   // 1.0
                64'h3FF0_0000_0000_0000);  // 1.0
        chk("sNaN * 1.0 + 1.0 = qNaN + NV",
            64'h7FF8_0000_0000_0000, 5'b10000, 1, 0, 5'd25);

        $display("\n======= FMSUB FP64 =======");

        run_op3(FPU_FMSUB, FMT_FP64, RM_RNE, 5'd26,
                64'h4000_0000_0000_0000,   // 2.0
                64'h4008_0000_0000_0000,   // 3.0
                64'h3FF0_0000_0000_0000);  // 1.0
        chk("2.0 * 3.0 - 1.0 = 5.0",
            64'h4014_0000_0000_0000, 5'b0, 1, 0, 5'd26);

        // exact cancellation: 2*3 - 6 = 0
        run_op3(FPU_FMSUB, FMT_FP64, RM_RNE, 5'd27,
                64'h4000_0000_0000_0000,   // 2.0
                64'h4008_0000_0000_0000,   // 3.0
                64'h4018_0000_0000_0000);  // 6.0
        chk("2.0 * 3.0 - 6.0 = 0.0",
            64'h0000_0000_0000_0000, 5'b0, 1, 0, 5'd27);

        run_op3(FPU_FMSUB, FMT_FP64, RM_RNE, 5'd28,
                64'hBFF0_0000_0000_0000,   // -1.0
                64'h4000_0000_0000_0000,   // 2.0
                64'h4008_0000_0000_0000);  // 3.0
        chk("-1.0 * 2.0 - 3.0 = -5.0",
            64'hC014_0000_0000_0000, 5'b0, 1, 0, 5'd28);

        $display("\n======= FNMSUB FP64 =======");

        // -(2*3) + 7 = 1.0   →  sign_a flipped: (-2)*3 + 7
        run_op3(FPU_FNMSUB, FMT_FP64, RM_RNE, 5'd29,
                64'h4000_0000_0000_0000,   // 2.0
                64'h4008_0000_0000_0000,   // 3.0
                64'h401C_0000_0000_0000);  // 7.0
        chk("-(2.0*3.0) + 7.0 = 1.0",
            64'h3FF0_0000_0000_0000, 5'b0, 1, 0, 5'd29);

        // -(1*1) + 3 = 2.0
        run_op3(FPU_FNMSUB, FMT_FP64, RM_RNE, 5'd30,
                64'h3FF0_0000_0000_0000,   // 1.0
                64'h3FF0_0000_0000_0000,   // 1.0
                64'h4008_0000_0000_0000);  // 3.0
        chk("-(1.0*1.0) + 3.0 = 2.0",
            64'h4000_0000_0000_0000, 5'b0, 1, 0, 5'd30);

        $display("\n======= FNMADD FP64 =======");

        // -(2*3 + 1) = -7.0  →  sign_a & sign_c flipped: (-2)*3 + (-1)
        run_op3(FPU_FNMADD, FMT_FP64, RM_RNE, 5'd31,
                64'h4000_0000_0000_0000,   // 2.0
                64'h4008_0000_0000_0000,   // 3.0
                64'h3FF0_0000_0000_0000);  // 1.0
        chk("-(2.0*3.0 + 1.0) = -7.0",
            64'hC01C_0000_0000_0000, 5'b0, 1, 0, 5'd31);

        // -(2*3 + (-1)) = -5.0  →  (-2)*3 + (1) = -5
        run_op3(FPU_FNMADD, FMT_FP64, RM_RNE, 5'd0,
                64'h4000_0000_0000_0000,   // 2.0
                64'h4008_0000_0000_0000,   // 3.0
                64'hBFF0_0000_0000_0000);  // -1.0
        chk("-(2.0*3.0 + (-1.0)) = -5.0",
            64'hC014_0000_0000_0000, 5'b0, 1, 0, 5'd0);

        // ===========================================================
        // FDIV / FSQRT — FP64  (~58-cycle FSM, non-pipelined)
        //
        // fdivsqrt uses a radix-2 iterative algorithm.
        // Special cases (NaN, inf, zero, DZ) are handled in IDLE and
        // are IEEE-compliant regardless of the quotient computation.
        // Normal-case results depend on the iterative mantissa algorithm.
        //
        // FP64 bit patterns:
        //   +0.0  = 0x0000_0000_0000_0000
        //   -0.0  = 0x8000_0000_0000_0000
        //   +1.0  = 0x3FF0_0000_0000_0000
        //   +2.0  = 0x4000_0000_0000_0000
        //   -1.0  = 0xBFF0_0000_0000_0000
        //   +inf  = 0x7FF0_0000_0000_0000
        //   -inf  = 0xFFF0_0000_0000_0000
        //   qNaN  = 0x7FF8_0000_0000_0000
        //   sNaN  = 0x7FF0_0000_0000_0001
        // ===========================================================
        $display("\n======= FDIV FP64 (special cases) =======");

        // finite / 0 → +inf + DZ
        run_op(FPU_DIV, FMT_FP64, RM_RNE, 5'd10,
               64'h3FF0_0000_0000_0000,   // +1.0
               64'h0000_0000_0000_0000);  // +0.0
        chk("1.0 / 0.0 = +inf + DZ",
            64'h7FF0_0000_0000_0000, 5'b01000, 1, 0, 5'd10);

        // negative / 0 → -inf + DZ
        run_op(FPU_DIV, FMT_FP64, RM_RNE, 5'd11,
               64'hBFF0_0000_0000_0000,   // -1.0
               64'h0000_0000_0000_0000);  // +0.0
        chk("-1.0 / 0.0 = -inf + DZ",
            64'hFFF0_0000_0000_0000, 5'b01000, 1, 0, 5'd11);

        // 0 / 0 → qNaN + NV
        run_op(FPU_DIV, FMT_FP64, RM_RNE, 5'd12,
               64'h0000_0000_0000_0000,   // +0.0
               64'h0000_0000_0000_0000);  // +0.0
        chk("0.0 / 0.0 = qNaN + NV",
            64'h7FF8_0000_0000_0000, 5'b10000, 1, 0, 5'd12);

        // inf / inf → qNaN + NV
        run_op(FPU_DIV, FMT_FP64, RM_RNE, 5'd13,
               64'h7FF0_0000_0000_0000,   // +inf
               64'h7FF0_0000_0000_0000);  // +inf
        chk("+inf / +inf = qNaN + NV",
            64'h7FF8_0000_0000_0000, 5'b10000, 1, 0, 5'd13);

        // inf / finite → +inf
        run_op(FPU_DIV, FMT_FP64, RM_RNE, 5'd14,
               64'h7FF0_0000_0000_0000,   // +inf
               64'h4000_0000_0000_0000);  // +2.0
        chk("+inf / 2.0 = +inf",
            64'h7FF0_0000_0000_0000, 5'b0, 1, 0, 5'd14);

        // finite / inf → +0
        run_op(FPU_DIV, FMT_FP64, RM_RNE, 5'd15,
               64'h4000_0000_0000_0000,   // +2.0
               64'h7FF0_0000_0000_0000);  // +inf
        chk("2.0 / +inf = +0",
            64'h0000_0000_0000_0000, 5'b0, 1, 0, 5'd15);

        // sNaN → qNaN + NV
        run_op(FPU_DIV, FMT_FP64, RM_RNE, 5'd16,
               64'h7FF0_0000_0000_0001,   // sNaN
               64'h3FF0_0000_0000_0000);  // 1.0
        chk("sNaN / 1.0 = qNaN + NV",
            64'h7FF8_0000_0000_0000, 5'b10000, 1, 0, 5'd16);

        // 0 / finite → +0
        run_op(FPU_DIV, FMT_FP64, RM_RNE, 5'd17,
               64'h0000_0000_0000_0000,   // +0.0
               64'h4000_0000_0000_0000);  // +2.0
        chk("0.0 / 2.0 = +0",
            64'h0000_0000_0000_0000, 5'b0, 1, 0, 5'd17);

        $display("\n======= FSQRT FP64 (special cases) =======");

        // sqrt(+0) → +0
        run_op(FPU_SQRT, FMT_FP64, RM_RNE, 5'd18,
               64'h0000_0000_0000_0000,   // +0.0
               64'h0000_0000_0000_0000);  // rs2 unused
        chk("sqrt(+0.0) = +0",
            64'h0000_0000_0000_0000, 5'b0, 1, 0, 5'd18);

        // sqrt(+inf) → +inf
        run_op(FPU_SQRT, FMT_FP64, RM_RNE, 5'd19,
               64'h7FF0_0000_0000_0000,   // +inf
               64'h0000_0000_0000_0000);  // rs2 unused
        chk("sqrt(+inf) = +inf",
            64'h7FF0_0000_0000_0000, 5'b0, 1, 0, 5'd19);

        // sqrt(-1.0) → qNaN + NV  (sqrt of negative)
        run_op(FPU_SQRT, FMT_FP64, RM_RNE, 5'd20,
               64'hBFF0_0000_0000_0000,   // -1.0
               64'h0000_0000_0000_0000);  // rs2 unused
        chk("sqrt(-1.0) = qNaN + NV",
            64'h7FF8_0000_0000_0000, 5'b10000, 1, 0, 5'd20);

        // sqrt(sNaN) → qNaN + NV
        run_op(FPU_SQRT, FMT_FP64, RM_RNE, 5'd21,
               64'h7FF0_0000_0000_0001,   // sNaN
               64'h0000_0000_0000_0000);  // rs2 unused
        chk("sqrt(sNaN) = qNaN + NV",
            64'h7FF8_0000_0000_0000, 5'b10000, 1, 0, 5'd21);

        // sqrt(qNaN) → qNaN (no NV)
        run_op(FPU_SQRT, FMT_FP64, RM_RNE, 5'd22,
               64'h7FF8_0000_0000_0000,   // qNaN
               64'h0000_0000_0000_0000);  // rs2 unused
        chk("sqrt(qNaN) = qNaN (no NV)",
            64'h7FF8_0000_0000_0000, 5'b00000, 1, 0, 5'd22);

        // ===========================================================
        // FSGNJ / FSGNJN / FSGNJX — FP64  (1-cycle pipeline)
        //
        // All ops: magnitude = rs1[62:0], sign derived from rs2 (or rs1^rs2).
        // fp_wen=1, int_wen=0, fflags=0 for every case.
        //
        // FP64 bit patterns:
        //   +1.0  = 0x3FF0_0000_0000_0000
        //   +2.0  = 0x4000_0000_0000_0000
        //   +3.0  = 0x4008_0000_0000_0000
        //   -1.0  = 0xBFF0_0000_0000_0000
        //   -2.0  = 0xC000_0000_0000_0000
        //   -3.0  = 0xC008_0000_0000_0000
        // ===========================================================
        $display("\n======= FSGNJ FP64 =======");

        // FSGNJ: rd.sign = rs2.sign, magnitude from rs1
        run_op(FPU_SGNJ, FMT_FP64, RM_RNE, 5'd1,
               64'h3FF0_0000_0000_0000,   // +1.0
               64'h4000_0000_0000_0000);  // +2.0 → sign=+
        chk("FSGNJ(+1.0, +2.0) = +1.0",
            64'h3FF0_0000_0000_0000, 5'b0, 1, 0, 5'd1);

        run_op(FPU_SGNJ, FMT_FP64, RM_RNE, 5'd2,
               64'h3FF0_0000_0000_0000,   // +1.0
               64'hC000_0000_0000_0000);  // -2.0 → sign=-
        chk("FSGNJ(+1.0, -2.0) = -1.0",
            64'hBFF0_0000_0000_0000, 5'b0, 1, 0, 5'd2);

        run_op(FPU_SGNJ, FMT_FP64, RM_RNE, 5'd3,
               64'hC008_0000_0000_0000,   // -3.0
               64'h3FF0_0000_0000_0000);  // +1.0 → sign=+
        chk("FSGNJ(-3.0, +1.0) = +3.0",
            64'h4008_0000_0000_0000, 5'b0, 1, 0, 5'd3);

        $display("\n======= FSGNJN FP64 =======");

        // FSGNJN: rd.sign = ~rs2.sign, magnitude from rs1
        run_op(FPU_SGNJN, FMT_FP64, RM_RNE, 5'd4,
               64'h3FF0_0000_0000_0000,   // +1.0
               64'h4000_0000_0000_0000);  // +2.0 → ~sign=−
        chk("FSGNJN(+1.0, +2.0) = -1.0",
            64'hBFF0_0000_0000_0000, 5'b0, 1, 0, 5'd4);

        run_op(FPU_SGNJN, FMT_FP64, RM_RNE, 5'd5,
               64'h3FF0_0000_0000_0000,   // +1.0
               64'hC000_0000_0000_0000);  // -2.0 → ~sign=+
        chk("FSGNJN(+1.0, -2.0) = +1.0",
            64'h3FF0_0000_0000_0000, 5'b0, 1, 0, 5'd5);

        run_op(FPU_SGNJN, FMT_FP64, RM_RNE, 5'd6,
               64'hC008_0000_0000_0000,   // -3.0
               64'hBFF0_0000_0000_0000);  // -1.0 → ~sign=+
        chk("FSGNJN(-3.0, -1.0) = +3.0",
            64'h4008_0000_0000_0000, 5'b0, 1, 0, 5'd6);

        $display("\n======= FSGNJX FP64 =======");

        // FSGNJX: rd.sign = rs1.sign ^ rs2.sign, magnitude from rs1
        run_op(FPU_SGNJX, FMT_FP64, RM_RNE, 5'd7,
               64'h3FF0_0000_0000_0000,   // +1.0 sign=0
               64'h4000_0000_0000_0000);  // +2.0 sign=0 → 0^0=0
        chk("FSGNJX(+1.0, +2.0) = +1.0",
            64'h3FF0_0000_0000_0000, 5'b0, 1, 0, 5'd7);

        run_op(FPU_SGNJX, FMT_FP64, RM_RNE, 5'd8,
               64'h3FF0_0000_0000_0000,   // +1.0 sign=0
               64'hC000_0000_0000_0000);  // -2.0 sign=1 → 0^1=1
        chk("FSGNJX(+1.0, -2.0) = -1.0",
            64'hBFF0_0000_0000_0000, 5'b0, 1, 0, 5'd8);

        run_op(FPU_SGNJX, FMT_FP64, RM_RNE, 5'd9,
               64'hBFF0_0000_0000_0000,   // -1.0 sign=1
               64'hC000_0000_0000_0000);  // -2.0 sign=1 → 1^1=0
        chk("FSGNJX(-1.0, -2.0) = +1.0",
            64'h3FF0_0000_0000_0000, 5'b0, 1, 0, 5'd9);

        // ===========================================================
        // FCVT F2F — Float to Float conversions
        //
        // Wiring in fpu.sv:
        //   conv_src_fmt = rs2[1:0]   (FMT_FP16=0, FMT_FP32=1, FMT_FP64=2)
        //   conv_dst_fmt = fpu_bus.fmt (the destination float format)
        //
        // FP16 bit patterns (sign[15] | exp[14:10] | mant[9:0]):
        //   +1.0  = 0x3C00  (exp=15, mant=0)
        //   +2.0  = 0x4000  (exp=16, mant=0)
        //   42.0  = 0x5140  (exp=20, mant=0b0101000000)
        //   +0.0  = 0x0000
        //   +inf  = 0x7C00
        //
        // FP32 bit patterns:
        //   +1.0  = 0x3F800000
        //   +2.0  = 0x40000000
        //   42.0  = 0x42280000
        //   -0.0  = 0x80000000
        //   +inf  = 0x7F800000
        //   qNaN  = 0x7FC00000
        //
        // FP64 bit patterns:
        //   +1.0  = 0x3FF0_0000_0000_0000
        //   +2.0  = 0x4000_0000_0000_0000
        //   42.0  = 0x4045_0000_0000_0000
        //   -0.0  = 0x8000_0000_0000_0000
        //   +inf  = 0x7FF0_0000_0000_0000
        //   qNaN  = 0x7FF8_0000_0000_0000
        // ===========================================================
        $display("\n======= FCVT F2F =======");

        // FP64 → FP32 : 1.0
        run_op(FPU_CVT_F2F, FMT_FP32, RM_RNE, 5'd1,
               64'h3FF0_0000_0000_0000,   // src: FP64 +1.0
               64'd2);                    // rs2[1:0]=FMT_FP64 (src fmt)
        chk("F2F FP64→FP32  1.0",
            64'h0000_0000_3F80_0000, 5'b0, 1, 0, 5'd1);

        // FP64 → FP32 : 2.0
        run_op(FPU_CVT_F2F, FMT_FP32, RM_RNE, 5'd2,
               64'h4000_0000_0000_0000,   // src: FP64 +2.0
               64'd2);
        chk("F2F FP64→FP32  2.0",
            64'h0000_0000_4000_0000, 5'b0, 1, 0, 5'd2);

        // FP64 → FP32 : 42.0
        run_op(FPU_CVT_F2F, FMT_FP32, RM_RNE, 5'd3,
               64'h4045_0000_0000_0000,   // src: FP64 42.0
               64'd2);
        chk("F2F FP64→FP32  42.0",
            64'h0000_0000_4228_0000, 5'b0, 1, 0, 5'd3);

        // FP64 → FP32 : +inf
        run_op(FPU_CVT_F2F, FMT_FP32, RM_RNE, 5'd4,
               64'h7FF0_0000_0000_0000,   // src: FP64 +inf
               64'd2);
        chk("F2F FP64→FP32  +inf",
            64'h0000_0000_7F80_0000, 5'b0, 1, 0, 5'd4);

        // FP64 → FP32 : qNaN
        run_op(FPU_CVT_F2F, FMT_FP32, RM_RNE, 5'd5,
               64'h7FF8_0000_0000_0000,   // src: FP64 qNaN
               64'd2);
        chk("F2F FP64→FP32  qNaN",
            64'h0000_0000_7FC0_0000, 5'b0, 1, 0, 5'd5);

        // FP64 → FP32 : -0.0  (sign bit preserved)
        run_op(FPU_CVT_F2F, FMT_FP32, RM_RNE, 5'd6,
               64'h8000_0000_0000_0000,   // src: FP64 -0.0
               64'd2);
        chk("F2F FP64→FP32  -0.0",
            64'h0000_0000_8000_0000, 5'b0, 1, 0, 5'd6);

        // FP32 → FP64 : 1.0
        run_op(FPU_CVT_F2F, FMT_FP64, RM_RNE, 5'd7,
               64'h0000_0000_3F80_0000,   // src: FP32 +1.0 in rs1[31:0]
               64'd1);                    // rs2[1:0]=FMT_FP32
        chk("F2F FP32→FP64  1.0",
            64'h3FF0_0000_0000_0000, 5'b0, 1, 0, 5'd7);

        // FP32 → FP64 : 42.0
        run_op(FPU_CVT_F2F, FMT_FP64, RM_RNE, 5'd8,
               64'h0000_0000_4228_0000,   // src: FP32 42.0
               64'd1);
        chk("F2F FP32→FP64  42.0",
            64'h4045_0000_0000_0000, 5'b0, 1, 0, 5'd8);

        // FP16 → FP64 : 42.0  (0x5140)
        run_op(FPU_CVT_F2F, FMT_FP64, RM_RNE, 5'd9,
               64'h0000_0000_0000_5140,   // src: FP16 42.0
               64'd0);                    // rs2[1:0]=FMT_FP16
        chk("F2F FP16→FP64  42.0",
            64'h4045_0000_0000_0000, 5'b0, 1, 0, 5'd9);

        // FP16 → FP32 : 1.0
        run_op(FPU_CVT_F2F, FMT_FP32, RM_RNE, 5'd10,
               64'h0000_0000_0000_3C00,   // src: FP16 +1.0
               64'd0);
        chk("F2F FP16→FP32  1.0",
            64'h0000_0000_3F80_0000, 5'b0, 1, 0, 5'd10);

        // FP32 → FP16 : 1.0
        run_op(FPU_CVT_F2F, FMT_FP16, RM_RNE, 5'd11,
               64'h0000_0000_3F80_0000,   // src: FP32 +1.0
               64'd1);
        chk("F2F FP32→FP16  1.0",
            64'h0000_0000_0000_3C00, 5'b0, 1, 0, 5'd11);

        // FP64 → FP16 : +inf
        run_op(FPU_CVT_F2F, FMT_FP16, RM_RNE, 5'd12,
               64'h7FF0_0000_0000_0000,   // src: FP64 +inf
               64'd2);
        chk("F2F FP64→FP16  +inf",
            64'h0000_0000_0000_7C00, 5'b0, 1, 0, 5'd12);

        // FP16 → FP32 : +0.0
        run_op(FPU_CVT_F2F, FMT_FP32, RM_RNE, 5'd13,
               64'h0000_0000_0000_0000,   // src: FP16 +0.0
               64'd0);
        chk("F2F FP16→FP32  +0.0",
            64'h0000_0000_0000_0000, 5'b0, 1, 0, 5'd13);

        // ===========================================================
        // FCVT F2I — Float to Integer
        //
        // op=FPU_CVT_F2I, fmt=source float format
        // Result → integer register (int_wen=1, fp_wen=0)
        // fflags[4]=NV, fflags[0]=NX
        //
        // F2I special cases (RISC-V spec):
        //   +inf → INT_MAX (0x7FFF_FFFF_FFFF_FFFF) + NV
        //   -inf → INT_MIN (0x8000_0000_0000_0000) + NV
        //   NaN  → INT_MAX + NV
        //   |val| < 1, non-zero → 0 + NX
        // ===========================================================
        $display("\n======= FCVT F2I =======");

        // FP64 +1.0 → 1
        run_op(FPU_CVT_F2I, FMT_FP64, RM_RTZ, 5'd1,
               64'h3FF0_0000_0000_0000, 64'h0);
        chk("F2I FP64  +1.0 → 1",
            64'h0000_0000_0000_0001, 5'b0, 0, 1, 5'd1);

        // FP64 -1.0 → -1
        run_op(FPU_CVT_F2I, FMT_FP64, RM_RTZ, 5'd2,
               64'hBFF0_0000_0000_0000, 64'h0);
        chk("F2I FP64  -1.0 → -1",
            64'hFFFF_FFFF_FFFF_FFFF, 5'b0, 0, 1, 5'd2);

        // FP64 42.0 → 42
        run_op(FPU_CVT_F2I, FMT_FP64, RM_RTZ, 5'd3,
               64'h4045_0000_0000_0000, 64'h0);
        chk("F2I FP64  42.0 → 42",
            64'h0000_0000_0000_002A, 5'b0, 0, 1, 5'd3);

        // FP64 -3.0 → -3
        run_op(FPU_CVT_F2I, FMT_FP64, RM_RTZ, 5'd4,
               64'hC008_0000_0000_0000, 64'h0);
        chk("F2I FP64  -3.0 → -3",
            64'hFFFF_FFFF_FFFF_FFFD, 5'b0, 0, 1, 5'd4);

        // FP64 +0.5 → 0 + NX  (|val|<1, non-zero)
        run_op(FPU_CVT_F2I, FMT_FP64, RM_RTZ, 5'd5,
               64'h3FE0_0000_0000_0000, 64'h0);
        chk("F2I FP64  0.5 → 0 + NX",
            64'h0, 5'b00001, 0, 1, 5'd5);

        // FP64 +inf → INT_MAX + NV
        run_op(FPU_CVT_F2I, FMT_FP64, RM_RTZ, 5'd6,
               64'h7FF0_0000_0000_0000, 64'h0);
        chk("F2I FP64  +inf → INT_MAX + NV",
            64'h7FFF_FFFF_FFFF_FFFF, 5'b10000, 0, 1, 5'd6);

        // FP64 -inf → INT_MIN + NV
        run_op(FPU_CVT_F2I, FMT_FP64, RM_RTZ, 5'd7,
               64'hFFF0_0000_0000_0000, 64'h0);
        chk("F2I FP64  -inf → INT_MIN + NV",
            64'h8000_0000_0000_0000, 5'b10000, 0, 1, 5'd7);

        // FP64 qNaN → INT_MAX + NV
        run_op(FPU_CVT_F2I, FMT_FP64, RM_RTZ, 5'd8,
               64'h7FF8_0000_0000_0000, 64'h0);
        chk("F2I FP64  qNaN → INT_MAX + NV",
            64'h7FFF_FFFF_FFFF_FFFF, 5'b10000, 0, 1, 5'd8);

        // FP64 +0.0 → 0 (no flags)
        run_op(FPU_CVT_F2I, FMT_FP64, RM_RTZ, 5'd9,
               64'h0000_0000_0000_0000, 64'h0);
        chk("F2I FP64  +0.0 → 0",
            64'h0, 5'b0, 0, 1, 5'd9);

        // FP32 +1.0 → 1
        run_op(FPU_CVT_F2I, FMT_FP32, RM_RTZ, 5'd10,
               64'h0000_0000_3F80_0000, 64'h0);
        chk("F2I FP32  +1.0 → 1",
            64'h0000_0000_0000_0001, 5'b0, 0, 1, 5'd10);

        // FP32 42.0 → 42
        run_op(FPU_CVT_F2I, FMT_FP32, RM_RTZ, 5'd11,
               64'h0000_0000_4228_0000, 64'h0);
        chk("F2I FP32  42.0 → 42",
            64'h0000_0000_0000_002A, 5'b0, 0, 1, 5'd11);

        // FP32 -42.0 → -42
        run_op(FPU_CVT_F2I, FMT_FP32, RM_RTZ, 5'd12,
               64'h0000_0000_C228_0000, 64'h0);
        chk("F2I FP32  -42.0 → -42",
            64'hFFFF_FFFF_FFFF_FFD6, 5'b0, 0, 1, 5'd12);

        // FP32 +inf → INT_MAX + NV
        run_op(FPU_CVT_F2I, FMT_FP32, RM_RTZ, 5'd13,
               64'h0000_0000_7F80_0000, 64'h0);
        chk("F2I FP32  +inf → INT_MAX + NV",
            64'h7FFF_FFFF_FFFF_FFFF, 5'b10000, 0, 1, 5'd13);

        // FP32 0.5 → 0 + NX
        run_op(FPU_CVT_F2I, FMT_FP32, RM_RTZ, 5'd14,
               64'h0000_0000_3F00_0000, 64'h0);
        chk("F2I FP32  0.5 → 0 + NX",
            64'h0, 5'b00001, 0, 1, 5'd14);

        // FP16 +1.0 → 1  (FP16 1.0 = 0x3C00)
        run_op(FPU_CVT_F2I, FMT_FP16, RM_RTZ, 5'd15,
               64'h0000_0000_0000_3C00, 64'h0);
        chk("F2I FP16  +1.0 → 1",
            64'h0000_0000_0000_0001, 5'b0, 0, 1, 5'd15);

        // FP16 42.0 → 42  (FP16 42.0 = 0x5140)
        run_op(FPU_CVT_F2I, FMT_FP16, RM_RTZ, 5'd16,
               64'h0000_0000_0000_5140, 64'h0);
        chk("F2I FP16  42.0 → 42",
            64'h0000_0000_0000_002A, 5'b0, 0, 1, 5'd16);

        // FP16 -2.0 → -2  (FP16 -2.0 = 0xC000)
        run_op(FPU_CVT_F2I, FMT_FP16, RM_RTZ, 5'd17,
               64'h0000_0000_0000_C000, 64'h0);
        chk("F2I FP16  -2.0 → -2",
            64'hFFFF_FFFF_FFFF_FFFE, 5'b0, 0, 1, 5'd17);

        // FP16 +inf → INT_MAX + NV  (0x7C00)
        run_op(FPU_CVT_F2I, FMT_FP16, RM_RTZ, 5'd18,
               64'h0000_0000_0000_7C00, 64'h0);
        chk("F2I FP16  +inf → INT_MAX + NV",
            64'h7FFF_FFFF_FFFF_FFFF, 5'b10000, 0, 1, 5'd18);

        // ===========================================================
        // FCVT I2F — Integer to Float
        //
        // op=FPU_CVT_I2F, fmt=destination float format, rs1=int64
        // Result → FP register (fp_wen=1, int_wen=0)
        //
        // I2F bit pattern verification:
        //   INT  0 → +0.0 in any format
        //   INT  1 → 1.0
        //   INT 42 → 42.0
        //   INT -1 → -1.0
        // ===========================================================
        $display("\n======= FCVT I2F =======");

        // INT 0 → FP64 +0.0
        run_op(FPU_CVT_I2F, FMT_FP64, RM_RNE, 5'd1,
               64'h0, 64'h0);
        chk("I2F INT→FP64  0 → +0.0",
            64'h0, 5'b0, 1, 0, 5'd1);

        // INT 1 → FP64 +1.0
        run_op(FPU_CVT_I2F, FMT_FP64, RM_RNE, 5'd2,
               64'h0000_0000_0000_0001, 64'h0);
        chk("I2F INT→FP64  1 → 1.0",
            64'h3FF0_0000_0000_0000, 5'b0, 1, 0, 5'd2);

        // INT 2 → FP64 +2.0
        run_op(FPU_CVT_I2F, FMT_FP64, RM_RNE, 5'd3,
               64'h0000_0000_0000_0002, 64'h0);
        chk("I2F INT→FP64  2 → 2.0",
            64'h4000_0000_0000_0000, 5'b0, 1, 0, 5'd3);

        // INT 42 → FP64 42.0
        run_op(FPU_CVT_I2F, FMT_FP64, RM_RNE, 5'd4,
               64'h0000_0000_0000_002A, 64'h0);
        chk("I2F INT→FP64  42 → 42.0",
            64'h4045_0000_0000_0000, 5'b0, 1, 0, 5'd4);

        // INT -1 → FP64 -1.0
        run_op(FPU_CVT_I2F, FMT_FP64, RM_RNE, 5'd5,
               64'hFFFF_FFFF_FFFF_FFFF, 64'h0);
        chk("I2F INT→FP64  -1 → -1.0",
            64'hBFF0_0000_0000_0000, 5'b0, 1, 0, 5'd5);

        // INT -42 → FP64 -42.0
        run_op(FPU_CVT_I2F, FMT_FP64, RM_RNE, 5'd6,
               64'hFFFF_FFFF_FFFF_FFD6, 64'h0);
        chk("I2F INT→FP64  -42 → -42.0",
            64'hC045_0000_0000_0000, 5'b0, 1, 0, 5'd6);

        // INT 1 → FP32 +1.0
        run_op(FPU_CVT_I2F, FMT_FP32, RM_RNE, 5'd7,
               64'h0000_0000_0000_0001, 64'h0);
        chk("I2F INT→FP32  1 → 1.0",
            64'h0000_0000_3F80_0000, 5'b0, 1, 0, 5'd7);

        // INT 42 → FP32 42.0
        run_op(FPU_CVT_I2F, FMT_FP32, RM_RNE, 5'd8,
               64'h0000_0000_0000_002A, 64'h0);
        chk("I2F INT→FP32  42 → 42.0",
            64'h0000_0000_4228_0000, 5'b0, 1, 0, 5'd8);

        // INT -1 → FP32 -1.0
        run_op(FPU_CVT_I2F, FMT_FP32, RM_RNE, 5'd9,
               64'hFFFF_FFFF_FFFF_FFFF, 64'h0);
        chk("I2F INT→FP32  -1 → -1.0",
            64'h0000_0000_BF80_0000, 5'b0, 1, 0, 5'd9);

        // INT 0 → FP32 +0.0
        run_op(FPU_CVT_I2F, FMT_FP32, RM_RNE, 5'd10,
               64'h0, 64'h0);
        chk("I2F INT→FP32  0 → +0.0",
            64'h0, 5'b0, 1, 0, 5'd10);

        // INT 1 → FP16 +1.0  (expected: 0x3C00)
        run_op(FPU_CVT_I2F, FMT_FP16, RM_RNE, 5'd11,
               64'h0000_0000_0000_0001, 64'h0);
        chk("I2F INT→FP16  1 → 1.0",
            64'h0000_0000_0000_3C00, 5'b0, 1, 0, 5'd11);

        // INT 2 → FP16 +2.0  (expected: 0x4000)
        run_op(FPU_CVT_I2F, FMT_FP16, RM_RNE, 5'd12,
               64'h0000_0000_0000_0002, 64'h0);
        chk("I2F INT→FP16  2 → 2.0",
            64'h0000_0000_0000_4000, 5'b0, 1, 0, 5'd12);

        // INT 42 → FP16 42.0  (expected: 0x5140)
        run_op(FPU_CVT_I2F, FMT_FP16, RM_RNE, 5'd13,
               64'h0000_0000_0000_002A, 64'h0);
        chk("I2F INT→FP16  42 → 42.0",
            64'h0000_0000_0000_5140, 5'b0, 1, 0, 5'd13);

        // INT -1 → FP16 -1.0  (expected: 0xBC00)
        run_op(FPU_CVT_I2F, FMT_FP16, RM_RNE, 5'd14,
               64'hFFFF_FFFF_FFFF_FFFF, 64'h0);
        chk("I2F INT→FP16  -1 → -1.0",
            64'h0000_0000_0000_BC00, 5'b0, 1, 0, 5'd14);

        // INT 0 → FP16 +0.0
        run_op(FPU_CVT_I2F, FMT_FP16, RM_RNE, 5'd15,
               64'h0, 64'h0);
        chk("I2F INT→FP16  0 → +0.0",
            64'h0, 5'b0, 1, 0, 5'd15);

        // ===========================================================
        // SUMMARY
        // ===========================================================
        $display("\n=======================================================");
        $display("  Results : %0d passed,  %0d failed", pass_cnt, fail_cnt);
        if (fail_cnt == 0)
            $display("  STATUS  : ALL TESTS PASSED");
        else
            $display("  STATUS  : FAILURES DETECTED");
        $display("=======================================================\n");

        #20 $finish;
    end

    // =========================================================
    // WATCHDOG — abort if simulation hangs
    // =========================================================

    initial begin
        #200_000;
        $error("WATCHDOG: simulation timeout at %0t", $time);
        $finish;
    end

endmodule
