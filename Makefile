TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES = $(shell pwd)/hdl/RAS.sv \
                  $(shell pwd)/hdl/DelayN_2.sv \
                  $(shell pwd)/hdl/RASStack.sv \
                  $(shell pwd)/hdl/ext_sram.v \
                  $(shell pwd)/hdl/DelayNWithValid.sv

TOPLEVEL = RAS
MODULE = test_ras

waves = True
# SIM ?= icarus
SIM ?= verilator

# Additional Verilator arguments (if using Verilator)
# Uncomment and use the following lines if you switch to Verilator
EXTRA_ARGS +=  --trace --coverage
PLUSARGS += --trace
# VERILATOR_CXX_FLAGS += -I$(shell cocotb-config --share)/include
# VERILATOR_LDFLAGS += -L$(shell cocotb-config --lib-dir) -lcocotbvpi_verilator

# Include the modified verilator.cpp if necessary
# Uncomment the following line if you have a custom verilator.cpp file
# EXTRA_ARGS += --exe verilator.cpp

include $(shell cocotb-config --makefiles)/Makefile.sim
