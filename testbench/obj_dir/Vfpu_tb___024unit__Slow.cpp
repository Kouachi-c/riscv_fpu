// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfpu_tb.h for the primary calling header

#include "Vfpu_tb__pch.h"
#include "Vfpu_tb__Syms.h"
#include "Vfpu_tb___024unit.h"

void Vfpu_tb___024unit___ctor_var_reset(Vfpu_tb___024unit* vlSelf);

Vfpu_tb___024unit::Vfpu_tb___024unit(Vfpu_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfpu_tb___024unit___ctor_var_reset(this);
}

void Vfpu_tb___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vfpu_tb___024unit::~Vfpu_tb___024unit() {
}
