// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfpu_tb.h for the primary calling header

#include "Vfpu_tb__pch.h"
#include "Vfpu_tb__Syms.h"
#include "Vfpu_tb_fpu_if.h"

void Vfpu_tb_fpu_if___ctor_var_reset(Vfpu_tb_fpu_if* vlSelf);

Vfpu_tb_fpu_if::Vfpu_tb_fpu_if(Vfpu_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfpu_tb_fpu_if___ctor_var_reset(this);
}

void Vfpu_tb_fpu_if::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vfpu_tb_fpu_if::~Vfpu_tb_fpu_if() {
}
