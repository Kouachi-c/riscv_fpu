/********************************************************************************************************
* @file    fpu.sv
* @brief   Floating Point Unit — top-level
* @details Dispatches FP operations to functional units and returns results to the CPU.
*
*          Implemented units:
*            FADD / FSUB              : funpack(x2) → faddsub[4] → fround → fpack  (4-cycle, FP result)
*            FMUL                     : funpack(x2) → fmult[4]   → fround → fpack  (4-cycle, FP result)
*            FMADD/FMSUB/FNMSUB/FNMADD: funpack(x3) → fp_fma[5]  → fround → fpack  (5-cycle, FP result)
*            FCLASS                   : fclass[1]                                    (1-cycle, int result)
*            FSGNJ/FSGNJN/FSGNJX      : fsgn[1]                                     (1-cycle, FP result)
*            FDIV/FSQRT               : fdivsqrt[~58]                               (~58-cycle FSM, FP result)
*            FCVT_F2F/F2I/I2F         : fconvert[1]                                 (1-cycle, FP or INT result)
*
*          faddsub, fmult and fp_fma share the combinational fround + fpack chain (mutually exclusive).
*          valid_in is gated per unit based on op.
*          rd is pipelined separately per unit to match each unit's latency.
*          Output mux selects result/fflags/wen based on which unit fires valid_out.
*
* @author  ekonihc
* @date    16/04/2026
********************************************************************************************************/

`include "fpu_pkg.sv"
`include "fpu_if.sv"

