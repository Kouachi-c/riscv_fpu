// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfpu_tb.h for the primary calling header

#ifndef VERILATED_VFPU_TB_FPU_IF_H_
#define VERILATED_VFPU_TB_FPU_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfpu_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfpu_tb_fpu_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ valid_in;
    CData/*0:0*/ ready_out;
    CData/*0:0*/ ready_in;
    CData/*5:0*/ op;
    CData/*1:0*/ fmt;
    CData/*2:0*/ rm;
    CData/*4:0*/ rd;
    QData/*63:0*/ rs1;
    QData/*63:0*/ rs2;
    QData/*63:0*/ rs3;

    // INTERNAL VARIABLES
    Vfpu_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfpu_tb_fpu_if(Vfpu_tb__Syms* symsp, const char* v__name);
    ~Vfpu_tb_fpu_if();
    VL_UNCOPYABLE(Vfpu_tb_fpu_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vfpu_tb_fpu_if* obj);

#endif  // guard
