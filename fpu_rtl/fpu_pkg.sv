/************************************************************************************************************
* @file    fpu_pkg.sv
* @brief   FPU Package with common definitions and types
* @details This package defines common parameters, types, and functions used across the FPU implementation.
*
* @author  ekonihc
* @date    28/04/2026
*************************************************************************************************************/

`ifndef FPU_PKG_SV
`define FPU_PKG_SV

package fpkg;

    // =========================
    // Paramètres globaux
    // =========================
    parameter int XLEN = 64;

    // =========================
    // Formats flottants
    // =========================
    typedef enum logic [1:0] {
        FMT_FP16 = 2'b00,
        FMT_FP32 = 2'b01,
        FMT_FP64 = 2'b10,
        FMT_INT  = 2'b11
    } fpu_fmt_e;

    // =========================
    // Rounding modes IEEE 754
    // =========================
    typedef enum logic [2:0] {
        RM_RNE = 3'b000, // round to nearest even
        RM_RTZ = 3'b001, // toward zero
        RM_RDN = 3'b010, // toward -inf
        RM_RUP = 3'b011, // toward +inf
        RM_RMM = 3'b100  // nearest, max magnitude
    } fpu_rm_e;

    // =========================
    // Opérations FPU
    // =========================
    typedef enum logic [5:0] {

        // Arithmetic
        FPU_ADD,
        FPU_SUB,
        FPU_MUL,
        FPU_DIV,
        FPU_SQRT,

        // FMA
        FPU_FMA,
        FPU_FMSUB,
        FPU_FNMSUB,
        FPU_FNMADD,

        // Min/Max
        FPU_MIN,
        FPU_MAX,

        // Sign injection
        FPU_SGNJ,
        FPU_SGNJN,
        FPU_SGNJX,

        // Comparisons
        FPU_CMP_EQ,
        FPU_CMP_LT,
        FPU_CMP_LE,

        // Conversion
        FPU_CVT_F2F,
        FPU_CVT_F2I,
        FPU_CVT_I2F,

        // Classification
        FPU_CLASS

    } fpu_op_e;

    // =========================
    // Flags IEEE 754
    // =========================
    typedef struct packed {
        logic NX; // Inexact
        logic UF; // Underflow
        logic OF; // Overflow
        logic DZ; // Divide by zero
        logic NV; // Invalid
    } fflags_t;

    // =========================
    // Encodage vectorisé des flags
    // =========================
    function automatic logic [4:0] pack_fflags(fflags_t f);
        return {f.NV, f.DZ, f.OF, f.UF, f.NX};
    endfunction

    function automatic fflags_t unpack_fflags(logic [4:0] v);
        fflags_t f;
        {f.NV, f.DZ, f.OF, f.UF, f.NX} = v;
        return f;
    endfunction

    // =========================
    // Détection cas spéciaux
    // =========================
    typedef enum logic [2:0] {
        FP_ZERO,
        FP_SUBNORMAL,
        FP_NORMAL,
        FP_INF,
        FP_QNAN,
        FP_SNAN
    } fp_class_e;

    // =========================
    // Structure interne (unpacked FP64)
    // =========================
    typedef struct packed {
        logic        sign;
        logic [10:0] exp;
        logic [51:0] mant;
    } fp64_t;

    typedef enum logic [1:0] {
        INT32,
        INT64
    } int_fmt_e;

    typedef enum logic {
        SIGNED,
        UNSIGNED
    } int_sign_e;

endpackage

`endif // FPU_PKG_SV