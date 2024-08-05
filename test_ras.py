import cocotb
import random
from cocotb.clock import Clock
from cocotb.regression import TestFactory
from cocotb.triggers import Timer, FallingEdge
import cocotb.triggers
from ras_enable import *


async def reset_dut(dut, duration_ns=10):
    """
    Reset the DUT by setting all signals to zero.
    
    Parameters:
    dut -- The device under test.
    duration_ns -- Duration of the reset signal in nanoseconds.
    """
    for signal in dut:
        if isinstance(signal, cocotb.handle.ModifiableObject):
            signal.value = 0
    await Timer(duration_ns, units='ns')
    cocotb.log.info("DUT reset done")

async def gen_rst(dut):
    dut.reset.value = 1
    await Timer(10, units="ns")
    dut.reset.value = 0
    print("RAS reset done")

@cocotb.test()
async def test_ras_push(dut):
    clk_gen = cocotb.start_soon(Clock(dut.clock, 20, 'ns').start())
    await reset_dut(dut)
    await gen_rst(dut)
    await Timer(20, units="ns")
    # ras enable
    dut.io_ctrl_ras_enable.value = 1
    # s2 push
    s2_push(dut, 0x80000000)
    await Timer(20, units="ns")
    meta = get_meta(dut)
    # s3 push
    s3_push(dut, 0x80000000)
    await Timer(20, units="ns")
    #s2 set zero
    set_push_valid_zero(dut)
    # cocotb.log.info("Starting test_base_func")
    # print(dut.RASStack.spec_queue_0_retAddr.value)
    assert dut.RASStack.spec_queue_0_retAddr.value == 0x80000000, "ras_push did not match expected value"

    commit_push(dut, meta['ssp'], meta['TOSW_value'])
    await Timer(20, units="ns")
    commit_push_valid_zero(dut)
    assert dut.RASStack.commit_stack_1_retAddr.value == 0x80000000, "commit did not match expected value"
    
    # Stop the clock generator
    clk_gen.kill()

# factory = TestFactory(test_ras_push)
# factory.generate_tests()



