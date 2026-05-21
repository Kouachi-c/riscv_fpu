// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfpu_tb.h for the primary calling header

#include "Vfpu_tb__pch.h"
#include "Vfpu_tb__Syms.h"
#include "Vfpu_tb___024root.h"

VlCoroutine Vfpu_tb___024root___eval_initial__TOP__Vtiming__0__2(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___eval_initial__TOP__Vtiming__0__2\n"); );
    // Init
    std::string __Vtask_fpu_tb__DOT__chk__203__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__203__exp_res;
    __Vtask_fpu_tb__DOT__chk__203__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__203__exp_ff;
    __Vtask_fpu_tb__DOT__chk__203__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__203__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__203__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__203__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__203__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__203__exp_rd;
    __Vtask_fpu_tb__DOT__chk__203__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__203__all_ok;
    __Vtask_fpu_tb__DOT__chk__203__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__204__op;
    __Vtask_fpu_tb__DOT__run_op__204__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__204__fmt;
    __Vtask_fpu_tb__DOT__run_op__204__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__204__rm;
    __Vtask_fpu_tb__DOT__run_op__204__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__204__rd;
    __Vtask_fpu_tb__DOT__run_op__204__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__204__rs1;
    __Vtask_fpu_tb__DOT__run_op__204__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__204__rs2;
    __Vtask_fpu_tb__DOT__run_op__204__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__205__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__205__exp_res;
    __Vtask_fpu_tb__DOT__chk__205__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__205__exp_ff;
    __Vtask_fpu_tb__DOT__chk__205__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__205__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__205__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__205__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__205__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__205__exp_rd;
    __Vtask_fpu_tb__DOT__chk__205__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__205__all_ok;
    __Vtask_fpu_tb__DOT__chk__205__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__206__op;
    __Vtask_fpu_tb__DOT__run_op__206__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__206__fmt;
    __Vtask_fpu_tb__DOT__run_op__206__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__206__rm;
    __Vtask_fpu_tb__DOT__run_op__206__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__206__rd;
    __Vtask_fpu_tb__DOT__run_op__206__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__206__rs1;
    __Vtask_fpu_tb__DOT__run_op__206__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__206__rs2;
    __Vtask_fpu_tb__DOT__run_op__206__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__207__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__207__exp_res;
    __Vtask_fpu_tb__DOT__chk__207__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__207__exp_ff;
    __Vtask_fpu_tb__DOT__chk__207__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__207__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__207__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__207__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__207__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__207__exp_rd;
    __Vtask_fpu_tb__DOT__chk__207__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__207__all_ok;
    __Vtask_fpu_tb__DOT__chk__207__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__208__op;
    __Vtask_fpu_tb__DOT__run_op__208__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__208__fmt;
    __Vtask_fpu_tb__DOT__run_op__208__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__208__rm;
    __Vtask_fpu_tb__DOT__run_op__208__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__208__rd;
    __Vtask_fpu_tb__DOT__run_op__208__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__208__rs1;
    __Vtask_fpu_tb__DOT__run_op__208__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__208__rs2;
    __Vtask_fpu_tb__DOT__run_op__208__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__209__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__209__exp_res;
    __Vtask_fpu_tb__DOT__chk__209__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__209__exp_ff;
    __Vtask_fpu_tb__DOT__chk__209__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__209__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__209__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__209__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__209__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__209__exp_rd;
    __Vtask_fpu_tb__DOT__chk__209__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__209__all_ok;
    __Vtask_fpu_tb__DOT__chk__209__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__210__op;
    __Vtask_fpu_tb__DOT__run_op__210__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__210__fmt;
    __Vtask_fpu_tb__DOT__run_op__210__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__210__rm;
    __Vtask_fpu_tb__DOT__run_op__210__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__210__rd;
    __Vtask_fpu_tb__DOT__run_op__210__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__210__rs1;
    __Vtask_fpu_tb__DOT__run_op__210__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__210__rs2;
    __Vtask_fpu_tb__DOT__run_op__210__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__211__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__211__exp_res;
    __Vtask_fpu_tb__DOT__chk__211__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__211__exp_ff;
    __Vtask_fpu_tb__DOT__chk__211__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__211__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__211__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__211__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__211__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__211__exp_rd;
    __Vtask_fpu_tb__DOT__chk__211__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__211__all_ok;
    __Vtask_fpu_tb__DOT__chk__211__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__212__op;
    __Vtask_fpu_tb__DOT__run_op__212__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__212__fmt;
    __Vtask_fpu_tb__DOT__run_op__212__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__212__rm;
    __Vtask_fpu_tb__DOT__run_op__212__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__212__rd;
    __Vtask_fpu_tb__DOT__run_op__212__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__212__rs1;
    __Vtask_fpu_tb__DOT__run_op__212__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__212__rs2;
    __Vtask_fpu_tb__DOT__run_op__212__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__213__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__213__exp_res;
    __Vtask_fpu_tb__DOT__chk__213__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__213__exp_ff;
    __Vtask_fpu_tb__DOT__chk__213__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__213__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__213__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__213__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__213__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__213__exp_rd;
    __Vtask_fpu_tb__DOT__chk__213__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__213__all_ok;
    __Vtask_fpu_tb__DOT__chk__213__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__214__op;
    __Vtask_fpu_tb__DOT__run_op__214__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__214__fmt;
    __Vtask_fpu_tb__DOT__run_op__214__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__214__rm;
    __Vtask_fpu_tb__DOT__run_op__214__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__214__rd;
    __Vtask_fpu_tb__DOT__run_op__214__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__214__rs1;
    __Vtask_fpu_tb__DOT__run_op__214__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__214__rs2;
    __Vtask_fpu_tb__DOT__run_op__214__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__215__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__215__exp_res;
    __Vtask_fpu_tb__DOT__chk__215__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__215__exp_ff;
    __Vtask_fpu_tb__DOT__chk__215__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__215__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__215__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__215__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__215__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__215__exp_rd;
    __Vtask_fpu_tb__DOT__chk__215__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__215__all_ok;
    __Vtask_fpu_tb__DOT__chk__215__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__216__op;
    __Vtask_fpu_tb__DOT__run_op__216__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__216__fmt;
    __Vtask_fpu_tb__DOT__run_op__216__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__216__rm;
    __Vtask_fpu_tb__DOT__run_op__216__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__216__rd;
    __Vtask_fpu_tb__DOT__run_op__216__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__216__rs1;
    __Vtask_fpu_tb__DOT__run_op__216__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__216__rs2;
    __Vtask_fpu_tb__DOT__run_op__216__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__217__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__217__exp_res;
    __Vtask_fpu_tb__DOT__chk__217__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__217__exp_ff;
    __Vtask_fpu_tb__DOT__chk__217__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__217__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__217__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__217__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__217__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__217__exp_rd;
    __Vtask_fpu_tb__DOT__chk__217__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__217__all_ok;
    __Vtask_fpu_tb__DOT__chk__217__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__218__op;
    __Vtask_fpu_tb__DOT__run_op__218__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__218__fmt;
    __Vtask_fpu_tb__DOT__run_op__218__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__218__rm;
    __Vtask_fpu_tb__DOT__run_op__218__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__218__rd;
    __Vtask_fpu_tb__DOT__run_op__218__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__218__rs1;
    __Vtask_fpu_tb__DOT__run_op__218__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__218__rs2;
    __Vtask_fpu_tb__DOT__run_op__218__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__219__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__219__exp_res;
    __Vtask_fpu_tb__DOT__chk__219__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__219__exp_ff;
    __Vtask_fpu_tb__DOT__chk__219__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__219__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__219__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__219__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__219__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__219__exp_rd;
    __Vtask_fpu_tb__DOT__chk__219__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__219__all_ok;
    __Vtask_fpu_tb__DOT__chk__219__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__220__op;
    __Vtask_fpu_tb__DOT__run_op__220__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__220__fmt;
    __Vtask_fpu_tb__DOT__run_op__220__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__220__rm;
    __Vtask_fpu_tb__DOT__run_op__220__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__220__rd;
    __Vtask_fpu_tb__DOT__run_op__220__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__220__rs1;
    __Vtask_fpu_tb__DOT__run_op__220__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__220__rs2;
    __Vtask_fpu_tb__DOT__run_op__220__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__221__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__221__exp_res;
    __Vtask_fpu_tb__DOT__chk__221__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__221__exp_ff;
    __Vtask_fpu_tb__DOT__chk__221__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__221__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__221__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__221__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__221__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__221__exp_rd;
    __Vtask_fpu_tb__DOT__chk__221__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__221__all_ok;
    __Vtask_fpu_tb__DOT__chk__221__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__222__op;
    __Vtask_fpu_tb__DOT__run_op__222__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__222__fmt;
    __Vtask_fpu_tb__DOT__run_op__222__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__222__rm;
    __Vtask_fpu_tb__DOT__run_op__222__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__222__rd;
    __Vtask_fpu_tb__DOT__run_op__222__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__222__rs1;
    __Vtask_fpu_tb__DOT__run_op__222__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__222__rs2;
    __Vtask_fpu_tb__DOT__run_op__222__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__223__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__223__exp_res;
    __Vtask_fpu_tb__DOT__chk__223__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__223__exp_ff;
    __Vtask_fpu_tb__DOT__chk__223__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__223__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__223__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__223__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__223__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__223__exp_rd;
    __Vtask_fpu_tb__DOT__chk__223__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__223__all_ok;
    __Vtask_fpu_tb__DOT__chk__223__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__224__op;
    __Vtask_fpu_tb__DOT__run_op__224__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__224__fmt;
    __Vtask_fpu_tb__DOT__run_op__224__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__224__rm;
    __Vtask_fpu_tb__DOT__run_op__224__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__224__rd;
    __Vtask_fpu_tb__DOT__run_op__224__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__224__rs1;
    __Vtask_fpu_tb__DOT__run_op__224__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__224__rs2;
    __Vtask_fpu_tb__DOT__run_op__224__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__225__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__225__exp_res;
    __Vtask_fpu_tb__DOT__chk__225__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__225__exp_ff;
    __Vtask_fpu_tb__DOT__chk__225__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__225__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__225__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__225__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__225__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__225__exp_rd;
    __Vtask_fpu_tb__DOT__chk__225__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__225__all_ok;
    __Vtask_fpu_tb__DOT__chk__225__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__226__op;
    __Vtask_fpu_tb__DOT__run_op__226__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__226__fmt;
    __Vtask_fpu_tb__DOT__run_op__226__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__226__rm;
    __Vtask_fpu_tb__DOT__run_op__226__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__226__rd;
    __Vtask_fpu_tb__DOT__run_op__226__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__226__rs1;
    __Vtask_fpu_tb__DOT__run_op__226__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__226__rs2;
    __Vtask_fpu_tb__DOT__run_op__226__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__227__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__227__exp_res;
    __Vtask_fpu_tb__DOT__chk__227__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__227__exp_ff;
    __Vtask_fpu_tb__DOT__chk__227__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__227__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__227__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__227__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__227__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__227__exp_rd;
    __Vtask_fpu_tb__DOT__chk__227__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__227__all_ok;
    __Vtask_fpu_tb__DOT__chk__227__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__228__op;
    __Vtask_fpu_tb__DOT__run_op__228__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__228__fmt;
    __Vtask_fpu_tb__DOT__run_op__228__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__228__rm;
    __Vtask_fpu_tb__DOT__run_op__228__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__228__rd;
    __Vtask_fpu_tb__DOT__run_op__228__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__228__rs1;
    __Vtask_fpu_tb__DOT__run_op__228__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__228__rs2;
    __Vtask_fpu_tb__DOT__run_op__228__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__229__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__229__exp_res;
    __Vtask_fpu_tb__DOT__chk__229__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__229__exp_ff;
    __Vtask_fpu_tb__DOT__chk__229__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__229__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__229__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__229__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__229__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__229__exp_rd;
    __Vtask_fpu_tb__DOT__chk__229__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__229__all_ok;
    __Vtask_fpu_tb__DOT__chk__229__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__230__op;
    __Vtask_fpu_tb__DOT__run_op__230__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__230__fmt;
    __Vtask_fpu_tb__DOT__run_op__230__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__230__rm;
    __Vtask_fpu_tb__DOT__run_op__230__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__230__rd;
    __Vtask_fpu_tb__DOT__run_op__230__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__230__rs1;
    __Vtask_fpu_tb__DOT__run_op__230__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__230__rs2;
    __Vtask_fpu_tb__DOT__run_op__230__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__231__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__231__exp_res;
    __Vtask_fpu_tb__DOT__chk__231__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__231__exp_ff;
    __Vtask_fpu_tb__DOT__chk__231__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__231__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__231__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__231__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__231__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__231__exp_rd;
    __Vtask_fpu_tb__DOT__chk__231__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__231__all_ok;
    __Vtask_fpu_tb__DOT__chk__231__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__232__op;
    __Vtask_fpu_tb__DOT__run_op__232__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__232__fmt;
    __Vtask_fpu_tb__DOT__run_op__232__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__232__rm;
    __Vtask_fpu_tb__DOT__run_op__232__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__232__rd;
    __Vtask_fpu_tb__DOT__run_op__232__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__232__rs1;
    __Vtask_fpu_tb__DOT__run_op__232__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__232__rs2;
    __Vtask_fpu_tb__DOT__run_op__232__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__233__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__233__exp_res;
    __Vtask_fpu_tb__DOT__chk__233__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__233__exp_ff;
    __Vtask_fpu_tb__DOT__chk__233__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__233__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__233__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__233__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__233__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__233__exp_rd;
    __Vtask_fpu_tb__DOT__chk__233__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__233__all_ok;
    __Vtask_fpu_tb__DOT__chk__233__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__234__op;
    __Vtask_fpu_tb__DOT__run_op__234__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__234__fmt;
    __Vtask_fpu_tb__DOT__run_op__234__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__234__rm;
    __Vtask_fpu_tb__DOT__run_op__234__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__234__rd;
    __Vtask_fpu_tb__DOT__run_op__234__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__234__rs1;
    __Vtask_fpu_tb__DOT__run_op__234__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__234__rs2;
    __Vtask_fpu_tb__DOT__run_op__234__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__235__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__235__exp_res;
    __Vtask_fpu_tb__DOT__chk__235__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__235__exp_ff;
    __Vtask_fpu_tb__DOT__chk__235__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__235__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__235__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__235__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__235__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__235__exp_rd;
    __Vtask_fpu_tb__DOT__chk__235__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__235__all_ok;
    __Vtask_fpu_tb__DOT__chk__235__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__236__op;
    __Vtask_fpu_tb__DOT__run_op__236__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__236__fmt;
    __Vtask_fpu_tb__DOT__run_op__236__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__236__rm;
    __Vtask_fpu_tb__DOT__run_op__236__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__236__rd;
    __Vtask_fpu_tb__DOT__run_op__236__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__236__rs1;
    __Vtask_fpu_tb__DOT__run_op__236__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__236__rs2;
    __Vtask_fpu_tb__DOT__run_op__236__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__237__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__237__exp_res;
    __Vtask_fpu_tb__DOT__chk__237__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__237__exp_ff;
    __Vtask_fpu_tb__DOT__chk__237__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__237__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__237__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__237__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__237__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__237__exp_rd;
    __Vtask_fpu_tb__DOT__chk__237__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__237__all_ok;
    __Vtask_fpu_tb__DOT__chk__237__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__238__op;
    __Vtask_fpu_tb__DOT__run_op__238__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__238__fmt;
    __Vtask_fpu_tb__DOT__run_op__238__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__238__rm;
    __Vtask_fpu_tb__DOT__run_op__238__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__238__rd;
    __Vtask_fpu_tb__DOT__run_op__238__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__238__rs1;
    __Vtask_fpu_tb__DOT__run_op__238__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__238__rs2;
    __Vtask_fpu_tb__DOT__run_op__238__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__239__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__239__exp_res;
    __Vtask_fpu_tb__DOT__chk__239__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__239__exp_ff;
    __Vtask_fpu_tb__DOT__chk__239__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__239__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__239__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__239__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__239__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__239__exp_rd;
    __Vtask_fpu_tb__DOT__chk__239__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__239__all_ok;
    __Vtask_fpu_tb__DOT__chk__239__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__240__op;
    __Vtask_fpu_tb__DOT__run_op__240__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__240__fmt;
    __Vtask_fpu_tb__DOT__run_op__240__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__240__rm;
    __Vtask_fpu_tb__DOT__run_op__240__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__240__rd;
    __Vtask_fpu_tb__DOT__run_op__240__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__240__rs1;
    __Vtask_fpu_tb__DOT__run_op__240__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__240__rs2;
    __Vtask_fpu_tb__DOT__run_op__240__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__241__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__241__exp_res;
    __Vtask_fpu_tb__DOT__chk__241__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__241__exp_ff;
    __Vtask_fpu_tb__DOT__chk__241__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__241__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__241__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__241__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__241__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__241__exp_rd;
    __Vtask_fpu_tb__DOT__chk__241__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__241__all_ok;
    __Vtask_fpu_tb__DOT__chk__241__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__242__op;
    __Vtask_fpu_tb__DOT__run_op__242__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__242__fmt;
    __Vtask_fpu_tb__DOT__run_op__242__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__242__rm;
    __Vtask_fpu_tb__DOT__run_op__242__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__242__rd;
    __Vtask_fpu_tb__DOT__run_op__242__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__242__rs1;
    __Vtask_fpu_tb__DOT__run_op__242__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__242__rs2;
    __Vtask_fpu_tb__DOT__run_op__242__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__243__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__243__exp_res;
    __Vtask_fpu_tb__DOT__chk__243__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__243__exp_ff;
    __Vtask_fpu_tb__DOT__chk__243__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__243__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__243__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__243__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__243__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__243__exp_rd;
    __Vtask_fpu_tb__DOT__chk__243__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__243__all_ok;
    __Vtask_fpu_tb__DOT__chk__243__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__244__op;
    __Vtask_fpu_tb__DOT__run_op__244__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__244__fmt;
    __Vtask_fpu_tb__DOT__run_op__244__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__244__rm;
    __Vtask_fpu_tb__DOT__run_op__244__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__244__rd;
    __Vtask_fpu_tb__DOT__run_op__244__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__244__rs1;
    __Vtask_fpu_tb__DOT__run_op__244__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__244__rs2;
    __Vtask_fpu_tb__DOT__run_op__244__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__245__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__245__exp_res;
    __Vtask_fpu_tb__DOT__chk__245__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__245__exp_ff;
    __Vtask_fpu_tb__DOT__chk__245__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__245__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__245__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__245__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__245__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__245__exp_rd;
    __Vtask_fpu_tb__DOT__chk__245__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__245__all_ok;
    __Vtask_fpu_tb__DOT__chk__245__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__246__op;
    __Vtask_fpu_tb__DOT__run_op__246__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__246__fmt;
    __Vtask_fpu_tb__DOT__run_op__246__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__246__rm;
    __Vtask_fpu_tb__DOT__run_op__246__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__246__rd;
    __Vtask_fpu_tb__DOT__run_op__246__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__246__rs1;
    __Vtask_fpu_tb__DOT__run_op__246__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__246__rs2;
    __Vtask_fpu_tb__DOT__run_op__246__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__247__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__247__exp_res;
    __Vtask_fpu_tb__DOT__chk__247__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__247__exp_ff;
    __Vtask_fpu_tb__DOT__chk__247__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__247__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__247__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__247__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__247__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__247__exp_rd;
    __Vtask_fpu_tb__DOT__chk__247__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__247__all_ok;
    __Vtask_fpu_tb__DOT__chk__247__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__248__op;
    __Vtask_fpu_tb__DOT__run_op__248__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__248__fmt;
    __Vtask_fpu_tb__DOT__run_op__248__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__248__rm;
    __Vtask_fpu_tb__DOT__run_op__248__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__248__rd;
    __Vtask_fpu_tb__DOT__run_op__248__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__248__rs1;
    __Vtask_fpu_tb__DOT__run_op__248__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__248__rs2;
    __Vtask_fpu_tb__DOT__run_op__248__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__249__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__249__exp_res;
    __Vtask_fpu_tb__DOT__chk__249__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__249__exp_ff;
    __Vtask_fpu_tb__DOT__chk__249__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__249__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__249__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__249__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__249__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__249__exp_rd;
    __Vtask_fpu_tb__DOT__chk__249__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__249__all_ok;
    __Vtask_fpu_tb__DOT__chk__249__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__250__op;
    __Vtask_fpu_tb__DOT__run_op__250__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__250__fmt;
    __Vtask_fpu_tb__DOT__run_op__250__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__250__rm;
    __Vtask_fpu_tb__DOT__run_op__250__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__250__rd;
    __Vtask_fpu_tb__DOT__run_op__250__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__250__rs1;
    __Vtask_fpu_tb__DOT__run_op__250__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__250__rs2;
    __Vtask_fpu_tb__DOT__run_op__250__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__251__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__251__exp_res;
    __Vtask_fpu_tb__DOT__chk__251__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__251__exp_ff;
    __Vtask_fpu_tb__DOT__chk__251__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__251__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__251__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__251__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__251__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__251__exp_rd;
    __Vtask_fpu_tb__DOT__chk__251__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__251__all_ok;
    __Vtask_fpu_tb__DOT__chk__251__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__252__op;
    __Vtask_fpu_tb__DOT__run_op__252__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__252__fmt;
    __Vtask_fpu_tb__DOT__run_op__252__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__252__rm;
    __Vtask_fpu_tb__DOT__run_op__252__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__252__rd;
    __Vtask_fpu_tb__DOT__run_op__252__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__252__rs1;
    __Vtask_fpu_tb__DOT__run_op__252__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__252__rs2;
    __Vtask_fpu_tb__DOT__run_op__252__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__253__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__253__exp_res;
    __Vtask_fpu_tb__DOT__chk__253__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__253__exp_ff;
    __Vtask_fpu_tb__DOT__chk__253__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__253__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__253__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__253__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__253__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__253__exp_rd;
    __Vtask_fpu_tb__DOT__chk__253__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__253__all_ok;
    __Vtask_fpu_tb__DOT__chk__253__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__254__op;
    __Vtask_fpu_tb__DOT__run_op__254__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__254__fmt;
    __Vtask_fpu_tb__DOT__run_op__254__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__254__rm;
    __Vtask_fpu_tb__DOT__run_op__254__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__254__rd;
    __Vtask_fpu_tb__DOT__run_op__254__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__254__rs1;
    __Vtask_fpu_tb__DOT__run_op__254__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__254__rs2;
    __Vtask_fpu_tb__DOT__run_op__254__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__255__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__255__exp_res;
    __Vtask_fpu_tb__DOT__chk__255__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__255__exp_ff;
    __Vtask_fpu_tb__DOT__chk__255__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__255__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__255__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__255__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__255__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__255__exp_rd;
    __Vtask_fpu_tb__DOT__chk__255__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__255__all_ok;
    __Vtask_fpu_tb__DOT__chk__255__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__256__op;
    __Vtask_fpu_tb__DOT__run_op__256__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__256__fmt;
    __Vtask_fpu_tb__DOT__run_op__256__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__256__rm;
    __Vtask_fpu_tb__DOT__run_op__256__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__256__rd;
    __Vtask_fpu_tb__DOT__run_op__256__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__256__rs1;
    __Vtask_fpu_tb__DOT__run_op__256__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__256__rs2;
    __Vtask_fpu_tb__DOT__run_op__256__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__257__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__257__exp_res;
    __Vtask_fpu_tb__DOT__chk__257__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__257__exp_ff;
    __Vtask_fpu_tb__DOT__chk__257__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__257__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__257__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__257__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__257__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__257__exp_rd;
    __Vtask_fpu_tb__DOT__chk__257__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__257__all_ok;
    __Vtask_fpu_tb__DOT__chk__257__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__258__op;
    __Vtask_fpu_tb__DOT__run_op__258__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__258__fmt;
    __Vtask_fpu_tb__DOT__run_op__258__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__258__rm;
    __Vtask_fpu_tb__DOT__run_op__258__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__258__rd;
    __Vtask_fpu_tb__DOT__run_op__258__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__258__rs1;
    __Vtask_fpu_tb__DOT__run_op__258__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__258__rs2;
    __Vtask_fpu_tb__DOT__run_op__258__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__259__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__259__exp_res;
    __Vtask_fpu_tb__DOT__chk__259__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__259__exp_ff;
    __Vtask_fpu_tb__DOT__chk__259__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__259__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__259__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__259__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__259__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__259__exp_rd;
    __Vtask_fpu_tb__DOT__chk__259__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__259__all_ok;
    __Vtask_fpu_tb__DOT__chk__259__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__260__op;
    __Vtask_fpu_tb__DOT__run_op__260__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__260__fmt;
    __Vtask_fpu_tb__DOT__run_op__260__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__260__rm;
    __Vtask_fpu_tb__DOT__run_op__260__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__260__rd;
    __Vtask_fpu_tb__DOT__run_op__260__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__260__rs1;
    __Vtask_fpu_tb__DOT__run_op__260__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__260__rs2;
    __Vtask_fpu_tb__DOT__run_op__260__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__261__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__261__exp_res;
    __Vtask_fpu_tb__DOT__chk__261__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__261__exp_ff;
    __Vtask_fpu_tb__DOT__chk__261__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__261__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__261__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__261__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__261__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__261__exp_rd;
    __Vtask_fpu_tb__DOT__chk__261__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__261__all_ok;
    __Vtask_fpu_tb__DOT__chk__261__all_ok = 0;
    CData/*5:0*/ __Vtask_fpu_tb__DOT__run_op__262__op;
    __Vtask_fpu_tb__DOT__run_op__262__op = 0;
    CData/*1:0*/ __Vtask_fpu_tb__DOT__run_op__262__fmt;
    __Vtask_fpu_tb__DOT__run_op__262__fmt = 0;
    CData/*2:0*/ __Vtask_fpu_tb__DOT__run_op__262__rm;
    __Vtask_fpu_tb__DOT__run_op__262__rm = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__run_op__262__rd;
    __Vtask_fpu_tb__DOT__run_op__262__rd = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__262__rs1;
    __Vtask_fpu_tb__DOT__run_op__262__rs1 = 0;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__run_op__262__rs2;
    __Vtask_fpu_tb__DOT__run_op__262__rs2 = 0;
    std::string __Vtask_fpu_tb__DOT__chk__263__name;
    QData/*63:0*/ __Vtask_fpu_tb__DOT__chk__263__exp_res;
    __Vtask_fpu_tb__DOT__chk__263__exp_res = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__263__exp_ff;
    __Vtask_fpu_tb__DOT__chk__263__exp_ff = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__263__exp_fp_wen;
    __Vtask_fpu_tb__DOT__chk__263__exp_fp_wen = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__263__exp_int_wen;
    __Vtask_fpu_tb__DOT__chk__263__exp_int_wen = 0;
    CData/*4:0*/ __Vtask_fpu_tb__DOT__chk__263__exp_rd;
    __Vtask_fpu_tb__DOT__chk__263__exp_rd = 0;
    CData/*0:0*/ __Vtask_fpu_tb__DOT__chk__263__all_ok;
    __Vtask_fpu_tb__DOT__chk__263__all_ok = 0;
    // Body
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__203__exp_rd = 3U;
    __Vtask_fpu_tb__DOT__chk__203__exp_int_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__203__exp_fp_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__203__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__203__exp_res = 0x2aULL;
    __Vtask_fpu_tb__DOT__chk__203__name = std::string{"F2I FP64  42.0 \342\206\222 42"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__203__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__203__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__203__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__203__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__203__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__203__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__203__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__203__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__203__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__203__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__203__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__203__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__203__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__203__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__203__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__203__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__203__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__203__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__203__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__204__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__204__rs1 = 0xc008000000000000ULL;
    __Vtask_fpu_tb__DOT__run_op__204__rd = 4U;
    __Vtask_fpu_tb__DOT__run_op__204__rm = 1U;
    __Vtask_fpu_tb__DOT__run_op__204__fmt = 2U;
    __Vtask_fpu_tb__DOT__run_op__204__op = 0x12U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__204__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__204__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__204__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__204__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__204__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__204__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__205__exp_rd = 4U;
    __Vtask_fpu_tb__DOT__chk__205__exp_int_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__205__exp_fp_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__205__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__205__exp_res = 0xfffffffffffffffdULL;
    __Vtask_fpu_tb__DOT__chk__205__name = std::string{"F2I FP64  -3.0 \342\206\222 -3"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__205__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__205__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__205__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__205__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__205__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__205__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__205__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__205__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__205__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__205__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__205__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__205__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__205__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__205__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__205__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__205__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__205__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__205__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__205__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__206__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__206__rs1 = 0x3fe0000000000000ULL;
    __Vtask_fpu_tb__DOT__run_op__206__rd = 5U;
    __Vtask_fpu_tb__DOT__run_op__206__rm = 1U;
    __Vtask_fpu_tb__DOT__run_op__206__fmt = 2U;
    __Vtask_fpu_tb__DOT__run_op__206__op = 0x12U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__206__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__206__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__206__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__206__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__206__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__206__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__207__exp_rd = 5U;
    __Vtask_fpu_tb__DOT__chk__207__exp_int_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__207__exp_fp_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__207__exp_ff = 1U;
    __Vtask_fpu_tb__DOT__chk__207__exp_res = 0ULL;
    __Vtask_fpu_tb__DOT__chk__207__name = std::string{"F2I FP64  0.5 \342\206\222 0 + NX"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__207__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__207__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__207__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__207__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__207__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__207__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__207__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__207__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__207__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__207__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__207__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__207__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__207__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__207__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__207__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__207__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__207__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__207__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__207__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__208__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__208__rs1 = 0x7ff0000000000000ULL;
    __Vtask_fpu_tb__DOT__run_op__208__rd = 6U;
    __Vtask_fpu_tb__DOT__run_op__208__rm = 1U;
    __Vtask_fpu_tb__DOT__run_op__208__fmt = 2U;
    __Vtask_fpu_tb__DOT__run_op__208__op = 0x12U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__208__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__208__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__208__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__208__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__208__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__208__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__209__exp_rd = 6U;
    __Vtask_fpu_tb__DOT__chk__209__exp_int_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__209__exp_fp_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__209__exp_ff = 0x10U;
    __Vtask_fpu_tb__DOT__chk__209__exp_res = 0x7fffffffffffffffULL;
    __Vtask_fpu_tb__DOT__chk__209__name = std::string{"F2I FP64  +inf \342\206\222 INT_MAX + NV"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__209__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__209__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__209__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__209__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__209__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__209__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__209__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__209__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__209__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__209__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__209__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__209__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__209__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__209__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__209__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__209__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__209__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__209__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__209__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__210__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__210__rs1 = 0xfff0000000000000ULL;
    __Vtask_fpu_tb__DOT__run_op__210__rd = 7U;
    __Vtask_fpu_tb__DOT__run_op__210__rm = 1U;
    __Vtask_fpu_tb__DOT__run_op__210__fmt = 2U;
    __Vtask_fpu_tb__DOT__run_op__210__op = 0x12U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__210__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__210__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__210__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__210__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__210__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__210__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__211__exp_rd = 7U;
    __Vtask_fpu_tb__DOT__chk__211__exp_int_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__211__exp_fp_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__211__exp_ff = 0x10U;
    __Vtask_fpu_tb__DOT__chk__211__exp_res = 0x8000000000000000ULL;
    __Vtask_fpu_tb__DOT__chk__211__name = std::string{"F2I FP64  -inf \342\206\222 INT_MIN + NV"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__211__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__211__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__211__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__211__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__211__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__211__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__211__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__211__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__211__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__211__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__211__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__211__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__211__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__211__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__211__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__211__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__211__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__211__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__211__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__212__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__212__rs1 = 0x7ff8000000000000ULL;
    __Vtask_fpu_tb__DOT__run_op__212__rd = 8U;
    __Vtask_fpu_tb__DOT__run_op__212__rm = 1U;
    __Vtask_fpu_tb__DOT__run_op__212__fmt = 2U;
    __Vtask_fpu_tb__DOT__run_op__212__op = 0x12U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__212__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__212__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__212__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__212__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__212__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__212__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__213__exp_rd = 8U;
    __Vtask_fpu_tb__DOT__chk__213__exp_int_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__213__exp_fp_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__213__exp_ff = 0x10U;
    __Vtask_fpu_tb__DOT__chk__213__exp_res = 0x7fffffffffffffffULL;
    __Vtask_fpu_tb__DOT__chk__213__name = std::string{"F2I FP64  qNaN \342\206\222 INT_MAX + NV"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__213__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__213__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__213__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__213__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__213__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__213__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__213__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__213__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__213__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__213__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__213__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__213__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__213__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__213__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__213__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__213__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__213__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__213__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__213__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__214__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__214__rs1 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__214__rd = 9U;
    __Vtask_fpu_tb__DOT__run_op__214__rm = 1U;
    __Vtask_fpu_tb__DOT__run_op__214__fmt = 2U;
    __Vtask_fpu_tb__DOT__run_op__214__op = 0x12U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__214__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__214__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__214__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__214__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__214__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__214__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__215__exp_rd = 9U;
    __Vtask_fpu_tb__DOT__chk__215__exp_int_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__215__exp_fp_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__215__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__215__exp_res = 0ULL;
    __Vtask_fpu_tb__DOT__chk__215__name = std::string{"F2I FP64  +0.0 \342\206\222 0"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__215__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__215__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__215__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__215__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__215__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__215__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__215__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__215__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__215__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__215__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__215__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__215__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__215__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__215__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__215__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__215__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__215__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__215__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__215__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__216__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__216__rs1 = 0x3f800000ULL;
    __Vtask_fpu_tb__DOT__run_op__216__rd = 0xaU;
    __Vtask_fpu_tb__DOT__run_op__216__rm = 1U;
    __Vtask_fpu_tb__DOT__run_op__216__fmt = 1U;
    __Vtask_fpu_tb__DOT__run_op__216__op = 0x12U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__216__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__216__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__216__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__216__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__216__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__216__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__217__exp_rd = 0xaU;
    __Vtask_fpu_tb__DOT__chk__217__exp_int_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__217__exp_fp_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__217__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__217__exp_res = 1ULL;
    __Vtask_fpu_tb__DOT__chk__217__name = std::string{"F2I FP32  +1.0 \342\206\222 1"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__217__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__217__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__217__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__217__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__217__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__217__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__217__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__217__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__217__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__217__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__217__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__217__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__217__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__217__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__217__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__217__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__217__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__217__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__217__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__218__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__218__rs1 = 0x42280000ULL;
    __Vtask_fpu_tb__DOT__run_op__218__rd = 0xbU;
    __Vtask_fpu_tb__DOT__run_op__218__rm = 1U;
    __Vtask_fpu_tb__DOT__run_op__218__fmt = 1U;
    __Vtask_fpu_tb__DOT__run_op__218__op = 0x12U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__218__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__218__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__218__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__218__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__218__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__218__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__219__exp_rd = 0xbU;
    __Vtask_fpu_tb__DOT__chk__219__exp_int_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__219__exp_fp_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__219__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__219__exp_res = 0x2aULL;
    __Vtask_fpu_tb__DOT__chk__219__name = std::string{"F2I FP32  42.0 \342\206\222 42"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__219__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__219__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__219__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__219__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__219__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__219__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__219__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__219__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__219__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__219__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__219__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__219__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__219__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__219__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__219__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__219__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__219__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__219__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__219__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__220__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__220__rs1 = 0xc2280000ULL;
    __Vtask_fpu_tb__DOT__run_op__220__rd = 0xcU;
    __Vtask_fpu_tb__DOT__run_op__220__rm = 1U;
    __Vtask_fpu_tb__DOT__run_op__220__fmt = 1U;
    __Vtask_fpu_tb__DOT__run_op__220__op = 0x12U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__220__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__220__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__220__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__220__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__220__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__220__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__221__exp_rd = 0xcU;
    __Vtask_fpu_tb__DOT__chk__221__exp_int_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__221__exp_fp_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__221__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__221__exp_res = 0xffffffffffffffd6ULL;
    __Vtask_fpu_tb__DOT__chk__221__name = std::string{"F2I FP32  -42.0 \342\206\222 -42"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__221__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__221__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__221__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__221__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__221__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__221__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__221__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__221__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__221__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__221__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__221__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__221__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__221__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__221__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__221__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__221__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__221__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__221__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__221__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__222__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__222__rs1 = 0x7f800000ULL;
    __Vtask_fpu_tb__DOT__run_op__222__rd = 0xdU;
    __Vtask_fpu_tb__DOT__run_op__222__rm = 1U;
    __Vtask_fpu_tb__DOT__run_op__222__fmt = 1U;
    __Vtask_fpu_tb__DOT__run_op__222__op = 0x12U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__222__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__222__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__222__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__222__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__222__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__222__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__223__exp_rd = 0xdU;
    __Vtask_fpu_tb__DOT__chk__223__exp_int_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__223__exp_fp_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__223__exp_ff = 0x10U;
    __Vtask_fpu_tb__DOT__chk__223__exp_res = 0x7fffffffffffffffULL;
    __Vtask_fpu_tb__DOT__chk__223__name = std::string{"F2I FP32  +inf \342\206\222 INT_MAX + NV"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__223__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__223__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__223__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__223__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__223__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__223__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__223__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__223__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__223__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__223__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__223__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__223__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__223__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__223__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__223__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__223__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__223__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__223__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__223__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__224__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__224__rs1 = 0x3f000000ULL;
    __Vtask_fpu_tb__DOT__run_op__224__rd = 0xeU;
    __Vtask_fpu_tb__DOT__run_op__224__rm = 1U;
    __Vtask_fpu_tb__DOT__run_op__224__fmt = 1U;
    __Vtask_fpu_tb__DOT__run_op__224__op = 0x12U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__224__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__224__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__224__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__224__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__224__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__224__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__225__exp_rd = 0xeU;
    __Vtask_fpu_tb__DOT__chk__225__exp_int_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__225__exp_fp_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__225__exp_ff = 1U;
    __Vtask_fpu_tb__DOT__chk__225__exp_res = 0ULL;
    __Vtask_fpu_tb__DOT__chk__225__name = std::string{"F2I FP32  0.5 \342\206\222 0 + NX"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__225__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__225__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__225__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__225__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__225__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__225__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__225__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__225__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__225__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__225__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__225__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__225__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__225__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__225__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__225__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__225__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__225__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__225__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__225__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__226__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__226__rs1 = 0x3c00ULL;
    __Vtask_fpu_tb__DOT__run_op__226__rd = 0xfU;
    __Vtask_fpu_tb__DOT__run_op__226__rm = 1U;
    __Vtask_fpu_tb__DOT__run_op__226__fmt = 0U;
    __Vtask_fpu_tb__DOT__run_op__226__op = 0x12U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__226__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__226__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__226__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__226__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__226__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__226__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__227__exp_rd = 0xfU;
    __Vtask_fpu_tb__DOT__chk__227__exp_int_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__227__exp_fp_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__227__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__227__exp_res = 1ULL;
    __Vtask_fpu_tb__DOT__chk__227__name = std::string{"F2I FP16  +1.0 \342\206\222 1"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__227__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__227__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__227__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__227__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__227__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__227__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__227__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__227__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__227__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__227__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__227__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__227__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__227__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__227__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__227__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__227__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__227__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__227__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__227__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__228__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__228__rs1 = 0x5140ULL;
    __Vtask_fpu_tb__DOT__run_op__228__rd = 0x10U;
    __Vtask_fpu_tb__DOT__run_op__228__rm = 1U;
    __Vtask_fpu_tb__DOT__run_op__228__fmt = 0U;
    __Vtask_fpu_tb__DOT__run_op__228__op = 0x12U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__228__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__228__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__228__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__228__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__228__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__228__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__229__exp_rd = 0x10U;
    __Vtask_fpu_tb__DOT__chk__229__exp_int_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__229__exp_fp_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__229__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__229__exp_res = 0x2aULL;
    __Vtask_fpu_tb__DOT__chk__229__name = std::string{"F2I FP16  42.0 \342\206\222 42"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__229__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__229__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__229__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__229__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__229__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__229__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__229__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__229__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__229__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__229__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__229__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__229__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__229__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__229__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__229__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__229__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__229__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__229__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__229__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__230__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__230__rs1 = 0xc000ULL;
    __Vtask_fpu_tb__DOT__run_op__230__rd = 0x11U;
    __Vtask_fpu_tb__DOT__run_op__230__rm = 1U;
    __Vtask_fpu_tb__DOT__run_op__230__fmt = 0U;
    __Vtask_fpu_tb__DOT__run_op__230__op = 0x12U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__230__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__230__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__230__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__230__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__230__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__230__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__231__exp_rd = 0x11U;
    __Vtask_fpu_tb__DOT__chk__231__exp_int_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__231__exp_fp_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__231__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__231__exp_res = 0xfffffffffffffffeULL;
    __Vtask_fpu_tb__DOT__chk__231__name = std::string{"F2I FP16  -2.0 \342\206\222 -2"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__231__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__231__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__231__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__231__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__231__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__231__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__231__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__231__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__231__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__231__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__231__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__231__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__231__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__231__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__231__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__231__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__231__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__231__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__231__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__232__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__232__rs1 = 0x7c00ULL;
    __Vtask_fpu_tb__DOT__run_op__232__rd = 0x12U;
    __Vtask_fpu_tb__DOT__run_op__232__rm = 1U;
    __Vtask_fpu_tb__DOT__run_op__232__fmt = 0U;
    __Vtask_fpu_tb__DOT__run_op__232__op = 0x12U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__232__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__232__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__232__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__232__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__232__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__232__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__233__exp_rd = 0x12U;
    __Vtask_fpu_tb__DOT__chk__233__exp_int_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__233__exp_fp_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__233__exp_ff = 0x10U;
    __Vtask_fpu_tb__DOT__chk__233__exp_res = 0x7fffffffffffffffULL;
    __Vtask_fpu_tb__DOT__chk__233__name = std::string{"F2I FP16  +inf \342\206\222 INT_MAX + NV"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__233__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__233__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__233__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__233__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__233__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__233__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__233__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__233__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__233__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__233__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__233__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__233__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__233__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__233__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__233__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__233__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__233__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__233__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__233__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    VL_WRITEF("\n======= FCVT I2F =======\n");
    __Vtask_fpu_tb__DOT__run_op__234__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__234__rs1 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__234__rd = 1U;
    __Vtask_fpu_tb__DOT__run_op__234__rm = 0U;
    __Vtask_fpu_tb__DOT__run_op__234__fmt = 2U;
    __Vtask_fpu_tb__DOT__run_op__234__op = 0x13U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__234__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__234__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__234__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__234__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__234__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__234__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__235__exp_rd = 1U;
    __Vtask_fpu_tb__DOT__chk__235__exp_int_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__235__exp_fp_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__235__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__235__exp_res = 0ULL;
    __Vtask_fpu_tb__DOT__chk__235__name = std::string{"I2F INT\342\206\222FP64  0 \342\206\222 +0.0"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__235__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__235__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__235__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__235__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__235__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__235__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__235__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__235__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__235__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__235__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__235__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__235__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__235__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__235__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__235__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__235__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__235__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__235__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__235__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__236__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__236__rs1 = 1ULL;
    __Vtask_fpu_tb__DOT__run_op__236__rd = 2U;
    __Vtask_fpu_tb__DOT__run_op__236__rm = 0U;
    __Vtask_fpu_tb__DOT__run_op__236__fmt = 2U;
    __Vtask_fpu_tb__DOT__run_op__236__op = 0x13U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__236__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__236__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__236__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__236__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__236__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__236__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__237__exp_rd = 2U;
    __Vtask_fpu_tb__DOT__chk__237__exp_int_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__237__exp_fp_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__237__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__237__exp_res = 0x3ff0000000000000ULL;
    __Vtask_fpu_tb__DOT__chk__237__name = std::string{"I2F INT\342\206\222FP64  1 \342\206\222 1.0"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__237__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__237__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__237__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__237__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__237__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__237__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__237__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__237__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__237__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__237__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__237__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__237__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__237__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__237__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__237__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__237__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__237__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__237__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__237__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__238__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__238__rs1 = 2ULL;
    __Vtask_fpu_tb__DOT__run_op__238__rd = 3U;
    __Vtask_fpu_tb__DOT__run_op__238__rm = 0U;
    __Vtask_fpu_tb__DOT__run_op__238__fmt = 2U;
    __Vtask_fpu_tb__DOT__run_op__238__op = 0x13U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__238__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__238__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__238__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__238__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__238__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__238__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__239__exp_rd = 3U;
    __Vtask_fpu_tb__DOT__chk__239__exp_int_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__239__exp_fp_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__239__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__239__exp_res = 0x4000000000000000ULL;
    __Vtask_fpu_tb__DOT__chk__239__name = std::string{"I2F INT\342\206\222FP64  2 \342\206\222 2.0"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__239__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__239__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__239__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__239__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__239__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__239__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__239__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__239__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__239__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__239__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__239__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__239__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__239__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__239__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__239__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__239__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__239__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__239__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__239__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__240__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__240__rs1 = 0x2aULL;
    __Vtask_fpu_tb__DOT__run_op__240__rd = 4U;
    __Vtask_fpu_tb__DOT__run_op__240__rm = 0U;
    __Vtask_fpu_tb__DOT__run_op__240__fmt = 2U;
    __Vtask_fpu_tb__DOT__run_op__240__op = 0x13U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__240__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__240__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__240__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__240__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__240__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__240__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__241__exp_rd = 4U;
    __Vtask_fpu_tb__DOT__chk__241__exp_int_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__241__exp_fp_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__241__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__241__exp_res = 0x4045000000000000ULL;
    __Vtask_fpu_tb__DOT__chk__241__name = std::string{"I2F INT\342\206\222FP64  42 \342\206\222 42.0"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__241__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__241__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__241__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__241__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__241__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__241__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__241__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__241__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__241__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__241__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__241__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__241__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__241__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__241__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__241__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__241__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__241__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__241__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__241__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__242__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__242__rs1 = 0xffffffffffffffffULL;
    __Vtask_fpu_tb__DOT__run_op__242__rd = 5U;
    __Vtask_fpu_tb__DOT__run_op__242__rm = 0U;
    __Vtask_fpu_tb__DOT__run_op__242__fmt = 2U;
    __Vtask_fpu_tb__DOT__run_op__242__op = 0x13U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__242__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__242__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__242__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__242__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__242__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__242__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__243__exp_rd = 5U;
    __Vtask_fpu_tb__DOT__chk__243__exp_int_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__243__exp_fp_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__243__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__243__exp_res = 0xbff0000000000000ULL;
    __Vtask_fpu_tb__DOT__chk__243__name = std::string{"I2F INT\342\206\222FP64  -1 \342\206\222 -1.0"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__243__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__243__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__243__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__243__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__243__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__243__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__243__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__243__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__243__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__243__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__243__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__243__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__243__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__243__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__243__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__243__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__243__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__243__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__243__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__244__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__244__rs1 = 0xffffffffffffffd6ULL;
    __Vtask_fpu_tb__DOT__run_op__244__rd = 6U;
    __Vtask_fpu_tb__DOT__run_op__244__rm = 0U;
    __Vtask_fpu_tb__DOT__run_op__244__fmt = 2U;
    __Vtask_fpu_tb__DOT__run_op__244__op = 0x13U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__244__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__244__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__244__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__244__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__244__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__244__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__245__exp_rd = 6U;
    __Vtask_fpu_tb__DOT__chk__245__exp_int_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__245__exp_fp_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__245__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__245__exp_res = 0xc045000000000000ULL;
    __Vtask_fpu_tb__DOT__chk__245__name = std::string{"I2F INT\342\206\222FP64  -42 \342\206\222 -42.0"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__245__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__245__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__245__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__245__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__245__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__245__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__245__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__245__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__245__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__245__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__245__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__245__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__245__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__245__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__245__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__245__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__245__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__245__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__245__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__246__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__246__rs1 = 1ULL;
    __Vtask_fpu_tb__DOT__run_op__246__rd = 7U;
    __Vtask_fpu_tb__DOT__run_op__246__rm = 0U;
    __Vtask_fpu_tb__DOT__run_op__246__fmt = 1U;
    __Vtask_fpu_tb__DOT__run_op__246__op = 0x13U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__246__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__246__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__246__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__246__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__246__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__246__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__247__exp_rd = 7U;
    __Vtask_fpu_tb__DOT__chk__247__exp_int_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__247__exp_fp_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__247__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__247__exp_res = 0x3f800000ULL;
    __Vtask_fpu_tb__DOT__chk__247__name = std::string{"I2F INT\342\206\222FP32  1 \342\206\222 1.0"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__247__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__247__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__247__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__247__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__247__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__247__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__247__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__247__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__247__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__247__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__247__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__247__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__247__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__247__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__247__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__247__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__247__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__247__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__247__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__248__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__248__rs1 = 0x2aULL;
    __Vtask_fpu_tb__DOT__run_op__248__rd = 8U;
    __Vtask_fpu_tb__DOT__run_op__248__rm = 0U;
    __Vtask_fpu_tb__DOT__run_op__248__fmt = 1U;
    __Vtask_fpu_tb__DOT__run_op__248__op = 0x13U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__248__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__248__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__248__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__248__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__248__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__248__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__249__exp_rd = 8U;
    __Vtask_fpu_tb__DOT__chk__249__exp_int_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__249__exp_fp_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__249__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__249__exp_res = 0x42280000ULL;
    __Vtask_fpu_tb__DOT__chk__249__name = std::string{"I2F INT\342\206\222FP32  42 \342\206\222 42.0"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__249__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__249__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__249__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__249__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__249__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__249__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__249__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__249__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__249__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__249__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__249__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__249__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__249__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__249__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__249__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__249__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__249__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__249__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__249__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__250__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__250__rs1 = 0xffffffffffffffffULL;
    __Vtask_fpu_tb__DOT__run_op__250__rd = 9U;
    __Vtask_fpu_tb__DOT__run_op__250__rm = 0U;
    __Vtask_fpu_tb__DOT__run_op__250__fmt = 1U;
    __Vtask_fpu_tb__DOT__run_op__250__op = 0x13U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__250__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__250__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__250__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__250__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__250__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__250__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__251__exp_rd = 9U;
    __Vtask_fpu_tb__DOT__chk__251__exp_int_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__251__exp_fp_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__251__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__251__exp_res = 0xbf800000ULL;
    __Vtask_fpu_tb__DOT__chk__251__name = std::string{"I2F INT\342\206\222FP32  -1 \342\206\222 -1.0"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__251__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__251__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__251__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__251__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__251__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__251__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__251__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__251__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__251__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__251__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__251__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__251__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__251__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__251__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__251__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__251__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__251__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__251__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__251__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__252__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__252__rs1 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__252__rd = 0xaU;
    __Vtask_fpu_tb__DOT__run_op__252__rm = 0U;
    __Vtask_fpu_tb__DOT__run_op__252__fmt = 1U;
    __Vtask_fpu_tb__DOT__run_op__252__op = 0x13U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__252__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__252__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__252__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__252__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__252__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__252__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__253__exp_rd = 0xaU;
    __Vtask_fpu_tb__DOT__chk__253__exp_int_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__253__exp_fp_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__253__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__253__exp_res = 0ULL;
    __Vtask_fpu_tb__DOT__chk__253__name = std::string{"I2F INT\342\206\222FP32  0 \342\206\222 +0.0"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__253__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__253__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__253__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__253__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__253__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__253__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__253__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__253__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__253__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__253__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__253__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__253__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__253__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__253__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__253__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__253__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__253__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__253__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__253__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__254__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__254__rs1 = 1ULL;
    __Vtask_fpu_tb__DOT__run_op__254__rd = 0xbU;
    __Vtask_fpu_tb__DOT__run_op__254__rm = 0U;
    __Vtask_fpu_tb__DOT__run_op__254__fmt = 0U;
    __Vtask_fpu_tb__DOT__run_op__254__op = 0x13U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__254__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__254__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__254__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__254__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__254__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__254__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__255__exp_rd = 0xbU;
    __Vtask_fpu_tb__DOT__chk__255__exp_int_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__255__exp_fp_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__255__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__255__exp_res = 0x3c00ULL;
    __Vtask_fpu_tb__DOT__chk__255__name = std::string{"I2F INT\342\206\222FP16  1 \342\206\222 1.0"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__255__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__255__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__255__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__255__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__255__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__255__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__255__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__255__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__255__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__255__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__255__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__255__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__255__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__255__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__255__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__255__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__255__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__255__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__255__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__256__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__256__rs1 = 2ULL;
    __Vtask_fpu_tb__DOT__run_op__256__rd = 0xcU;
    __Vtask_fpu_tb__DOT__run_op__256__rm = 0U;
    __Vtask_fpu_tb__DOT__run_op__256__fmt = 0U;
    __Vtask_fpu_tb__DOT__run_op__256__op = 0x13U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__256__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__256__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__256__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__256__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__256__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__256__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__257__exp_rd = 0xcU;
    __Vtask_fpu_tb__DOT__chk__257__exp_int_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__257__exp_fp_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__257__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__257__exp_res = 0x4000ULL;
    __Vtask_fpu_tb__DOT__chk__257__name = std::string{"I2F INT\342\206\222FP16  2 \342\206\222 2.0"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__257__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__257__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__257__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__257__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__257__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__257__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__257__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__257__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__257__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__257__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__257__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__257__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__257__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__257__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__257__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__257__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__257__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__257__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__257__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__258__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__258__rs1 = 0x2aULL;
    __Vtask_fpu_tb__DOT__run_op__258__rd = 0xdU;
    __Vtask_fpu_tb__DOT__run_op__258__rm = 0U;
    __Vtask_fpu_tb__DOT__run_op__258__fmt = 0U;
    __Vtask_fpu_tb__DOT__run_op__258__op = 0x13U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__258__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__258__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__258__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__258__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__258__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__258__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__259__exp_rd = 0xdU;
    __Vtask_fpu_tb__DOT__chk__259__exp_int_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__259__exp_fp_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__259__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__259__exp_res = 0x5140ULL;
    __Vtask_fpu_tb__DOT__chk__259__name = std::string{"I2F INT\342\206\222FP16  42 \342\206\222 42.0"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__259__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__259__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__259__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__259__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__259__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__259__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__259__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__259__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__259__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__259__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__259__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__259__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__259__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__259__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__259__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__259__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__259__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__259__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__259__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__260__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__260__rs1 = 0xffffffffffffffffULL;
    __Vtask_fpu_tb__DOT__run_op__260__rd = 0xeU;
    __Vtask_fpu_tb__DOT__run_op__260__rm = 0U;
    __Vtask_fpu_tb__DOT__run_op__260__fmt = 0U;
    __Vtask_fpu_tb__DOT__run_op__260__op = 0x13U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__260__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__260__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__260__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__260__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__260__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__260__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__261__exp_rd = 0xeU;
    __Vtask_fpu_tb__DOT__chk__261__exp_int_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__261__exp_fp_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__261__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__261__exp_res = 0xbc00ULL;
    __Vtask_fpu_tb__DOT__chk__261__name = std::string{"I2F INT\342\206\222FP16  -1 \342\206\222 -1.0"};
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    __Vtask_fpu_tb__DOT__chk__261__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__261__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__261__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__261__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__261__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__261__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__261__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__261__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__261__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__261__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__261__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__261__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__261__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__261__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__261__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__261__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__261__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__261__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__261__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    __Vtask_fpu_tb__DOT__run_op__262__rs2 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__262__rs1 = 0ULL;
    __Vtask_fpu_tb__DOT__run_op__262__rd = 0xfU;
    __Vtask_fpu_tb__DOT__run_op__262__rm = 0U;
    __Vtask_fpu_tb__DOT__run_op__262__fmt = 0U;
    __Vtask_fpu_tb__DOT__run_op__262__op = 0x13U;
    vlSymsp->TOP__fpu_tb__DOT__bus.op = __Vtask_fpu_tb__DOT__run_op__262__op;
    vlSymsp->TOP__fpu_tb__DOT__bus.fmt = __Vtask_fpu_tb__DOT__run_op__262__fmt;
    vlSymsp->TOP__fpu_tb__DOT__bus.rm = __Vtask_fpu_tb__DOT__run_op__262__rm;
    vlSymsp->TOP__fpu_tb__DOT__bus.rd = __Vtask_fpu_tb__DOT__run_op__262__rd;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs1 = __Vtask_fpu_tb__DOT__run_op__262__rs1;
    vlSymsp->TOP__fpu_tb__DOT__bus.rs2 = __Vtask_fpu_tb__DOT__run_op__262__rs2;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    while ((1U & (~ (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.ready_out)))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 1U;
    co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fpu_tb.clk)", 
                                                       "fpu_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__fpu_tb__DOT__bus.valid_in = 0U;
    while ((1U & (~ ((((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                           >> 3U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                      >> 3U) | ((3U 
                                                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                                | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                                   >> 4U)))) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe)) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r))))) {
        co_await vlSelf->__VtrigSched_he2390f0c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge fpu_tb.clk)", 
                                                           "fpu_tb.sv", 
                                                           88);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    vlSelf->fpu_tb__DOT__ff = ((IData)((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
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
                                                : 0U)))));
    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__class_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_class;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__cmp_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__sgn_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__minmax_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__conv_result;
        vlSelf->fpu_tb__DOT__rd_o = vlSelf->fpu_tb__DOT__dut__DOT__rd_conv;
    } else {
        vlSelf->fpu_tb__DOT__res = vlSelf->fpu_tb__DOT__dut__DOT__arith_result;
        vlSelf->fpu_tb__DOT__rd_o = ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                                      ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt)
                                      : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                                          ? vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
                                         [4U] : ((8U 
                                                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                                  ? 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
                                                 [3U]
                                                  : 
                                                 vlSelf->fpu_tb__DOT__dut__DOT__rd_add
                                                 [3U])));
    }
    vlSelf->fpu_tb__DOT__fpw = (1U & ((((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                                          >> 3U) | 
                                         (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                                           >> 3U) | 
                                          ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
                                           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                                              >> 4U)))) 
                                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe)) 
                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r)) 
                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)))));
    vlSelf->fpu_tb__DOT__intw = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe) 
                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe)) 
                                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r)));
    __Vtask_fpu_tb__DOT__chk__263__exp_rd = 0xfU;
    __Vtask_fpu_tb__DOT__chk__263__exp_int_wen = 0U;
    __Vtask_fpu_tb__DOT__chk__263__exp_fp_wen = 1U;
    __Vtask_fpu_tb__DOT__chk__263__exp_ff = 0U;
    __Vtask_fpu_tb__DOT__chk__263__exp_res = 0ULL;
    __Vtask_fpu_tb__DOT__chk__263__name = std::string{"I2F INT\342\206\222FP16  0 \342\206\222 +0.0"};
    __Vtask_fpu_tb__DOT__chk__263__all_ok = (((((vlSelf->fpu_tb__DOT__res 
                                                 == __Vtask_fpu_tb__DOT__chk__263__exp_res) 
                                                & ((IData)(vlSelf->fpu_tb__DOT__ff) 
                                                   == (IData)(__Vtask_fpu_tb__DOT__chk__263__exp_ff))) 
                                               & ((IData)(vlSelf->fpu_tb__DOT__fpw) 
                                                  == (IData)(__Vtask_fpu_tb__DOT__chk__263__exp_fp_wen))) 
                                              & ((IData)(vlSelf->fpu_tb__DOT__intw) 
                                                 == (IData)(__Vtask_fpu_tb__DOT__chk__263__exp_int_wen))) 
                                             & ((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                                                == (IData)(__Vtask_fpu_tb__DOT__chk__263__exp_rd)));
    if (__Vtask_fpu_tb__DOT__chk__263__all_ok) {
        VL_WRITEF("  PASS  %-40@ | result=0x%016x  fflags=%05b\n",
                  -1,&(__Vtask_fpu_tb__DOT__chk__263__name),
                  64,vlSelf->fpu_tb__DOT__res,5,(IData)(vlSelf->fpu_tb__DOT__ff));
        vlSelf->fpu_tb__DOT__pass_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF("  FAIL  %-40@\n",-1,&(__Vtask_fpu_tb__DOT__chk__263__name));
        if (VL_UNLIKELY((vlSelf->fpu_tb__DOT__res != __Vtask_fpu_tb__DOT__chk__263__exp_res))) {
            VL_WRITEF("         result  : got 0x%016x  exp 0x%016x\n",
                      64,vlSelf->fpu_tb__DOT__res,64,
                      __Vtask_fpu_tb__DOT__chk__263__exp_res);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__ff) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__263__exp_ff)))) {
            VL_WRITEF("         fflags  : got %05b  exp %05b\n",
                      5,vlSelf->fpu_tb__DOT__ff,5,(IData)(__Vtask_fpu_tb__DOT__chk__263__exp_ff));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__fpw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__263__exp_fp_wen)))) {
            VL_WRITEF("         fp_wen  : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__fpw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__263__exp_fp_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__intw) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__263__exp_int_wen)))) {
            VL_WRITEF("         int_wen : got %0b  exp %0b\n",
                      1,vlSelf->fpu_tb__DOT__intw,1,
                      (IData)(__Vtask_fpu_tb__DOT__chk__263__exp_int_wen));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->fpu_tb__DOT__rd_o) 
                         != (IData)(__Vtask_fpu_tb__DOT__chk__263__exp_rd)))) {
            VL_WRITEF("         rd_out  : got %0#  exp %0#\n",
                      5,vlSelf->fpu_tb__DOT__rd_o,5,
                      (IData)(__Vtask_fpu_tb__DOT__chk__263__exp_rd));
        }
        vlSelf->fpu_tb__DOT__fail_cnt = ((IData)(1U) 
                                         + vlSelf->fpu_tb__DOT__fail_cnt);
    }
    VL_WRITEF("\n=======================================================\n  Results : %0d passed,  %0d failed\n",
              32,vlSelf->fpu_tb__DOT__pass_cnt,32,vlSelf->fpu_tb__DOT__fail_cnt);
    if ((0U == vlSelf->fpu_tb__DOT__fail_cnt)) {
        VL_WRITEF("  STATUS  : ALL TESTS PASSED\n");
    } else {
        VL_WRITEF("  STATUS  : FAILURES DETECTED\n");
    }
    VL_WRITEF("=======================================================\n\n");
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "fpu_tb.sv", 
                                       1317);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_FINISH_MT("fpu_tb.sv", 1317, "");
    vlSelf->__Vm_traceActivity[3U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vfpu_tb___024root___eval_initial__TOP__Vtiming__1(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xbebc200ULL, 
                                       nullptr, "fpu_tb.sv", 
                                       1325);
    VL_WRITEF("[%0t] %%Error: fpu_tb.sv:1326: Assertion failed in %Nfpu_tb: WATCHDOG: simulation timeout at %0t\n",
              64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
              64,VL_TIME_UNITED_Q(1000),-9);
    VL_STOP_MT("fpu_tb.sv", 1326, "");
    VL_FINISH_MT("fpu_tb.sv", 1327, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfpu_tb___024root___dump_triggers__act(Vfpu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfpu_tb___024root___eval_triggers__act(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->fpu_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__fpu_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__fpu_tb__DOT__clk__0 
        = vlSelf->fpu_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfpu_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vfpu_tb___024root___act_comb__TOP__0(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fmult__valid_in 
        = ((IData)(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in) 
           & (2U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)));
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fclass__valid_in 
        = ((IData)(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in) 
           & (0x14U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)));
    vlSelf->fpu_tb__DOT__dut__DOT__conv_dst_fmt = (
                                                   (0x12U 
                                                    == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                                                    ? 3U
                                                    : (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.fmt));
    vlSelf->fpu_tb__DOT__dut__DOT__conv_src_fmt = (
                                                   (0x13U 
                                                    == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                                                    ? 3U
                                                    : 
                                                   (3U 
                                                    & ((0x11U 
                                                        == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                                                        ? (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.rs2)
                                                        : (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.fmt))));
    vlSelf->fpu_tb__DOT__dut__DOT__sign_c = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__op_is_divsqrt = 
        ((3U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
         | (4U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)));
    vlSelf->fpu_tb__DOT__dut__DOT__op_is_addsub = (
                                                   (0U 
                                                    == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                                                   | (1U 
                                                      == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)));
    vlSelf->fpu_tb__DOT__dut__DOT__op_is_minmax = (
                                                   (9U 
                                                    == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                                                   | (0xaU 
                                                      == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)));
    vlSelf->fpu_tb__DOT__dut__DOT__op_is_cmp = (((0xeU 
                                                  == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                                                 | (0xfU 
                                                    == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))) 
                                                | (0x10U 
                                                   == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)));
    vlSelf->fpu_tb__DOT__dut__DOT__op_is_fma = ((((5U 
                                                   == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                                                  | (6U 
                                                     == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))) 
                                                 | (7U 
                                                    == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))) 
                                                | (8U 
                                                   == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)));
    vlSelf->fpu_tb__DOT__dut__DOT__op_is_sgn = (((0xbU 
                                                  == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                                                 | (0xcU 
                                                    == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))) 
                                                | (0xdU 
                                                   == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)));
    vlSelf->fpu_tb__DOT__dut__DOT__op_is_convert = 
        (((0x11U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
          | (0x12U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))) 
         | (0x13U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)));
    vlSelf->fpu_tb__DOT__dut__DOT__exp_c = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__mant_c = 0ULL;
    vlSelf->fpu_tb__DOT__dut__DOT__is_zero_c = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_inf_c = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_nan_c = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_c = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_snan_c = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_c = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__sign_b = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__sign_a = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 2U;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_zero = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_inf = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_qnan = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_snan = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_subnormal = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__exp_a = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__mant_a = 0ULL;
    vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_a = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_snan_a = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_a = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__exp_b = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__mant_b = 0ULL;
    vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_b = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_snan_b = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_b = 0U;
    if ((2U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.fmt))) {
        vlSelf->fpu_tb__DOT__dut__DOT__sign_c = (1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__fpu_tb__DOT__bus.rs3 
                                                            >> 0x3fU)));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__canonical_nan = 0x7ff8000000000000ULL;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign 
            = (1U & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                             >> 0x3fU)));
        vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp64 
            = (0x7ffU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs3 
                                 >> 0x34U)));
        vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant64 
            = (0xfffffffffffffULL & vlSymsp->TOP__fpu_tb__DOT__bus.rs3);
        if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp64))) {
            if ((0ULL == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant64)) {
                vlSelf->fpu_tb__DOT__dut__DOT__is_zero_c = 1U;
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_c = 1U;
                vlSelf->fpu_tb__DOT__dut__DOT__exp_c = 0x1c02U;
                vlSelf->fpu_tb__DOT__dut__DOT__mant_c 
                    = vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant64;
            }
        } else if ((0x7ffU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp64))) {
            if ((0ULL == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant64)) {
                vlSelf->fpu_tb__DOT__dut__DOT__is_inf_c = 1U;
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__is_nan_c = 1U;
                if ((1U & (IData)((vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant64 
                                   >> 0x33U)))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_c = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_snan_c = 1U;
                }
            }
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__exp_c = 
                (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp64) 
                            - (IData)(0x3ffU)));
            vlSelf->fpu_tb__DOT__dut__DOT__mant_c = 
                (0x10000000000000ULL | vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant64);
        }
        vlSelf->fpu_tb__DOT__dut__DOT__sign_b = (1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                                            >> 0x3fU)));
        vlSelf->fpu_tb__DOT__dut__DOT__sign_a = (1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                                            >> 0x3fU)));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp64 
            = (0x7ffU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                 >> 0x34U)));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant64 
            = (0xfffffffffffffULL & vlSymsp->TOP__fpu_tb__DOT__bus.rs1);
        if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp64))) {
            if ((0ULL == vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant64)) {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 0U;
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_zero = 1U;
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 1U;
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_subnormal = 1U;
            }
        } else if ((0x7ffU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp64))) {
            if ((0ULL == vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant64)) {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 3U;
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_inf = 1U;
            } else if ((1U & (IData)((vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant64 
                                      >> 0x33U)))) {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 4U;
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_qnan = 1U;
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 5U;
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_snan = 1U;
            }
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 2U;
        }
        vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp64 
            = (0x7ffU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                 >> 0x34U)));
        vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant64 
            = (0xfffffffffffffULL & vlSymsp->TOP__fpu_tb__DOT__bus.rs1);
        if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp64))) {
            if ((0ULL == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant64)) {
                vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a = 1U;
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_a = 1U;
                vlSelf->fpu_tb__DOT__dut__DOT__exp_a = 0x1c02U;
                vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                    = vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant64;
            }
        } else if ((0x7ffU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp64))) {
            if ((0ULL == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant64)) {
                vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a = 1U;
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a = 1U;
                if ((1U & (IData)((vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant64 
                                   >> 0x33U)))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_a = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_snan_a = 1U;
                }
            }
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__exp_a = 
                (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp64) 
                            - (IData)(0x3ffU)));
            vlSelf->fpu_tb__DOT__dut__DOT__mant_a = 
                (0x10000000000000ULL | vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant64);
        }
        vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp64 
            = (0x7ffU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                 >> 0x34U)));
        vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant64 
            = (0xfffffffffffffULL & vlSymsp->TOP__fpu_tb__DOT__bus.rs2);
        if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp64))) {
            if ((0ULL == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant64)) {
                vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b = 1U;
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_b = 1U;
                vlSelf->fpu_tb__DOT__dut__DOT__exp_b = 0x1c02U;
                vlSelf->fpu_tb__DOT__dut__DOT__mant_b 
                    = vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant64;
            }
        } else if ((0x7ffU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp64))) {
            if ((0ULL == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant64)) {
                vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b = 1U;
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b = 1U;
                if ((1U & (IData)((vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant64 
                                   >> 0x33U)))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_b = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_snan_b = 1U;
                }
            }
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__exp_b = 
                (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp64) 
                            - (IData)(0x3ffU)));
            vlSelf->fpu_tb__DOT__dut__DOT__mant_b = 
                (0x10000000000000ULL | vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant64);
        }
    } else if ((1U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.fmt))) {
        if ((0xffffffffU == (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs3 
                                     >> 0x20U)))) {
            vlSelf->fpu_tb__DOT__dut__DOT__sign_c = 
                (1U & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs3 
                               >> 0x1fU)));
        }
        vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__canonical_nan = 0xffffffff7fc00000ULL;
        if ((0xffffffffU == (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                     >> 0x20U)))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign 
                = (1U & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                 >> 0x1fU)));
            vlSelf->fpu_tb__DOT__dut__DOT__sign_a = 
                (1U & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                               >> 0x1fU)));
        }
        if ((0xffffffffU != (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs3 
                                     >> 0x20U)))) {
            vlSelf->fpu_tb__DOT__dut__DOT__is_nan_c = 1U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_c = 1U;
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp32 
                = (0xffU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs3 
                                    >> 0x17U)));
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant32 
                = (0x7fffffU & (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.rs3));
            if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp32))) {
                if ((0U == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant32)) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_zero_c = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_c = 1U;
                    vlSelf->fpu_tb__DOT__dut__DOT__exp_c = 0x1f82U;
                    vlSelf->fpu_tb__DOT__dut__DOT__mant_c 
                        = ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant32)) 
                           << 0x1dU);
                }
            } else if ((0xffU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp32))) {
                if ((0U == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant32)) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_inf_c = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_nan_c = 1U;
                    if ((0x400000U & vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant32)) {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_c = 1U;
                    } else {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_snan_c = 1U;
                    }
                }
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__exp_c 
                    = (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp32) 
                                  - (IData)(0x7fU)));
                vlSelf->fpu_tb__DOT__dut__DOT__mant_c 
                    = (0x10000000000000ULL | ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant32)) 
                                              << 0x1dU));
            }
        }
        if ((0xffffffffU == (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                     >> 0x20U)))) {
            vlSelf->fpu_tb__DOT__dut__DOT__sign_b = 
                (1U & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                               >> 0x1fU)));
        }
        if ((0xffffffffU != (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                     >> 0x20U)))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 4U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_qnan = 1U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a = 1U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_a = 1U;
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp32 
                = (0xffU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                    >> 0x17U)));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant32 
                = (0x7fffffU & (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.rs1));
            if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp32))) {
                if ((0U == vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant32)) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 0U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_zero = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 1U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_subnormal = 1U;
                }
            } else if ((0xffU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp32))) {
                if ((0U == vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant32)) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 3U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_inf = 1U;
                } else if ((0x400000U & vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant32)) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 4U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_qnan = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 5U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_snan = 1U;
                }
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 2U;
            }
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp32 
                = (0xffU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                    >> 0x17U)));
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant32 
                = (0x7fffffU & (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.rs1));
            if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp32))) {
                if ((0U == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant32)) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_a = 1U;
                    vlSelf->fpu_tb__DOT__dut__DOT__exp_a = 0x1f82U;
                    vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                        = ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant32)) 
                           << 0x1dU);
                }
            } else if ((0xffU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp32))) {
                if ((0U == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant32)) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a = 1U;
                    if ((0x400000U & vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant32)) {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_a = 1U;
                    } else {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_snan_a = 1U;
                    }
                }
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__exp_a 
                    = (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp32) 
                                  - (IData)(0x7fU)));
                vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                    = (0x10000000000000ULL | ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant32)) 
                                              << 0x1dU));
            }
        }
        if ((0xffffffffU != (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                     >> 0x20U)))) {
            vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b = 1U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_b = 1U;
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp32 
                = (0xffU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                    >> 0x17U)));
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant32 
                = (0x7fffffU & (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.rs2));
            if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp32))) {
                if ((0U == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant32)) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_b = 1U;
                    vlSelf->fpu_tb__DOT__dut__DOT__exp_b = 0x1f82U;
                    vlSelf->fpu_tb__DOT__dut__DOT__mant_b 
                        = ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant32)) 
                           << 0x1dU);
                }
            } else if ((0xffU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp32))) {
                if ((0U == vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant32)) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b = 1U;
                    if ((0x400000U & vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant32)) {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_b = 1U;
                    } else {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_snan_b = 1U;
                    }
                }
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__exp_b 
                    = (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp32) 
                                  - (IData)(0x7fU)));
                vlSelf->fpu_tb__DOT__dut__DOT__mant_b 
                    = (0x10000000000000ULL | ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant32)) 
                                              << 0x1dU));
            }
        }
    } else {
        vlSelf->fpu_tb__DOT__dut__DOT__sign_c = ((0U 
                                                  == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.fmt)) 
                                                 && (1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__fpu_tb__DOT__bus.rs3 
                                                                >> 0xfU))));
        if ((0U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.fmt))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__canonical_nan = 0xffffffffffff7e00ULL;
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp16 
                = (0x1fU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs3 
                                    >> 0xaU)));
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant16 
                = (0x3ffU & (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.rs3));
            if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp16))) {
                if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant16))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_zero_c = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_c = 1U;
                    vlSelf->fpu_tb__DOT__dut__DOT__exp_c = 0x1ff2U;
                    vlSelf->fpu_tb__DOT__dut__DOT__mant_c 
                        = ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant16)) 
                           << 0x2aU);
                }
            } else if ((0x1fU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp16))) {
                if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant16))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_inf_c = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_nan_c = 1U;
                    if ((0x200U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant16))) {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_c = 1U;
                    } else {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_snan_c = 1U;
                    }
                }
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__exp_c 
                    = (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__exp16) 
                                  - (IData)(0xfU)));
                vlSelf->fpu_tb__DOT__dut__DOT__mant_c 
                    = (0x10000000000000ULL | ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_c__DOT__mant16)) 
                                              << 0x2aU));
            }
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp16 
                = (0x1fU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                    >> 0xaU)));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant16 
                = (0x3ffU & (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.rs1));
            if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp16))) {
                if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant16))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 0U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_zero = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 1U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_subnormal = 1U;
                }
            } else if ((0x1fU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__exp16))) {
                if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant16))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 3U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_inf = 1U;
                } else if ((0x200U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__u_fclassify__DOT__mant16))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 4U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_qnan = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 5U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_snan = 1U;
                }
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 2U;
            }
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp16 
                = (0x1fU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                    >> 0xaU)));
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant16 
                = (0x3ffU & (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.rs1));
            if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp16))) {
                if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant16))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_a = 1U;
                    vlSelf->fpu_tb__DOT__dut__DOT__exp_a = 0x1ff2U;
                    vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                        = ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant16)) 
                           << 0x2aU);
                }
            } else if ((0x1fU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp16))) {
                if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant16))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a = 1U;
                    if ((0x200U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant16))) {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_a = 1U;
                    } else {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_snan_a = 1U;
                    }
                }
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__exp_a 
                    = (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__exp16) 
                                  - (IData)(0xfU)));
                vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                    = (0x10000000000000ULL | ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_a__DOT__mant16)) 
                                              << 0x2aU));
            }
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp16 
                = (0x1fU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                    >> 0xaU)));
            vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant16 
                = (0x3ffU & (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.rs2));
            if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp16))) {
                if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant16))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_b = 1U;
                    vlSelf->fpu_tb__DOT__dut__DOT__exp_b = 0x1ff2U;
                    vlSelf->fpu_tb__DOT__dut__DOT__mant_b 
                        = ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant16)) 
                           << 0x2aU);
                }
            } else if ((0x1fU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp16))) {
                if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant16))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b = 1U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b = 1U;
                    if ((0x200U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant16))) {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_b = 1U;
                    } else {
                        vlSelf->fpu_tb__DOT__dut__DOT__is_snan_b = 1U;
                    }
                }
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__exp_b 
                    = (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__exp16) 
                                  - (IData)(0xfU)));
                vlSelf->fpu_tb__DOT__dut__DOT__mant_b 
                    = (0x10000000000000ULL | ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_funpack_b__DOT__mant16)) 
                                              << 0x2aU));
            }
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__canonical_nan = 0x7ff8000000000000ULL;
            vlSelf->fpu_tb__DOT__dut__DOT__exp_c = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__mant_c = 0ULL;
            vlSelf->fpu_tb__DOT__dut__DOT__is_zero_c = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_inf_c = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_nan_c = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_c = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_snan_c = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_c = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out = 2U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_zero = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_inf = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_qnan = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_snan = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_subnormal = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__exp_a = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__mant_a = 0ULL;
            vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_a = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_snan_a = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_a = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__exp_b = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__mant_b = 0ULL;
            vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_qnan_b = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_snan_b = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__is_subnormal_b = 0U;
        }
        vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign 
            = ((0U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.fmt)) 
               && (1U & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                 >> 0xfU))));
        vlSelf->fpu_tb__DOT__dut__DOT__sign_b = ((0U 
                                                  == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.fmt)) 
                                                 && (1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                                                >> 0xfU))));
        vlSelf->fpu_tb__DOT__dut__DOT__sign_a = ((0U 
                                                  == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.fmt)) 
                                                 && (1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                                                >> 0xfU))));
    }
    vlSelf->fpu_tb__DOT__dut__DOT__fma_sign_c_eff = 
        ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_c) 
         ^ ((6U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
            | (8U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))));
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fadd_sub__valid_in 
        = ((IData)(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in) 
           & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_addsub));
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fminmax__valid_in 
        = ((IData)(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in) 
           & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_minmax));
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fcmp__valid_in 
        = ((IData)(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in) 
           & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_cmp));
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fma__valid_in 
        = ((IData)(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in) 
           & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_fma));
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fsgn__valid_in 
        = ((IData)(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in) 
           & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_sgn));
    vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fconvert__valid_in 
        = ((IData)(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in) 
           & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_convert));
    vlSymsp->TOP__fpu_tb__DOT__bus.ready_out = ((((
                                                   (((((0x14U 
                                                        == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                                                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_cmp)) 
                                                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_sgn)) 
                                                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_convert)) 
                                                    | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_addsub)) 
                                                   | (2U 
                                                      == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))) 
                                                  | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_minmax)) 
                                                 | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_fma)) 
                                                || ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_divsqrt) 
                                                    && (0U 
                                                        == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))));
    vlSelf->fpu_tb__DOT__dut__DOT__fma_sign_a_eff = 
        ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a) 
         ^ ((7U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
            | (8U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask 
        = ((0x3f8U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask)) 
           | ((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign) 
                & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_subnormal)) 
               << 2U) | ((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign) 
                           & (2U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out))) 
                          << 1U) | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign) 
                                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_inf)))));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask 
        = ((0x3e7U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask)) 
           | ((((~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign)) 
                & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_zero)) 
               << 4U) | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign) 
                          & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_zero)) 
                         << 3U)));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask 
        = ((0x39fU & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask)) 
           | ((((~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign)) 
                & (2U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__class_out))) 
               << 6U) | (((~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign)) 
                          & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_subnormal)) 
                         << 5U)));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask 
        = ((0x27fU & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask)) 
           | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_snan) 
               << 8U) | (((~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__sign)) 
                          & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_inf)) 
                         << 7U)));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask 
        = ((0x1ffU & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask)) 
           | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__is_qnan) 
              << 9U));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_fflags = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__comb_fflags = 0U;
    if (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a) 
         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b))) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__comb_fflags 
            = ((0xeU == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                ? ((0xfU & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__comb_fflags)) 
                   | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_a) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_b)) 
                      << 4U)) : (((0xfU == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                                  || (0x10U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)))
                                  ? (0x10U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__comb_fflags))
                                  : 0U));
    }
    vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__a_eq_b 
        = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a) 
            & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b)) 
           || (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b))
                ? ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a) 
                   == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b))
                : ((1U & (~ ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                             | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b)))) 
                   && ((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a) 
                         == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b)) 
                        & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a) 
                           == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b))) 
                       & (vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                          == vlSelf->fpu_tb__DOT__dut__DOT__mant_b)))));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__a_lt_b 
        = ((1U & (~ ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a) 
                     & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b)))) 
           && (1U & (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                      & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b))
                      ? ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a) 
                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b)))
                      : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a)
                          ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a)
                          : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b)
                              ? (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b))
                              : (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a) 
                                  ^ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b))
                                  ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a)
                                  : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a)
                                      ? (VL_GTS_III(13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a), (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b)) 
                                         | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a) 
                                             == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b)) 
                                            & (vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                                               > vlSelf->fpu_tb__DOT__dut__DOT__mant_b)))
                                      : (VL_LTS_III(13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a), (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b)) 
                                         | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a) 
                                             == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b)) 
                                            & (vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                                               < vlSelf->fpu_tb__DOT__dut__DOT__mant_b))))))))));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__a_lt_b 
        = (1U & (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a) 
                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b))
                  ? ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a) 
                     & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b)))
                  : (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                      & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b))
                      ? ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a) 
                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b)))
                      : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a)
                          ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a)
                          : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b)
                              ? (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b))
                              : (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a) 
                                  ^ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b))
                                  ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a)
                                  : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a)
                                      ? (VL_GTS_III(13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a), (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b)) 
                                         | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a) 
                                             == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b)) 
                                            & (vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                                               > vlSelf->fpu_tb__DOT__dut__DOT__mant_b)))
                                      : (VL_LTS_III(13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a), (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b)) 
                                         | (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a) 
                                             == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b)) 
                                            & (vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                                               < vlSelf->fpu_tb__DOT__dut__DOT__mant_b))))))))));
    if (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a) 
         & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b))) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_fflags 
            = (0x10U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_fflags));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_result 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__canonical_nan;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_fflags 
            = ((0xfU & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_fflags)) 
               | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_a) 
                  << 4U));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_result 
            = vlSymsp->TOP__fpu_tb__DOT__bus.rs2;
    } else if (vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_fflags 
            = ((0xfU & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_fflags)) 
               | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_b) 
                  << 4U));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_result 
            = vlSymsp->TOP__fpu_tb__DOT__bus.rs1;
    } else {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_result 
            = ((9U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                ? ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__a_lt_b)
                    ? vlSymsp->TOP__fpu_tb__DOT__bus.rs1
                    : vlSymsp->TOP__fpu_tb__DOT__bus.rs2)
                : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__a_lt_b)
                    ? vlSymsp->TOP__fpu_tb__DOT__bus.rs2
                    : vlSymsp->TOP__fpu_tb__DOT__bus.rs1));
    }
}

