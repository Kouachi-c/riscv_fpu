// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfpu_tb__Syms.h"


VL_ATTR_COLD void Vfpu_tb___024root__trace_init_sub__TOP__fpkg__0(Vfpu_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vfpu_tb___024root__trace_init_sub__TOP__fpu_tb__DOT__bus__0(Vfpu_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfpu_tb___024root__trace_init_sub__TOP__0(Vfpu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("fpkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vfpu_tb___024root__trace_init_sub__TOP__fpkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("fpu_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bus", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vfpu_tb___024root__trace_init_sub__TOP__fpu_tb__DOT__bus__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declQuad(c+1,0,"res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+3,0,"rd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+5,0,"fpw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"intw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"pass_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+8,0,"fail_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+455,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fpu_bus", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vfpu_tb___024root__trace_init_sub__TOP__fpu_tb__DOT__bus__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+23,0,"op_is_addsub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"op_is_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"op_is_class",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"op_is_minmax",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"op_is_cmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"op_is_fma",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"op_is_sgn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"op_is_divsqrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"op_is_convert",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"sign_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"sign_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"sign_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"exp_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+34,0,"exp_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+35,0,"exp_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+36,0,"mant_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+38,0,"mant_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+40,0,"mant_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+42,0,"is_nan_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"is_nan_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"is_nan_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"is_qnan_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"is_qnan_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"is_qnan_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"is_snan_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"is_snan_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"is_snan_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"is_inf_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"is_inf_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"is_inf_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"is_zero_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"is_zero_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"is_zero_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"is_subnormal_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"is_subnormal_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"is_subnormal_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"add_ready_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"add_valid_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"add_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"add_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+121,0,"add_mant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+123,0,"add_grs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+124,0,"add_rm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+125,0,"add_is_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"add_is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"add_is_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"add_fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+456,0,"mul_ready_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"mul_valid_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"mul_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"mul_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+132,0,"mul_mant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+134,0,"mul_grs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+135,0,"mul_rm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+136,0,"mul_is_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"mul_is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"mul_is_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"mul_fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+60,0,"fma_sign_a_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"fma_sign_c_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"fma_ready_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"fma_valid_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"fma_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"fma_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+143,0,"fma_mant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+145,0,"fma_grs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+146,0,"fma_rm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+147,0,"fma_is_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"fma_is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"fma_is_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"fma_fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+151,0,"arith_valid_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"arith_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"arith_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+154,0,"arith_mant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+156,0,"arith_grs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+157,0,"arith_rm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+158,0,"arith_is_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"arith_is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"arith_is_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"arith_fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+152,0,"rnd_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"rnd_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+163,0,"rnd_mant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+158,0,"rnd_is_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"rnd_is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"rnd_is_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"rnd_fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+167,0,"arith_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+169,0,"fpack_of",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"fpack_uf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rd_add", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+171+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_mul", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+175+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_fma", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+179+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+456,0,"class_ready_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"class_valid_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+185,0,"class_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+187,0,"class_fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+188,0,"rd_class",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+456,0,"minmax_ready_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"minmax_valid_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+190,0,"minmax_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+192,0,"minmax_fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+193,0,"rd_minmax",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+456,0,"cmp_ready_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"cmp_valid_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+195,0,"cmp_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+197,0,"cmp_fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+198,0,"rd_cmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+456,0,"sgn_ready_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"sgn_valid_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+200,0,"sgn_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+202,0,"sgn_fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+203,0,"rd_sgn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+204,0,"divsqrt_ready_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"divsqrt_valid_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"divsqrt_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+207,0,"divsqrt_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+208,0,"divsqrt_mant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+210,0,"divsqrt_grs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+211,0,"divsqrt_rm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+212,0,"divsqrt_is_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"divsqrt_is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"divsqrt_is_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"divsqrt_fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+216,0,"rd_divsqrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+62,0,"conv_src_fmt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+63,0,"conv_dst_fmt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+456,0,"conv_ready_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"conv_valid_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+218,0,"conv_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+220,0,"conv_fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+221,0,"rd_conv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+222,0,"conv_is_int_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_fadd_sub", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+455,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"ready_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"ready_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+12,0,"rm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+30,0,"sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"exp_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+36,0,"mant_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+42,0,"is_nan_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"is_snan_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"is_inf_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"is_zero_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"exp_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+38,0,"mant_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+43,0,"is_nan_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"is_snan_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"is_inf_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"is_zero_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"sign_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"exp_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+121,0,"mant_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+123,0,"grs_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+124,0,"rm_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+125,0,"is_nan_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"is_inf_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"is_zero_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"fflags_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+223,0,"valid_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+224,0,"fflags_s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+225,0,"fflags_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+226,0,"fflags_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+227,0,"s1_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+228,0,"s1_mant_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 53,0);
    tracep->declQuad(c+230,0,"s1_mant_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 53,0);
    tracep->declBit(c+232,0,"s1_sign_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"s1_sign_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"s1_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+235,0,"s1_is_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"s1_is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"s1_inf_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+238,0,"s1_grs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+239,0,"s1_rm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+240,0,"align_diff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+241,0,"shift_amt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+242,0,"grs_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 53,0);
    tracep->declBit(c+244,0,"eff_sign_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"inf_minus_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+246,0,"s2_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+247,0,"s2_mant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 53,0);
    tracep->declBit(c+249,0,"s2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"s2_is_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"s2_is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"s2_inf_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+253,0,"s2_grs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+254,0,"s2_rm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+255,0,"s3_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+256,0,"s3_mant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBit(c+258,0,"s3_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"s3_is_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"s3_is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"s3_inf_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"s3_grs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+263,0,"s3_rm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_fclass", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+455,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"ready_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"ready_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+13,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+15,0,"fmt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+185,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+187,0,"fflags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+184,0,"valid_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"class_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+67,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"is_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"is_qnan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"is_snan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"is_subnormal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"is_normal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"fclass_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("u_fclassify", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+455,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+13,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+15,0,"fmt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+66,0,"class_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+67,0,"sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"is_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"is_inf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"is_qnan",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"is_snan",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"is_subnormal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"exp64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declQuad(c+76,0,"mant64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBus(c+78,0,"exp32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+79,0,"mant32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+80,0,"exp16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+81,0,"mant16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_fcmp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+455,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"ready_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"ready_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+30,0,"sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"exp_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+36,0,"mant_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+42,0,"is_nan_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"is_snan_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"is_inf_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"is_zero_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"exp_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+38,0,"mant_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+43,0,"is_nan_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"is_snan_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"is_inf_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"is_zero_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+195,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+197,0,"fflags_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+194,0,"valid_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"a_eq_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"a_lt_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+448,0,"comb_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+85,0,"comb_fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_fconvert", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"ready_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"ready_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+62,0,"src_fmt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+63,0,"dst_fmt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"rm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+13,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+218,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+220,0,"fflags_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+217,0,"valid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+265,0,"exp64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+266,0,"exp32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+267,0,"exp16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+268,0,"mant64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBus(c+270,0,"mant32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+271,0,"mant16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+272,0,"exp_unbiased",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+273,0,"mant_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+275,0,"is_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"is_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"is_subnormal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+279,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+281,0,"fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+282,0,"lz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+283,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+285,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+286,0,"int_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+288,0,"abs_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+290,0,"tmp_mant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+293,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+294,0,"exp_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+295,0,"exp_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+296,0,"exp_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+297,0,"int_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_fdivsqrt", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"ready_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"ready_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+12,0,"rm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+30,0,"sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"exp_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+36,0,"mant_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+42,0,"is_nan_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"is_snan_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"is_inf_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"is_zero_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"exp_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+38,0,"mant_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+43,0,"is_nan_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"is_snan_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"is_inf_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"is_zero_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"sign_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+207,0,"exp_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+208,0,"mant_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+210,0,"grs_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+211,0,"rm_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+212,0,"is_nan_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"is_inf_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"is_zero_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"fflags_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+299,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+300,0,"op_sqrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"sign_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"exp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declArray(c+303,0,"dividend",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 105,0);
    tracep->declArray(c+307,0,"divisor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 105,0);
    tracep->declArray(c+311,0,"remainder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 105,0);
    tracep->declQuad(c+315,0,"quotient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBus(c+317,0,"iter_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declArray(c+318,0,"rem_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 105,0);
    tracep->declBus(c+322,0,"fflags_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+323,0,"is_nan_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"is_inf_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"is_zero_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+326,0,"rm_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_fma", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"ready_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"ready_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"rm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+60,0,"sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"exp_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+36,0,"mant_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+42,0,"is_nan_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"is_snan_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"is_inf_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"is_zero_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"exp_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+38,0,"mant_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+43,0,"is_nan_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"is_snan_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"is_inf_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"is_zero_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"sign_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"exp_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+40,0,"mant_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+44,0,"is_nan_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"is_snan_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"is_inf_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"is_zero_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"sign_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"exp_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+143,0,"mant_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+145,0,"grs_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+146,0,"rm_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+147,0,"is_nan_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"is_inf_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"is_zero_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"fflags_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+327,0,"valid_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+328,0,"s1_rm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+329,0,"s1_sign_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+330,0,"s1_exp_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declArray(c+331,0,"s1_prod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 105,0);
    tracep->declBit(c+335,0,"s1_sign_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+336,0,"s1_exp_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+337,0,"s1_mant_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+339,0,"s1_fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+340,0,"s1_is_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"s1_is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"s1_sign_sp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+343,0,"s2_rm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+344,0,"s2_sign_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+345,0,"s2_exp_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declArray(c+346,0,"s2_prod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 105,0);
    tracep->declBit(c+350,0,"s2_sign_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+351,0,"s2_exp_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declArray(c+352,0,"s2_mant_c_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 105,0);
    tracep->declBus(c+356,0,"s2_fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+357,0,"s2_is_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"s2_is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"s2_sign_sp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+360,0,"s3_rm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+361,0,"s3_sign_big",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"s3_sign_small",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+363,0,"s3_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declArray(c+364,0,"s3_big",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 105,0);
    tracep->declArray(c+368,0,"s3_small",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 105,0);
    tracep->declBus(c+372,0,"s3_fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+373,0,"s3_is_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"s3_is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"s3_sign_sp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+376,0,"s4_rm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+377,0,"s4_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"s4_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declArray(c+379,0,"s4_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 106,0);
    tracep->declBus(c+383,0,"s4_fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+384,0,"s4_is_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+385,0,"s4_is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"s4_sign_sp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+387,0,"lz_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declArray(c+388,0,"s5_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 106,0);
    tracep->declBus(c+392,0,"s5_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+393,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_fminmax", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"ready_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"ready_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+15,0,"fmt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+13,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+16,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+30,0,"sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"exp_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+36,0,"mant_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+42,0,"is_nan_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"is_snan_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"is_inf_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"is_zero_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"exp_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+38,0,"mant_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+43,0,"is_nan_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"is_snan_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"is_inf_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"is_zero_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+190,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+192,0,"fflags_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+189,0,"valid_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+89,0,"canonical_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+91,0,"a_lt_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+92,0,"comb_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+94,0,"comb_fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_fmult", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"ready_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"ready_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+12,0,"rm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+30,0,"sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"exp_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+36,0,"mant_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+42,0,"is_nan_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"is_snan_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"is_inf_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"is_zero_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"exp_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+38,0,"mant_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+43,0,"is_nan_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"is_snan_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"is_inf_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"is_zero_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"sign_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"exp_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+132,0,"mant_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+134,0,"grs_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+135,0,"rm_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+136,0,"is_nan_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"is_inf_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"is_zero_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"fflags_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+394,0,"valid_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+395,0,"s1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+396,0,"s1_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declArray(c+397,0,"s1_prod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 105,0);
    tracep->declBus(c+401,0,"s1_fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+402,0,"s1_is_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"s1_is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,0,"s1_is_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+405,0,"s1_rm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+406,0,"s2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+407,0,"s2_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declArray(c+408,0,"s2_prod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 105,0);
    tracep->declBus(c+412,0,"s2_fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+413,0,"s2_is_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"s2_is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"s2_is_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+416,0,"s2_rm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+417,0,"s3_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+418,0,"s3_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+419,0,"s3_mant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+421,0,"s3_grs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+422,0,"s3_fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+423,0,"s3_is_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"s3_is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"s3_is_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+426,0,"s3_rm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_fpack", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+457,0,"EXP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+458,0,"MAN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"BIAS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+152,0,"sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"exp_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+163,0,"mant_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+158,0,"is_nan",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"is_inf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"is_zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+167,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+169,0,"of",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"uf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+427,0,"exp_biased",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+428,0,"exp_field",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declQuad(c+429,0,"mant_field",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declQuad(c+431,0,"mant_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+433,0,"shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_fround", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+152,0,"sign_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"exp_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+154,0,"mant_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+156,0,"grs_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+157,0,"rm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+158,0,"is_nan_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"is_inf_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"is_zero_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"fflags_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+152,0,"sign_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"exp_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+163,0,"mant_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+158,0,"is_nan_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"is_inf_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"is_zero_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"fflags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+434,0,"round_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+435,0,"round_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 53,0);
    tracep->declBit(c+437,0,"round_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+438,0,"renorm_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_fsgn", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+455,0,"FP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"ready_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"ready_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+13,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+16,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+200,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+202,0,"fflags_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+199,0,"valid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"result_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+19,0,"magnitude_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 62,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_funpack_a", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+455,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+13,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+15,0,"fmt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+30,0,"sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"exp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+36,0,"mant",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+54,0,"is_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"is_inf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"is_nan",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"is_qnan",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"is_snan",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"is_subnormal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"exp64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declQuad(c+98,0,"mant64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBus(c+100,0,"exp32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+101,0,"mant32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+102,0,"exp16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+103,0,"mant16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_funpack_b", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+455,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+16,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+15,0,"fmt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+31,0,"sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"exp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+38,0,"mant",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+55,0,"is_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"is_inf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"is_nan",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"is_qnan",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"is_snan",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"is_subnormal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"exp64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declQuad(c+105,0,"mant64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBus(c+107,0,"exp32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+108,0,"mant32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+109,0,"exp16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+110,0,"mant16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_funpack_c", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+455,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+451,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+15,0,"fmt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+32,0,"sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"exp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declQuad(c+40,0,"mant",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+56,0,"is_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"is_inf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"is_nan",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"is_qnan",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"is_snan",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"is_subnormal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"exp64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declQuad(c+112,0,"mant64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBus(c+114,0,"exp32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+115,0,"mant32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+116,0,"exp16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+117,0,"mant16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfpu_tb___024root__trace_init_sub__TOP__fpu_tb__DOT__bus__0(Vfpu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root__trace_init_sub__TOP__fpu_tb__DOT__bus__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+455,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"valid_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"ready_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"valid_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+454,0,"ready_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+15,0,"fmt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"rm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+22,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+13,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+16,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+451,0,"rs3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+440,0,"rd_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+441,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+443,0,"fp_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"int_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+445,0,"fflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
}

VL_ATTR_COLD void Vfpu_tb___024root__trace_init_sub__TOP__fpkg__0(Vfpu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root__trace_init_sub__TOP__fpkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+460,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vfpu_tb___024root__trace_init_top(Vfpu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root__trace_init_top\n"); );
    // Body
    Vfpu_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfpu_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vfpu_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfpu_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfpu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfpu_tb___024root__trace_register(Vfpu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vfpu_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vfpu_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vfpu_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vfpu_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfpu_tb___024root__trace_const_0_sub_0(Vfpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfpu_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root__trace_const_0\n"); );
    // Init
    Vfpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfpu_tb___024root*>(voidSelf);
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfpu_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfpu_tb___024root__trace_const_0_sub_0(Vfpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+455,(0x40U),32);
    bufp->fullBit(oldp+456,(1U));
    bufp->fullIData(oldp+457,(0xbU),32);
    bufp->fullIData(oldp+458,(0x34U),32);
    bufp->fullIData(oldp+459,(0x3ffU),32);
    bufp->fullIData(oldp+460,(0x40U),32);
}

VL_ATTR_COLD void Vfpu_tb___024root__trace_full_0_sub_0(Vfpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfpu_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root__trace_full_0\n"); );
    // Init
    Vfpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfpu_tb___024root*>(voidSelf);
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfpu_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfpu_tb___024root__trace_full_0_sub_0(Vfpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSelf->fpu_tb__DOT__res),64);
    bufp->fullCData(oldp+3,(vlSelf->fpu_tb__DOT__rd_o),5);
    bufp->fullCData(oldp+4,(vlSelf->fpu_tb__DOT__ff),5);
    bufp->fullBit(oldp+5,(vlSelf->fpu_tb__DOT__fpw));
    bufp->fullBit(oldp+6,(vlSelf->fpu_tb__DOT__intw));
    bufp->fullIData(oldp+7,(vlSelf->fpu_tb__DOT__pass_cnt),32);
    bufp->fullIData(oldp+8,(vlSelf->fpu_tb__DOT__fail_cnt),32);
    bufp->fullBit(oldp+9,((2U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))));
    bufp->fullBit(oldp+10,((0x14U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))));
    bufp->fullCData(oldp+11,(vlSymsp->TOP__fpu_tb__DOT__bus.op),6);
    bufp->fullCData(oldp+12,(vlSymsp->TOP__fpu_tb__DOT__bus.rm),3);
    bufp->fullQData(oldp+13,(vlSymsp->TOP__fpu_tb__DOT__bus.rs1),64);
    bufp->fullCData(oldp+15,(vlSymsp->TOP__fpu_tb__DOT__bus.fmt),2);
    bufp->fullQData(oldp+16,(vlSymsp->TOP__fpu_tb__DOT__bus.rs2),64);
    bufp->fullBit(oldp+18,((1U & ((0xbU == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                                   ? (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                              >> 0x3fU))
                                   : ((0xcU == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                                       ? (~ (IData)(
                                                    (vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                                     >> 0x3fU)))
                                       : ((0xdU == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                                           ? ((IData)(
                                                      (vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                                       >> 0x3fU)) 
                                              ^ (IData)(
                                                        (vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                                         >> 0x3fU)))
                                           : (IData)(
                                                     (vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                                      >> 0x3fU))))))));
    bufp->fullQData(oldp+19,((0x7fffffffffffffffULL 
                              & vlSymsp->TOP__fpu_tb__DOT__bus.rs1)),63);
    bufp->fullBit(oldp+21,(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in));
    bufp->fullCData(oldp+22,(vlSymsp->TOP__fpu_tb__DOT__bus.rd),5);
    bufp->fullBit(oldp+23,(vlSelf->fpu_tb__DOT__dut__DOT__op_is_addsub));
    bufp->fullBit(oldp+24,(vlSelf->fpu_tb__DOT__dut__DOT__op_is_minmax));
    bufp->fullBit(oldp+25,(vlSelf->fpu_tb__DOT__dut__DOT__op_is_cmp));
    bufp->fullBit(oldp+26,(vlSelf->fpu_tb__DOT__dut__DOT__op_is_fma));
    bufp->fullBit(oldp+27,(vlSelf->fpu_tb__DOT__dut__DOT__op_is_sgn));
    bufp->fullBit(oldp+28,(vlSelf->fpu_tb__DOT__dut__DOT__op_is_divsqrt));
    bufp->fullBit(oldp+29,(vlSelf->fpu_tb__DOT__dut__DOT__op_is_convert));
    bufp->fullBit(oldp+30,(vlSelf->fpu_tb__DOT__dut__DOT__sign_a));
    bufp->fullBit(oldp+31,(vlSelf->fpu_tb__DOT__dut__DOT__sign_b));
    bufp->fullBit(oldp+32,(vlSelf->fpu_tb__DOT__dut__DOT__sign_c));
    bufp->fullSData(oldp+33,(vlSelf->fpu_tb__DOT__dut__DOT__exp_a),13);
    bufp->fullSData(oldp+34,(vlSelf->fpu_tb__DOT__dut__DOT__exp_b),13);
    bufp->fullSData(oldp+35,(vlSelf->fpu_tb__DOT__dut__DOT__exp_c),13);
    bufp->fullQData(oldp+36,(vlSelf->fpu_tb__DOT__dut__DOT__mant_a),53);
    bufp->fullQData(oldp+38,(vlSelf->fpu_tb__DOT__dut__DOT__mant_b),53);
    bufp->fullQData(oldp+40,(vlSelf->fpu_tb__DOT__dut__DOT__mant_c),53);
    bufp->fullBit(oldp+42,(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a));
    bufp->fullBit(oldp+43,(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b));
    bufp->fullBit(oldp+44,(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_c));
    bufp->fullBit(oldp+45,(vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_a));
    bufp->fullBit(oldp+46,(vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_b));
    bufp->fullBit(oldp+47,(vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_c));
    bufp->fullBit(oldp+48,(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_a));
    bufp->fullBit(oldp+49,(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_b));
    bufp->fullBit(oldp+50,(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_c));
    bufp->fullBit(oldp+51,(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a));
    bufp->fullBit(oldp+52,(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b));
    bufp->fullBit(oldp+53,(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_c));
    bufp->fullBit(oldp+54,(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a));
    bufp->fullBit(oldp+55,(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b));
    bufp->fullBit(oldp+56,(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_c));
    bufp->fullBit(oldp+57,(vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_a));
    bufp->fullBit(oldp+58,(vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_b));
    bufp->fullBit(oldp+59,(vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_c));
    bufp->fullBit(oldp+60,(vlSelf->fpu_tb__DOT__dut__DOT__fma_sign_a_eff));
    bufp->fullBit(oldp+61,(vlSelf->fpu_tb__DOT__dut__DOT__fma_sign_c_eff));
    bufp->fullCData(oldp+62,(vlSelf->fpu_tb__DOT__dut__DOT__conv_src_fmt),2);
    bufp->fullCData(oldp+63,(vlSelf->fpu_tb__DOT__dut__DOT__conv_dst_fmt),2);
    bufp->fullBit(oldp+64,(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fadd_sub__valid_in));
    bufp->fullBit(oldp+65,(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fclass__valid_in));
    bufp->fullCData(oldp+66,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out),3);
    bufp->fullBit(oldp+67,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign));
    bufp->fullBit(oldp+68,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_zero));
    bufp->fullBit(oldp+69,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_inf));
    bufp->fullBit(oldp+70,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_qnan));
    bufp->fullBit(oldp+71,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_snan));
    bufp->fullBit(oldp+72,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_subnormal));
    bufp->fullBit(oldp+73,((2U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out))));
    bufp->fullSData(oldp+74,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask),10);
    bufp->fullSData(oldp+75,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp64),11);
    bufp->fullQData(oldp+76,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant64),52);
    bufp->fullCData(oldp+78,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp32),8);
    bufp->fullIData(oldp+79,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant32),23);
    bufp->fullCData(oldp+80,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp16),5);
    bufp->fullSData(oldp+81,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant16),10);
    bufp->fullBit(oldp+82,(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fcmp__valid_in));
    bufp->fullBit(oldp+83,(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__a_eq_b));
    bufp->fullBit(oldp+84,(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__a_lt_b));
    bufp->fullCData(oldp+85,(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__comb_fflags),5);
    bufp->fullBit(oldp+86,(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fconvert__valid_in));
    bufp->fullBit(oldp+87,(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fma__valid_in));
    bufp->fullBit(oldp+88,(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fminmax__valid_in));
    bufp->fullQData(oldp+89,(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__canonical_nan),64);
    bufp->fullBit(oldp+91,(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__a_lt_b));
    bufp->fullQData(oldp+92,(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_result),64);
    bufp->fullCData(oldp+94,(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_fflags),5);
    bufp->fullBit(oldp+95,(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fmult__valid_in));
    bufp->fullBit(oldp+96,(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fsgn__valid_in));
    bufp->fullSData(oldp+97,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp64),11);
    bufp->fullQData(oldp+98,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant64),52);
    bufp->fullCData(oldp+100,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp32),8);
    bufp->fullIData(oldp+101,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant32),23);
    bufp->fullCData(oldp+102,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp16),5);
    bufp->fullSData(oldp+103,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant16),10);
    bufp->fullSData(oldp+104,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp64),11);
    bufp->fullQData(oldp+105,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant64),52);
    bufp->fullCData(oldp+107,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp32),8);
    bufp->fullIData(oldp+108,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant32),23);
    bufp->fullCData(oldp+109,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp16),5);
    bufp->fullSData(oldp+110,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant16),10);
    bufp->fullSData(oldp+111,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp64),11);
    bufp->fullQData(oldp+112,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant64),52);
    bufp->fullCData(oldp+114,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp32),8);
    bufp->fullIData(oldp+115,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant32),23);
    bufp->fullCData(oldp+116,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp16),5);
    bufp->fullSData(oldp+117,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant16),10);
    bufp->fullBit(oldp+118,((1U & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                   >> 3U))));
    bufp->fullBit(oldp+119,(vlSelf->fpu_tb__DOT__dut__DOT__add_sign));
    bufp->fullSData(oldp+120,(vlSelf->fpu_tb__DOT__dut__DOT__add_exp),13);
    bufp->fullQData(oldp+121,(vlSelf->fpu_tb__DOT__dut__DOT__add_mant),55);
    bufp->fullCData(oldp+123,(vlSelf->fpu_tb__DOT__dut__DOT__add_grs),3);
    bufp->fullCData(oldp+124,(vlSelf->fpu_tb__DOT__dut__DOT__add_rm),3);
    bufp->fullBit(oldp+125,(vlSelf->fpu_tb__DOT__dut__DOT__add_is_nan));
    bufp->fullBit(oldp+126,(vlSelf->fpu_tb__DOT__dut__DOT__add_is_inf));
    bufp->fullBit(oldp+127,(vlSelf->fpu_tb__DOT__dut__DOT__add_is_zero));
    bufp->fullCData(oldp+128,(vlSelf->fpu_tb__DOT__dut__DOT__add_fflags),5);
    bufp->fullBit(oldp+129,((1U & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                   >> 3U))));
    bufp->fullBit(oldp+130,(vlSelf->fpu_tb__DOT__dut__DOT__mul_sign));
    bufp->fullSData(oldp+131,(vlSelf->fpu_tb__DOT__dut__DOT__mul_exp),13);
    bufp->fullQData(oldp+132,(vlSelf->fpu_tb__DOT__dut__DOT__mul_mant),55);
    bufp->fullCData(oldp+134,(vlSelf->fpu_tb__DOT__dut__DOT__mul_grs),3);
    bufp->fullCData(oldp+135,(vlSelf->fpu_tb__DOT__dut__DOT__mul_rm),3);
    bufp->fullBit(oldp+136,(vlSelf->fpu_tb__DOT__dut__DOT__mul_is_nan));
    bufp->fullBit(oldp+137,(vlSelf->fpu_tb__DOT__dut__DOT__mul_is_inf));
    bufp->fullBit(oldp+138,(vlSelf->fpu_tb__DOT__dut__DOT__mul_is_zero));
    bufp->fullCData(oldp+139,(vlSelf->fpu_tb__DOT__dut__DOT__mul_fflags),5);
    bufp->fullBit(oldp+140,((1U & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                   >> 4U))));
    bufp->fullBit(oldp+141,(vlSelf->fpu_tb__DOT__dut__DOT__fma_sign));
    bufp->fullSData(oldp+142,(vlSelf->fpu_tb__DOT__dut__DOT__fma_exp),13);
    bufp->fullQData(oldp+143,(vlSelf->fpu_tb__DOT__dut__DOT__fma_mant),55);
    bufp->fullCData(oldp+145,(vlSelf->fpu_tb__DOT__dut__DOT__fma_grs),3);
    bufp->fullCData(oldp+146,(vlSelf->fpu_tb__DOT__dut__DOT__fma_rm),3);
    bufp->fullBit(oldp+147,(vlSelf->fpu_tb__DOT__dut__DOT__fma_is_nan));
    bufp->fullBit(oldp+148,(vlSelf->fpu_tb__DOT__dut__DOT__fma_is_inf));
    bufp->fullBit(oldp+149,(vlSelf->fpu_tb__DOT__dut__DOT__fma_is_zero));
    bufp->fullCData(oldp+150,(vlSelf->fpu_tb__DOT__dut__DOT__fma_fflags),5);
    bufp->fullBit(oldp+151,((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe)) 
                                       >> 3U) | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                 >> 4U)) 
                                     | (3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))))));
    bufp->fullBit(oldp+152,(vlSelf->fpu_tb__DOT__dut__DOT__arith_sign));
    bufp->fullSData(oldp+153,(((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_exp)
                                : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                    ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__fma_exp)
                                    : ((8U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                        ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__mul_exp)
                                        : (IData)(vlSelf->fpu_tb__DOT__dut__DOT__add_exp))))),13);
    bufp->fullQData(oldp+154,(vlSelf->fpu_tb__DOT__dut__DOT__arith_mant),55);
    bufp->fullCData(oldp+156,(vlSelf->fpu_tb__DOT__dut__DOT__arith_grs),3);
    bufp->fullCData(oldp+157,(vlSelf->fpu_tb__DOT__dut__DOT__arith_rm),3);
    bufp->fullBit(oldp+158,(vlSelf->fpu_tb__DOT__dut__DOT__arith_is_nan));
    bufp->fullBit(oldp+159,(vlSelf->fpu_tb__DOT__dut__DOT__arith_is_inf));
    bufp->fullBit(oldp+160,(vlSelf->fpu_tb__DOT__dut__DOT__arith_is_zero));
    bufp->fullCData(oldp+161,(((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_fflags)
                                : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                    ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__fma_fflags)
                                    : ((8U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                        ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__mul_fflags)
                                        : (IData)(vlSelf->fpu_tb__DOT__dut__DOT__add_fflags))))),5);
    bufp->fullSData(oldp+162,(vlSelf->fpu_tb__DOT__dut__DOT__rnd_exp),13);
    bufp->fullQData(oldp+163,(vlSelf->fpu_tb__DOT__dut__DOT__rnd_mant),53);
    bufp->fullBit(oldp+165,(vlSelf->fpu_tb__DOT__dut__DOT__rnd_is_inf));
    bufp->fullCData(oldp+166,((((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                 ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_fflags)
                                 : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                     ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__fma_fflags)
                                     : ((8U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                         ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__mul_fflags)
                                         : (IData)(vlSelf->fpu_tb__DOT__dut__DOT__add_fflags)))) 
                               | (((0U != (IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_grs)) 
                                   & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_is_nan)))
                                   ? 1U : 0U))),5);
    bufp->fullQData(oldp+167,(vlSelf->fpu_tb__DOT__dut__DOT__arith_result),64);
    bufp->fullBit(oldp+169,(vlSelf->fpu_tb__DOT__dut__DOT__fpack_of));
    bufp->fullBit(oldp+170,(vlSelf->fpu_tb__DOT__dut__DOT__fpack_uf));
    bufp->fullCData(oldp+171,(vlSelf->fpu_tb__DOT__dut__DOT__rd_add[0]),5);
    bufp->fullCData(oldp+172,(vlSelf->fpu_tb__DOT__dut__DOT__rd_add[1]),5);
    bufp->fullCData(oldp+173,(vlSelf->fpu_tb__DOT__dut__DOT__rd_add[2]),5);
    bufp->fullCData(oldp+174,(vlSelf->fpu_tb__DOT__dut__DOT__rd_add[3]),5);
    bufp->fullCData(oldp+175,(vlSelf->fpu_tb__DOT__dut__DOT__rd_mul[0]),5);
    bufp->fullCData(oldp+176,(vlSelf->fpu_tb__DOT__dut__DOT__rd_mul[1]),5);
    bufp->fullCData(oldp+177,(vlSelf->fpu_tb__DOT__dut__DOT__rd_mul[2]),5);
    bufp->fullCData(oldp+178,(vlSelf->fpu_tb__DOT__dut__DOT__rd_mul[3]),5);
    bufp->fullCData(oldp+179,(vlSelf->fpu_tb__DOT__dut__DOT__rd_fma[0]),5);
    bufp->fullCData(oldp+180,(vlSelf->fpu_tb__DOT__dut__DOT__rd_fma[1]),5);
    bufp->fullCData(oldp+181,(vlSelf->fpu_tb__DOT__dut__DOT__rd_fma[2]),5);
    bufp->fullCData(oldp+182,(vlSelf->fpu_tb__DOT__dut__DOT__rd_fma[3]),5);
    bufp->fullCData(oldp+183,(vlSelf->fpu_tb__DOT__dut__DOT__rd_fma[4]),5);
    bufp->fullBit(oldp+184,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe));
    bufp->fullQData(oldp+185,(vlSelf->fpu_tb__DOT__dut__DOT__class_result),64);
    bufp->fullCData(oldp+187,(vlSelf->fpu_tb__DOT__dut__DOT__class_fflags),5);
    bufp->fullCData(oldp+188,(vlSelf->fpu_tb__DOT__dut__DOT__rd_class),5);
    bufp->fullBit(oldp+189,(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe));
    bufp->fullQData(oldp+190,(vlSelf->fpu_tb__DOT__dut__DOT__minmax_result),64);
    bufp->fullCData(oldp+192,(vlSelf->fpu_tb__DOT__dut__DOT__minmax_fflags),5);
    bufp->fullCData(oldp+193,(vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax),5);
    bufp->fullBit(oldp+194,(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe));
    bufp->fullQData(oldp+195,(vlSelf->fpu_tb__DOT__dut__DOT__cmp_result),64);
    bufp->fullCData(oldp+197,(vlSelf->fpu_tb__DOT__dut__DOT__cmp_fflags),5);
    bufp->fullCData(oldp+198,(vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp),5);
    bufp->fullBit(oldp+199,(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r));
    bufp->fullQData(oldp+200,(vlSelf->fpu_tb__DOT__dut__DOT__sgn_result),64);
    bufp->fullCData(oldp+202,(vlSelf->fpu_tb__DOT__dut__DOT__sgn_fflags),5);
    bufp->fullCData(oldp+203,(vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn),5);
    bufp->fullBit(oldp+204,((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))));
    bufp->fullBit(oldp+205,((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))));
    bufp->fullBit(oldp+206,(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_sign));
    bufp->fullSData(oldp+207,(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_exp),13);
    bufp->fullQData(oldp+208,(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_mant),55);
    bufp->fullCData(oldp+210,(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_grs),3);
    bufp->fullCData(oldp+211,(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_rm),3);
    bufp->fullBit(oldp+212,(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_is_nan));
    bufp->fullBit(oldp+213,(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_is_inf));
    bufp->fullBit(oldp+214,(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_is_zero));
    bufp->fullCData(oldp+215,(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_fflags),5);
    bufp->fullCData(oldp+216,(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt),5);
    bufp->fullBit(oldp+217,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r));
    bufp->fullQData(oldp+218,(vlSelf->fpu_tb__DOT__dut__DOT__conv_result),64);
    bufp->fullCData(oldp+220,(vlSelf->fpu_tb__DOT__dut__DOT__conv_fflags),5);
    bufp->fullCData(oldp+221,(vlSelf->fpu_tb__DOT__dut__DOT__rd_conv),5);
    bufp->fullBit(oldp+222,(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r));
    bufp->fullCData(oldp+223,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe),4);
    bufp->fullCData(oldp+224,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s1),5);
    bufp->fullCData(oldp+225,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s2),5);
    bufp->fullCData(oldp+226,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s3),5);
    bufp->fullSData(oldp+227,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_exp),13);
    bufp->fullQData(oldp+228,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_a),54);
    bufp->fullQData(oldp+230,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_b),54);
    bufp->fullBit(oldp+232,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_sign_a));
    bufp->fullBit(oldp+233,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_sign_b));
    bufp->fullCData(oldp+234,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_op),6);
    bufp->fullBit(oldp+235,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_is_nan));
    bufp->fullBit(oldp+236,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_is_inf));
    bufp->fullBit(oldp+237,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_inf_sign));
    bufp->fullCData(oldp+238,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_grs),3);
    bufp->fullCData(oldp+239,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_rm),3);
    bufp->fullSData(oldp+240,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__align_diff),13);
    bufp->fullCData(oldp+241,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__shift_amt),7);
    bufp->fullQData(oldp+242,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__grs_ext),54);
    bufp->fullBit(oldp+244,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__eff_sign_b));
    bufp->fullBit(oldp+245,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__inf_minus_inf));
    bufp->fullSData(oldp+246,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_exp),13);
    bufp->fullQData(oldp+247,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_mant),54);
    bufp->fullBit(oldp+249,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_sign));
    bufp->fullBit(oldp+250,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_is_nan));
    bufp->fullBit(oldp+251,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_is_inf));
    bufp->fullBit(oldp+252,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_inf_sign));
    bufp->fullCData(oldp+253,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_grs),3);
    bufp->fullCData(oldp+254,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_rm),3);
    bufp->fullSData(oldp+255,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_exp),13);
    bufp->fullQData(oldp+256,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_mant),55);
    bufp->fullBit(oldp+258,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_sign));
    bufp->fullBit(oldp+259,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_is_nan));
    bufp->fullBit(oldp+260,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_is_inf));
    bufp->fullBit(oldp+261,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_inf_sign));
    bufp->fullCData(oldp+262,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_grs),3);
    bufp->fullCData(oldp+263,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_rm),3);
    bufp->fullBit(oldp+264,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign));
    bufp->fullSData(oldp+265,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp64),11);
    bufp->fullCData(oldp+266,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp32),8);
    bufp->fullCData(oldp+267,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp16),5);
    bufp->fullQData(oldp+268,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant64),52);
    bufp->fullIData(oldp+270,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant32),23);
    bufp->fullSData(oldp+271,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant16),10);
    bufp->fullSData(oldp+272,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp_unbiased),13);
    bufp->fullQData(oldp+273,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant_norm),53);
    bufp->fullBit(oldp+275,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_nan));
    bufp->fullBit(oldp+276,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_inf));
    bufp->fullBit(oldp+277,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_zero));
    bufp->fullBit(oldp+278,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_subnormal));
    bufp->fullQData(oldp+279,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result),64);
    bufp->fullCData(oldp+281,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags),5);
    bufp->fullIData(oldp+282,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz),32);
    bufp->fullIData(oldp+283,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+284,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+285,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk3__DOT__i),32);
    bufp->fullQData(oldp+286,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__int_val),64);
    bufp->fullQData(oldp+288,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__abs_val),64);
    bufp->fullWData(oldp+290,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__tmp_mant),65);
    bufp->fullIData(oldp+293,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i),32);
    bufp->fullSData(oldp+294,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk6__DOT__exp_b),13);
    bufp->fullSData(oldp+295,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk7__DOT__exp_b),13);
    bufp->fullSData(oldp+296,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk8__DOT__exp_b),13);
    bufp->fullQData(oldp+297,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk9__DOT__int_res),64);
    bufp->fullCData(oldp+299,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state),2);
    bufp->fullBit(oldp+300,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__op_sqrt));
    bufp->fullBit(oldp+301,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__sign_r));
    bufp->fullSData(oldp+302,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__exp_r),13);
    bufp->fullWData(oldp+303,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__dividend),106);
    bufp->fullWData(oldp+307,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__divisor),106);
    bufp->fullWData(oldp+311,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder),106);
    bufp->fullQData(oldp+315,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__quotient),56);
    bufp->fullCData(oldp+317,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__iter_cnt),7);
    bufp->fullWData(oldp+318,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rem_shifted),106);
    bufp->fullCData(oldp+322,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__fflags_r),5);
    bufp->fullBit(oldp+323,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_nan_r));
    bufp->fullBit(oldp+324,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_inf_r));
    bufp->fullBit(oldp+325,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_zero_r));
    bufp->fullCData(oldp+326,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rm_r),3);
    bufp->fullCData(oldp+327,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe),5);
    bufp->fullCData(oldp+328,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_rm),3);
    bufp->fullBit(oldp+329,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_sign_mul));
    bufp->fullSData(oldp+330,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_exp_mul),13);
    bufp->fullWData(oldp+331,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_prod),106);
    bufp->fullBit(oldp+335,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_sign_c));
    bufp->fullSData(oldp+336,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_exp_c),13);
    bufp->fullQData(oldp+337,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_mant_c),53);
    bufp->fullCData(oldp+339,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_fflags),5);
    bufp->fullBit(oldp+340,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_is_nan));
    bufp->fullBit(oldp+341,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_is_inf));
    bufp->fullBit(oldp+342,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_sign_sp));
    bufp->fullCData(oldp+343,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_rm),3);
    bufp->fullBit(oldp+344,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_sign_mul));
    bufp->fullSData(oldp+345,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_exp_mul),13);
    bufp->fullWData(oldp+346,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_prod),106);
    bufp->fullBit(oldp+350,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_sign_c));
    bufp->fullSData(oldp+351,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_exp_c),13);
    bufp->fullWData(oldp+352,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_mant_c_ext),106);
    bufp->fullCData(oldp+356,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_fflags),5);
    bufp->fullBit(oldp+357,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_is_nan));
    bufp->fullBit(oldp+358,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_is_inf));
    bufp->fullBit(oldp+359,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_sign_sp));
    bufp->fullCData(oldp+360,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_rm),3);
    bufp->fullBit(oldp+361,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_sign_big));
    bufp->fullBit(oldp+362,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_sign_small));
    bufp->fullSData(oldp+363,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_exp),13);
    bufp->fullWData(oldp+364,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big),106);
    bufp->fullWData(oldp+368,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small),106);
    bufp->fullCData(oldp+372,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_fflags),5);
    bufp->fullBit(oldp+373,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_is_nan));
    bufp->fullBit(oldp+374,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_is_inf));
    bufp->fullBit(oldp+375,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_sign_sp));
    bufp->fullCData(oldp+376,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_rm),3);
    bufp->fullBit(oldp+377,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sign));
    bufp->fullSData(oldp+378,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_exp),13);
    bufp->fullWData(oldp+379,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum),107);
    bufp->fullCData(oldp+383,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_fflags),5);
    bufp->fullBit(oldp+384,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_is_nan));
    bufp->fullBit(oldp+385,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_is_inf));
    bufp->fullBit(oldp+386,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sign_sp));
    bufp->fullCData(oldp+387,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__lz_pos),7);
    bufp->fullWData(oldp+388,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm),107);
    bufp->fullSData(oldp+392,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_exp),13);
    bufp->fullIData(oldp+393,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+394,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe),4);
    bufp->fullBit(oldp+395,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_sign));
    bufp->fullSData(oldp+396,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_exp),13);
    bufp->fullWData(oldp+397,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_prod),106);
    bufp->fullCData(oldp+401,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_fflags),5);
    bufp->fullBit(oldp+402,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_is_nan));
    bufp->fullBit(oldp+403,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_is_inf));
    bufp->fullBit(oldp+404,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_is_zero));
    bufp->fullCData(oldp+405,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_rm),3);
    bufp->fullBit(oldp+406,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_sign));
    bufp->fullSData(oldp+407,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_exp),13);
    bufp->fullWData(oldp+408,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_prod),106);
    bufp->fullCData(oldp+412,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_fflags),5);
    bufp->fullBit(oldp+413,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_is_nan));
    bufp->fullBit(oldp+414,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_is_inf));
    bufp->fullBit(oldp+415,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_is_zero));
    bufp->fullCData(oldp+416,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_rm),3);
    bufp->fullBit(oldp+417,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_sign));
    bufp->fullSData(oldp+418,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_exp),13);
    bufp->fullQData(oldp+419,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_mant),55);
    bufp->fullCData(oldp+421,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_grs),3);
    bufp->fullCData(oldp+422,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_fflags),5);
    bufp->fullBit(oldp+423,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_is_nan));
    bufp->fullBit(oldp+424,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_is_inf));
    bufp->fullBit(oldp+425,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_is_zero));
    bufp->fullCData(oldp+426,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_rm),3);
    bufp->fullSData(oldp+427,(vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__exp_biased),13);
    bufp->fullSData(oldp+428,(vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__exp_field),11);
    bufp->fullQData(oldp+429,(vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__mant_field),52);
    bufp->fullQData(oldp+431,(vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__mant_shifted),53);
    bufp->fullCData(oldp+433,(vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__shift),7);
    bufp->fullBit(oldp+434,(vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__round_up));
    bufp->fullQData(oldp+435,(vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__round_result),54);
    bufp->fullBit(oldp+437,(vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__round_carry));
    bufp->fullSData(oldp+438,(vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__renorm_exp),13);
    bufp->fullBit(oldp+439,((IData)(((((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                             | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe)) 
                                            >> 3U) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)) 
                                          | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r)) 
                                     | (3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))))));
    bufp->fullCData(oldp+440,(((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)
                                ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_class)
                                : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)
                                    ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp)
                                    : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)
                                        ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn)
                                        : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)
                                            ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax)
                                            : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r)
                                                ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_conv)
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                                    ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                                     ? 
                                                    vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                                    [4U]
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                      ? 
                                                     vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                     [3U]
                                                      : 
                                                     vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                     [3U]))))))))),5);
    bufp->fullQData(oldp+441,(((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)
                                ? vlSelf->fpu_tb__DOT__dut__DOT__class_result
                                : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)
                                    ? vlSelf->fpu_tb__DOT__dut__DOT__cmp_result
                                    : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)
                                        ? vlSelf->fpu_tb__DOT__dut__DOT__sgn_result
                                        : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)
                                            ? vlSelf->fpu_tb__DOT__dut__DOT__minmax_result
                                            : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r)
                                                ? vlSelf->fpu_tb__DOT__dut__DOT__conv_result
                                                : vlSelf->fpu_tb__DOT__dut__DOT__arith_result)))))),64);
    bufp->fullBit(oldp+443,((1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                       >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                                  >> 3U) 
                                                 | ((3U 
                                                     == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                    | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                       >> 4U)))) 
                                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                    | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                   | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                      & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))))));
    bufp->fullBit(oldp+444,((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                              | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                             | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    bufp->fullCData(oldp+445,(((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                           | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe)) 
                                          >> 3U) | 
                                         ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                          >> 4U)) | 
                                        (3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))))
                                ? ((((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_fflags)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__fma_fflags)
                                          : ((8U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                              ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__mul_fflags)
                                              : (IData)(vlSelf->fpu_tb__DOT__dut__DOT__add_fflags)))) 
                                    | (((0U != (IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_grs)) 
                                        & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_is_nan)))
                                        ? 1U : 0U)) 
                                   | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__fpack_of) 
                                       << 2U) | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__fpack_uf) 
                                                 << 1U)))
                                : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)
                                    ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__minmax_fflags)
                                    : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)
                                        ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__cmp_fflags)
                                        : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)
                                            ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sgn_fflags)
                                            : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r)
                                                ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_fflags)
                                                : 0U)))))),5);
    bufp->fullBit(oldp+446,(vlSelf->fpu_tb__DOT__clk));
    bufp->fullBit(oldp+447,(vlSelf->fpu_tb__DOT__rst_n));
    bufp->fullQData(oldp+448,((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a) 
                                | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b))
                                ? 0ULL : ((0xeU == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                                           ? (QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__a_eq_b))
                                           : ((0xfU 
                                               == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                                               ? (QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__a_lt_b))
                                               : ((0x10U 
                                                   == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                                                   ? (QData)((IData)(
                                                                     ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__a_lt_b) 
                                                                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__a_eq_b))))
                                                   : 0ULL))))),64);
    bufp->fullBit(oldp+450,(((IData)(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in) 
                             & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_divsqrt))));
    bufp->fullQData(oldp+451,(vlSymsp->TOP__fpu_tb__DOT__bus.rs3),64);
    bufp->fullBit(oldp+453,((((((((((0x14U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                                    | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_cmp)) 
                                   | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_sgn)) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_convert)) 
                                 | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_addsub)) 
                                | (2U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))) 
                               | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_minmax)) 
                              | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_fma)) 
                             || ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_divsqrt) 
                                 && (0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))))));
    bufp->fullBit(oldp+454,(vlSymsp->TOP__fpu_tb__DOT__bus.ready_in));
}
