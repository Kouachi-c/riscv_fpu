// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfpu_tb.h for the primary calling header

#include "Vfpu_tb__pch.h"
#include "Vfpu_tb_fpu_if.h"

std::string VL_TO_STRING(const Vfpu_tb_fpu_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfpu_tb_fpu_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
