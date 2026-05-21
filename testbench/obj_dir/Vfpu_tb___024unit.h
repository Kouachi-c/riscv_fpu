// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfpu_tb.h for the primary calling header

#ifndef VERILATED_VFPU_TB___024UNIT_H_
#define VERILATED_VFPU_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfpu_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfpu_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vfpu_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfpu_tb___024unit(Vfpu_tb__Syms* symsp, const char* v__name);
    ~Vfpu_tb___024unit();
    VL_UNCOPYABLE(Vfpu_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