module fpu #(
    parameter XLEN = 64
)(
    input  logic   clk,
    input  logic   rst_n,
    fpu_if.fpu     fpu_bus
);

    import fpkg::*;

    // =========================================================
    // OP DECODE — determine which unit the current op targets
    // =========================================================

    logic op_is_addsub;
    logic op_is_mul;
    logic op_is_class;
    logic op_is_minmax;
    logic op_is_cmp;
    logic op_is_fma;
    logic op_is_sgn;
    logic op_is_divsqrt;
    logic op_is_convert;

    assign op_is_addsub  = (fpu_bus.op == FPU_ADD)    || (fpu_bus.op == FPU_SUB);
    assign op_is_mul     = (fpu_bus.op == FPU_MUL);
    assign op_is_class   = (fpu_bus.op == FPU_CLASS);
    assign op_is_minmax  = (fpu_bus.op == FPU_MIN)     || (fpu_bus.op == FPU_MAX);
    assign op_is_cmp     = (fpu_bus.op == FPU_CMP_EQ)  || (fpu_bus.op == FPU_CMP_LT) ||
                           (fpu_bus.op == FPU_CMP_LE);
    assign op_is_fma     = (fpu_bus.op == FPU_FMA)     || (fpu_bus.op == FPU_FMSUB)  ||
                           (fpu_bus.op == FPU_FNMSUB)   || (fpu_bus.op == FPU_FNMADD);
    assign op_is_sgn     = (fpu_bus.op == FPU_SGNJ)    || (fpu_bus.op == FPU_SGNJN)  ||
                           (fpu_bus.op == FPU_SGNJX);
    assign op_is_divsqrt = (fpu_bus.op == FPU_DIV)      || (fpu_bus.op == FPU_SQRT);
    assign op_is_convert = (fpu_bus.op == FPU_CVT_F2F)  || (fpu_bus.op == FPU_CVT_F2I) ||
                           (fpu_bus.op == FPU_CVT_I2F);

    // =========================================================
    // FUNPACK — combinational unpack of both operands
    // Shared by faddsub and fmult. fclass uses raw rs1.
    // =========================================================

    logic               sign_a,         sign_b,         sign_c;
    logic signed [12:0] exp_a,          exp_b,          exp_c;
    logic [52:0]        mant_a,         mant_b,         mant_c;
    logic               is_nan_a,       is_nan_b,       is_nan_c;
    logic               is_qnan_a,      is_qnan_b,      is_qnan_c;
    logic               is_snan_a,      is_snan_b,      is_snan_c;
    logic               is_inf_a,       is_inf_b,       is_inf_c;
    logic               is_zero_a,      is_zero_b,      is_zero_c;
    logic               is_subnormal_a, is_subnormal_b, is_subnormal_c;

    funpack #(.XLEN(XLEN)) u_funpack_a (
        .in          (fpu_bus.rs1),
        .fmt         (fpu_bus.fmt),
        .sign        (sign_a),
        .exp         (exp_a),
        .mant        (mant_a),
        .is_zero     (is_zero_a),
        .is_inf      (is_inf_a),
        .is_nan      (is_nan_a),
        .is_qnan     (is_qnan_a),
        .is_snan     (is_snan_a),
        .is_subnormal(is_subnormal_a)
    );

    funpack #(.XLEN(XLEN)) u_funpack_b (
        .in          (fpu_bus.rs2),
        .fmt         (fpu_bus.fmt),
        .sign        (sign_b),
        .exp         (exp_b),
        .mant        (mant_b),
        .is_zero     (is_zero_b),
        .is_inf      (is_inf_b),
        .is_nan      (is_nan_b),
        .is_qnan     (is_qnan_b),
        .is_snan     (is_snan_b),
        .is_subnormal(is_subnormal_b)
    );

    funpack #(.XLEN(XLEN)) u_funpack_c (
        .in          (fpu_bus.rs3),
        .fmt         (fpu_bus.fmt),
        .sign        (sign_c),
        .exp         (exp_c),
        .mant        (mant_c),
        .is_zero     (is_zero_c),
        .is_inf      (is_inf_c),
        .is_nan      (is_nan_c),
        .is_qnan     (is_qnan_c),
        .is_snan     (is_snan_c),
        .is_subnormal(is_subnormal_c)
    );

    // =========================================================
    // FADDSUB — 4-cycle pipeline (FADD / FSUB)
    // valid_in gated to ADD/SUB ops only.
    // =========================================================

    logic               add_ready_in;
    logic               add_valid_out;
    logic               add_sign;
    logic signed [12:0] add_exp;
    logic [54:0]        add_mant;
    logic [2:0]         add_grs;
    logic [2:0]         add_rm;
    logic               add_is_nan;
    logic               add_is_inf;
    logic               add_is_zero;
    logic [4:0]         add_fflags;

    faddsub #(.XLEN(XLEN)) u_fadd_sub (
        .clk         (clk),
        .rst_n       (rst_n),
        .valid_in    (fpu_bus.valid_in && op_is_addsub),
        .ready_in    (add_ready_in),
        .valid_out   (add_valid_out),
        .ready_out   (1'b1),

        .op          (fpu_bus.op),
        .rm          (fpu_bus.rm),

        .sign_a      (sign_a),
        .exp_a       (exp_a),
        .mant_a      (mant_a),
        .is_nan_a    (is_nan_a),
        .is_snan_a   (is_snan_a),
        .is_inf_a    (is_inf_a),
        .is_zero_a   (is_zero_a),

        .sign_b      (sign_b),
        .exp_b       (exp_b),
        .mant_b      (mant_b),
        .is_nan_b    (is_nan_b),
        .is_snan_b   (is_snan_b),
        .is_inf_b    (is_inf_b),
        .is_zero_b   (is_zero_b),

        .sign_out    (add_sign),
        .exp_out     (add_exp),
        .mant_out    (add_mant),
        .grs_out     (add_grs),
        .rm_out      (add_rm),
        .is_nan_out  (add_is_nan),
        .is_inf_out  (add_is_inf),
        .is_zero_out (add_is_zero),
        .fflags_out  (add_fflags)
    );

    // =========================================================
    // FMULT — 4-cycle pipeline (FMUL)
    // valid_in gated to MUL ops only.
    // =========================================================

    logic               mul_ready_in;
    logic               mul_valid_out;
    logic               mul_sign;
    logic signed [12:0] mul_exp;
    logic [54:0]        mul_mant;
    logic [2:0]         mul_grs;
    logic [2:0]         mul_rm;
    logic               mul_is_nan;
    logic               mul_is_inf;
    logic               mul_is_zero;
    logic [4:0]         mul_fflags;

    fmult u_fmult (
        .clk         (clk),
        .rst_n       (rst_n),
        .valid_in    (fpu_bus.valid_in && op_is_mul),
        .ready_in    (mul_ready_in),
        .valid_out   (mul_valid_out),
        .ready_out   (1'b1),

        .op          (fpu_bus.op),
        .rm          (fpu_bus.rm),

        .sign_a      (sign_a),
        .exp_a       (exp_a),
        .mant_a      (mant_a),
        .is_nan_a    (is_nan_a),
        .is_snan_a   (is_snan_a),
        .is_inf_a    (is_inf_a),
        .is_zero_a   (is_zero_a),

        .sign_b      (sign_b),
        .exp_b       (exp_b),
        .mant_b      (mant_b),
        .is_nan_b    (is_nan_b),
        .is_snan_b   (is_snan_b),
        .is_inf_b    (is_inf_b),
        .is_zero_b   (is_zero_b),

        .sign_out    (mul_sign),
        .exp_out     (mul_exp),
        .mant_out    (mul_mant),
        .grs_out     (mul_grs),
        .rm_out      (mul_rm),
        .is_nan_out  (mul_is_nan),
        .is_inf_out  (mul_is_inf),
        .is_zero_out (mul_is_zero),
        .fflags_out  (mul_fflags)
    );

    // =========================================================
    // FMA — 5-cycle pipeline (FMADD / FMSUB / FNMSUB / FNMADD)
    // valid_in gated to FMA ops only.
    // FMSUB  : negate sign_c     (A*B - C)
    // FNMSUB : negate sign_a     (-A*B + C)
    // FNMADD : negate sign_a & c (-A*B - C)
    // =========================================================

    logic fma_sign_a_eff;
    logic fma_sign_c_eff;

    assign fma_sign_a_eff = sign_a ^ ((fpu_bus.op == FPU_FNMSUB) || (fpu_bus.op == FPU_FNMADD));
    assign fma_sign_c_eff = sign_c ^ ((fpu_bus.op == FPU_FMSUB)  || (fpu_bus.op == FPU_FNMADD));

    logic               fma_ready_in;
    logic               fma_valid_out;
    logic               fma_sign;
    logic signed [12:0] fma_exp;
    logic [54:0]        fma_mant;
    logic [2:0]         fma_grs;
    logic [2:0]         fma_rm;
    logic               fma_is_nan;
    logic               fma_is_inf;
    logic               fma_is_zero;
    logic [4:0]         fma_fflags;

    fma u_fma (
        .clk         (clk),
        .rst_n       (rst_n),
        .valid_in    (fpu_bus.valid_in && op_is_fma),
        .ready_in    (fma_ready_in),
        .valid_out   (fma_valid_out),
        .ready_out   (1'b1),

        .rm          (fpu_bus.rm),

        .sign_a      (fma_sign_a_eff),
        .exp_a       (exp_a),
        .mant_a      (mant_a),
        .is_nan_a    (is_nan_a),
        .is_snan_a   (is_snan_a),
        .is_inf_a    (is_inf_a),
        .is_zero_a   (is_zero_a),

        .sign_b      (sign_b),
        .exp_b       (exp_b),
        .mant_b      (mant_b),
        .is_nan_b    (is_nan_b),
        .is_snan_b   (is_snan_b),
        .is_inf_b    (is_inf_b),
        .is_zero_b   (is_zero_b),

        .sign_c      (fma_sign_c_eff),
        .exp_c       (exp_c),
        .mant_c      (mant_c),
        .is_nan_c    (is_nan_c),
        .is_snan_c   (is_snan_c),
        .is_inf_c    (is_inf_c),
        .is_zero_c   (is_zero_c),

        .sign_out    (fma_sign),
        .exp_out     (fma_exp),
        .mant_out    (fma_mant),
        .grs_out     (fma_grs),
        .rm_out      (fma_rm),
        .is_nan_out  (fma_is_nan),
        .is_inf_out  (fma_is_inf),
        .is_zero_out (fma_is_zero),
        .fflags_out  (fma_fflags)
    );

    // =========================================================
    // ARITH MUX — select between faddsub, fmult and fp_fma for fround/fpack
    // All units are mutually exclusive (different ops).
    // =========================================================

    logic               arith_valid_out;
    logic               arith_sign;
    logic signed [12:0] arith_exp;
    logic [54:0]        arith_mant;
    logic [2:0]         arith_grs;
    logic [2:0]         arith_rm;
    logic               arith_is_nan;
    logic               arith_is_inf;
    logic               arith_is_zero;
    logic [4:0]         arith_fflags;

    assign arith_valid_out = add_valid_out | mul_valid_out | fma_valid_out | divsqrt_valid_out;
    assign arith_sign      = divsqrt_valid_out ? divsqrt_sign    : fma_valid_out ? fma_sign    : mul_valid_out ? mul_sign    : add_sign;
    assign arith_exp       = divsqrt_valid_out ? divsqrt_exp     : fma_valid_out ? fma_exp     : mul_valid_out ? mul_exp     : add_exp;
    assign arith_mant      = divsqrt_valid_out ? divsqrt_mant    : fma_valid_out ? fma_mant    : mul_valid_out ? mul_mant    : add_mant;
    assign arith_grs       = divsqrt_valid_out ? divsqrt_grs     : fma_valid_out ? fma_grs     : mul_valid_out ? mul_grs     : add_grs;
    assign arith_rm        = divsqrt_valid_out ? divsqrt_rm      : fma_valid_out ? fma_rm      : mul_valid_out ? mul_rm      : add_rm;
    assign arith_is_nan    = divsqrt_valid_out ? divsqrt_is_nan  : fma_valid_out ? fma_is_nan  : mul_valid_out ? mul_is_nan  : add_is_nan;
    assign arith_is_inf    = divsqrt_valid_out ? divsqrt_is_inf  : fma_valid_out ? fma_is_inf  : mul_valid_out ? mul_is_inf  : add_is_inf;
    assign arith_is_zero   = divsqrt_valid_out ? divsqrt_is_zero : fma_valid_out ? fma_is_zero : mul_valid_out ? mul_is_zero : add_is_zero;
    assign arith_fflags    = divsqrt_valid_out ? divsqrt_fflags  : fma_valid_out ? fma_fflags  : mul_valid_out ? mul_fflags  : add_fflags;

    // =========================================================
    // FROUND — combinational rounding + re-normalization
    // Shared by faddsub and fmult via arith mux.
    // =========================================================

    logic               rnd_sign;
    logic signed [12:0] rnd_exp;
    logic [52:0]        rnd_mant;
    logic               rnd_is_nan;
    logic               rnd_is_inf;
    logic               rnd_is_zero;
    logic [4:0]         rnd_fflags;

    fround u_fround (
        .sign_in     (arith_sign),
        .exp_in      (arith_exp),
        .mant_in     (arith_mant),
        .grs_in      (arith_grs),
        .rm          (arith_rm),
        .is_nan_in   (arith_is_nan),
        .is_inf_in   (arith_is_inf),
        .is_zero_in  (arith_is_zero),
        .fflags_in   (arith_fflags),
        .sign_out    (rnd_sign),
        .exp_out     (rnd_exp),
        .mant_out    (rnd_mant),
        .is_nan_out  (rnd_is_nan),
        .is_inf_out  (rnd_is_inf),
        .is_zero_out (rnd_is_zero),
        .fflags      (rnd_fflags)
    );

    // =========================================================
    // FPACK — combinational pack to IEEE 754 bit pattern
    // Parameters explicitly passed so port widths are unambiguous:
    //   result [EXP_WIDTH+MAN_WIDTH:0] = [63:0] = 64 bits for FP64
    // =========================================================

    logic [63:0] arith_result;
    logic        fpack_of;
    logic        fpack_uf;

    fpack #(
        .EXP_WIDTH(11),
        .MAN_WIDTH(52),
        .BIAS     (1023)
    ) u_fpack (
        .sign    (rnd_sign),
        .exp_in  (rnd_exp),
        .mant_in (rnd_mant),
        .is_nan  (rnd_is_nan),
        .is_inf  (rnd_is_inf),
        .is_zero (rnd_is_zero),
        .result  (arith_result),
        .of      (fpack_of),
        .uf      (fpack_uf)
    );

    // =========================================================
    // RD PIPELINE — faddsub path (4 stages)
    // Advances with the pipeline when add_ready_in is asserted.
    // =========================================================

    logic [4:0] rd_add [3:0];

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            rd_add[0] <= '0;
            rd_add[1] <= '0;
            rd_add[2] <= '0;
            rd_add[3] <= '0;
        end else if (add_ready_in) begin
            rd_add[0] <= fpu_bus.rd;
            rd_add[1] <= rd_add[0];
            rd_add[2] <= rd_add[1];
            rd_add[3] <= rd_add[2];
        end
    end

    // =========================================================
    // RD PIPELINE — fmult path (4 stages)
    // =========================================================

    logic [4:0] rd_mul [3:0];

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            rd_mul[0] <= '0;
            rd_mul[1] <= '0;
            rd_mul[2] <= '0;
            rd_mul[3] <= '0;
        end else if (mul_ready_in) begin
            rd_mul[0] <= fpu_bus.rd;
            rd_mul[1] <= rd_mul[0];
            rd_mul[2] <= rd_mul[1];
            rd_mul[3] <= rd_mul[2];
        end
    end

    // =========================================================
    // RD PIPELINE — fp_fma path (5 stages)
    // =========================================================

    logic [4:0] rd_fma [4:0];

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            rd_fma[0] <= '0;
            rd_fma[1] <= '0;
            rd_fma[2] <= '0;
            rd_fma[3] <= '0;
            rd_fma[4] <= '0;
        end else if (fma_ready_in) begin
            rd_fma[0] <= fpu_bus.rd;
            rd_fma[1] <= rd_fma[0];
            rd_fma[2] <= rd_fma[1];
            rd_fma[3] <= rd_fma[2];
            rd_fma[4] <= rd_fma[3];
        end
    end

    // =========================================================
    // FCLASS — 1-cycle pipeline (FCLASS)
    // Takes raw rs1 bits directly (no funpack needed).
    // valid_in gated to FPU_CLASS ops only.
    // Result goes to integer register bank (int_wen).
    // =========================================================

    logic               class_ready_in;
    logic               class_valid_out;
    logic [XLEN-1:0]    class_result;
    logic [4:0]         class_fflags;   // always 0

    fclass #(.XLEN(XLEN)) u_fclass (
        .clk       (clk),
        .rst_n     (rst_n),
        .valid_in  (fpu_bus.valid_in && op_is_class),
        .ready_in  (class_ready_in),
        .valid_out (class_valid_out),
        .ready_out (1'b1),
        .in        (fpu_bus.rs1),
        .fmt       (fpu_bus.fmt),
        .result    (class_result),
        .fflags    (class_fflags)
    );

    // =========================================================
    // RD PIPELINE — fclass path (1 stage)
    // =========================================================

    logic [4:0] rd_class;

    always_ff @(posedge clk) begin
        if (!rst_n)
            rd_class <= '0;
        else if (class_ready_in)
            rd_class <= fpu_bus.rd;
    end

    // =========================================================
    // FMINMAX — 1-cycle pipeline (FMIN / FMAX)
    // valid_in gated to MIN/MAX ops only.
    // Result goes to FP register bank (fp_wen).
    // =========================================================

    logic               minmax_ready_in;
    logic               minmax_valid_out;
    logic [63:0]        minmax_result;
    logic [4:0]         minmax_fflags;

    fminmax u_fminmax (
        .clk         (clk),
        .rst_n       (rst_n),
        .valid_in    (fpu_bus.valid_in && op_is_minmax),
        .ready_in    (minmax_ready_in),
        .valid_out   (minmax_valid_out),
        .ready_out   (1'b1),

        .op          (fpu_bus.op),
        .fmt         (fpu_bus.fmt),

        .rs1         (fpu_bus.rs1),
        .rs2         (fpu_bus.rs2),

        .sign_a      (sign_a),
        .exp_a       (exp_a),
        .mant_a      (mant_a),
        .is_nan_a    (is_nan_a),
        .is_snan_a   (is_snan_a),
        .is_inf_a    (is_inf_a),
        .is_zero_a   (is_zero_a),

        .sign_b      (sign_b),
        .exp_b       (exp_b),
        .mant_b      (mant_b),
        .is_nan_b    (is_nan_b),
        .is_snan_b   (is_snan_b),
        .is_inf_b    (is_inf_b),
        .is_zero_b   (is_zero_b),

        .result      (minmax_result),
        .fflags_out  (minmax_fflags)
    );

    // =========================================================
    // RD PIPELINE — fminmax path (1 stage)
    // =========================================================

    logic [4:0] rd_minmax;

    always_ff @(posedge clk) begin
        if (!rst_n)
            rd_minmax <= '0;
        else if (minmax_ready_in)
            rd_minmax <= fpu_bus.rd;
    end

    // =========================================================
    // FCMP — 1-cycle pipeline (FEQ / FLT / FLE)
    // valid_in gated to CMP ops only.
    // Result is 0 or 1, written to integer register bank (int_wen).
    // =========================================================

    logic               cmp_ready_in;
    logic               cmp_valid_out;
    logic [XLEN-1:0]    cmp_result;
    logic [4:0]         cmp_fflags;

    fcmp #(.XLEN(XLEN)) u_fcmp (
        .clk         (clk),
        .rst_n       (rst_n),
        .valid_in    (fpu_bus.valid_in && op_is_cmp),
        .ready_in    (cmp_ready_in),
        .valid_out   (cmp_valid_out),
        .ready_out   (1'b1),

        .op          (fpu_bus.op),

        .sign_a      (sign_a),
        .exp_a       (exp_a),
        .mant_a      (mant_a),
        .is_nan_a    (is_nan_a),
        .is_snan_a   (is_snan_a),
        .is_inf_a    (is_inf_a),
        .is_zero_a   (is_zero_a),

        .sign_b      (sign_b),
        .exp_b       (exp_b),
        .mant_b      (mant_b),
        .is_nan_b    (is_nan_b),
        .is_snan_b   (is_snan_b),
        .is_inf_b    (is_inf_b),
        .is_zero_b   (is_zero_b),

        .result      (cmp_result),
        .fflags_out  (cmp_fflags)
    );

    // =========================================================
    // RD PIPELINE — fcmp path (1 stage)
    // =========================================================

    logic [4:0] rd_cmp;

    always_ff @(posedge clk) begin
        if (!rst_n)
            rd_cmp <= '0;
        else if (cmp_ready_in)
            rd_cmp <= fpu_bus.rd;
    end

    // =========================================================
    // FSGN — 1-cycle pipeline (FSGNJ / FSGNJN / FSGNJX)
    // valid_in gated to SGN ops only.
    // Takes raw rs1/rs2 bits directly (no funpack needed).
    // Result goes to FP register bank (fp_wen).
    // =========================================================

    logic               sgn_ready_in;
    logic               sgn_valid_out;
    logic [63:0]        sgn_result;
    logic [4:0]         sgn_fflags;

    fsgn #(.FP_WIDTH(XLEN)) u_fsgn (
        .clk        (clk),
        .rst_n      (rst_n),
        .valid_in   (fpu_bus.valid_in && op_is_sgn),
        .ready_in   (sgn_ready_in),
        .valid_out  (sgn_valid_out),
        .ready_out  (1'b1),
        .op         (fpu_bus.op),
        .a          (fpu_bus.rs1),
        .b          (fpu_bus.rs2),
        .result     (sgn_result),
        .fflags_out (sgn_fflags)
    );

    // =========================================================
    // RD PIPELINE — fsgn path (1 stage)
    // =========================================================

    logic [4:0] rd_sgn;

    always_ff @(posedge clk) begin
        if (!rst_n)
            rd_sgn <= '0;
        else if (sgn_ready_in)
            rd_sgn <= fpu_bus.rd;
    end

    // =========================================================
    // FDIVSQRT — FSM pipeline (FDIV / FSQRT)
    // Non-pipelined: ready_in asserted only in IDLE state.
    // Latency ~58 cycles. Output routed through fround + fpack.
    // =========================================================

    logic               divsqrt_ready_in;
    logic               divsqrt_valid_out;
    logic               divsqrt_sign;
    logic signed [12:0] divsqrt_exp;
    logic [54:0]        divsqrt_mant;
    logic [2:0]         divsqrt_grs;
    logic [2:0]         divsqrt_rm;
    logic               divsqrt_is_nan;
    logic               divsqrt_is_inf;
    logic               divsqrt_is_zero;
    logic [4:0]         divsqrt_fflags;

    fdivsqrt u_fdivsqrt (
        .clk         (clk),
        .rst_n       (rst_n),
        .valid_in    (fpu_bus.valid_in && op_is_divsqrt),
        .ready_in    (divsqrt_ready_in),
        .valid_out   (divsqrt_valid_out),
        .ready_out   (1'b1),

        .op          (fpu_bus.op),
        .rm          (fpu_bus.rm),

        .sign_a      (sign_a),
        .exp_a       (exp_a),
        .mant_a      (mant_a),
        .is_nan_a    (is_nan_a),
        .is_snan_a   (is_snan_a),
        .is_inf_a    (is_inf_a),
        .is_zero_a   (is_zero_a),

        .sign_b      (sign_b),
        .exp_b       (exp_b),
        .mant_b      (mant_b),
        .is_nan_b    (is_nan_b),
        .is_snan_b   (is_snan_b),
        .is_inf_b    (is_inf_b),
        .is_zero_b   (is_zero_b),

        .sign_out    (divsqrt_sign),
        .exp_out     (divsqrt_exp),
        .mant_out    (divsqrt_mant),
        .grs_out     (divsqrt_grs),
        .rm_out      (divsqrt_rm),
        .is_nan_out  (divsqrt_is_nan),
        .is_inf_out  (divsqrt_is_inf),
        .is_zero_out (divsqrt_is_zero),
        .fflags_out  (divsqrt_fflags)
    );

    // =========================================================
    // RD REGISTER — fdivsqrt path (single register, FSM latency)
    // Latched at the cycle valid_in is accepted (state==IDLE).
    // =========================================================

    logic [4:0] rd_divsqrt;

    always_ff @(posedge clk) begin
        if (!rst_n)
            rd_divsqrt <= '0;
        else if (divsqrt_ready_in && fpu_bus.valid_in && op_is_divsqrt)
            rd_divsqrt <= fpu_bus.rd;
    end

    // =========================================================
    // FCONVERT — 1-cycle pipeline (F2F / F2I / I2F)
    // valid_in gated to CVT ops only.
    // src_fmt/dst_fmt derived from op and fpu_bus.fmt:
    //   I2F : src=FMT_INT,        dst=fpu_bus.fmt (float)
    //   F2I : src=fpu_bus.fmt,    dst=FMT_INT
    //   F2F : src=fpu_bus.fmt,    dst=fpu_bus.fmt  (identity unless
    //         a second fmt field is added to the interface for cross-fmt)
    // F2I result → int_wen ; F2F/I2F result → fp_wen.
    // =========================================================

    fpu_fmt_e    conv_src_fmt, conv_dst_fmt;
    // F2F : src encoded in rs2[1:0] by the decoder (RISC-V convention),
    //       dst = fpu_bus.fmt
    // I2F : src = integer, dst = fpu_bus.fmt
    // F2I : src = fpu_bus.fmt, dst = integer
    assign conv_src_fmt = (fpu_bus.op == FPU_CVT_I2F) ? FMT_INT :
                          (fpu_bus.op == FPU_CVT_F2F)  ? fpu_fmt_e'(fpu_bus.rs2[1:0]) :
                                                          fpu_bus.fmt;
    assign conv_dst_fmt = (fpu_bus.op == FPU_CVT_F2I) ? FMT_INT : fpu_bus.fmt;

    logic        conv_ready_in;
    logic        conv_valid_out;
    logic [63:0] conv_result;
    logic [4:0]  conv_fflags;

    fconvert u_fconvert (
        .clk        (clk),
        .rst_n      (rst_n),
        .valid_in   (fpu_bus.valid_in && op_is_convert),
        .ready_in   (conv_ready_in),
        .valid_out  (conv_valid_out),
        .ready_out  (1'b1),

        .op         (fpu_bus.op),
        .src_fmt    (conv_src_fmt),
        .dst_fmt    (conv_dst_fmt),
        .rm         (fpu_bus.rm),

        .in_data    (fpu_bus.rs1),

        .out_data   (conv_result),
        .fflags_out (conv_fflags)
    );

    // =========================================================
    // RD PIPELINE — fconvert path (1 stage)
    // conv_is_int_r tracks F2I to steer result to int_wen.
    // =========================================================

    logic [4:0] rd_conv;
    logic       conv_is_int_r;

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            rd_conv       <= '0;
            conv_is_int_r <= 1'b0;
        end else if (conv_ready_in) begin
            rd_conv       <= fpu_bus.rd;
            conv_is_int_r <= (fpu_bus.op == FPU_CVT_F2I);
        end
    end

    // =========================================================
    // OUTPUT MUX
    //
    // Priority: fclass > fmult > faddsub (units fire mutually exclusive
    // because op_is_* are mutually exclusive).
    //
    // fflags[4]=NV [3]=DZ [2]=OF [1]=UF [0]=NX
    // fpack_of/uf OR'ed into the arith path flags.
    // =========================================================

    always_comb begin
        case (1'b1)
            op_is_class:    fpu_bus.ready_out = class_ready_in;
            op_is_cmp:      fpu_bus.ready_out = cmp_ready_in;
            op_is_sgn:      fpu_bus.ready_out = sgn_ready_in;
            op_is_convert:  fpu_bus.ready_out = conv_ready_in;
            op_is_addsub:   fpu_bus.ready_out = add_ready_in;
            op_is_mul:      fpu_bus.ready_out = mul_ready_in;
            op_is_minmax:   fpu_bus.ready_out = minmax_ready_in;
            op_is_fma:      fpu_bus.ready_out = fma_ready_in;
            op_is_divsqrt:  fpu_bus.ready_out = divsqrt_ready_in;
            default:        fpu_bus.ready_out = 1'b0;
        endcase
    end

    assign fpu_bus.valid_out = arith_valid_out | class_valid_out | minmax_valid_out |
                               cmp_valid_out   | sgn_valid_out  | conv_valid_out;

    assign fpu_bus.rd_out    = class_valid_out    ? rd_class      :
                               cmp_valid_out      ? rd_cmp        :
                               sgn_valid_out      ? rd_sgn        :
                               minmax_valid_out   ? rd_minmax     :
                               conv_valid_out     ? rd_conv       :
                               divsqrt_valid_out  ? rd_divsqrt   :
                               fma_valid_out      ? rd_fma[4]     :
                               mul_valid_out      ? rd_mul[3]     :
                                                    rd_add[3];
    assign fpu_bus.result    = class_valid_out  ? class_result  :
                               cmp_valid_out    ? cmp_result    :
                               sgn_valid_out    ? sgn_result    :
                               minmax_valid_out ? minmax_result :
                               conv_valid_out   ? conv_result   :
                                                  arith_result;
    assign fpu_bus.fp_wen    = arith_valid_out | minmax_valid_out | sgn_valid_out |
                               (conv_valid_out && !conv_is_int_r);
    assign fpu_bus.int_wen   = class_valid_out | cmp_valid_out |
                               (conv_valid_out &&  conv_is_int_r);
    assign fpu_bus.fflags    = arith_valid_out  ? (rnd_fflags | {2'b0, fpack_of, fpack_uf, 1'b0}) :
                               minmax_valid_out ? minmax_fflags :
                               cmp_valid_out    ? cmp_fflags    :
                               sgn_valid_out    ? sgn_fflags    :
                               conv_valid_out   ? conv_fflags   :
                                                  5'b0;

endmodule
