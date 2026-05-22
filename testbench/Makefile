ROOT  := ../../..
INC   := -I$(ROOT)/core/FPU/design -I$(ROOT)/core/INTERFACES

SRCS  := \
    $(ROOT)/core/FPU/design/fpu_pkg.sv \
    $(ROOT)/core/INTERFACES/fpu_if.sv \
    $(ROOT)/core/FPU/design/ffront/funpack.sv \
    $(ROOT)/core/FPU/design/ffront/fclassify.sv \
    $(ROOT)/core/FPU/design/fcore/faddsub.sv \
    $(ROOT)/core/FPU/design/fcore/fmult.sv \
    $(ROOT)/core/FPU/design/fcore/fminmax.sv \
    $(ROOT)/core/FPU/design/fcore/fcmp.sv \
    $(ROOT)/core/FPU/design/fcore/fclass.sv \
    $(ROOT)/core/FPU/design/fcore/fma.sv \
    $(ROOT)/core/FPU/design/fcore/fsgn.sv \
    $(ROOT)/core/FPU/design/fcore/fconvert.sv \
    $(ROOT)/core/FPU/design/fcore/fdivsqrt.sv \
    $(ROOT)/core/FPU/design/fback/fround.sv \
    $(ROOT)/core/FPU/design/fback/fpack.sv \
    $(ROOT)/core/FPU/design/fpu.sv \
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
