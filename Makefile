TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES = $(shell pwd)/hdl/RAS.v \
                  $(shell pwd)/hdl/DelayN_2.sv \
                  $(shell pwd)/hdl/RASStack.v \
                  $(shell pwd)/hdl/DelayNWithValid.v

TOPLEVEL = RAS
MODULE = test_ras

# # set WAVES to 1 to enable waveform dump
# ifeq ($(WAVES),1)
#     COMPILE_ARGS += -fst
#     SIM_ARGS += +dumpfile=dump.fst +dumpvars
# endif

SIM ?= icarus

include $(shell cocotb-config --makefiles)/Makefile.sim
