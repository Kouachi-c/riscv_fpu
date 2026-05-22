ROOT  := ..
INC   := -I$(ROOT)/fpu_rtl

SRCS  := \
    $(ROOT)/fpu_rtl/fpu_pkg.sv \
    $(ROOT)/fpu_rtl/fpu_if.sv \
    $(ROOT)/fpu_rtl/ffront/funpack.sv \
    $(ROOT)/fpu_rtl/ffront/fclassify.sv \
    $(ROOT)/fpu_rtl/fcore/faddsub.sv \
    $(ROOT)/fpu_rtl/fcore/fmult.sv \
    $(ROOT)/fpu_rtl/fcore/fminmax.sv \
    $(ROOT)/fpu_rtl/fcore/fcmp.sv \
    $(ROOT)/fpu_rtl/fcore/fclass.sv \
    $(ROOT)/fpu_rtl/fcore/fma.sv \
    $(ROOT)/fpu_rtl/fcore/fsgn.sv \
    $(ROOT)/fpu_rtl/fcore/fconvert.sv \
    $(ROOT)/fpu_rtl/fcore/fdivsqrt.sv \
    $(ROOT)/fpu_rtl/fback/fround.sv \
    $(ROOT)/fpu_rtl/fback/fpack.sv \
    $(ROOT)/fpu_rtl/fpu.sv \
    fpu_tb.sv

VFLAGS := --sv --binary --timing --trace \
          -Wno-fatal -Wno-TIMESCALEMOD -Wno-EOFNEWLINE \
          -Wno-BLKSEQ -Wno-DECLFILENAME

SIM    := obj_dir/fpu_sim
VCD    := fpu_tb.vcd

.PHONY: sim waves clean

sim: $(SIM)
	$(SIM)

$(SIM): $(SRCS)
	verilator $(VFLAGS) $(INC) $(SRCS) --top-module fpu_tb -o fpu_sim

waves: $(VCD)
	gtkwave $(VCD) &

$(VCD): sim

clean:
	rm -rf obj_dir
