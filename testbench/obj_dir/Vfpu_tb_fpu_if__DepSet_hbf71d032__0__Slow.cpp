// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfpu_tb.h for the primary calling header

#include "Vfpu_tb__pch.h"
#include "Vfpu_tb_fpu_if.h"

VL_ATTR_COLD void Vfpu_tb_fpu_if___ctor_var_reset(Vfpu_tb_fpu_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfpu_tb_fpu_if___ctor_var_reset\n"); );
    // Body
    vlSelf->valid_in = VL_RAND_RESET_I(1);
    vlSelf->ready_out = VL_RAND_RESET_I(1);
    vlSelf->ready_in = VL_RAND_RESET_I(1);
    vlSelf->op = VL_RAND_RESET_I(6);
    vlSelf->fmt = VL_RAND_RESET_I(2);
    vlSelf->rm = VL_RAND_RESET_I(3);
    vlSelf->rd = VL_RAND_RESET_I(5);
    vlSelf->rs1 = VL_RAND_RESET_Q(64);
    vlSelf->rs2 = VL_RAND_RESET_Q(64);
    vlSelf->rs3 = VL_RAND_RESET_Q(64);
}
