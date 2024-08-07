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
####################################################################################
# @cocotb.test()
# async def test_ras_push(dut):
#     await gen_rst(dut)
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
#         assert spec_obj.value == push_addr[i]

#     clk_gen.kill()

# @cocotb.test()
# async def test_ras_spec_push_overflow(dut):  # spec压栈溢出
#     # create dut_pins
#     await gen_rst(dut)
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

# @cocotb.test()
# async def test_ras_spec_pop(dut):  # spec pop
#     # create dut_pins
#     await gen_rst(dut)
#     ras = RASWrapper(dut)
#     clk_gen = cocotb.start_soon(Clock(ras.clock, 20, 'ns').start())
#     await ras.reset()
#     push_num =  random.randint(1,32)    #max spec size == 32
#     push_addr = {}
#     for i in range (push_num):
#         push_addr[i] = 0x80000000 + i*4
#         await ras.push(push_addr[i])
#     for i in range(push_num-1, -1, -1):
#         pop_addr, _ = await ras.pop()
#         cocotb.log.info(f'弹出的地址: {hex(pop_addr)}')
#         assert(pop_addr == push_addr[i])
#     clk_gen.kill()

# @cocotb.test()
# # spec 压入相同的地址检查TOSR是否为0，0号地址的ctr是否为7
# async def test_ras_check_tosr_same_addr(dut):    # 测试spec count
#     await gen_rst(dut)
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
####################################################################################
# commit压栈
@cocotb.test()
async def test_ras_commit_push(dut): 
    await gen_rst(dut)
    ras = RASWrapper(dut)
    clk_gen = cocotb.start_soon(Clock(dut.clock, 20, 'ns').start())
    await ras.reset()
    # set coverage
    size = 32    #max sctr
    meta = {}
    for i in range(size): 
        meta[i] =await ras.push(0x80000000 + i*4)
    # set coverage
    commit_stack_addr = {}
    push_addr = {}
    commit_num = 16
    for i in range(commit_num):
        commit_stack_addr[i] = -1
        push_addr[i] = 0x80000000 + i*4


    for i in range(commit_num):
        atter_name  = f"RASStack.commit_stack_{int(meta[i+1%16]['ssp'])}_retAddr"
        commit_obj = getattr(ras.dut, atter_name)
        await ras.commit_push(meta[i])
        assert(commit_obj.value == 0x80000000 + i*4)
    clk_gen.kill()

# sepc 溢出 commit 压栈
@cocotb.test()
async def test_ras_spec_overflow_commit_push(dut): 
    await gen_rst(dut)
    ras = RASWrapper(dut)
    clk_gen = cocotb.start_soon(Clock(dut.clock, 20, 'ns').start())
    await ras.reset()
    await ras.reset()
    # set coverage
    size = 32    #max sctr
    meta = {}
    for i in range(size+1): 
        meta[i] =await ras.push(0x80000000 + i*4)
   
    # set coverage
    commit_stack_addr = {}
    push_addr = {}
    for i in range(16):
        commit_stack_addr[i] = -1
        push_addr[i] = 0x80000000 + i*4


    for i in range(16):
        atter_name  = f"RASStack.commit_stack_{meta[i+1%16]['ssp']}_retAddr"
        commit_obj = getattr(ras.dut, atter_name)
        await ras.commit_push(meta[i])
        assert(commit_obj.value == push_addr[i])
    clk_gen.kill()


# spec压入相同的地址，commit之后检查commit的count和栈顶指针
@cocotb.test()
async def test_ras_spec_push_same_addr_and_commit_and_check_commit_count_and_top_ptr(dut): 
    await gen_rst(dut)
    ras = RASWrapper(dut)
    clk_gen = cocotb.start_soon(Clock(dut.clock, 20, 'ns').start())
    await ras.reset()
    # create dut_pins
    meta = {}
    for i in range(8):
        meta[i] =await ras.push(0x80000000)
    # cover ssp
    # set coverage
    for i in range(8):
        await ras.commit_push(meta[i])
    assert(ras.RASStack.commit_stack_1_retAddr.value == 0x80000000)
    assert(ras.RASStack.commit_stack_1_ctr.value == 7)
    clk_gen.kill()

# 随机COMMIT SPEC栈的元素
@cocotb.test()
async def test_ras_commit_random(dut): 
    await gen_rst(dut)
    ras = RASWrapper(dut)
    clk_gen = cocotb.start_soon(Clock(dut.clock, 20, 'ns').start())
    await ras.reset()
    commit_addr = random.randint(2,30)
    meta = {}
    for i in range(32):
        meta[i] = await ras.push(0x80000000 + i*4)
    # set coverage
    atter_name  = f"RASStack.commit_stack_{meta[commit_addr]['ssp']+1}_retAddr"
    commit_obj = getattr(ras.dut, atter_name)

    await ras.commit_push(meta[commit_addr])
    assert(commit_obj.value == 0x80000000 + meta[commit_addr]['ssp']*4)
    clk_gen.kill()

# 测试commit栈彻底被使用过一次之后BOS能否回归原位
@cocotb.test()
async def test_ras_commit_full_use(dut):
    await gen_rst(dut)
    ras = RASWrapper(dut)
    clk_gen = cocotb.start_soon(Clock(dut.clock, 20, 'ns').start())
    await ras.reset()
    meta = {}

    for i in range(16):
        for j in range(8):
            meta[j] = await ras.push(0x80000000 + i*4)
        for j in range(8):
            await  ras.commit_push(meta[j])
        for j in range(8):
            await  ras.pop()
        for j in range(8):
            await  ras.commit_pop(meta[j])

    for i in range(16):
        for j in range(8):
            meta[j] = await ras.push(0x80000000)
        for j in range(8):
            await ras.commit_push(meta[j])
    for i in range(16):
        for j in range(8):
            await ras.pop()
        for j in range(8):
            await ras.commit_pop(meta[j])
    m = await ras.push(0x66666666)

    await ras.commit_push(m)
    assert(ras.dut.RASStack.BOS_value.value == 0)
    clk_gen.kill()
