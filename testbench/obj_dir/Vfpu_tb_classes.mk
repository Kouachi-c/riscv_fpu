# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vfpu_tb.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vfpu_tb \
	Vfpu_tb___024root__DepSet_hbc015db7__0 \
	Vfpu_tb___024root__DepSet_hbc015db7__1 \
	Vfpu_tb___024root__DepSet_hbc015db7__2 \
	Vfpu_tb___024root__DepSet_hbc015db7__3 \
	Vfpu_tb___024root__DepSet_hc4c87233__0 \
	Vfpu_tb_fpu_if__DepSet_hbf71d032__0 \
	Vfpu_tb__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vfpu_tb___024root__Slow \
	Vfpu_tb___024root__DepSet_hbc015db7__0__Slow \
	Vfpu_tb___024root__DepSet_hc4c87233__0__Slow \
	Vfpu_tb___024unit__Slow \
	Vfpu_tb___024unit__DepSet_hbaff0ca8__0__Slow \
	Vfpu_tb_fpu_if__Slow \
	Vfpu_tb_fpu_if__DepSet_hbf71d032__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vfpu_tb__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vfpu_tb__Syms \
	Vfpu_tb__Trace__0__Slow \
	Vfpu_tb__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