VL_INLINE_OPT void Vfpu_tb___024root___nba_sequent__TOP__0(Vfpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfpu_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_add__v0;
    __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_add__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_add__v0;
    __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_add__v0 = 0;
    CData/*4:0*/ __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_add__v1;
    __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_add__v1 = 0;
    CData/*4:0*/ __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_add__v2;
    __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_add__v2 = 0;
    CData/*4:0*/ __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_add__v3;
    __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_add__v3 = 0;
    CData/*0:0*/ __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_add__v4;
    __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_add__v4 = 0;
    CData/*4:0*/ __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_mul__v0;
    __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_mul__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_mul__v0;
    __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_mul__v0 = 0;
    CData/*4:0*/ __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_mul__v1;
    __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_mul__v1 = 0;
    CData/*4:0*/ __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_mul__v2;
    __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_mul__v2 = 0;
    CData/*4:0*/ __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_mul__v3;
    __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_mul__v3 = 0;
    CData/*0:0*/ __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_mul__v4;
    __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_mul__v4 = 0;
    CData/*4:0*/ __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_fma__v0;
    __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_fma__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_fma__v0;
    __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_fma__v0 = 0;
    CData/*4:0*/ __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_fma__v1;
    __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_fma__v1 = 0;
    CData/*4:0*/ __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_fma__v2;
    __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_fma__v2 = 0;
    CData/*4:0*/ __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_fma__v3;
    __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_fma__v3 = 0;
    CData/*4:0*/ __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_fma__v4;
    __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_fma__v4 = 0;
    CData/*0:0*/ __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_fma__v5;
    __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_fma__v5 = 0;
    CData/*3:0*/ __Vdly__fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe;
    __Vdly__fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe = 0;
    CData/*3:0*/ __Vdly__fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe;
    __Vdly__fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe = 0;
    CData/*4:0*/ __Vdly__fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe;
    __Vdly__fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe = 0;
    CData/*1:0*/ __Vdly__fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state;
    __Vdly__fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state = 0;
    QData/*55:0*/ __Vdly__fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__quotient;
    __Vdly__fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__quotient = 0;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_30;
    VlWide<4>/*127:0*/ __Vtemp_31;
    VlWide<4>/*127:0*/ __Vtemp_32;
    VlWide<4>/*127:0*/ __Vtemp_33;
    VlWide<4>/*127:0*/ __Vtemp_34;
    VlWide<4>/*127:0*/ __Vtemp_35;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_37;
    VlWide<4>/*127:0*/ __Vtemp_43;
    VlWide<4>/*127:0*/ __Vtemp_47;
    VlWide<4>/*127:0*/ __Vtemp_48;
    VlWide<4>/*127:0*/ __Vtemp_52;
    VlWide<4>/*127:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_55;
    VlWide<4>/*127:0*/ __Vtemp_67;
    VlWide<4>/*127:0*/ __Vtemp_68;
    VlWide<4>/*127:0*/ __Vtemp_69;
    VlWide<4>/*127:0*/ __Vtemp_71;
    VlWide<4>/*127:0*/ __Vtemp_73;
    VlWide<4>/*127:0*/ __Vtemp_74;
    VlWide<4>/*127:0*/ __Vtemp_75;
    // Body
    __Vdly__fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe 
        = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe;
    __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_mul__v0 = 0U;
    __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_mul__v4 = 0U;
    __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_add__v0 = 0U;
    __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_add__v4 = 0U;
    __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_fma__v0 = 0U;
    __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_fma__v5 = 0U;
    __Vdly__fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe 
        = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe;
    __Vdly__fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe 
        = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe;
    __Vdly__fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__quotient 
        = vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__quotient;
    __Vdly__fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state 
        = vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state;
    if (vlSelf->fpu_tb__DOT__rst_n) {
        __Vdly__fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe 
            = ((0xeU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe) 
                        << 1U)) | (IData)(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fadd_sub__valid_in));
        __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_mul__v0 
            = vlSymsp->TOP__fpu_tb__DOT__bus.rd;
        __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_mul__v0 = 1U;
        __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_mul__v1 
            = vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
            [0U];
        __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_mul__v2 
            = vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
            [1U];
        __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_mul__v3 
            = vlSelf->fpu_tb__DOT__dut__DOT__rd_mul
            [2U];
        __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_add__v0 
            = vlSymsp->TOP__fpu_tb__DOT__bus.rd;
        __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_add__v0 = 1U;
        __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_add__v1 
            = vlSelf->fpu_tb__DOT__dut__DOT__rd_add
            [0U];
        __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_add__v2 
            = vlSelf->fpu_tb__DOT__dut__DOT__rd_add
            [1U];
        __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_add__v3 
            = vlSelf->fpu_tb__DOT__dut__DOT__rd_add
            [2U];
        __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_fma__v0 
            = vlSymsp->TOP__fpu_tb__DOT__bus.rd;
        __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_fma__v0 = 1U;
        __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_fma__v1 
            = vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
            [0U];
        __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_fma__v2 
            = vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
            [1U];
        __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_fma__v3 
            = vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
            [2U];
        __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_fma__v4 
            = vlSelf->fpu_tb__DOT__dut__DOT__rd_fma
            [3U];
        __Vdly__fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe 
            = ((0xeU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe) 
                        << 1U)) | (IData)(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fmult__valid_in));
        __Vdly__fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe 
            = ((0x1eU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe) 
                         << 1U)) | (IData)(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fma__valid_in));
        if (vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fsgn__valid_in) {
            vlSelf->fpu_tb__DOT__dut__DOT__sgn_fflags = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__sgn_result 
                = (((QData)((IData)((1U & ((0xbU == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                                            ? (IData)(
                                                      (vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                                       >> 0x3fU))
                                            : ((0xcU 
                                                == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                                                ? (~ (IData)(
                                                             (vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                                              >> 0x3fU)))
                                                : (
                                                   (0xdU 
                                                    == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                                                    ? 
                                                   ((IData)(
                                                            (vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                                             >> 0x3fU)) 
                                                    ^ (IData)(
                                                              (vlSymsp->TOP__fpu_tb__DOT__bus.rs2 
                                                               >> 0x3fU)))
                                                    : (IData)(
                                                              (vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                                               >> 0x3fU)))))))) 
                    << 0x3fU) | (0x7fffffffffffffffULL 
                                 & vlSymsp->TOP__fpu_tb__DOT__bus.rs1));
        }
        if (vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fclass__valid_in) {
            vlSelf->fpu_tb__DOT__dut__DOT__class_fflags = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__class_result 
                = (QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__fclass_mask));
        }
        if (vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fminmax__valid_in) {
            vlSelf->fpu_tb__DOT__dut__DOT__minmax_fflags 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_fflags;
            vlSelf->fpu_tb__DOT__dut__DOT__minmax_result 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__comb_result;
        }
        vlSelf->fpu_tb__DOT__dut__DOT__rd_conv = vlSymsp->TOP__fpu_tb__DOT__bus.rd;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn = vlSymsp->TOP__fpu_tb__DOT__bus.rd;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp = vlSymsp->TOP__fpu_tb__DOT__bus.rd;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax = vlSymsp->TOP__fpu_tb__DOT__bus.rd;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_class = vlSymsp->TOP__fpu_tb__DOT__bus.rd;
        if (vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fcmp__valid_in) {
            vlSelf->fpu_tb__DOT__dut__DOT__cmp_fflags 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__comb_fflags;
            vlSelf->fpu_tb__DOT__dut__DOT__cmp_result 
                = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a) 
                    | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b))
                    ? 0ULL : ((0xeU == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                               ? (QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__a_eq_b))
                               : ((0xfU == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                                   ? (QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__a_lt_b))
                                   : ((0x10U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                                       ? (QData)((IData)(
                                                         ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__a_lt_b) 
                                                          | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__a_eq_b))))
                                       : 0ULL))));
        }
        if (vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fconvert__valid_in) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r = 1U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result = 0ULL;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp_unbiased = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant_norm = 0ULL;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_nan = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_inf = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_zero = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_subnormal = 0U;
            if ((2U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_src_fmt))) {
                if ((1U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_src_fmt))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__int_val 
                        = vlSymsp->TOP__fpu_tb__DOT__bus.rs1;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign 
                        = (1U & (IData)((vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__int_val 
                                         >> 0x3fU)));
                    if ((0ULL == vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__int_val)) {
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_zero = 1U;
                    } else {
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__abs_val 
                            = ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign)
                                ? (- vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__int_val)
                                : vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__int_val);
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz = 0U;
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i = 0x3fU;
                        {
                            while (VL_LTES_III(32, 0U, vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i)) {
                                if ((1U & (IData)((vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__abs_val 
                                                   >> 
                                                   (0x3fU 
                                                    & vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i))))) {
                                    goto __Vlabel1;
                                }
                                vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz 
                                    = ((IData)(1U) 
                                       + vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz);
                                vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i 
                                    = (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i 
                                       - (IData)(1U));
                            }
                            __Vlabel1: ;
                        }
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp_unbiased 
                            = (0x1fffU & ((IData)(0x3fU) 
                                          - vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz));
                        __Vtemp_4[0U] = ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__abs_val) 
                                         << 1U);
                        __Vtemp_4[1U] = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__abs_val) 
                                          >> 0x1fU) 
                                         | ((IData)(
                                                    (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__abs_val 
                                                     >> 0x20U)) 
                                            << 1U));
                        __Vtemp_4[2U] = ((IData)((vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__abs_val 
                                                  >> 0x20U)) 
                                         >> 0x1fU);
                        VL_SHIFTL_WWI(65,65,32, __Vtemp_5, __Vtemp_4, vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz);
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__tmp_mant[0U] 
                            = __Vtemp_5[0U];
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__tmp_mant[1U] 
                            = __Vtemp_5[1U];
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__tmp_mant[2U] 
                            = (1U & __Vtemp_5[2U]);
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant_norm 
                            = (0x1fffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__tmp_mant[2U])) 
                                   << 0x34U) | (((QData)((IData)(
                                                                 vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__tmp_mant[1U])) 
                                                 << 0x14U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk4__DOT__tmp_mant[0U])) 
                                                   >> 0xcU))));
                    }
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign 
                        = (1U & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                         >> 0x3fU)));
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp64 
                        = (0x7ffU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                             >> 0x34U)));
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant64 
                        = (0xfffffffffffffULL & vlSymsp->TOP__fpu_tb__DOT__bus.rs1);
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_zero 
                        = ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp64)) 
                           & (0ULL == vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant64));
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_subnormal 
                        = ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp64)) 
                           & (0ULL != vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant64));
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_inf 
                        = ((0x7ffU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp64)) 
                           & (0ULL == vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant64));
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_nan 
                        = ((0x7ffU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp64)) 
                           & (0ULL != vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant64));
                    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_subnormal) {
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz = 0U;
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk3__DOT__i = 0x33U;
                        {
                            while (VL_LTES_III(32, 0U, vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk3__DOT__i)) {
                                if (((0x33U >= (0x3fU 
                                                & vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk3__DOT__i)) 
                                     && (1U & (IData)(
                                                      (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant64 
                                                       >> 
                                                       (0x3fU 
                                                        & vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk3__DOT__i)))))) {
                                    goto __Vlabel2;
                                }
                                vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz 
                                    = ((IData)(1U) 
                                       + vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz);
                                vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk3__DOT__i 
                                    = (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk3__DOT__i 
                                       - (IData)(1U));
                            }
                            __Vlabel2: ;
                        }
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp_unbiased 
                            = (0x1fffU & ((IData)(0x1c02U) 
                                          - vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz));
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant_norm 
                            = (0x1fffffffffffffULL 
                               & VL_SHIFTL_QQI(53,53,32, vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant64, 
                                               ((IData)(1U) 
                                                + vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz)));
                    } else {
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp_unbiased 
                            = (0x1fffU & (VL_EXTENDS_II(13,12, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp64)) 
                                          - (IData)(0x3ffU)));
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant_norm 
                            = (0x10000000000000ULL 
                               | vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant64);
                    }
                }
            } else if ((1U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_src_fmt))) {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign 
                    = (1U & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                     >> 0x1fU)));
                vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp32 
                    = (0xffU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                        >> 0x17U)));
                vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant32 
                    = (0x7fffffU & (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.rs1));
                vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_zero 
                    = ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp32)) 
                       & (0U == vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant32));
                vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_subnormal 
                    = ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp32)) 
                       & (0U != vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant32));
                vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_inf 
                    = ((0xffU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp32)) 
                       & (0U == vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant32));
                vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_nan 
                    = ((0xffU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp32)) 
                       & (0U != vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant32));
                if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_subnormal) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz = 0U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk2__DOT__i = 0x16U;
                    {
                        while (VL_LTES_III(32, 0U, vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk2__DOT__i)) {
                            if (((0x16U >= (0x1fU & vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk2__DOT__i)) 
                                 && (1U & (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant32 
                                           >> (0x1fU 
                                               & vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk2__DOT__i))))) {
                                goto __Vlabel3;
                            }
                            vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz 
                                = ((IData)(1U) + vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz);
                            vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk2__DOT__i 
                                = (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk2__DOT__i 
                                   - (IData)(1U));
                        }
                        __Vlabel3: ;
                    }
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp_unbiased 
                        = (0x1fffU & ((IData)(0x1f82U) 
                                      - vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz));
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant_norm 
                        = (0x1fffffffffffffULL & VL_SHIFTL_QQI(53,53,32, 
                                                               ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant32)) 
                                                                << 0x1dU), 
                                                               ((IData)(1U) 
                                                                + vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz)));
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp_unbiased 
                        = (0x1fffU & (VL_EXTENDS_II(13,9, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp32)) 
                                      - (IData)(0x7fU)));
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant_norm 
                        = (0x10000000000000ULL | ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant32)) 
                                                  << 0x1dU));
                }
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign 
                    = (1U & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                     >> 0xfU)));
                vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp16 
                    = (0x1fU & (IData)((vlSymsp->TOP__fpu_tb__DOT__bus.rs1 
                                        >> 0xaU)));
                vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant16 
                    = (0x3ffU & (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.rs1));
                vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_zero 
                    = ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp16)) 
                       & (0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant16)));
                vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_subnormal 
                    = ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp16)) 
                       & (0U != (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant16)));
                vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_inf 
                    = ((0x1fU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp16)) 
                       & (0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant16)));
                vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_nan 
                    = ((0x1fU == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp16)) 
                       & (0U != (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant16)));
                if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_subnormal) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz = 0U;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk1__DOT__i = 9U;
                    {
                        while (VL_LTES_III(32, 0U, vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk1__DOT__i)) {
                            if (((9U >= (0xfU & vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk1__DOT__i)) 
                                 && (1U & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant16) 
                                           >> (0xfU 
                                               & vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk1__DOT__i))))) {
                                goto __Vlabel4;
                            }
                            vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz 
                                = ((IData)(1U) + vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz);
                            vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk1__DOT__i 
                                = (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk1__DOT__i 
                                   - (IData)(1U));
                        }
                        __Vlabel4: ;
                    }
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp_unbiased 
                        = (0x1fffU & ((IData)(0x1ff2U) 
                                      - vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz));
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant_norm 
                        = (0x1fffffffffffffULL & VL_SHIFTL_QQI(53,53,32, 
                                                               ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant16)) 
                                                                << 0x2aU), 
                                                               ((IData)(1U) 
                                                                + vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__lz)));
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp_unbiased 
                        = (0x1fffU & (VL_EXTENDS_II(13,6, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp16)) 
                                      - (IData)(0xfU)));
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant_norm 
                        = (0x10000000000000ULL | ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant16)) 
                                                  << 0x2aU));
                }
            }
            if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_nan) {
                if ((0x12U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags 
                        = (0x10U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags));
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result = 0x7fffffffffffffffULL;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result 
                        = ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_dst_fmt))
                            ? (0x7e00ULL | (0xffffffffffff0000ULL 
                                            & vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result))
                            : ((1U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_dst_fmt))
                                ? (0x7fc00000ULL | 
                                   (0xffffffff00000000ULL 
                                    & vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result))
                                : 0x7ff8000000000000ULL));
                }
            } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_inf) {
                if ((0x12U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags 
                        = (0x10U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags));
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result 
                        = ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign)
                            ? 0x8000000000000000ULL
                            : 0x7fffffffffffffffULL);
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result 
                        = ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_dst_fmt))
                            ? ((0xffffffffffff0000ULL 
                                & vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result) 
                               | (IData)((IData)((0x7c00U 
                                                  | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign) 
                                                     << 0xfU)))))
                            : ((1U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_dst_fmt))
                                ? ((0xffffffff00000000ULL 
                                    & vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result) 
                                   | (IData)((IData)(
                                                     (0x7f800000U 
                                                      | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign) 
                                                         << 0x1fU)))))
                                : (0x7ff0000000000000ULL 
                                   | ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign)) 
                                      << 0x3fU))));
                }
            } else if ((((0x11U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                         | (0x13U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))) 
                        & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_zero))) {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result 
                    = ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_dst_fmt))
                        ? ((0xffffffffffff0000ULL & vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result) 
                           | (IData)((IData)(((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign) 
                                              << 0xfU))))
                        : ((1U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_dst_fmt))
                            ? ((0xffffffff00000000ULL 
                                & vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result) 
                               | (IData)((IData)(((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign) 
                                                  << 0x1fU))))
                            : ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign)) 
                               << 0x3fU)));
            } else if (((0x11U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                        | (0x13U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)))) {
                if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_dst_fmt))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk6__DOT__exp_b 
                        = (0x1fffU & ((IData)(0xfU) 
                                      + VL_EXTENDS_II(13,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp_unbiased))));
                    if (VL_LTES_III(32, 0x1fU, VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk6__DOT__exp_b)))) {
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags 
                            = (4U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags));
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result 
                            = ((0xffffffffffff0000ULL 
                                & vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result) 
                               | (IData)((IData)((0x7c00U 
                                                  | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign) 
                                                     << 0xfU)))));
                    } else if (VL_GTES_III(32, 0U, 
                                           VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk6__DOT__exp_b)))) {
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags 
                            = (2U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags));
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result 
                            = (0xffffffffffff0000ULL 
                               & vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result);
                    } else {
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result 
                            = ((0xffffffffffff0000ULL 
                                & vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result) 
                               | (IData)((IData)((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign) 
                                                   << 0xfU) 
                                                  | ((0x7c00U 
                                                      & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk6__DOT__exp_b) 
                                                         << 0xaU)) 
                                                     | (0x3ffU 
                                                        & (IData)(
                                                                  (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant_norm 
                                                                   >> 0x2aU))))))));
                        if ((0U != (0x3ffffffffffULL 
                                    & vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant_norm))) {
                            vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags 
                                = (1U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags));
                        }
                    }
                } else if ((1U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__conv_dst_fmt))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk7__DOT__exp_b 
                        = (0x1fffU & ((IData)(0x7fU) 
                                      + VL_EXTENDS_II(13,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp_unbiased))));
                    if (VL_LTES_III(32, 0xffU, VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk7__DOT__exp_b)))) {
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags 
                            = (4U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags));
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result 
                            = ((0xffffffff00000000ULL 
                                & vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result) 
                               | (IData)((IData)((0x7f800000U 
                                                  | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign) 
                                                     << 0x1fU)))));
                    } else if (VL_GTES_III(32, 0U, 
                                           VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk7__DOT__exp_b)))) {
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags 
                            = (2U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags));
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result 
                            = (0xffffffff00000000ULL 
                               & vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result);
                    } else {
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result 
                            = ((0xffffffff00000000ULL 
                                & vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result) 
                               | (IData)((IData)((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk7__DOT__exp_b) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & (IData)(
                                                                  (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant_norm 
                                                                   >> 0x1dU))))))));
                        if ((0U != (0x1fffffffU & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant_norm)))) {
                            vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags 
                                = (1U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags));
                        }
                    }
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk8__DOT__exp_b 
                        = (0x1fffU & ((IData)(0x3ffU) 
                                      + VL_EXTENDS_II(13,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp_unbiased))));
                    if (VL_LTES_III(32, 0x7ffU, VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk8__DOT__exp_b)))) {
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags 
                            = (4U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags));
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result 
                            = (0x7ff0000000000000ULL 
                               | ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign)) 
                                  << 0x3fU));
                    } else if (VL_GTES_III(32, 0U, 
                                           VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk8__DOT__exp_b)))) {
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags 
                            = (2U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags));
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result = 0ULL;
                    } else {
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result 
                            = (((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign)) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (0x7ffU 
                                                               & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk8__DOT__exp_b)))) 
                                              << 0x34U) 
                                             | (0xfffffffffffffULL 
                                                & vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant_norm)));
                    }
                }
            } else if ((0x12U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))) {
                if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp_unbiased)))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk9__DOT__int_res = 0ULL;
                    if ((1U & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__is_zero)))) {
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags 
                            = (1U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags));
                    }
                } else if (VL_LTS_III(32, 0x3eU, VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp_unbiased)))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags 
                        = (0x10U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags));
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk9__DOT__int_res 
                        = ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign)
                            ? 0x8000000000000000ULL
                            : 0x7fffffffffffffffULL);
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk9__DOT__int_res 
                        = VL_SHIFTR_QQI(64,64,32, vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__mant_norm, 
                                        ((IData)(0x34U) 
                                         - VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__exp_unbiased))));
                    if (vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__sign) {
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk9__DOT__int_res 
                            = (- vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk9__DOT__int_res);
                    }
                }
                vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result 
                    = vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__unnamedblk9__DOT__int_res;
            }
            vlSelf->fpu_tb__DOT__dut__DOT__conv_result 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__result;
            vlSelf->fpu_tb__DOT__dut__DOT__conv_fflags 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__fflags;
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r = 0U;
        }
        if ((4U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe))) {
            vlSelf->fpu_tb__DOT__dut__DOT__add_rm = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_rm;
            vlSelf->fpu_tb__DOT__dut__DOT__add_is_nan 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_is_nan;
            vlSelf->fpu_tb__DOT__dut__DOT__add_fflags 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s3;
            vlSelf->fpu_tb__DOT__dut__DOT__add_exp 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_exp;
            vlSelf->fpu_tb__DOT__dut__DOT__add_grs 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_grs;
            vlSelf->fpu_tb__DOT__dut__DOT__add_mant 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_mant;
            vlSelf->fpu_tb__DOT__dut__DOT__add_is_inf 
                = (1U & (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_is_inf) 
                          | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s3) 
                             >> 2U)) & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_is_nan))));
            vlSelf->fpu_tb__DOT__dut__DOT__add_is_zero 
                = (((0ULL == vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_mant) 
                    & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_is_nan))) 
                   & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_is_inf)));
            vlSelf->fpu_tb__DOT__dut__DOT__add_sign 
                = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_is_inf) 
                    & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_is_nan)))
                    ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_inf_sign)
                    : (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_sign));
        }
        if ((((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state)) 
              & (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in)) 
             & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_divsqrt))) {
            vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt 
                = vlSymsp->TOP__fpu_tb__DOT__bus.rd;
        }
        if ((4U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))) {
            vlSelf->fpu_tb__DOT__dut__DOT__mul_rm = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_rm;
            vlSelf->fpu_tb__DOT__dut__DOT__mul_sign 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_sign;
            vlSelf->fpu_tb__DOT__dut__DOT__mul_grs 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_grs;
            vlSelf->fpu_tb__DOT__dut__DOT__mul_mant 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_mant;
            vlSelf->fpu_tb__DOT__dut__DOT__mul_exp 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_exp;
            vlSelf->fpu_tb__DOT__dut__DOT__mul_is_inf 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_is_inf;
            vlSelf->fpu_tb__DOT__dut__DOT__mul_is_zero 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_is_zero;
            vlSelf->fpu_tb__DOT__dut__DOT__mul_is_nan 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_is_nan;
            vlSelf->fpu_tb__DOT__dut__DOT__mul_fflags 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_fflags;
            if (VL_LTES_III(32, 0x7ffU, ((IData)(0x3ffU) 
                                         + VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_exp))))) {
                vlSelf->fpu_tb__DOT__dut__DOT__mul_fflags 
                    = (4U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__mul_fflags));
            }
            if (VL_GTES_III(32, 0U, ((IData)(0x3ffU) 
                                     + VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_exp))))) {
                vlSelf->fpu_tb__DOT__dut__DOT__mul_fflags 
                    = (2U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__mul_fflags));
            }
        }
        if ((8U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))) {
            vlSelf->fpu_tb__DOT__dut__DOT__fma_rm = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_rm;
            vlSelf->fpu_tb__DOT__dut__DOT__fma_is_nan 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_is_nan;
            vlSelf->fpu_tb__DOT__dut__DOT__fma_is_inf 
                = ((1U & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_is_nan))) 
                   && (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_is_inf));
            if (vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_is_nan) {
                vlSelf->fpu_tb__DOT__dut__DOT__fma_exp = 0U;
                vlSelf->fpu_tb__DOT__dut__DOT__fma_mant = 0ULL;
                vlSelf->fpu_tb__DOT__dut__DOT__fma_grs = 0U;
            } else if (vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_is_inf) {
                vlSelf->fpu_tb__DOT__dut__DOT__fma_exp = 0U;
                vlSelf->fpu_tb__DOT__dut__DOT__fma_mant = 0ULL;
                vlSelf->fpu_tb__DOT__dut__DOT__fma_grs = 0U;
            } else if ((0U == (((vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[0U] 
                                 | vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[1U]) 
                                | vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[2U]) 
                               | vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[3U]))) {
                vlSelf->fpu_tb__DOT__dut__DOT__fma_exp = 0U;
                vlSelf->fpu_tb__DOT__dut__DOT__fma_mant = 0ULL;
                vlSelf->fpu_tb__DOT__dut__DOT__fma_grs = 0U;
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__fma_exp 
                    = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_exp;
                vlSelf->fpu_tb__DOT__dut__DOT__fma_mant 
                    = (0x1fffffffffffffULL & (((QData)((IData)(
                                                               vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[3U])) 
                                               << 0x2cU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[2U])) 
                                                  << 0xcU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[1U])) 
                                                    >> 0x14U))));
                vlSelf->fpu_tb__DOT__dut__DOT__fma_grs 
                    = ((6U & (vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[1U] 
                              >> 0x11U)) | (0U != (0x3ffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[0U]))))));
            }
            vlSelf->fpu_tb__DOT__dut__DOT__fma_is_zero 
                = ((1U & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_is_nan))) 
                   && ((1U & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_is_inf))) 
                       && (0U == (((vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[0U] 
                                    | vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[1U]) 
                                   | vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[2U]) 
                                  | vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[3U]))));
            vlSelf->fpu_tb__DOT__dut__DOT__fma_sign 
                = ((1U & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_is_nan))) 
                   && ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_is_inf)
                        ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sign_sp)
                        : (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sign)));
            vlSelf->fpu_tb__DOT__dut__DOT__fma_fflags 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_fflags;
            if ((1U & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_is_nan)))) {
                if ((1U & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_is_inf)))) {
                    if ((0U != (((vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[0U] 
                                  | vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[1U]) 
                                 | vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[2U]) 
                                | vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[3U]))) {
                        if (VL_LTES_III(13, 0x7ffU, 
                                        (0x1fffU & 
                                         ((IData)(0x3ffU) 
                                          + (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_exp))))) {
                            vlSelf->fpu_tb__DOT__dut__DOT__fma_fflags 
                                = (4U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__fma_fflags));
                        }
                        if (VL_GTES_III(13, 0U, (0x1fffU 
                                                 & ((IData)(0x3ffU) 
                                                    + (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_exp))))) {
                            vlSelf->fpu_tb__DOT__dut__DOT__fma_fflags 
                                = (2U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__fma_fflags));
                        }
                    }
                }
            }
        }
        if ((2U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))) {
            if ((1U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))) {
                __Vdly__fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state = 0U;
            } else if ((0x38U > (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__iter_cnt))) {
                __Vtemp_13[1U] = ((vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__dividend[0U] 
                                   >> 0x1fU) | (vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__dividend[1U] 
                                                << 1U));
                __Vtemp_13[2U] = ((vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__dividend[1U] 
                                   >> 0x1fU) | (vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__dividend[2U] 
                                                << 1U));
                __Vtemp_13[3U] = ((vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__dividend[2U] 
                                   >> 0x1fU) | (0x3feU 
                                                & (vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__dividend[3U] 
                                                   << 1U)));
                vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__dividend[0U] 
                    = (vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__dividend[0U] 
                       << 1U);
                vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__dividend[1U] 
                    = __Vtemp_13[1U];
                vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__dividend[2U] 
                    = __Vtemp_13[2U];
                vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__dividend[3U] 
                    = __Vtemp_13[3U];
                vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__iter_cnt 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__iter_cnt)));
                if (VL_GTE_W(4, vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rem_shifted, vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__divisor)) {
                    __Vdly__fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__quotient 
                        = (1ULL | (0xfffffffffffffeULL 
                                   & (vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__quotient 
                                      << 1U)));
                    VL_SUB_W(4, __Vtemp_19, vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rem_shifted, vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__divisor);
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder[0U] 
                        = __Vtemp_19[0U];
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder[1U] 
                        = __Vtemp_19[1U];
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder[2U] 
                        = __Vtemp_19[2U];
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder[3U] 
                        = (0x3ffU & __Vtemp_19[3U]);
                } else {
                    __Vdly__fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__quotient 
                        = (0xfffffffffffffeULL & (vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__quotient 
                                                  << 1U));
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder[0U] 
                        = vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rem_shifted[0U];
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder[1U] 
                        = vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rem_shifted[1U];
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder[2U] 
                        = vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rem_shifted[2U];
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder[3U] 
                        = vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rem_shifted[3U];
                }
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_sign 
                    = vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__sign_r;
                vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_exp 
                    = vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__exp_r;
                if ((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_nan_r) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_inf_r)) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_zero_r))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_mant = 0ULL;
                    vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_grs = 0U;
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_mant 
                        = (0x7fffffffffffffULL & (vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__quotient 
                                                  >> 1U));
                    vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_grs 
                        = ((4U & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__quotient) 
                                  << 2U)) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (((vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rem_shifted[0U] 
                                                          | vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rem_shifted[1U]) 
                                                         | vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rem_shifted[2U]) 
                                                        | vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rem_shifted[3U]))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (((vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rem_shifted[0U] 
                                                   | vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rem_shifted[1U]) 
                                                  | vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rem_shifted[2U]) 
                                                 | vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rem_shifted[3U]))));
                }
                vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_rm 
                    = vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rm_r;
                vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_is_nan 
                    = vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_nan_r;
                vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_is_inf 
                    = vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_inf_r;
                vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_is_zero 
                    = vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_zero_r;
                vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_fflags 
                    = vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__fflags_r;
                __Vdly__fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state = 3U;
                if (VL_LTES_III(32, 0x7ffU, ((IData)(0x3ffU) 
                                             + VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__exp_r))))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_fflags 
                        = (4U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_fflags));
                }
                if (VL_GTES_III(32, 0U, ((IData)(0x3ffU) 
                                         + VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__exp_r))))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_fflags 
                        = (2U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_fflags));
                }
            }
        } else if ((1U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))) {
            __Vdly__fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state = 2U;
        } else if (((IData)(vlSymsp->TOP__fpu_tb__DOT__bus.valid_in) 
                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__op_is_divsqrt))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__dividend[0U] = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__dividend[1U] 
                = ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__mant_a) 
                   << 0x15U);
            vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__dividend[2U] 
                = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__mant_a) 
                    >> 0xbU) | ((IData)((vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                                         >> 0x20U)) 
                                << 0x15U));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__dividend[3U] 
                = ((IData)((vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                            >> 0x20U)) >> 0xbU);
            __Vdly__fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__quotient = 0ULL;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__iter_cnt = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__fflags_r = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rm_r 
                = vlSymsp->TOP__fpu_tb__DOT__bus.rm;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__op_sqrt 
                = (4U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__sign_r 
                = ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a) 
                   ^ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__exp_r 
                = (0x1fffU & ((3U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))
                               ? ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a) 
                                  - (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b))
                               : VL_SHIFTRS_III(13,13,32, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a), 1U)));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__divisor[0U] = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__divisor[1U] 
                = ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__mant_b) 
                   << 0x15U);
            vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__divisor[2U] 
                = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__mant_b) 
                    >> 0xbU) | ((IData)((vlSelf->fpu_tb__DOT__dut__DOT__mant_b 
                                         >> 0x20U)) 
                                << 0x15U));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__divisor[3U] 
                = ((IData)((vlSelf->fpu_tb__DOT__dut__DOT__mant_b 
                            >> 0x20U)) >> 0xbU);
            vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder[0U] = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder[1U] = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder[2U] = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder[3U] = 0U;
            __Vdly__fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state = 1U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_nan_r = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_inf_r = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_zero_r = 0U;
            if (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_a) 
                 | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_b))) {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__fflags_r 
                    = (0x10U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__fflags_r));
            }
            if ((((4U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a)) 
                 & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a)))) {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__fflags_r 
                    = (0x10U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__fflags_r));
                vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_nan_r = 1U;
            } else if ((((3U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                         & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a)) 
                        & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b))) {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__fflags_r 
                    = (0x10U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__fflags_r));
                vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_nan_r = 1U;
            } else if ((((3U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                         & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a)) 
                        & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b))) {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__fflags_r 
                    = (0x10U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__fflags_r));
                vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_nan_r = 1U;
            } else if ((((3U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)) 
                         & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a))) 
                        & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b))) {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__fflags_r 
                    = (8U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__fflags_r));
                vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_inf_r = 1U;
            } else if (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b))) {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_nan_r = 1U;
            } else if (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b))) {
                if ((3U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op))) {
                    if (vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) {
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_inf_r = 1U;
                    } else {
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_zero_r = 1U;
                    }
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_inf_r = 1U;
                }
            } else if (vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a) {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__is_zero_r = 1U;
            }
        }
    } else {
        __Vdly__fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe = 0U;
        __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_mul__v4 = 1U;
        __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_add__v4 = 1U;
        __Vdlyvset__fpu_tb__DOT__dut__DOT__rd_fma__v5 = 1U;
        __Vdly__fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe = 0U;
        __Vdly__fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__sgn_fflags = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__class_fflags = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__minmax_fflags = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_conv = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_sgn = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_cmp = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_minmax = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_class = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__cmp_fflags = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__minmax_result = 0ULL;
        vlSelf->fpu_tb__DOT__dut__DOT__class_result = 0ULL;
        vlSelf->fpu_tb__DOT__dut__DOT__sgn_result = 0ULL;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fconvert__DOT__valid_r = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__conv_result = 0ULL;
        vlSelf->fpu_tb__DOT__dut__DOT__conv_fflags = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__add_rm = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__cmp_result = 0ULL;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_divsqrt = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__add_is_nan = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__mul_rm = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__add_fflags = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__mul_sign = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__mul_grs = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__mul_mant = 0ULL;
        vlSelf->fpu_tb__DOT__dut__DOT__add_exp = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__add_grs = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__add_mant = 0ULL;
        vlSelf->fpu_tb__DOT__dut__DOT__mul_exp = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__fma_rm = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__mul_is_inf = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__mul_is_zero = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__mul_is_nan = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__fma_is_nan = 0U;
        __Vdly__fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_sign = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_exp = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_mant = 0ULL;
        vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_grs = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_rm = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_is_nan = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_is_inf = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_is_zero = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_fflags = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__add_is_inf = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__add_is_zero = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__mul_fflags = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__add_sign = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__fma_is_inf = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__fma_exp = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__fma_mant = 0ULL;
        vlSelf->fpu_tb__DOT__dut__DOT__fma_grs = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__fma_is_zero = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__fma_sign = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__fma_fflags = 0U;
    }
    vlSelf->fpu_tb__DOT__dut__DOT__u_fsgn__DOT__valid_r 
        = ((IData)(vlSelf->fpu_tb__DOT__rst_n) && (IData)(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fsgn__valid_in));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fcmp__DOT__valid_pipe 
        = ((IData)(vlSelf->fpu_tb__DOT__rst_n) && (IData)(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fcmp__valid_in));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fminmax__DOT__valid_pipe 
        = ((IData)(vlSelf->fpu_tb__DOT__rst_n) && (IData)(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fminmax__valid_in));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fclass__DOT__valid_pipe 
        = ((IData)(vlSelf->fpu_tb__DOT__rst_n) && (IData)(vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fclass__valid_in));
    vlSelf->fpu_tb__DOT__dut__DOT__conv_is_int_r = 
        ((IData)(vlSelf->fpu_tb__DOT__rst_n) && (0x12U 
                                                 == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)));
    if ((4U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_exp 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_exp;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_rm 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_rm;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sign_sp 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_sign_sp;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_is_inf 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_is_inf;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_is_nan 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_is_nan;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_fflags 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_fflags;
        __Vtemp_29[0U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big[0U];
        __Vtemp_29[1U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big[1U];
        __Vtemp_29[2U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big[2U];
        __Vtemp_29[3U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big[3U];
        __Vtemp_30[0U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small[0U];
        __Vtemp_30[1U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small[1U];
        __Vtemp_30[2U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small[2U];
        __Vtemp_30[3U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small[3U];
        VL_ADD_W(4, __Vtemp_31, __Vtemp_29, __Vtemp_30);
        __Vtemp_32[0U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big[0U];
        __Vtemp_32[1U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big[1U];
        __Vtemp_32[2U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big[2U];
        __Vtemp_32[3U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big[3U];
        __Vtemp_33[0U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small[0U];
        __Vtemp_33[1U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small[1U];
        __Vtemp_33[2U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small[2U];
        __Vtemp_33[3U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small[3U];
        VL_SUB_W(4, __Vtemp_34, __Vtemp_32, __Vtemp_33);
        __Vtemp_35[0U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small[0U];
        __Vtemp_35[1U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small[1U];
        __Vtemp_35[2U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small[2U];
        __Vtemp_35[3U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small[3U];
        __Vtemp_36[0U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big[0U];
        __Vtemp_36[1U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big[1U];
        __Vtemp_36[2U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big[2U];
        __Vtemp_36[3U] = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big[3U];
        VL_SUB_W(4, __Vtemp_37, __Vtemp_35, __Vtemp_36);
        if (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_sign_big) 
             == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_sign_small))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sign 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_sign_big;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[0U] 
                = __Vtemp_31[0U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[1U] 
                = __Vtemp_31[1U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[2U] 
                = __Vtemp_31[2U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[3U] 
                = (0x7ffU & __Vtemp_31[3U]);
        } else if (VL_GTE_W(4, vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big, vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small)) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sign 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_sign_big;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[0U] 
                = __Vtemp_34[0U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[1U] 
                = __Vtemp_34[1U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[2U] 
                = __Vtemp_34[2U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[3U] 
                = (0x7ffU & __Vtemp_34[3U]);
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sign 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_sign_small;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[0U] 
                = __Vtemp_37[0U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[1U] 
                = __Vtemp_37[1U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[2U] 
                = __Vtemp_37[2U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[3U] 
                = (0x7ffU & __Vtemp_37[3U]);
        }
    }
    if (__Vdlyvset__fpu_tb__DOT__dut__DOT__rd_mul__v0) {
        vlSelf->fpu_tb__DOT__dut__DOT__rd_mul[0U] = __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_mul__v0;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_mul[1U] = __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_mul__v1;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_mul[2U] = __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_mul__v2;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_mul[3U] = __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_mul__v3;
    }
    if (__Vdlyvset__fpu_tb__DOT__dut__DOT__rd_mul__v4) {
        vlSelf->fpu_tb__DOT__dut__DOT__rd_mul[0U] = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_mul[1U] = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_mul[2U] = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_mul[3U] = 0U;
    }
    if (__Vdlyvset__fpu_tb__DOT__dut__DOT__rd_add__v0) {
        vlSelf->fpu_tb__DOT__dut__DOT__rd_add[0U] = __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_add__v0;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_add[1U] = __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_add__v1;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_add[2U] = __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_add__v2;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_add[3U] = __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_add__v3;
    }
    if (__Vdlyvset__fpu_tb__DOT__dut__DOT__rd_add__v4) {
        vlSelf->fpu_tb__DOT__dut__DOT__rd_add[0U] = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_add[1U] = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_add[2U] = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_add[3U] = 0U;
    }
    if (__Vdlyvset__fpu_tb__DOT__dut__DOT__rd_fma__v0) {
        vlSelf->fpu_tb__DOT__dut__DOT__rd_fma[0U] = __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_fma__v0;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_fma[1U] = __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_fma__v1;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_fma[2U] = __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_fma__v2;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_fma[3U] = __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_fma__v3;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_fma[4U] = __Vdlyvval__fpu_tb__DOT__dut__DOT__rd_fma__v4;
    }
    if (__Vdlyvset__fpu_tb__DOT__dut__DOT__rd_fma__v5) {
        vlSelf->fpu_tb__DOT__dut__DOT__rd_fma[0U] = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_fma[1U] = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_fma[2U] = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_fma[3U] = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__rd_fma[4U] = 0U;
    }
    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__quotient 
        = __Vdly__fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__quotient;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state 
        = __Vdly__fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state;
    if ((2U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe))) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_rm 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_rm;
        if ((1U & (IData)((vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_mant 
                           >> 0x35U)))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_exp 
                = (0x1fffU & ((IData)(1U) + VL_EXTENDS_II(13,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_exp))));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_grs 
                = ((4U & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_mant) 
                          << 2U)) | ((2U & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_grs) 
                                            >> 1U)) 
                                     | (IData)((0U 
                                                != 
                                                (3U 
                                                 & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_grs))))));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_mant 
                = (0x1fffffffffffffULL & (vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_mant 
                                          >> 1U));
        } else if (((~ (IData)((vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_mant 
                                >> 0x34U))) & (0U != vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_mant))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_exp 
                = (0x1fffU & (VL_EXTENDS_II(13,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_exp)) 
                              - (IData)(1U)));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_grs 
                = (6U & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_grs) 
                         << 1U));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_mant 
                = ((0x3ffffffffffffeULL & (vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_mant 
                                           << 1U)) 
                   | (QData)((IData)((1U & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_grs) 
                                            >> 2U)))));
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_exp 
                = (0x1fffU & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_exp));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_grs 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_grs;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_mant 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_mant;
        }
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s3 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s2;
        if (VL_LTES_III(32, 0x7ffU, ((IData)(0x3ffU) 
                                     + VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_exp))))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s3 
                = (4U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s3));
        }
        if (VL_GTES_III(32, 0U, ((IData)(0x3ffU) + 
                                 VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_exp))))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s3 
                = (2U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s3));
        }
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_inf_sign 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_inf_sign;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_is_inf 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_is_inf;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_is_nan 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_is_nan;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s3_sign 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_sign;
    }
    if ((2U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_rm 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_rm;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_sign 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_sign;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_grs 
            = ((6U & (vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_prod[1U] 
                      >> 0x11U)) | (0U != (0x3ffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_prod[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_prod[0U]))))));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_mant 
            = (0x1fffffffffffffULL & (((QData)((IData)(
                                                       vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_prod[3U])) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_prod[2U])) 
                                        << 0xcU) | 
                                       ((QData)((IData)(
                                                        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_prod[1U])) 
                                        >> 0x14U))));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_is_inf 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_is_inf;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_is_zero 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_is_zero;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_is_nan 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_is_nan;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_exp 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_exp;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s3_fflags 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_fflags;
    }
    if ((2U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_rm 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_rm;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_sign_sp 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_sign_sp;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_is_inf 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_is_inf;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_is_nan 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_is_nan;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_fflags 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_fflags;
        VL_SHIFTR_WWI(106,106,13, __Vtemp_47, vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_mant_c_ext, 
                      (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_exp_mul) 
                                  - (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_exp_c))));
        VL_SHIFTR_WWI(106,106,13, __Vtemp_48, vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_prod, 
                      (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_exp_c) 
                                  - (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_exp_mul))));
        if (VL_GTES_III(13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_exp_mul), (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_exp_c))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_exp 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_exp_mul;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_sign_big 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_sign_mul;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_sign_small 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_sign_c;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big[0U] 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_prod[0U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big[1U] 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_prod[1U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big[2U] 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_prod[2U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big[3U] 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_prod[3U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small[0U] 
                = __Vtemp_47[0U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small[1U] 
                = __Vtemp_47[1U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small[2U] 
                = __Vtemp_47[2U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small[3U] 
                = (0x3ffU & __Vtemp_47[3U]);
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_exp 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_exp_c;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_sign_big 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_sign_c;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_sign_small 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_sign_mul;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big[0U] 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_mant_c_ext[0U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big[1U] 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_mant_c_ext[1U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big[2U] 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_mant_c_ext[2U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_big[3U] 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_mant_c_ext[3U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small[0U] 
                = __Vtemp_48[0U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small[1U] 
                = __Vtemp_48[1U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small[2U] 
                = __Vtemp_48[2U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s3_small[3U] 
                = (0x3ffU & __Vtemp_48[3U]);
        }
    }
    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rem_shifted[0U] 
        = ((vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder[0U] 
            << 1U) | (1U & (vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__dividend[3U] 
                            >> 9U)));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rem_shifted[1U] 
        = ((vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder[0U] 
            >> 0x1fU) | (vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder[1U] 
                         << 1U));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rem_shifted[2U] 
        = ((vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder[1U] 
            >> 0x1fU) | (vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder[2U] 
                         << 1U));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__rem_shifted[3U] 
        = ((vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder[2U] 
            >> 0x1fU) | (0x3feU & (vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__remainder[3U] 
                                   << 1U)));
    if ((1U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe))) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_rm 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_rm;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_exp 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_exp;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s2 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s1;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_grs 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_grs;
        if ((0U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_op))) {
            if (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_sign_a) 
                 == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_sign_b))) {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_mant 
                    = (0x3fffffffffffffULL & (vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_a 
                                              + vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_b));
                vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_sign 
                    = (1U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_sign_a));
            } else if ((vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_a 
                        >= vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_b)) {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_mant 
                    = (0x3fffffffffffffULL & (vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_a 
                                              - vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_b));
                vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_sign 
                    = (1U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_sign_a));
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_mant 
                    = (0x3fffffffffffffULL & (vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_b 
                                              - vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_a));
                vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_sign 
                    = (1U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_sign_b));
            }
        } else if (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_sign_a) 
                    != (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_sign_b))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_mant 
                = (0x3fffffffffffffULL & (vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_a 
                                          + vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_b));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_sign 
                = (1U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_sign_a));
        } else if ((vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_a 
                    >= vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_b)) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_mant 
                = (0x3fffffffffffffULL & (vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_a 
                                          - vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_b));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_sign 
                = (1U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_sign_a));
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_mant 
                = (0x3fffffffffffffULL & (vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_b 
                                          - vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_a));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_sign 
                = (1U & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_sign_a)));
        }
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_inf_sign 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_inf_sign;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_is_inf 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_is_inf;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s2_is_nan 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_is_nan;
    }
    if ((1U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_rm 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_rm;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_sign 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_sign;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_prod[0U] 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_prod[0U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_prod[1U] 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_prod[1U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_prod[2U] 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_prod[2U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_prod[3U] 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_prod[3U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_is_inf 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_is_inf;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_is_zero 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_is_zero;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_is_nan 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_is_nan;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_exp 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_exp;
        if ((0x200U & vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_prod[3U])) {
            VL_SHIFTR_WWI(106,106,32, __Vtemp_43, vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_prod, 1U);
            vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_prod[0U] 
                = __Vtemp_43[0U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_prod[1U] 
                = __Vtemp_43[1U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_prod[2U] 
                = __Vtemp_43[2U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_prod[3U] 
                = (0x3ffU & __Vtemp_43[3U]);
            vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_exp 
                = (0x1fffU & ((IData)(1U) + VL_EXTENDS_II(13,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_exp))));
        }
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s2_fflags 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_fflags;
    }
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__lz_pos = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTES_III(32, 0x67U, vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__unnamedblk1__DOT__i)) {
        if (((0x6aU >= (0x7fU & vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__unnamedblk1__DOT__i)) 
             && (1U & (vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[
                       (3U & (vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__unnamedblk1__DOT__i 
                              >> 5U))] >> (0x1fU & vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__unnamedblk1__DOT__i))))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__lz_pos 
                = (0x7fU & vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__unnamedblk1__DOT__i);
        }
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe 
        = __Vdly__fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe 
        = __Vdly__fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__valid_pipe;
    VL_SHIFTR_WWI(107,107,32, __Vtemp_52, vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum, 2U);
    VL_SHIFTR_WWI(107,107,32, __Vtemp_53, vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum, 1U);
    VL_SHIFTL_WWI(107,107,7, __Vtemp_55, vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum, 
                  (0x7fU & ((IData)(0x68U) - (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__lz_pos))));
    if ((0x400U & vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[3U])) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[0U] 
            = __Vtemp_52[0U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[1U] 
            = __Vtemp_52[1U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[2U] 
            = __Vtemp_52[2U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[3U] 
            = (0x7ffU & __Vtemp_52[3U]);
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_exp 
            = (0x1fffU & ((IData)(2U) + (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_exp)));
    } else if ((0x200U & vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[3U])) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[0U] 
            = __Vtemp_53[0U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[1U] 
            = __Vtemp_53[1U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[2U] 
            = __Vtemp_53[2U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[3U] 
            = (0x7ffU & __Vtemp_53[3U]);
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_exp 
            = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_exp)));
    } else if ((0x100U & vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[3U])) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[0U] 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[0U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[1U] 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[1U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[2U] 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[2U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[3U] 
            = (0x7ffU & vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[3U]);
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_exp 
            = (0x1fffU & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_exp));
    } else if ((0U != (((vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[0U] 
                         | vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[1U]) 
                        | vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[2U]) 
                       | vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_sum[3U]))) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[0U] 
            = __Vtemp_55[0U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[1U] 
            = __Vtemp_55[1U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[2U] 
            = __Vtemp_55[2U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[3U] 
            = (0x7ffU & __Vtemp_55[3U]);
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_exp 
            = (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_exp) 
                          - (0x7fU & ((IData)(0x68U) 
                                      - (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__lz_pos)))));
    } else {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[0U] = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[1U] = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[2U] = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_norm[3U] 
            = (0x7ffU & 0U);
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s5_exp 
            = (0x1fffU & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s4_exp));
    }
    if (vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fadd_sub__valid_in) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_rm 
            = vlSymsp->TOP__fpu_tb__DOT__bus.rm;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__eff_sign_b 
            = ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b) 
               ^ (1U == (IData)(vlSymsp->TOP__fpu_tb__DOT__bus.op)));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__inf_minus_inf 
            = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b)) 
               & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a) 
                  != (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__eff_sign_b)));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_is_nan 
            = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a) 
                | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b)) 
               | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__inf_minus_inf));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_is_inf 
            = ((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                 | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b)) 
                & (~ ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b)))) 
               & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__inf_minus_inf)));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_inf_sign 
            = ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a)
                ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a)
                : (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__eff_sign_b));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s1 = 0U;
        if ((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_a) 
              | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_b)) 
             | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__inf_minus_inf))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s1 
                = (0x10U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__fflags_s1));
        }
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_op 
            = vlSymsp->TOP__fpu_tb__DOT__bus.op;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_sign_a 
            = vlSelf->fpu_tb__DOT__dut__DOT__sign_a;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_sign_b 
            = vlSelf->fpu_tb__DOT__dut__DOT__sign_b;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__align_diff 
            = (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a) 
                          - (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b)));
        if (VL_LTES_III(32, 0x36U, VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__align_diff)))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_exp 
                = vlSelf->fpu_tb__DOT__dut__DOT__exp_a;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_a 
                = vlSelf->fpu_tb__DOT__dut__DOT__mant_a;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_b = 0ULL;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_grs 
                = (0U != vlSelf->fpu_tb__DOT__dut__DOT__mant_b);
        } else if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__align_diff)))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__shift_amt 
                = (0x7fU & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__align_diff));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__grs_ext 
                = (0x3fffffffffffffULL & VL_SHIFTL_QQI(54,54,7, vlSelf->fpu_tb__DOT__dut__DOT__mant_b, 
                                                       (0x7fU 
                                                        & ((IData)(0x36U) 
                                                           - (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__shift_amt)))));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_exp 
                = vlSelf->fpu_tb__DOT__dut__DOT__exp_a;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_a 
                = vlSelf->fpu_tb__DOT__dut__DOT__mant_a;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_b 
                = (0x3fffffffffffffULL & VL_SHIFTR_QQI(54,54,7, vlSelf->fpu_tb__DOT__dut__DOT__mant_b, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__shift_amt)));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_grs 
                = ((6U & ((IData)((vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__grs_ext 
                                   >> 0x34U)) << 1U)) 
                   | (0U != (0xfffffffffffffULL & vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__grs_ext)));
        } else if (VL_GTES_III(32, 0xffffffcaU, VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__align_diff)))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_exp 
                = vlSelf->fpu_tb__DOT__dut__DOT__exp_b;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_a = 0ULL;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_b 
                = vlSelf->fpu_tb__DOT__dut__DOT__mant_b;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_grs 
                = (0U != vlSelf->fpu_tb__DOT__dut__DOT__mant_a);
        } else if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__align_diff)))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__shift_amt 
                = (0x7fU & (- (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__align_diff)));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__grs_ext 
                = (0x3fffffffffffffULL & VL_SHIFTL_QQI(54,54,7, vlSelf->fpu_tb__DOT__dut__DOT__mant_a, 
                                                       (0x7fU 
                                                        & ((IData)(0x36U) 
                                                           - (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__shift_amt)))));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_exp 
                = vlSelf->fpu_tb__DOT__dut__DOT__exp_b;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_a 
                = (0x3fffffffffffffULL & VL_SHIFTR_QQI(54,54,7, vlSelf->fpu_tb__DOT__dut__DOT__mant_a, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__shift_amt)));
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_b 
                = vlSelf->fpu_tb__DOT__dut__DOT__mant_b;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_grs 
                = ((6U & ((IData)((vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__grs_ext 
                                   >> 0x34U)) << 1U)) 
                   | (0U != (0xfffffffffffffULL & vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__grs_ext)));
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_exp 
                = vlSelf->fpu_tb__DOT__dut__DOT__exp_a;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_a 
                = vlSelf->fpu_tb__DOT__dut__DOT__mant_a;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_mant_b 
                = vlSelf->fpu_tb__DOT__dut__DOT__mant_b;
            vlSelf->fpu_tb__DOT__dut__DOT__u_fadd_sub__DOT__s1_grs = 0U;
        }
    }
    if (vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fmult__valid_in) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_rm 
            = vlSymsp->TOP__fpu_tb__DOT__bus.rm;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_sign 
            = ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_a) 
               ^ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_is_inf = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_is_zero = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_is_nan = 0U;
        if (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a) 
             | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_is_nan = 1U;
        } else if ((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a) 
                     & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b)) 
                    | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                       & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b)))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_is_nan = 1U;
        }
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_exp 
            = (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a) 
                          + (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b)));
        __Vtemp_67[0U] = (IData)(vlSelf->fpu_tb__DOT__dut__DOT__mant_a);
        __Vtemp_67[1U] = (IData)((vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                                  >> 0x20U));
        __Vtemp_67[2U] = 0U;
        __Vtemp_67[3U] = 0U;
        __Vtemp_68[0U] = (IData)(vlSelf->fpu_tb__DOT__dut__DOT__mant_b);
        __Vtemp_68[1U] = (IData)((vlSelf->fpu_tb__DOT__dut__DOT__mant_b 
                                  >> 0x20U));
        __Vtemp_68[2U] = 0U;
        __Vtemp_68[3U] = 0U;
        VL_MUL_W(4, __Vtemp_69, __Vtemp_67, __Vtemp_68);
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_prod[0U] 
            = __Vtemp_69[0U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_prod[1U] 
            = __Vtemp_69[1U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_prod[2U] 
            = __Vtemp_69[2U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_prod[3U] 
            = (0x3ffU & __Vtemp_69[3U]);
        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_fflags = 0U;
        if (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_a) 
             | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_b))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_fflags 
                = (0x10U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_fflags));
        }
        if ((1U & (~ ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b))))) {
            if ((1U & (~ (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a) 
                           & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b)) 
                          | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                             & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b)))))) {
                if (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_is_inf = 1U;
                }
                if ((1U & (~ ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                              | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b))))) {
                    if (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a) 
                         | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b))) {
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_is_zero = 1U;
                    }
                }
            }
            if ((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a) 
                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b)) 
                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b)))) {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_fflags 
                    = (0x10U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__s1_fflags));
            }
        }
    }
    if ((1U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_rm 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_rm;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_sign_sp 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_sign_sp;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_is_inf 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_is_inf;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_is_nan 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_is_nan;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_fflags 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_fflags;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_sign_c 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_sign_c;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_sign_mul 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_sign_mul;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_mant_c_ext[0U] = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_mant_c_ext[1U] 
            = ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_mant_c) 
               << 0x14U);
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_mant_c_ext[2U] 
            = (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_mant_c) 
                >> 0xcU) | ((IData)((vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_mant_c 
                                     >> 0x20U)) << 0x14U));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_mant_c_ext[3U] 
            = ((IData)((vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_mant_c 
                        >> 0x20U)) >> 0xcU);
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_exp_c 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_exp_c;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_prod[0U] 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_prod[0U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_prod[1U] 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_prod[1U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_prod[2U] 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_prod[2U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_prod[3U] 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_prod[3U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_exp_mul 
            = vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_exp_mul;
        if ((0x200U & vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_prod[3U])) {
            VL_SHIFTR_WWI(106,106,32, __Vtemp_71, vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_prod, 1U);
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_prod[0U] 
                = __Vtemp_71[0U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_prod[1U] 
                = __Vtemp_71[1U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_prod[2U] 
                = __Vtemp_71[2U];
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_prod[3U] 
                = (0x3ffU & __Vtemp_71[3U]);
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s2_exp_mul 
                = (0x1fffU & ((IData)(1U) + VL_EXTENDS_II(13,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_exp_mul))));
        }
    }
    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe 
        = __Vdly__fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe;
    if (vlSelf->fpu_tb__DOT__dut__DOT____Vcellinp__u_fma__valid_in) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_rm 
            = vlSymsp->TOP__fpu_tb__DOT__bus.rm;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_sign_sp = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_is_inf = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_is_nan = 0U;
        if ((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a) 
              | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b)) 
             | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_c))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_is_nan = 1U;
        } else if ((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a) 
                     & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b)) 
                    | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                       & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b)))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_is_nan = 1U;
        } else if (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                    | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b))) {
            if (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_c) 
                 & (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__fma_sign_a_eff) 
                     ^ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b)) 
                    != (IData)(vlSelf->fpu_tb__DOT__dut__DOT__fma_sign_c_eff)))) {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_is_nan = 1U;
            }
        }
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_fflags = 0U;
        if ((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_a) 
              | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_b)) 
             | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_snan_c))) {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_fflags 
                = (0x10U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_fflags));
        }
        if ((1U & (~ (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_a) 
                       | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_b)) 
                      | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_nan_c))))) {
            if ((1U & (~ (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a) 
                           & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b)) 
                          | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                             & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b)))))) {
                if (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                     | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b))) {
                    if ((1U & (~ ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_c) 
                                  & (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__fma_sign_a_eff) 
                                      ^ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b)) 
                                     != (IData)(vlSelf->fpu_tb__DOT__dut__DOT__fma_sign_c_eff)))))) {
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_sign_sp 
                            = ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_c)
                                ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__fma_sign_c_eff)
                                : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__fma_sign_a_eff) 
                                   ^ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b)));
                        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_is_inf = 1U;
                    }
                } else if (vlSelf->fpu_tb__DOT__dut__DOT__is_inf_c) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_sign_sp 
                        = vlSelf->fpu_tb__DOT__dut__DOT__fma_sign_c_eff;
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_is_inf = 1U;
                }
            }
            if ((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_a) 
                  & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b)) 
                 | ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                    & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_zero_b)))) {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_fflags 
                    = (0x10U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_fflags));
            } else if (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_a) 
                        | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_b))) {
                if (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__is_inf_c) 
                     & (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__fma_sign_a_eff) 
                         ^ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b)) 
                        != (IData)(vlSelf->fpu_tb__DOT__dut__DOT__fma_sign_c_eff)))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_fflags 
                        = (0x10U | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_fflags));
                }
            }
        }
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_sign_c 
            = vlSelf->fpu_tb__DOT__dut__DOT__fma_sign_c_eff;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_sign_mul 
            = ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__fma_sign_a_eff) 
               ^ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__sign_b));
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_mant_c 
            = vlSelf->fpu_tb__DOT__dut__DOT__mant_c;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_exp_c 
            = vlSelf->fpu_tb__DOT__dut__DOT__exp_c;
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_exp_mul 
            = (0x1fffU & ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_a) 
                          + (IData)(vlSelf->fpu_tb__DOT__dut__DOT__exp_b)));
        __Vtemp_73[0U] = (IData)(vlSelf->fpu_tb__DOT__dut__DOT__mant_a);
        __Vtemp_73[1U] = (IData)((vlSelf->fpu_tb__DOT__dut__DOT__mant_a 
                                  >> 0x20U));
        __Vtemp_73[2U] = 0U;
        __Vtemp_73[3U] = 0U;
        __Vtemp_74[0U] = (IData)(vlSelf->fpu_tb__DOT__dut__DOT__mant_b);
        __Vtemp_74[1U] = (IData)((vlSelf->fpu_tb__DOT__dut__DOT__mant_b 
                                  >> 0x20U));
        __Vtemp_74[2U] = 0U;
        __Vtemp_74[3U] = 0U;
        VL_MUL_W(4, __Vtemp_75, __Vtemp_73, __Vtemp_74);
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_prod[0U] 
            = __Vtemp_75[0U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_prod[1U] 
            = __Vtemp_75[1U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_prod[2U] 
            = __Vtemp_75[2U];
        vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__s1_prod[3U] 
            = (0x3ffU & __Vtemp_75[3U]);
    }
    if ((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))) {
        vlSelf->fpu_tb__DOT__dut__DOT__arith_mant = vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_mant;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_grs = vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_grs;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_rm = vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_rm;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_is_inf 
            = vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_is_inf;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_sign = vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_sign;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_is_nan 
            = vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_is_nan;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_is_zero 
            = vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_is_zero;
    } else if ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))) {
        vlSelf->fpu_tb__DOT__dut__DOT__arith_mant = vlSelf->fpu_tb__DOT__dut__DOT__fma_mant;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_grs = vlSelf->fpu_tb__DOT__dut__DOT__fma_grs;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_rm = vlSelf->fpu_tb__DOT__dut__DOT__fma_rm;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_is_inf 
            = vlSelf->fpu_tb__DOT__dut__DOT__fma_is_inf;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_sign = vlSelf->fpu_tb__DOT__dut__DOT__fma_sign;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_is_nan 
            = vlSelf->fpu_tb__DOT__dut__DOT__fma_is_nan;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_is_zero 
            = vlSelf->fpu_tb__DOT__dut__DOT__fma_is_zero;
    } else if ((8U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))) {
        vlSelf->fpu_tb__DOT__dut__DOT__arith_mant = vlSelf->fpu_tb__DOT__dut__DOT__mul_mant;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_grs = vlSelf->fpu_tb__DOT__dut__DOT__mul_grs;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_rm = vlSelf->fpu_tb__DOT__dut__DOT__mul_rm;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_is_inf 
            = vlSelf->fpu_tb__DOT__dut__DOT__mul_is_inf;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_sign = vlSelf->fpu_tb__DOT__dut__DOT__mul_sign;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_is_nan 
            = vlSelf->fpu_tb__DOT__dut__DOT__mul_is_nan;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_is_zero 
            = vlSelf->fpu_tb__DOT__dut__DOT__mul_is_zero;
    } else {
        vlSelf->fpu_tb__DOT__dut__DOT__arith_mant = vlSelf->fpu_tb__DOT__dut__DOT__add_mant;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_grs = vlSelf->fpu_tb__DOT__dut__DOT__add_grs;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_rm = vlSelf->fpu_tb__DOT__dut__DOT__add_rm;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_is_inf 
            = vlSelf->fpu_tb__DOT__dut__DOT__add_is_inf;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_sign = vlSelf->fpu_tb__DOT__dut__DOT__add_sign;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_is_nan 
            = vlSelf->fpu_tb__DOT__dut__DOT__add_is_nan;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_is_zero 
            = vlSelf->fpu_tb__DOT__dut__DOT__add_is_zero;
    }
    vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__round_up = 0U;
    if ((1U & (((~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_is_nan)) 
                & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_is_inf))) 
               & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_is_zero))))) {
        vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__round_up 
            = ((4U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_rm))
                ? ((1U & (~ ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_rm) 
                             >> 1U))) && ((1U & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_rm))) 
                                          && (1U & 
                                              ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_grs) 
                                               >> 2U))))
                : ((2U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_rm))
                    ? ((1U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_rm))
                        ? ((~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_sign)) 
                           & (0U != (IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_grs)))
                        : ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_sign) 
                           & (0U != (IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_grs))))
                    : ((1U & (~ (IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_rm))) 
                       && (IData)((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_grs) 
                                    >> 2U) & ((((IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_grs) 
                                                >> 1U) 
                                               | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_grs)) 
                                              | (IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_mant)))))));
    }
    vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__round_result 
        = (0x3fffffffffffffULL & ((0x1fffffffffffffULL 
                                   & vlSelf->fpu_tb__DOT__dut__DOT__arith_mant) 
                                  + (QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__round_up))));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__round_carry 
        = (1U & (IData)((vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__round_result 
                         >> 0x35U)));
    vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__renorm_exp 
        = (0x1fffU & (((3U == (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fdivsqrt__DOT__state))
                        ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__divsqrt_exp)
                        : ((0x10U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fma__DOT__valid_pipe))
                            ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__fma_exp)
                            : ((8U & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fmult__DOT__valid_pipe))
                                ? (IData)(vlSelf->fpu_tb__DOT__dut__DOT__mul_exp)
                                : (IData)(vlSelf->fpu_tb__DOT__dut__DOT__add_exp)))) 
                      + (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__round_carry)));
    vlSelf->fpu_tb__DOT__dut__DOT__arith_result = 0ULL;
    vlSelf->fpu_tb__DOT__dut__DOT__fpack_of = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__fpack_uf = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__exp_biased = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__exp_field = 0U;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__mant_field = 0ULL;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__mant_shifted = 0ULL;
    vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__shift = 0U;
    if (vlSelf->fpu_tb__DOT__dut__DOT__arith_is_nan) {
        vlSelf->fpu_tb__DOT__dut__DOT__rnd_exp = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__rnd_mant = 0ULL;
        vlSelf->fpu_tb__DOT__dut__DOT__rnd_is_inf = 0U;
        vlSelf->fpu_tb__DOT__dut__DOT__arith_result = 0x7ff8000000000000ULL;
    } else {
        if (((IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_is_inf) 
             | VL_LTES_III(32, 0x7ffU, ((IData)(0x3ffU) 
                                        + VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__renorm_exp)))))) {
            vlSelf->fpu_tb__DOT__dut__DOT__rnd_exp = 0U;
            vlSelf->fpu_tb__DOT__dut__DOT__rnd_mant = 0ULL;
            vlSelf->fpu_tb__DOT__dut__DOT__rnd_is_inf = 1U;
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__rnd_exp 
                = vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__renorm_exp;
            vlSelf->fpu_tb__DOT__dut__DOT__rnd_mant 
                = ((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__round_carry)
                    ? 0x10000000000000ULL : (0x1fffffffffffffULL 
                                             & vlSelf->fpu_tb__DOT__dut__DOT__u_fround__DOT__round_result));
            vlSelf->fpu_tb__DOT__dut__DOT__rnd_is_inf = 0U;
        }
        if (vlSelf->fpu_tb__DOT__dut__DOT__rnd_is_inf) {
            vlSelf->fpu_tb__DOT__dut__DOT__arith_result 
                = (0x7ff0000000000000ULL | ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_sign)) 
                                            << 0x3fU));
        } else if (vlSelf->fpu_tb__DOT__dut__DOT__arith_is_zero) {
            vlSelf->fpu_tb__DOT__dut__DOT__arith_result 
                = ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_sign)) 
                   << 0x3fU);
        } else {
            vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__exp_biased 
                = (0x1fffU & ((IData)(0x3ffU) + VL_EXTENDS_II(13,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__rnd_exp))));
            if (VL_LTES_III(32, 0x7ffU, VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__exp_biased)))) {
                vlSelf->fpu_tb__DOT__dut__DOT__fpack_of = 1U;
                vlSelf->fpu_tb__DOT__dut__DOT__arith_result 
                    = (0x7ff0000000000000ULL | ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_sign)) 
                                                << 0x3fU));
            } else if (VL_GTES_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__exp_biased)))) {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__shift 
                    = (0x7fU & ((IData)(1U) - (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__exp_biased)));
                vlSelf->fpu_tb__DOT__dut__DOT__fpack_uf = 1U;
                if ((0x35U < (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__shift))) {
                    vlSelf->fpu_tb__DOT__dut__DOT__arith_result 
                        = ((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_sign)) 
                           << 0x3fU);
                } else {
                    vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__mant_shifted 
                        = (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,7, vlSelf->fpu_tb__DOT__dut__DOT__rnd_mant, (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__shift)));
                    vlSelf->fpu_tb__DOT__dut__DOT__arith_result 
                        = (((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_sign)) 
                            << 0x3fU) | (0xfffffffffffffULL 
                                         & vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__mant_shifted));
                }
            } else {
                vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__exp_field 
                    = (0x7ffU & (IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__exp_biased));
                vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__mant_field 
                    = (0xfffffffffffffULL & vlSelf->fpu_tb__DOT__dut__DOT__rnd_mant);
                vlSelf->fpu_tb__DOT__dut__DOT__arith_result 
                    = (((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__arith_sign)) 
                        << 0x3fU) | (((QData)((IData)(vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__exp_field)) 
                                      << 0x34U) | vlSelf->fpu_tb__DOT__dut__DOT__u_fpack__DOT__mant_field));
            }
        }
    }
}
