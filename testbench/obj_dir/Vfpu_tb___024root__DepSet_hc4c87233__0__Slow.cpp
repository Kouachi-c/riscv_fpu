// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfpu_tb.h for the primary calling header

#include "Vfpu_tb__pch.h"
#include "Vfpu_tb___024root.h"

VL_ATTR_COLD void Vfpu_tb___024root___eval_static__TOP(Vfpu_tb___024root* vlSelf);

VL_ATTR_COLD void Vfpu_tb___024root___eval_static(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___eval_static\n"); );
    // Body
    Vfpu_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vfpu_tb___024root___eval_static__TOP(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->fpu_tb__DOT__clk = 0U;
    vlSelf->fpu_tb__DOT__rst_n = 0U;
    vlSelf->fpu_tb__DOT__pass_cnt = 0U;
    vlSelf->fpu_tb__DOT__fail_cnt = 0U;
}

VL_ATTR_COLD void Vfpu_tb___024root___eval_final(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfpu_tb___024root___dump_triggers__stl(Vfpu_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfpu_tb___024root___eval_phase__stl(Vfpu_tb___024root* vlSelf);

VL_ATTR_COLD void Vfpu_tb___024root___eval_settle(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vfpu_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("fpu_tb.sv", 22, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vfpu_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfpu_tb___024root___dump_triggers__stl(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfpu_tb___024root___stl_sequent__TOP__0(Vfpu_tb___024root* vlSelf);

VL_ATTR_COLD void Vfpu_tb___024root___eval_stl(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vfpu_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vfpu_tb___024root___eval_triggers__stl(Vfpu_tb___024root* vlSelf);

VL_ATTR_COLD bool Vfpu_tb___024root___eval_phase__stl(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vfpu_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vfpu_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfpu_tb___024root___dump_triggers__act(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge fpu_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfpu_tb___024root___dump_triggers__nba(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge fpu_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfpu_tb___024root___ctor_var_reset(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->fpu_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__res = VL_RAND_RESET_Q(64);
    vlSelf->fpu_tb__DOT__rd_o = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__ff = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__fpw = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__intw = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__pass_cnt = 0;
    vlSelf->fpu_tb__DOT__fail_cnt = 0;
    vlSelf->fpu_tb__DOT__dut__DOT__op_is_addsub = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__op_is_minmax = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__op_is_cmp = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__op_is_fma = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__op_is_sgn = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__op_is_divsqrt = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__op_is_convert = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__sign_a = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__sign_b = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__sign_c = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__exp_a = VL_RAND_RESET_I(13);
    vlSelf->fpu_tb__DOT__dut__DOT__exp_b = VL_RAND_RESET_I(13);
    vlSelf->fpu_tb__DOT__dut__DOT__exp_c = VL_RAND_RESET_I(13);
    vlSelf->fpu_tb__DOT__dut__DOT__mant_a = VL_RAND_RESET_Q(53);
    vlSelf->fpu_tb__DOT__dut__DOT__mant_b = VL_RAND_RESET_Q(53);
    vlSelf->fpu_tb__DOT__dut__DOT__mant_c = VL_RAND_RESET_Q(53);
    vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__is_nan_c = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_a = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_b = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_c = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__is_snan_a = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__is_snan_b = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__is_snan_c = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__is_inf_c = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__is_zero_c = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_a = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_b = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_c = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__add_sign = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__add_exp = VL_RAND_RESET_I(13);
    vlSelf->fpu_tb__DOT__dut__DOT__add_mant = VL_RAND_RESET_Q(55);
    vlSelf->fpu_tb__DOT__dut__DOT__add_grs = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__add_rm = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__add_is_nan = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__add_is_inf = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__add_is_zero = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__add_fflags = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fadd_sub__valid_in = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__mul_sign = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__mul_exp = VL_RAND_RESET_I(13);
    vlSelf->fpu_tb__DOT__dut__DOT__mul_mant = VL_RAND_RESET_Q(55);
    vlSelf->fpu_tb__DOT__dut__DOT__mul_grs = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__mul_rm = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__mul_is_nan = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__mul_is_inf = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__mul_is_zero = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__mul_fflags = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fmult__valid_in = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__fma_sign_a_eff = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__fma_sign_c_eff = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__fma_sign = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__fma_exp = VL_RAND_RESET_I(13);
    vlSelf->fpu_tb__DOT__dut__DOT__fma_mant = VL_RAND_RESET_Q(55);
    vlSelf->fpu_tb__DOT__dut__DOT__fma_grs = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__fma_rm = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__fma_is_nan = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__fma_is_inf = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__fma_is_zero = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__fma_fflags = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fma__valid_in = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__arith_sign = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__arith_mant = VL_RAND_RESET_Q(55);
    vlSelf->fpu_tb__DOT__dut__DOT__arith_grs = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__arith_rm = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__arith_is_nan = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__arith_is_inf = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__arith_is_zero = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__rnd_exp = VL_RAND_RESET_I(13);
    vlSelf->fpu_tb__DOT__dut__DOT__rnd_mant = VL_RAND_RESET_Q(53);
    vlSelf->fpu_tb__DOT__dut__DOT__rnd_is_inf = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__arith_result = VL_RAND_RESET_Q(64);
    vlSelf->fpu_tb__DOT__dut__DOT__fpack_of = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__fpack_uf = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fpu_tb__DOT__dut__DOT__rd_add[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fpu_tb__DOT__dut__DOT__rd_mul[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->fpu_tb__DOT__dut__DOT__rd_fma[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->fpu_tb__DOT__dut__DOT__class_result = VL_RAND_RESET_Q(64);
    vlSelf->fpu_tb__DOT__dut__DOT__class_fflags = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fclass__valid_in = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__rd_class = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__minmax_result = VL_RAND_RESET_Q(64);
    vlSelf->fpu_tb__DOT__dut__DOT__minmax_fflags = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fminmax__valid_in = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__cmp_result = VL_RAND_RESET_Q(64);
    vlSelf->fpu_tb__DOT__dut__DOT__cmp_fflags = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fcmp__valid_in = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__sgn_result = VL_RAND_RESET_Q(64);
    vlSelf->fpu_tb__DOT__dut__DOT__sgn_fflags = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fsgn__valid_in = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_sign = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_exp = VL_RAND_RESET_I(13);
    vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_mant = VL_RAND_RESET_Q(55);
    vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_grs = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_rm = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_is_nan = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_is_inf = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_is_zero = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_fflags = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__conv_src_fmt = VL_RAND_RESET_I(2);
    vlSelf->fpu_tb__DOT__dut__DOT__conv_dst_fmt = VL_RAND_RESET_I(2);
    vlSelf->fpu_tb__DOT__dut__DOT__conv_result = VL_RAND_RESET_Q(64);
    vlSelf->fpu_tb__DOT__dut__DOT__conv_fflags = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fconvert__valid_in = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__rd_conv = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp64 = VL_RAND_RESET_I(11);
    vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant64 = VL_RAND_RESET_Q(52);
    vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp32 = VL_RAND_RESET_I(8);
    vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant32 = VL_RAND_RESET_I(23);
    vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp16 = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant16 = VL_RAND_RESET_I(10);
    vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp64 = VL_RAND_RESET_I(11);
    vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant64 = VL_RAND_RESET_Q(52);
    vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp32 = VL_RAND_RESET_I(8);
    vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant32 = VL_RAND_RESET_I(23);
    vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp16 = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant16 = VL_RAND_RESET_I(10);
    vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp64 = VL_RAND_RESET_I(11);
    vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant64 = VL_RAND_RESET_Q(52);
    vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp32 = VL_RAND_RESET_I(8);
    vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant32 = VL_RAND_RESET_I(23);
    vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp16 = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant16 = VL_RAND_RESET_I(10);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe = VL_RAND_RESET_I(4);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s1 = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s2 = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s3 = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_exp = VL_RAND_RESET_I(13);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_a = VL_RAND_RESET_Q(54);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_b = VL_RAND_RESET_Q(54);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_sign_a = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_sign_b = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_op = VL_RAND_RESET_I(6);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_is_nan = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_is_inf = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_inf_sign = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_grs = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_rm = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__align_diff = VL_RAND_RESET_I(13);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__shift_amt = VL_RAND_RESET_I(7);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__grs_ext = VL_RAND_RESET_Q(54);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__eff_sign_b = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__inf_minus_inf = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_exp = VL_RAND_RESET_I(13);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_mant = VL_RAND_RESET_Q(54);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_sign = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_is_nan = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_is_inf = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_inf_sign = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_grs = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_rm = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_exp = VL_RAND_RESET_I(13);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_mant = VL_RAND_RESET_Q(55);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_sign = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_is_nan = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_is_inf = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_inf_sign = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_grs = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_rm = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe = VL_RAND_RESET_I(4);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_sign = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_exp = VL_RAND_RESET_I(13);
    VL_RAND_RESET_W(106, vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_prod);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_fflags = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_is_nan = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_is_inf = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_is_zero = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_rm = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_sign = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_exp = VL_RAND_RESET_I(13);
    VL_RAND_RESET_W(106, vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_prod);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_fflags = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_is_nan = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_is_inf = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_is_zero = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_rm = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_sign = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_exp = VL_RAND_RESET_I(13);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_mant = VL_RAND_RESET_Q(55);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_grs = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_fflags = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_is_nan = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_is_inf = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_is_zero = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_rm = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_rm = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_sign_mul = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_exp_mul = VL_RAND_RESET_I(13);
    VL_RAND_RESET_W(106, vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_prod);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_sign_c = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_exp_c = VL_RAND_RESET_I(13);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_mant_c = VL_RAND_RESET_Q(53);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_fflags = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_is_nan = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_is_inf = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_sign_sp = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_rm = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_sign_mul = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_exp_mul = VL_RAND_RESET_I(13);
    VL_RAND_RESET_W(106, vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_prod);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_sign_c = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_exp_c = VL_RAND_RESET_I(13);
    VL_RAND_RESET_W(106, vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_mant_c_ext);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_fflags = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_is_nan = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_is_inf = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_sign_sp = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_rm = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_sign_big = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_sign_small = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_exp = VL_RAND_RESET_I(13);
    VL_RAND_RESET_W(106, vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big);
    VL_RAND_RESET_W(106, vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_fflags = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_is_nan = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_is_inf = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_sign_sp = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_rm = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sign = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_exp = VL_RAND_RESET_I(13);
    VL_RAND_RESET_W(107, vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_fflags = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_is_nan = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_is_inf = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sign_sp = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__lz_pos = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(107, vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_exp = VL_RAND_RESET_I(13);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__round_up = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__round_result = VL_RAND_RESET_Q(54);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__round_carry = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__renorm_exp = VL_RAND_RESET_I(13);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__exp_biased = VL_RAND_RESET_I(13);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__exp_field = VL_RAND_RESET_I(11);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__mant_field = VL_RAND_RESET_Q(52);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__mant_shifted = VL_RAND_RESET_Q(53);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__shift = VL_RAND_RESET_I(7);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_zero = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_inf = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_qnan = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_snan = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_subnormal = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask = VL_RAND_RESET_I(10);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp64 = VL_RAND_RESET_I(11);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant64 = VL_RAND_RESET_Q(52);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp32 = VL_RAND_RESET_I(8);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant32 = VL_RAND_RESET_I(23);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp16 = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant16 = VL_RAND_RESET_I(10);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__canonical_nan = VL_RAND_RESET_Q(64);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__a_lt_b = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_result = VL_RAND_RESET_Q(64);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_fflags = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__a_eq_b = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__a_lt_b = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__comb_fflags = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__op_sqrt = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__sign_r = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__exp_r = VL_RAND_RESET_I(13);
    VL_RAND_RESET_W(106, vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__dividend);
    VL_RAND_RESET_W(106, vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__divisor);
    VL_RAND_RESET_W(106, vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__quotient = VL_RAND_RESET_Q(56);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__iter_cnt = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(106, vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rem_shifted);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__fflags_r = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_nan_r = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_inf_r = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_zero_r = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rm_r = VL_RAND_RESET_I(3);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp64 = VL_RAND_RESET_I(11);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp32 = VL_RAND_RESET_I(8);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp16 = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant64 = VL_RAND_RESET_Q(52);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant32 = VL_RAND_RESET_I(23);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant16 = VL_RAND_RESET_I(10);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp_unbiased = VL_RAND_RESET_I(13);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant_norm = VL_RAND_RESET_Q(53);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_nan = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_inf = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_zero = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_subnormal = VL_RAND_RESET_I(1);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result = VL_RAND_RESET_Q(64);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags = VL_RAND_RESET_I(5);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz = VL_RAND_RESET_I(32);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__int_val = VL_RAND_RESET_Q(64);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__abs_val = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__tmp_mant);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk6__DOT__exp_b = VL_RAND_RESET_I(13);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk7__DOT__exp_b = VL_RAND_RESET_I(13);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk8__DOT__exp_b = VL_RAND_RESET_I(13);
    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk9__DOT__int_res = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__fpu_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
