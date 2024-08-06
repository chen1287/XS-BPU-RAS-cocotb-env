import cocotb
import random
from cocotb.clock import Clock
from cocotb.regression import TestFactory
from cocotb.triggers import Timer, FallingEdge
import cocotb.triggers
from ras_wrapper import *


# async def reset_dut(dut, duration_ns=10):

#     for signal in dut:
#         if isinstance(signal, cocotb.handle.ModifiableObject):
#             signal.value = 0
#     await Timer(duration_ns, units='ns')
#     cocotb.log.info("DUT reset done")

async def gen_rst(dut):
    dut.reset.value = 1
    await Timer(20, units="ns")
    dut.reset.value = 0
    await Timer(20, units="ns")
    print("RAS reset done")

# @cocotb.test()
# async def test_ras_push(dut):
#     ras = RASWrapper(dut)
#     clk_gen = cocotb.start_soon(Clock(dut.clock, 20, 'ns').start())
#     await ras.reset()
#     # create dut_pins
#     push_num =  random.randint(1,32)    # spec max siez == 32
#     push_addr = {}
#     for i in range(push_num):
#         await ras.push(0x80000000 + i*4)
#         push_addr[i] = 0x80000000 + i*4
#     for i in range(push_num-1, -1, -1):
#         atter_name  = f"RASStack.spec_queue_{i}_retAddr"
#         spec_obj = getattr(ras, atter_name)
#         assert spec_obj.value == push_addr[i], "spec push {i} addr error".format(i)

#     clk_gen.kill()

# @cocotb.test()
# async def test_ras_spec_push_overflow(dut):  # spec压栈溢出
#     # create dut_pins
#     ras = RASWrapper(dut)
#     clk_gen = cocotb.start_soon(Clock(dut.clock, 20, 'ns').start())
#     await ras.reset()
#     push_num =  33 # spec max siez == 32
#     push_addr = {}
#     for i in range (push_num):
#         push_addr[i] = 0x80000000 + i*4
#     for i in range(push_num):
#         await ras.push(0x80000000 + i*4)
#     assert(ras.RASStack.spec_overflowed.value == 1)
#     assert(ras.RASStack.BOS_value.value == 1)
#     clk_gen.kill()

@cocotb.test()
async def test_ras_spec_pop(dut):  # spec pop
    # create dut_pins
    ras = RASWrapper(dut)
    await ras.reset()
    clk_gen = cocotb.start_soon(Clock(ras.clock, 20, 'ns').start())
    await ras.reset()
    push_num =  random.randint(1,32)    #max spec size == 32
    push_addr = {}
    for i in range (push_num):
        push_addr[i] = 0x80000000 + i*4
    for i in range(push_num):
        await ras.push(0x80000000 + i*4)
    for i in range(push_num-1, -1, -1):
        pop_addr, _ = await ras.pop()
        assert(pop_addr == push_addr[i])
    clk_gen.kill()

# @cocotb.test()
# # spec 压入相同的地址检查TOSR是否为0，0号地址的ctr是否为7
# async def test_ras_check_tosr_same_addr(dut):    # 测试spec count
#     # create dut_pins
#     ras = RASWrapper(dut)
#     clk_gen = cocotb.start_soon(Clock(dut.clock, 20, 'ns').start())
#     await ras.reset()
#     # test
#     push_num = 8    #max sctr
#     for _ in range(push_num+1):
#         await ras.push(0x80000000 )
#         end_TOSR = ras.RASStack.TOSR_value.value
#     assert(end_TOSR == 0)
#     assert(ras.RASStack.spec_queue_0_ctr == 7)
#     clk_gen.kill()