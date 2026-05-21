// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfpu_tb.h for the primary calling header

#include "Vfpu_tb__pch.h"
#include "Vfpu_tb__Syms.h"
#include "Vfpu_tb___024root.h"

VL_INLINE_OPT void Vfpu_tb___024root___nba_comb__TOP__0(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->fpu_tb__DOT__dut__DOT__sign_c = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__op_is_addsub = (
                                                   (0U 
                                                    == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                                                   | (1U 
                                                      == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)));
    vlSelf->fpu_tb__DOT__dut__DOT__op_is_minmax = (
                                                   (9U 
                                                    == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                                                   | (0xaU 
                                                      == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)));
    vlSelf->fpu_tb__DOT__dut__DOT__op_is_cmp = (((0xeU 
                                                  == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                                                 | (0xfU 
                                                    == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))) 
                                                | (0x10U 
                                                   == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)));
    vlSelf->fpu_tb__DOT__dut__DOT__op_is_fma = ((((5U 
                                                   == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                                                  | (6U 
                                                     == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))) 
                                                 | (7U 
                                                    == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))) 
                                                | (8U 
                                                   == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)));
    vlSelf->fpu_tb__DOT__dut__DOT__op_is_sgn = (((0xbU 
                                                  == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                                                 | (0xcU 
                                                    == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))) 
                                                | (0xdU 
                                                   == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)));
    vlSelf->fpu_tb__DOT__dut__DOT__op_is_convert = 
        (((0x11U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
          | (0x12U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))) 
         | (0x13U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 2U;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_zero = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_inf = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_qnan = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_snan = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_subnormal = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fclass__valid_in 
        = ((IData)(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in) 
           & (0x14U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)));
    vlSelf->fpu_tb__DOT__dut__DOT__conv_dst_fmt = (
                                                   (0x12U 
                                                    == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                                                    ? 3U
                                                    : (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.fmt));
    vlSelf->fpu_tb__DOT__dut__DOT__conv_src_fmt = (
                                                   (0x13U 
                                                    == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                                                    ? 3U
                                                    : 
                                                   (3U 
                                                    & ((0x11U 
                                                        == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                                                        ? (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.rs2)
                                                        : (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.fmt))));
    vlSelf->fpu_tb__DOT__dut__DOT__op_is_divsqrt = 
        ((3U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
         | (4U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)));
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fmult__valid_in 
        = ((IData)(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in) 
           & (2U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)));
    vlSelf->fpu_tb__DOT__dut__DOT__sign_a = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__sign_b = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__exp_c = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__mant_c = 0ULL;
    vlSelf->fpu_tb__DOT__dut__DOT__is_zero_c = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_inf_c = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_nan_c = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_c = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_snan_c = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_c = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__exp_a = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__mant_a = 0ULL;
    vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_a = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_snan_a = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_a = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__exp_b = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__mant_b = 0ULL;
    vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_b = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_snan_b = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_b = 0U;
    if ((2U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.fmt))) {
        vlSelf->fpu_tb__DOT__dut__DOT__sign_c = (1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__fpu_tb__DOT__bus.rs3 
                                                            >> 0x3fU)));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__canonical_nan = 0x7ff8000000000000ULL;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign 
            = (1U & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                             >> 0x3fU)));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp64 
            = (0x7ffU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                 >> 0x34U)));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant64 
            = (0xfffffffffffffULL & vlSymsp->TOP__fpu_tb__DOT__bus.rs1);
        if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp64))) {
            if ((0ULL == vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant64)) {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 0U;
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_zero = 1U;
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 1U;
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_subnormal = 1U;
            }
        } else if ((0x7ffU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp64))) {
            if ((0ULL == vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant64)) {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 3U;
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_inf = 1U;
            } else if ((1U & (IData)((vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant64 
                                      >> 0x33U)))) {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 4U;
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_qnan = 1U;
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 5U;
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_snan = 1U;
            }
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 2U;
        }
        vlSelf->fpu_tb__DOT__dut__DOT__sign_a = (1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                                            >> 0x3fU)));
        vlSelf->fpu_tb__DOT__dut__DOT__sign_b = (1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                                            >> 0x3fU)));
        vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp64 
            = (0x7ffU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs3 
                                 >> 0x34U)));
        vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant64 
            = (0xfffffffffffffULL & vlSymsp->TOP__fpu_tb__DOT__bus.rs3);
        if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp64))) {
            if ((0ULL == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant64)) {
                vlSelf->fpu_tb__DOT__dut__DOT__is_zero_c = 1U;
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_c = 1U;
                vlSelf->fpu_tb__DOT__dut__DOT__exp_c = 0x1c02U;
                vlSelf->fpu_tb__DOT__dut__DOT__mant_c 
                    = vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant64;
            }
        } else if ((0x7ffU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp64))) {
            if ((0ULL == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant64)) {
                vlSelf->fpu_tb__DOT__dut__DOT__is_inf_c = 1U;
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__is_nan_c = 1U;
                if ((1U & (IData)((vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant64 
                                   >> 0x33U)))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_c = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_snan_c = 1U;
                }
            }
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__exp_c = 
                (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp64) 
                            - (IData)(0x3ffU)));
            vlSelf->fpu_tb__DOT__dut__DOT__mant_c = 
                (0x10000000000000ULL | vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant64);
        }
        vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp64 
            = (0x7ffU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                 >> 0x34U)));
        vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant64 
            = (0xfffffffffffffULL & vlSymsp->TOP__fpu_tb__DOT__bus.rs1);
        if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp64))) {
            if ((0ULL == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant64)) {
                vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a = 1U;
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_a = 1U;
                vlSelf->fpu_tb__DOT__dut__DOT__exp_a = 0x1c02U;
                vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                    = vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant64;
            }
        } else if ((0x7ffU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp64))) {
            if ((0ULL == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant64)) {
                vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a = 1U;
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a = 1U;
                if ((1U & (IData)((vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant64 
                                   >> 0x33U)))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_a = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_snan_a = 1U;
                }
            }
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__exp_a = 
                (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp64) 
                            - (IData)(0x3ffU)));
            vlSelf->fpu_tb__DOT__dut__DOT__mant_a = 
                (0x10000000000000ULL | vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant64);
        }
        vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp64 
            = (0x7ffU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                 >> 0x34U)));
        vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant64 
            = (0xfffffffffffffULL & vlSymsp->TOP__fpu_tb__DOT__bus.rs2);
        if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp64))) {
            if ((0ULL == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant64)) {
                vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b = 1U;
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_b = 1U;
                vlSelf->fpu_tb__DOT__dut__DOT__exp_b = 0x1c02U;
                vlSelf->fpu_tb__DOT__dut__DOT__mant_b 
                    = vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant64;
            }
        } else if ((0x7ffU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp64))) {
            if ((0ULL == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant64)) {
                vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b = 1U;
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b = 1U;
                if ((1U & (IData)((vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant64 
                                   >> 0x33U)))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_b = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_snan_b = 1U;
                }
            }
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__exp_b = 
                (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp64) 
                            - (IData)(0x3ffU)));
            vlSelf->fpu_tb__DOT__dut__DOT__mant_b = 
                (0x10000000000000ULL | vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant64);
        }
    } else if ((1U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.fmt))) {
        if ((0xffffffffU == (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs3 
                                     >> 0x20U)))) {
            vlSelf->fpu_tb__DOT__dut__DOT__sign_c = 
                (1U & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs3 
                               >> 0x1fU)));
        }
        vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__canonical_nan = 0xffffffff7fc00000ULL;
        if ((0xffffffffU == (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                     >> 0x20U)))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign 
                = (1U & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                 >> 0x1fU)));
            vlSelf->fpu_tb__DOT__dut__DOT__sign_a = 
                (1U & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                               >> 0x1fU)));
        }
        if ((0xffffffffU != (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                     >> 0x20U)))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 4U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_qnan = 1U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a = 1U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_a = 1U;
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp32 
                = (0xffU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                    >> 0x17U)));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant32 
                = (0x7fffffU & (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.rs1));
            if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp32))) {
                if ((0U == vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant32)) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 0U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_zero = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 1U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_subnormal = 1U;
                }
            } else if ((0xffU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp32))) {
                if ((0U == vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant32)) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 3U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_inf = 1U;
                } else if ((0x400000U & vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant32)) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 4U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_qnan = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 5U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_snan = 1U;
                }
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 2U;
            }
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp32 
                = (0xffU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                    >> 0x17U)));
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant32 
                = (0x7fffffU & (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.rs1));
            if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp32))) {
                if ((0U == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant32)) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_a = 1U;
                    vlSelf->fpu_tb__DOT__dut__DOT__exp_a = 0x1f82U;
                    vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                        = ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant32)) 
                           << 0x1dU);
                }
            } else if ((0xffU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp32))) {
                if ((0U == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant32)) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a = 1U;
                    if ((0x400000U & vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant32)) {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_a = 1U;
                    } else {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_snan_a = 1U;
                    }
                }
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__exp_a 
                    = (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp32) 
                                  - (IData)(0x7fU)));
                vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                    = (0x10000000000000ULL | ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant32)) 
                                              << 0x1dU));
            }
        }
        if ((0xffffffffU == (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                     >> 0x20U)))) {
            vlSelf->fpu_tb__DOT__dut__DOT__sign_b = 
                (1U & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                               >> 0x1fU)));
        }
        if ((0xffffffffU != (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs3 
                                     >> 0x20U)))) {
            vlSelf->fpu_tb__DOT__dut__DOT__is_nan_c = 1U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_c = 1U;
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp32 
                = (0xffU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs3 
                                    >> 0x17U)));
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant32 
                = (0x7fffffU & (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.rs3));
            if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp32))) {
                if ((0U == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant32)) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_zero_c = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_c = 1U;
                    vlSelf->fpu_tb__DOT__dut__DOT__exp_c = 0x1f82U;
                    vlSelf->fpu_tb__DOT__dut__DOT__mant_c 
                        = ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant32)) 
                           << 0x1dU);
                }
            } else if ((0xffU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp32))) {
                if ((0U == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant32)) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_inf_c = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_nan_c = 1U;
                    if ((0x400000U & vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant32)) {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_c = 1U;
                    } else {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_snan_c = 1U;
                    }
                }
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__exp_c 
                    = (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp32) 
                                  - (IData)(0x7fU)));
                vlSelf->fpu_tb__DOT__dut__DOT__mant_c 
                    = (0x10000000000000ULL | ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant32)) 
                                              << 0x1dU));
            }
        }
        if ((0xffffffffU != (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                     >> 0x20U)))) {
            vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b = 1U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_b = 1U;
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp32 
                = (0xffU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                    >> 0x17U)));
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant32 
                = (0x7fffffU & (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.rs2));
            if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp32))) {
                if ((0U == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant32)) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_b = 1U;
                    vlSelf->fpu_tb__DOT__dut__DOT__exp_b = 0x1f82U;
                    vlSelf->fpu_tb__DOT__dut__DOT__mant_b 
                        = ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant32)) 
                           << 0x1dU);
                }
            } else if ((0xffU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp32))) {
                if ((0U == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant32)) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b = 1U;
                    if ((0x400000U & vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant32)) {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_b = 1U;
                    } else {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_snan_b = 1U;
                    }
                }
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__exp_b 
                    = (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp32) 
                                  - (IData)(0x7fU)));
                vlSelf->fpu_tb__DOT__dut__DOT__mant_b 
                    = (0x10000000000000ULL | ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant32)) 
                                              << 0x1dU));
            }
        }
    } else {
        vlSelf->fpu_tb__DOT__dut__DOT__sign_c = ((0U 
                                                  == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.fmt)) 
                                                 && (1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__fpu_tb__DOT__bus.rs3 
                                                                >> 0xfU))));
        if ((0U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.fmt))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__canonical_nan = 0xffffffffffff7e00ULL;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp16 
                = (0x1fU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                    >> 0xaU)));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant16 
                = (0x3ffU & (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.rs1));
            if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp16))) {
                if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant16))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 0U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_zero = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 1U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_subnormal = 1U;
                }
            } else if ((0x1fU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp16))) {
                if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant16))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 3U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_inf = 1U;
                } else if ((0x200U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant16))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 4U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_qnan = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 5U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_snan = 1U;
                }
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 2U;
            }
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp16 
                = (0x1fU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs3 
                                    >> 0xaU)));
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant16 
                = (0x3ffU & (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.rs3));
            if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp16))) {
                if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant16))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_zero_c = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_c = 1U;
                    vlSelf->fpu_tb__DOT__dut__DOT__exp_c = 0x1ff2U;
                    vlSelf->fpu_tb__DOT__dut__DOT__mant_c 
                        = ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant16)) 
                           << 0x2aU);
                }
            } else if ((0x1fU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp16))) {
                if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant16))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_inf_c = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_nan_c = 1U;
                    if ((0x200U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant16))) {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_c = 1U;
                    } else {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_snan_c = 1U;
                    }
                }
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__exp_c 
                    = (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp16) 
                                  - (IData)(0xfU)));
                vlSelf->fpu_tb__DOT__dut__DOT__mant_c 
                    = (0x10000000000000ULL | ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant16)) 
                                              << 0x2aU));
            }
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp16 
                = (0x1fU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                    >> 0xaU)));
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant16 
                = (0x3ffU & (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.rs1));
            if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp16))) {
                if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant16))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_a = 1U;
                    vlSelf->fpu_tb__DOT__dut__DOT__exp_a = 0x1ff2U;
                    vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                        = ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant16)) 
                           << 0x2aU);
                }
            } else if ((0x1fU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp16))) {
                if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant16))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a = 1U;
                    if ((0x200U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant16))) {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_a = 1U;
                    } else {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_snan_a = 1U;
                    }
                }
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__exp_a 
                    = (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp16) 
                                  - (IData)(0xfU)));
                vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                    = (0x10000000000000ULL | ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant16)) 
                                              << 0x2aU));
            }
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp16 
                = (0x1fU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                    >> 0xaU)));
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant16 
                = (0x3ffU & (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.rs2));
            if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp16))) {
                if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant16))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_b = 1U;
                    vlSelf->fpu_tb__DOT__dut__DOT__exp_b = 0x1ff2U;
                    vlSelf->fpu_tb__DOT__dut__DOT__mant_b 
                        = ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant16)) 
                           << 0x2aU);
                }
            } else if ((0x1fU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp16))) {
                if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant16))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b = 1U;
                    if ((0x200U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant16))) {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_b = 1U;
                    } else {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_snan_b = 1U;
                    }
                }
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__exp_b 
                    = (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp16) 
                                  - (IData)(0xfU)));
                vlSelf->fpu_tb__DOT__dut__DOT__mant_b 
                    = (0x10000000000000ULL | ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant16)) 
                                              << 0x2aU));
            }
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__canonical_nan = 0x7ff8000000000000ULL;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 2U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_zero = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_inf = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_qnan = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_snan = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_subnormal = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__exp_c = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__mant_c = 0ULL;
            vlSelf->fpu_tb__DOT__dut__DOT__is_zero_c = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_inf_c = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_nan_c = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_c = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_snan_c = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_c = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__exp_a = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__mant_a = 0ULL;
            vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_a = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_snan_a = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_a = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__exp_b = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__mant_b = 0ULL;
            vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_b = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_snan_b = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_b = 0U;
        }
        vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign 
            = ((0U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.fmt)) 
               && (1U & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                 >> 0xfU))));
        vlSelf->fpu_tb__DOT__dut__DOT__sign_a = ((0U 
                                                  == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.fmt)) 
                                                 && (1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                                                >> 0xfU))));
        vlSelf->fpu_tb__DOT__dut__DOT__sign_b = ((0U 
                                                  == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.fmt)) 
                                                 && (1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                                                >> 0xfU))));
    }
    vlSelf->fpu_tb__DOT__dut__DOT__fma_sign_c_eff = 
        ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_c) 
         ^ ((6U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
            | (8U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))));
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fadd_sub__valid_in 
        = ((IData)(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in) 
           & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_addsub));
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fminmax__valid_in 
        = ((IData)(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in) 
           & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_minmax));
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fcmp__valid_in 
        = ((IData)(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in) 
           & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_cmp));
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fma__valid_in 
        = ((IData)(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in) 
           & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_fma));
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fsgn__valid_in 
        = ((IData)(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in) 
           & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_sgn));
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fconvert__valid_in 
        = ((IData)(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in) 
           & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_convert));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask 
        = ((0x3f8U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask)) 
           | ((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign) 
                & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_subnormal)) 
               << 2U) | ((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign) 
                           & (2U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out))) 
                          << 1U) | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_inf)))));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask 
        = ((0x3e7U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask)) 
           | ((((~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign)) 
                & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_zero)) 
               << 4U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign) 
                          & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_zero)) 
                         << 3U)));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask 
        = ((0x39fU & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask)) 
           | ((((~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign)) 
                & (2U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out))) 
               << 6U) | (((~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign)) 
                          & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_subnormal)) 
                         << 5U)));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask 
        = ((0x27fU & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask)) 
           | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_snan) 
               << 8U) | (((~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign)) 
                          & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_inf)) 
                         << 7U)));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask 
        = ((0x1ffU & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask)) 
           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_qnan) 
              << 9U));
    vlSymsp->TOP__fpu_tb__DOT__bus.ready_out = ((((
                                                   (((((0x14U 
                                                        == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_cmp)) 
                                                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_sgn)) 
                                                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_convert)) 
                                                    | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_addsub)) 
                                                   | (2U 
                                                      == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))) 
                                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_minmax)) 
                                                 | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_fma)) 
                                                || ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_divsqrt) 
                                                    && (0U 
                                                        == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))));
    vlSelf->fpu_tb__DOT__dut__DOT__fma_sign_a_eff = 
        ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a) 
         ^ ((7U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
            | (8U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_fflags = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__comb_fflags = 0U;
    if (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a) 
         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b))) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__comb_fflags 
            = ((0xeU == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                ? ((0xfU & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__comb_fflags)) 
                   | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_a) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_b)) 
                      << 4U)) : (((0xfU == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                                  || (0x10U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)))
                                  ? (0x10U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__comb_fflags))
                                  : 0U));
    }
    vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__a_eq_b 
        = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a) 
            & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b)) 
           || (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b))
                ? ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a) 
                   == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b))
                : ((1U & (~ ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                             | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b)))) 
                   && ((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a) 
                         == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b)) 
                        & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a) 
                           == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b))) 
                       & (vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                          == vlSelf->fpu_tb__DOT__dut__DOT__mant_b)))));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__a_lt_b 
        = ((1U & (~ ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a) 
                     & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b)))) 
           && (1U & (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                      & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b))
                      ? ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a) 
                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b)))
                      : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a)
                          ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a)
                          : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b)
                              ? (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b))
                              : (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a) 
                                  ^ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b))
                                  ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a)
                                  : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a)
                                      ? (VL_GTS_III(13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a), (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b)) 
                                         | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a) 
                                             == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b)) 
                                            & (vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                                               > vlSelf->fpu_tb__DOT__dut__DOT__mant_b)))
                                      : (VL_LTS_III(13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a), (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b)) 
                                         | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a) 
                                             == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b)) 
                                            & (vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                                               < vlSelf->fpu_tb__DOT__dut__DOT__mant_b))))))))));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__a_lt_b 
        = (1U & (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a) 
                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b))
                  ? ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a) 
                     & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b)))
                  : (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                      & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b))
                      ? ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a) 
                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b)))
                      : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a)
                          ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a)
                          : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b)
                              ? (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b))
                              : (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a) 
                                  ^ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b))
                                  ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a)
                                  : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a)
                                      ? (VL_GTS_III(13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a), (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b)) 
                                         | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a) 
                                             == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b)) 
                                            & (vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                                               > vlSelf->fpu_tb__DOT__dut__DOT__mant_b)))
                                      : (VL_LTS_III(13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a), (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b)) 
                                         | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a) 
                                             == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b)) 
                                            & (vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                                               < vlSelf->fpu_tb__DOT__dut__DOT__mant_b))))))))));
    if (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a) 
         & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b))) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_fflags 
            = (0x10U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_fflags));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_result 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__canonical_nan;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_fflags 
            = ((0xfU & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_fflags)) 
               | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_a) 
                  << 4U));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_result 
            = vlSymsp->TOP__fpu_tb__DOT__bus.rs2;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_fflags 
            = ((0xfU & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_fflags)) 
               | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_b) 
                  << 4U));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_result 
            = vlSymsp->TOP__fpu_tb__DOT__bus.rs1;
    } else {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_result 
            = ((9U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                ? ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__a_lt_b)
                    ? vlSymsp->TOP__fpu_tb__DOT__bus.rs1
                    : vlSymsp->TOP__fpu_tb__DOT__bus.rs2)
                : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__a_lt_b)
                    ? vlSymsp->TOP__fpu_tb__DOT__bus.rs2
                    : vlSymsp->TOP__fpu_tb__DOT__bus.rs1));
    }
}
