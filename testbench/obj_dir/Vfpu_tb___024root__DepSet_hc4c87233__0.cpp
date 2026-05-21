// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfpu_tb.h for the primary calling header

#include "Vfpu_tb__pch.h"
#include "Vfpu_tb___024root.h"

VlCoroutine Vfpu_tb___024root___eval_initial__TOP__Vtiming__0(Vfpu_tb___024root* vlSelf);
VlCoroutine Vfpu_tb___024root___eval_initial__TOP__Vtiming__1(Vfpu_tb___024root* vlSelf);
VlCoroutine Vfpu_tb___024root___eval_initial__TOP__Vtiming__2(Vfpu_tb___024root* vlSelf);

void Vfpu_tb___024root___eval_initial(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___eval_initial\n"); );
    // Body
    Vfpu_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vfpu_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vfpu_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__fpu_tb__DOT__clk__0 
        = vlSelf->fpu_tb__DOT__clk;
}

VlCoroutine Vfpu_tb___024root___eval_initial__TOP__Vtiming__0__0(Vfpu_tb___024root* vlSelf);
VlCoroutine Vfpu_tb___024root___eval_initial__TOP__Vtiming__0__1(Vfpu_tb___024root* vlSelf);
VlCoroutine Vfpu_tb___024root___eval_initial__TOP__Vtiming__0__2(Vfpu_tb___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vfpu_tb___024root___eval_initial__TOP__Vtiming__0(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    co_await Vfpu_tb___024root___eval_initial__TOP__Vtiming__0__0(vlSelf);
    co_await Vfpu_tb___024root___eval_initial__TOP__Vtiming__0__1(vlSelf);
    co_await Vfpu_tb___024root___eval_initial__TOP__Vtiming__0__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vfpu_tb___024root___eval_initial__TOP__Vtiming__2(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "fpu_tb.sv", 
                                           31);
        vlSelf->fpu_tb__DOT__clk = (1U & (~ (IData)(vlSelf->fpu_tb__DOT__clk)));
    }
}

void Vfpu_tb___024root___act_comb__TOP__0(Vfpu_tb___024root* vlSelf);

void Vfpu_tb___024root___eval_act(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___eval_act\n"); );
    // Body
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        Vfpu_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vfpu_tb___024root___nba_sequent__TOP__0(Vfpu_tb___024root* vlSelf);
void Vfpu_tb___024root___nba_comb__TOP__0(Vfpu_tb___024root* vlSelf);

void Vfpu_tb___024root___eval_nba(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vfpu_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vfpu_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}

void Vfpu_tb___024root___timing_resume(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_he2390f0c__0.resume("@(posedge fpu_tb.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vfpu_tb___024root___timing_commit(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_he2390f0c__0.commit("@(posedge fpu_tb.clk)");
    }
}

void Vfpu_tb___024root___eval_triggers__act(Vfpu_tb___024root* vlSelf);

bool Vfpu_tb___024root___eval_phase__act(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vfpu_tb___024root___eval_triggers__act(vlSelf);
    Vfpu_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vfpu_tb___024root___timing_resume(vlSelf);
        Vfpu_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vfpu_tb___024root___eval_phase__nba(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vfpu_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfpu_tb___024root___dump_triggers__nba(Vfpu_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfpu_tb___024root___dump_triggers__act(Vfpu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfpu_tb___024root___eval(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vfpu_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("fpu_tb.sv", 22, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vfpu_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("fpu_tb.sv", 22, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vfpu_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vfpu_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vfpu_tb___024root___eval_debug_assertions(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
