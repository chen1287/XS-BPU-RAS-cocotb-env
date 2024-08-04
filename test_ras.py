import cocotb
import random
from cocotb.regression import TestFactory
from cocotb.triggers import Timer, FallingEdge
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

async def gen_clk(dut):# 20ns 是一个时钟周期
    while True:
        dut.clock.value = 0
        await Timer(10, units="ns")
        dut.clock.value = 1
        await Timer(10, units="ns")

async def gen_rst(dut):
    dut.reset.value = 1
    await Timer(10, units="ns")
    dut.reset.value = 0
    print("RAS reset done")

@cocotb.test()
async def test_base_func(dut):
    clk_gen = cocotb.start_soon(gen_clk(dut))
    await reset_dut(dut)
    await gen_rst(dut)
    await Timer(20, units="ns")
    dut.io_ctrl_ras_enable.value = 1
    # ras enable
    s2_push(dut, 0x80000000)
    # dut.io_s3_redirect_2.value = 0
    # dut.io_s2_fire_2.value = 1
    # dut.io_s3_fire_2.value = 1

    # #dut in s2
    # dut.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0.value = 1
    # dut.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1.value = 1
    # dut.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0.value = 0
    # dut.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1.value = 1
    # dut.io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr.value = 0x80000000
    # dut.io_in_bits_resp_in_0_s2_full_pred_2_is_call.value = 1
    # dut.io_in_bits_resp_in_0_s2_full_pred_2_is_ret.value = 0
    # dut.io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing.value = 0
    # dut.io_in_bits_resp_in_0_s2_full_pred_2_hit.value = 1
    # dut.io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call.value = 0

    # # s3 set zero
    # dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0.value = 0
    # dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1.value = 0
    # dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0.value = 0
    # dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1.value = 0
    # dut.io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr.value = 0
    # dut.io_in_bits_resp_in_0_s3_full_pred_2_is_call.value = 0
    # dut.io_in_bits_resp_in_0_s3_full_pred_2_is_ret.value = 0
    # dut.io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing.value = 0
    # dut.io_in_bits_resp_in_0_s3_full_pred_2_hit.value = 0
    await Timer(20, units="ns")
    s3_push(dut, 0x80000000)
    # dut.io_s2_fire_2.value = 1
    # dut.io_s3_fire_2.value = 1

    # #s2 set zero
    # dut.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0.value = 0
    # dut.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1.value = 0
    # dut.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0.value = 0
    # dut.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1.value = 0
    # dut.io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr.value = 0
    # dut.io_in_bits_resp_in_0_s2_full_pred_2_is_call.value = 0
    # dut.io_in_bits_resp_in_0_s2_full_pred_2_is_ret.value = 0
    # dut.io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing.value = 0
    # dut.io_in_bits_resp_in_0_s2_full_pred_2_hit.value = 0

    # # s3
    # dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0.value = 1
    # dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1.value = 1
    # dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0.value = 0
    # dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1.value = 1
    # dut.io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr.value = 0x80000000
    # dut.io_in_bits_resp_in_0_s3_full_pred_2_is_call.value = 1
    # dut.io_in_bits_resp_in_0_s3_full_pred_2_is_ret.value = 0
    # dut.io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing.value = 0
    # dut.io_in_bits_resp_in_0_s3_full_pred_2_hit.value = 1
    await Timer(20, units="ns")
    #s2 set zero
    dut.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_is_call.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_is_ret.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_hit.value = 0

    # s3 set zero
    dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_call.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_ret.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_hit.value = 0
    await Timer(20, units="ns")
    # cocotb.log.info("Starting test_base_func")
    # print(dut.RASStack.spec_queue_0_retAddr.value)
    assert dut.RASStack.spec_queue_0_retAddr.value == 0x80000000, "Output did not match expected value"

    # Stop the clock generator
    clk_gen.kill()

factory = TestFactory(test_base_func)
factory.generate_tests()
