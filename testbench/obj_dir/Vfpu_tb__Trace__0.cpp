// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfpu_tb__Syms.h"


void Vfpu_tb___024root__trace_chg_0_sub_0(Vfpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfpu_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root__trace_chg_0\n"); );
    // Init
    Vfpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfpu_tb___024root*>(voidSelf);
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vfpu_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vfpu_tb___024root__trace_chg_0_sub_0(Vfpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgQData(oldp+0,(vlSelf->fpu_tb__DOT__res),64);
        bufp->chgCData(oldp+2,(vlSelf->fpu_tb__DOT__rd_o),5);
        bufp->chgCData(oldp+3,(vlSelf->fpu_tb__DOT__ff),5);
        bufp->chgBit(oldp+4,(vlSelf->fpu_tb__DOT__fpw));
        bufp->chgBit(oldp+5,(vlSelf->fpu_tb__DOT__intw));
        bufp->chgIData(oldp+6,(vlSelf->fpu_tb__DOT__pass_cnt),32);
        bufp->chgIData(oldp+7,(vlSelf->fpu_tb__DOT__fail_cnt),32);
        bufp->chgBit(oldp+8,((2U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))));
        bufp->chgBit(oldp+9,((0x14U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))));
        bufp->chgCData(oldp+10,(vlSymsp->TOP__fpu_tb__DOT__bus.op),6);
        bufp->chgCData(oldp+11,(vlSymsp->TOP__fpu_tb__DOT__bus.rm),3);
        bufp->chgQData(oldp+12,(vlSymsp->TOP__fpu_tb__DOT__bus.rs1),64);
        bufp->chgCData(oldp+14,(vlSymsp->TOP__fpu_tb__DOT__bus.fmt),2);
        bufp->chgQData(oldp+15,(vlSymsp->TOP__fpu_tb__DOT__bus.rs2),64);
        bufp->chgBit(oldp+17,((1U & ((0xbU == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                                      ? (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                                 >> 0x3fU))
                                      : ((0xcU == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                                          ? (~ (IData)(
                                                       (vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                                        >> 0x3fU)))
                                          : ((0xdU 
                                              == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                                              ? ((IData)(
                                                         (vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                                          >> 0x3fU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                                            >> 0x3fU)))
                                              : (IData)(
                                                        (vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                                         >> 0x3fU))))))));
        bufp->chgQData(oldp+18,((0x7fffffffffffffffULL 
                                 & vlSymsp->TOP__fpu_tb__DOT__bus.rs1)),63);
        bufp->chgBit(oldp+20,(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in));
        bufp->chgCData(oldp+21,(vlSymsp->TOP__fpu_tb__DOT__bus.rd),5);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+22,(vlSelf->fpu_tb__DOT__dut__DOT__op_is_addsub));
        bufp->chgBit(oldp+23,(vlSelf->fpu_tb__DOT__dut__DOT__op_is_minmax));
        bufp->chgBit(oldp+24,(vlSelf->fpu_tb__DOT__dut__DOT__op_is_cmp));
        bufp->chgBit(oldp+25,(vlSelf->fpu_tb__DOT__dut__DOT__op_is_fma));
        bufp->chgBit(oldp+26,(vlSelf->fpu_tb__DOT__dut__DOT__op_is_sgn));
        bufp->chgBit(oldp+27,(vlSelf->fpu_tb__DOT__dut__DOT__op_is_divsqrt));
        bufp->chgBit(oldp+28,(vlSelf->fpu_tb__DOT__dut__DOT__op_is_convert));
        bufp->chgBit(oldp+29,(vlSelf->fpu_tb__DOT__dut__DOT__sign_a));
        bufp->chgBit(oldp+30,(vlSelf->fpu_tb__DOT__dut__DOT__sign_b));
        bufp->chgBit(oldp+31,(vlSelf->fpu_tb__DOT__dut__DOT__sign_c));
        bufp->chgSData(oldp+32,(vlSelf->fpu_tb__DOT__dut__DOT__exp_a),13);
        bufp->chgSData(oldp+33,(vlSelf->fpu_tb__DOT__dut__DOT__exp_b),13);
        bufp->chgSData(oldp+34,(vlSelf->fpu_tb__DOT__dut__DOT__exp_c),13);
        bufp->chgQData(oldp+35,(vlSelf->fpu_tb__DOT__dut__DOT__mant_a),53);
        bufp->chgQData(oldp+37,(vlSelf->fpu_tb__DOT__dut__DOT__mant_b),53);
        bufp->chgQData(oldp+39,(vlSelf->fpu_tb__DOT__dut__DOT__mant_c),53);
        bufp->chgBit(oldp+41,(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a));
        bufp->chgBit(oldp+42,(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b));
        bufp->chgBit(oldp+43,(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_c));
        bufp->chgBit(oldp+44,(vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_a));
        bufp->chgBit(oldp+45,(vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_b));
        bufp->chgBit(oldp+46,(vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_c));
        bufp->chgBit(oldp+47,(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_a));
        bufp->chgBit(oldp+48,(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_b));
        bufp->chgBit(oldp+49,(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_c));
        bufp->chgBit(oldp+50,(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a));
        bufp->chgBit(oldp+51,(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b));
        bufp->chgBit(oldp+52,(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_c));
        bufp->chgBit(oldp+53,(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a));
        bufp->chgBit(oldp+54,(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b));
        bufp->chgBit(oldp+55,(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_c));
        bufp->chgBit(oldp+56,(vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_a));
        bufp->chgBit(oldp+57,(vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_b));
        bufp->chgBit(oldp+58,(vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_c));
        bufp->chgBit(oldp+59,(vlSelf->fpu_tb__DOT__dut__DOT__fma_sign_a_eff));
        bufp->chgBit(oldp+60,(vlSelf->fpu_tb__DOT__dut__DOT__fma_sign_c_eff));
        bufp->chgCData(oldp+61,(vlSelf->fpu_tb__DOT__dut__DOT__conv_src_fmt),2);
        bufp->chgCData(oldp+62,(vlSelf->fpu_tb__DOT__dut__DOT__conv_dst_fmt),2);
        bufp->chgBit(oldp+63,(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fadd_sub__valid_in));
        bufp->chgBit(oldp+64,(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fclass__valid_in));
        bufp->chgCData(oldp+65,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out),3);
        bufp->chgBit(oldp+66,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign));
        bufp->chgBit(oldp+67,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_zero));
        bufp->chgBit(oldp+68,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_inf));
        bufp->chgBit(oldp+69,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_qnan));
        bufp->chgBit(oldp+70,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_snan));
        bufp->chgBit(oldp+71,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_subnormal));
        bufp->chgBit(oldp+72,((2U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out))));
        bufp->chgSData(oldp+73,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask),10);
        bufp->chgSData(oldp+74,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp64),11);
        bufp->chgQData(oldp+75,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant64),52);
        bufp->chgCData(oldp+77,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp32),8);
        bufp->chgIData(oldp+78,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant32),23);
        bufp->chgCData(oldp+79,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp16),5);
        bufp->chgSData(oldp+80,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant16),10);
        bufp->chgBit(oldp+81,(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fcmp__valid_in));
        bufp->chgBit(oldp+82,(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__a_eq_b));
        bufp->chgBit(oldp+83,(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__a_lt_b));
        bufp->chgCData(oldp+84,(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__comb_fflags),5);
        bufp->chgBit(oldp+85,(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fconvert__valid_in));
        bufp->chgBit(oldp+86,(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fma__valid_in));
        bufp->chgBit(oldp+87,(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fminmax__valid_in));
        bufp->chgQData(oldp+88,(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__canonical_nan),64);
        bufp->chgBit(oldp+90,(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__a_lt_b));
        bufp->chgQData(oldp+91,(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_result),64);
        bufp->chgCData(oldp+93,(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_fflags),5);
        bufp->chgBit(oldp+94,(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fmult__valid_in));
        bufp->chgBit(oldp+95,(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fsgn__valid_in));
        bufp->chgSData(oldp+96,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp64),11);
        bufp->chgQData(oldp+97,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant64),52);
        bufp->chgCData(oldp+99,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp32),8);
        bufp->chgIData(oldp+100,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant32),23);
        bufp->chgCData(oldp+101,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp16),5);
        bufp->chgSData(oldp+102,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant16),10);
        bufp->chgSData(oldp+103,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp64),11);
        bufp->chgQData(oldp+104,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant64),52);
        bufp->chgCData(oldp+106,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp32),8);
        bufp->chgIData(oldp+107,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant32),23);
        bufp->chgCData(oldp+108,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp16),5);
        bufp->chgSData(oldp+109,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant16),10);
        bufp->chgSData(oldp+110,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp64),11);
        bufp->chgQData(oldp+111,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant64),52);
        bufp->chgCData(oldp+113,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp32),8);
        bufp->chgIData(oldp+114,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant32),23);
        bufp->chgCData(oldp+115,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp16),5);
        bufp->chgSData(oldp+116,(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant16),10);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+117,((1U & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                      >> 3U))));
        bufp->chgBit(oldp+118,(vlSelf->fpu_tb__DOT__dut__DOT__add_sign));
        bufp->chgSData(oldp+119,(vlSelf->fpu_tb__DOT__dut__DOT__add_exp),13);
        bufp->chgQData(oldp+120,(vlSelf->fpu_tb__DOT__dut__DOT__add_mant),55);
        bufp->chgCData(oldp+122,(vlSelf->fpu_tb__DOT__dut__DOT__add_grs),3);
        bufp->chgCData(oldp+123,(vlSelf->fpu_tb__DOT__dut__DOT__add_rm),3);
        bufp->chgBit(oldp+124,(vlSelf->fpu_tb__DOT__dut__DOT__add_is_nan));
        bufp->chgBit(oldp+125,(vlSelf->fpu_tb__DOT__dut__DOT__add_is_inf));
        bufp->chgBit(oldp+126,(vlSelf->fpu_tb__DOT__dut__DOT__add_is_zero));
        bufp->chgCData(oldp+127,(vlSelf->fpu_tb__DOT__dut__DOT__add_fflags),5);
        bufp->chgBit(oldp+128,((1U & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U))));
        bufp->chgBit(oldp+129,(vlSelf->fpu_tb__DOT__dut__DOT__mul_sign));
        bufp->chgSData(oldp+130,(vlSelf->fpu_tb__DOT__dut__DOT__mul_exp),13);
        bufp->chgQData(oldp+131,(vlSelf->fpu_tb__DOT__dut__DOT__mul_mant),55);
        bufp->chgCData(oldp+133,(vlSelf->fpu_tb__DOT__dut__DOT__mul_grs),3);
        bufp->chgCData(oldp+134,(vlSelf->fpu_tb__DOT__dut__DOT__mul_rm),3);
        bufp->chgBit(oldp+135,(vlSelf->fpu_tb__DOT__dut__DOT__mul_is_nan));
        bufp->chgBit(oldp+136,(vlSelf->fpu_tb__DOT__dut__DOT__mul_is_inf));
        bufp->chgBit(oldp+137,(vlSelf->fpu_tb__DOT__dut__DOT__mul_is_zero));
        bufp->chgCData(oldp+138,(vlSelf->fpu_tb__DOT__dut__DOT__mul_fflags),5);
        bufp->chgBit(oldp+139,((1U & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                      >> 4U))));
        bufp->chgBit(oldp+140,(vlSelf->fpu_tb__DOT__dut__DOT__fma_sign));
        bufp->chgSData(oldp+141,(vlSelf->fpu_tb__DOT__dut__DOT__fma_exp),13);
        bufp->chgQData(oldp+142,(vlSelf->fpu_tb__DOT__dut__DOT__fma_mant),55);
        bufp->chgCData(oldp+144,(vlSelf->fpu_tb__DOT__dut__DOT__fma_grs),3);
        bufp->chgCData(oldp+145,(vlSelf->fpu_tb__DOT__dut__DOT__fma_rm),3);
        bufp->chgBit(oldp+146,(vlSelf->fpu_tb__DOT__dut__DOT__fma_is_nan));
        bufp->chgBit(oldp+147,(vlSelf->fpu_tb__DOT__dut__DOT__fma_is_inf));
        bufp->chgBit(oldp+148,(vlSelf->fpu_tb__DOT__dut__DOT__fma_is_zero));
        bufp->chgCData(oldp+149,(vlSelf->fpu_tb__DOT__dut__DOT__fma_fflags),5);
        bufp->chgBit(oldp+150,((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                           | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe)) 
                                          >> 3U) | 
                                         ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                          >> 4U)) | 
                                        (3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))))));
        bufp->chgBit(oldp+151,(vlSelf->fpu_tb__DOT__dut__DOT__arith_sign));
        bufp->chgSData(oldp+152,(((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                   ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_exp)
                                   : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                       ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__fma_exp)
                                       : ((8U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                           ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__mul_exp)
                                           : (IData)(vlSelf->fpu_tb__DOT__dut__DOT__add_exp))))),13);
        bufp->chgQData(oldp+153,(vlSelf->fpu_tb__DOT__dut__DOT__arith_mant),55);
        bufp->chgCData(oldp+155,(vlSelf->fpu_tb__DOT__dut__DOT__arith_grs),3);
        bufp->chgCData(oldp+156,(vlSelf->fpu_tb__DOT__dut__DOT__arith_rm),3);
        bufp->chgBit(oldp+157,(vlSelf->fpu_tb__DOT__dut__DOT__arith_is_nan));
        bufp->chgBit(oldp+158,(vlSelf->fpu_tb__DOT__dut__DOT__arith_is_inf));
        bufp->chgBit(oldp+159,(vlSelf->fpu_tb__DOT__dut__DOT__arith_is_zero));
        bufp->chgCData(oldp+160,(((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                   ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_fflags)
                                   : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                       ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__fma_fflags)
                                       : ((8U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                           ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__mul_fflags)
                                           : (IData)(vlSelf->fpu_tb__DOT__dut__DOT__add_fflags))))),5);
        bufp->chgSData(oldp+161,(vlSelf->fpu_tb__DOT__dut__DOT__rnd_exp),13);
        bufp->chgQData(oldp+162,(vlSelf->fpu_tb__DOT__dut__DOT__rnd_mant),53);
        bufp->chgBit(oldp+164,(vlSelf->fpu_tb__DOT__dut__DOT__rnd_is_inf));
        bufp->chgCData(oldp+165,((((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                    ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_fflags)
                                    : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                        ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__fma_fflags)
                                        : ((8U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                            ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__mul_fflags)
                                            : (IData)(vlSelf->fpu_tb__DOT__dut__DOT__add_fflags)))) 
                                  | (((0U != (IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_grs)) 
                                      & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_is_nan)))
                                      ? 1U : 0U))),5);
        bufp->chgQData(oldp+166,(vlSelf->fpu_tb__DOT__dut__DOT__arith_result),64);
        bufp->chgBit(oldp+168,(vlSelf->fpu_tb__DOT__dut__DOT__fpack_of));
        bufp->chgBit(oldp+169,(vlSelf->fpu_tb__DOT__dut__DOT__fpack_uf));
        bufp->chgCData(oldp+170,(vlSelf->fpu_tb__DOT__dut__DOT__rd_add[0]),5);
        bufp->chgCData(oldp+171,(vlSelf->fpu_tb__DOT__dut__DOT__rd_add[1]),5);
        bufp->chgCData(oldp+172,(vlSelf->fpu_tb__DOT__dut__DOT__rd_add[2]),5);
        bufp->chgCData(oldp+173,(vlSelf->fpu_tb__DOT__dut__DOT__rd_add[3]),5);
        bufp->chgCData(oldp+174,(vlSelf->fpu_tb__DOT__dut__DOT__rd_mul[0]),5);
        bufp->chgCData(oldp+175,(vlSelf->fpu_tb__DOT__dut__DOT__rd_mul[1]),5);
        bufp->chgCData(oldp+176,(vlSelf->fpu_tb__DOT__dut__DOT__rd_mul[2]),5);
        bufp->chgCData(oldp+177,(vlSelf->fpu_tb__DOT__dut__DOT__rd_mul[3]),5);
        bufp->chgCData(oldp+178,(vlSelf->fpu_tb__DOT__dut__DOT__rd_fma[0]),5);
        bufp->chgCData(oldp+179,(vlSelf->fpu_tb__DOT__dut__DOT__rd_fma[1]),5);
        bufp->chgCData(oldp+180,(vlSelf->fpu_tb__DOT__dut__DOT__rd_fma[2]),5);
        bufp->chgCData(oldp+181,(vlSelf->fpu_tb__DOT__dut__DOT__rd_fma[3]),5);
        bufp->chgCData(oldp+182,(vlSelf->fpu_tb__DOT__dut__DOT__rd_fma[4]),5);
        bufp->chgBit(oldp+183,(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe));
        bufp->chgQData(oldp+184,(vlSelf->fpu_tb__DOT__dut__DOT__class_result),64);
        bufp->chgCData(oldp+186,(vlSelf->fpu_tb__DOT__dut__DOT__class_fflags),5);
        bufp->chgCData(oldp+187,(vlSelf->fpu_tb__DOT__dut__DOT__rd_class),5);
        bufp->chgBit(oldp+188,(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe));
        bufp->chgQData(oldp+189,(vlSelf->fpu_tb__DOT__dut__DOT__minmax_result),64);
        bufp->chgCData(oldp+191,(vlSelf->fpu_tb__DOT__dut__DOT__minmax_fflags),5);
        bufp->chgCData(oldp+192,(vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax),5);
        bufp->chgBit(oldp+193,(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe));
        bufp->chgQData(oldp+194,(vlSelf->fpu_tb__DOT__dut__DOT__cmp_result),64);
        bufp->chgCData(oldp+196,(vlSelf->fpu_tb__DOT__dut__DOT__cmp_fflags),5);
        bufp->chgCData(oldp+197,(vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp),5);
        bufp->chgBit(oldp+198,(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r));
        bufp->chgQData(oldp+199,(vlSelf->fpu_tb__DOT__dut__DOT__sgn_result),64);
        bufp->chgCData(oldp+201,(vlSelf->fpu_tb__DOT__dut__DOT__sgn_fflags),5);
        bufp->chgCData(oldp+202,(vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn),5);
        bufp->chgBit(oldp+203,((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))));
        bufp->chgBit(oldp+204,((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))));
        bufp->chgBit(oldp+205,(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_sign));
        bufp->chgSData(oldp+206,(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_exp),13);
        bufp->chgQData(oldp+207,(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_mant),55);
        bufp->chgCData(oldp+209,(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_grs),3);
        bufp->chgCData(oldp+210,(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_rm),3);
        bufp->chgBit(oldp+211,(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_is_nan));
        bufp->chgBit(oldp+212,(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_is_inf));
        bufp->chgBit(oldp+213,(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_is_zero));
        bufp->chgCData(oldp+214,(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_fflags),5);
        bufp->chgCData(oldp+215,(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt),5);
        bufp->chgBit(oldp+216,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r));
        bufp->chgQData(oldp+217,(vlSelf->fpu_tb__DOT__dut__DOT__conv_result),64);
        bufp->chgCData(oldp+219,(vlSelf->fpu_tb__DOT__dut__DOT__conv_fflags),5);
        bufp->chgCData(oldp+220,(vlSelf->fpu_tb__DOT__dut__DOT__rd_conv),5);
        bufp->chgBit(oldp+221,(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r));
        bufp->chgCData(oldp+222,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe),4);
        bufp->chgCData(oldp+223,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s1),5);
        bufp->chgCData(oldp+224,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s2),5);
        bufp->chgCData(oldp+225,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s3),5);
        bufp->chgSData(oldp+226,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_exp),13);
        bufp->chgQData(oldp+227,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_a),54);
        bufp->chgQData(oldp+229,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_b),54);
        bufp->chgBit(oldp+231,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_sign_a));
        bufp->chgBit(oldp+232,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_sign_b));
        bufp->chgCData(oldp+233,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_op),6);
        bufp->chgBit(oldp+234,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_is_nan));
        bufp->chgBit(oldp+235,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_is_inf));
        bufp->chgBit(oldp+236,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_inf_sign));
        bufp->chgCData(oldp+237,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_grs),3);
        bufp->chgCData(oldp+238,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_rm),3);
        bufp->chgSData(oldp+239,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__align_diff),13);
        bufp->chgCData(oldp+240,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__shift_amt),7);
        bufp->chgQData(oldp+241,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__grs_ext),54);
        bufp->chgBit(oldp+243,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__eff_sign_b));
        bufp->chgBit(oldp+244,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__inf_minus_inf));
        bufp->chgSData(oldp+245,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_exp),13);
        bufp->chgQData(oldp+246,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_mant),54);
        bufp->chgBit(oldp+248,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_sign));
        bufp->chgBit(oldp+249,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_is_nan));
        bufp->chgBit(oldp+250,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_is_inf));
        bufp->chgBit(oldp+251,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_inf_sign));
        bufp->chgCData(oldp+252,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_grs),3);
        bufp->chgCData(oldp+253,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_rm),3);
        bufp->chgSData(oldp+254,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_exp),13);
        bufp->chgQData(oldp+255,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_mant),55);
        bufp->chgBit(oldp+257,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_sign));
        bufp->chgBit(oldp+258,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_is_nan));
        bufp->chgBit(oldp+259,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_is_inf));
        bufp->chgBit(oldp+260,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_inf_sign));
        bufp->chgCData(oldp+261,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_grs),3);
        bufp->chgCData(oldp+262,(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_rm),3);
        bufp->chgBit(oldp+263,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign));
        bufp->chgSData(oldp+264,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp64),11);
        bufp->chgCData(oldp+265,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp32),8);
        bufp->chgCData(oldp+266,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp16),5);
        bufp->chgQData(oldp+267,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant64),52);
        bufp->chgIData(oldp+269,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant32),23);
        bufp->chgSData(oldp+270,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant16),10);
        bufp->chgSData(oldp+271,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp_unbiased),13);
        bufp->chgQData(oldp+272,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant_norm),53);
        bufp->chgBit(oldp+274,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_nan));
        bufp->chgBit(oldp+275,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_inf));
        bufp->chgBit(oldp+276,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_zero));
        bufp->chgBit(oldp+277,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_subnormal));
        bufp->chgQData(oldp+278,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result),64);
        bufp->chgCData(oldp+280,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags),5);
        bufp->chgIData(oldp+281,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz),32);
        bufp->chgIData(oldp+282,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+283,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+284,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk3__DOT__i),32);
        bufp->chgQData(oldp+285,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__int_val),64);
        bufp->chgQData(oldp+287,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__abs_val),64);
        bufp->chgWData(oldp+289,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__tmp_mant),65);
        bufp->chgIData(oldp+292,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i),32);
        bufp->chgSData(oldp+293,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk6__DOT__exp_b),13);
        bufp->chgSData(oldp+294,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk7__DOT__exp_b),13);
        bufp->chgSData(oldp+295,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk8__DOT__exp_b),13);
        bufp->chgQData(oldp+296,(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk9__DOT__int_res),64);
        bufp->chgCData(oldp+298,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state),2);
        bufp->chgBit(oldp+299,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__op_sqrt));
        bufp->chgBit(oldp+300,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__sign_r));
        bufp->chgSData(oldp+301,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__exp_r),13);
        bufp->chgWData(oldp+302,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__dividend),106);
        bufp->chgWData(oldp+306,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__divisor),106);
        bufp->chgWData(oldp+310,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder),106);
        bufp->chgQData(oldp+314,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__quotient),56);
        bufp->chgCData(oldp+316,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__iter_cnt),7);
        bufp->chgWData(oldp+317,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rem_shifted),106);
        bufp->chgCData(oldp+321,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__fflags_r),5);
        bufp->chgBit(oldp+322,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_nan_r));
        bufp->chgBit(oldp+323,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_inf_r));
        bufp->chgBit(oldp+324,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_zero_r));
        bufp->chgCData(oldp+325,(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rm_r),3);
        bufp->chgCData(oldp+326,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe),5);
        bufp->chgCData(oldp+327,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_rm),3);
        bufp->chgBit(oldp+328,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_sign_mul));
        bufp->chgSData(oldp+329,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_exp_mul),13);
        bufp->chgWData(oldp+330,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_prod),106);
        bufp->chgBit(oldp+334,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_sign_c));
        bufp->chgSData(oldp+335,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_exp_c),13);
        bufp->chgQData(oldp+336,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_mant_c),53);
        bufp->chgCData(oldp+338,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_fflags),5);
        bufp->chgBit(oldp+339,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_is_nan));
        bufp->chgBit(oldp+340,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_is_inf));
        bufp->chgBit(oldp+341,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_sign_sp));
        bufp->chgCData(oldp+342,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_rm),3);
        bufp->chgBit(oldp+343,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_sign_mul));
        bufp->chgSData(oldp+344,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_exp_mul),13);
        bufp->chgWData(oldp+345,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_prod),106);
        bufp->chgBit(oldp+349,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_sign_c));
        bufp->chgSData(oldp+350,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_exp_c),13);
        bufp->chgWData(oldp+351,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_mant_c_ext),106);
        bufp->chgCData(oldp+355,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_fflags),5);
        bufp->chgBit(oldp+356,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_is_nan));
        bufp->chgBit(oldp+357,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_is_inf));
        bufp->chgBit(oldp+358,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_sign_sp));
        bufp->chgCData(oldp+359,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_rm),3);
        bufp->chgBit(oldp+360,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_sign_big));
        bufp->chgBit(oldp+361,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_sign_small));
        bufp->chgSData(oldp+362,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_exp),13);
        bufp->chgWData(oldp+363,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big),106);
        bufp->chgWData(oldp+367,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small),106);
        bufp->chgCData(oldp+371,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_fflags),5);
        bufp->chgBit(oldp+372,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_is_nan));
        bufp->chgBit(oldp+373,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_is_inf));
        bufp->chgBit(oldp+374,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_sign_sp));
        bufp->chgCData(oldp+375,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_rm),3);
        bufp->chgBit(oldp+376,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sign));
        bufp->chgSData(oldp+377,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_exp),13);
        bufp->chgWData(oldp+378,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum),107);
        bufp->chgCData(oldp+382,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_fflags),5);
        bufp->chgBit(oldp+383,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_is_nan));
        bufp->chgBit(oldp+384,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_is_inf));
        bufp->chgBit(oldp+385,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sign_sp));
        bufp->chgCData(oldp+386,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__lz_pos),7);
        bufp->chgWData(oldp+387,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm),107);
        bufp->chgSData(oldp+391,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_exp),13);
        bufp->chgIData(oldp+392,(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+393,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe),4);
        bufp->chgBit(oldp+394,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_sign));
        bufp->chgSData(oldp+395,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_exp),13);
        bufp->chgWData(oldp+396,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_prod),106);
        bufp->chgCData(oldp+400,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_fflags),5);
        bufp->chgBit(oldp+401,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_is_nan));
        bufp->chgBit(oldp+402,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_is_inf));
        bufp->chgBit(oldp+403,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_is_zero));
        bufp->chgCData(oldp+404,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_rm),3);
        bufp->chgBit(oldp+405,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_sign));
        bufp->chgSData(oldp+406,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_exp),13);
        bufp->chgWData(oldp+407,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_prod),106);
        bufp->chgCData(oldp+411,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_fflags),5);
        bufp->chgBit(oldp+412,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_is_nan));
        bufp->chgBit(oldp+413,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_is_inf));
        bufp->chgBit(oldp+414,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_is_zero));
        bufp->chgCData(oldp+415,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_rm),3);
        bufp->chgBit(oldp+416,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_sign));
        bufp->chgSData(oldp+417,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_exp),13);
        bufp->chgQData(oldp+418,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_mant),55);
        bufp->chgCData(oldp+420,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_grs),3);
        bufp->chgCData(oldp+421,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_fflags),5);
        bufp->chgBit(oldp+422,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_is_nan));
        bufp->chgBit(oldp+423,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_is_inf));
        bufp->chgBit(oldp+424,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_is_zero));
        bufp->chgCData(oldp+425,(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_rm),3);
        bufp->chgSData(oldp+426,(vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__exp_biased),13);
        bufp->chgSData(oldp+427,(vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__exp_field),11);
        bufp->chgQData(oldp+428,(vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__mant_field),52);
        bufp->chgQData(oldp+430,(vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__mant_shifted),53);
        bufp->chgCData(oldp+432,(vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__shift),7);
        bufp->chgBit(oldp+433,(vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__round_up));
        bufp->chgQData(oldp+434,(vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__round_result),54);
        bufp->chgBit(oldp+436,(vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__round_carry));
        bufp->chgSData(oldp+437,(vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__renorm_exp),13);
        bufp->chgBit(oldp+438,((IData)(((((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
        bufp->chgCData(oldp+439,(((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)
                                   ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_class)
                                   : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)
                                       ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp)
                                       : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)
                                           ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn)
                                           : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)
                                               ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax)
                                               : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r)
                                                   ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_conv)
                                                   : 
                                                  ((3U 
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
        bufp->chgQData(oldp+440,(((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)
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
        bufp->chgBit(oldp+442,((1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))))));
        bufp->chgBit(oldp+443,((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                 | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                   & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
        bufp->chgCData(oldp+444,(((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                              | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe)) 
                                             >> 3U) 
                                            | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                               >> 4U)) 
                                           | (3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))))
                                   ? ((((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                         ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_fflags)
                                         : ((0x10U 
                                             & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                             ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__fma_fflags)
                                             : ((8U 
                                                 & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                 ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__mul_fflags)
                                                 : (IData)(vlSelf->fpu_tb__DOT__dut__DOT__add_fflags)))) 
                                       | (((0U != (IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_grs)) 
                                           & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_is_nan)))
                                           ? 1U : 0U)) 
                                      | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__fpack_of) 
                                          << 2U) | 
                                         ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__fpack_uf) 
                                          << 1U))) : 
                                  ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)
                                    ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__minmax_fflags)
                                    : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)
                                        ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__cmp_fflags)
                                        : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)
                                            ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sgn_fflags)
                                            : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r)
                                                ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_fflags)
                                                : 0U)))))),5);
    }
    bufp->chgBit(oldp+445,(vlSelf->fpu_tb__DOT__clk));
    bufp->chgBit(oldp+446,(vlSelf->fpu_tb__DOT__rst_n));
    bufp->chgQData(oldp+447,((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a) 
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
    bufp->chgBit(oldp+449,(((IData)(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in) 
                            & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_divsqrt))));
    bufp->chgQData(oldp+450,(vlSymsp->TOP__fpu_tb__DOT__bus.rs3),64);
    bufp->chgBit(oldp+452,((((((((((0x14U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                                   | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_cmp)) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_sgn)) 
                                 | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_convert)) 
                                | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_addsub)) 
                               | (2U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))) 
                              | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_minmax)) 
                             | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_fma)) 
                            || ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_divsqrt) 
                                && (0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))))));
    bufp->chgBit(oldp+453,(vlSymsp->TOP__fpu_tb__DOT__bus.ready_in));
}

void Vfpu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root__trace_cleanup\n"); );
    // Init
    Vfpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfpu_tb___024root*>(voidSelf);
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
