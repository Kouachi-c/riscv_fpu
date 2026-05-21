// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vfpu_tb__pch.h"
#include "Vfpu_tb.h"
#include "Vfpu_tb___024root.h"
#include "Vfpu_tb___024unit.h"
#include "Vfpu_tb_fpu_if.h"

// FUNCTIONS
Vfpu_tb__Syms::~Vfpu_tb__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vfpu_tb__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vfpu_tb__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vfpu_tb__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vfpu_tb__Syms::Vfpu_tb__Syms(VerilatedContext* contextp, const char* namep, Vfpu_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__fpu_tb__DOT__bus{this, Verilated::catName(namep, "fpu_tb.bus")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__fpu_tb__DOT__bus = &TOP__fpu_tb__DOT__bus;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__fpu_tb__DOT__bus.__Vconfigure(true);
    // Setup scopes
    __Vscope_fpu_tb.configure(this, name(), "fpu_tb", "fpu_tb", -9, VerilatedScope::SCOPE_OTHER);
}
