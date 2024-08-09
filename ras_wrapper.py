import cocotb
import random
from cocotb.regression import TestFactory
from cocotb.triggers import Timer, FallingEdge, RisingEdge

from ras_wrapper import *

#######################################################################################

def get_meta(dut):
    meta = {}
    meta['ssp'] = dut.io_out_last_stage_spec_info_ssp.value
    meta['sctr'] = dut.io_out_last_stage_spec_info_sctr.value
    meta['TOSW_flag'] = dut.io_out_last_stage_spec_info_TOSW_flag.value
    meta['TOSW_value'] = dut.io_out_last_stage_spec_info_TOSW_value.value
    meta['TOSR_flag'] = dut.io_out_last_stage_spec_info_TOSR_flag.value
    meta['TOSR_value'] = dut.io_out_last_stage_spec_info_TOSR_value.value
    meta['NOS_flag'] = dut.io_out_last_stage_spec_info_NOS_flag.value
    meta['NOS_value'] = dut.io_out_last_stage_spec_info_NOS_value.value
    meta['topAddr'] = dut.io_out_last_stage_spec_info_topAddr.value
    return meta 

def cmd_push(dut, addr):
    dut.io_s3_redirect_2.value = 0
    # fire
    dut.io_s2_fire_2.value = 1
    dut.io_s3_fire_2.value = 1

    #dut in s2
    dut.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0.value = 1
    dut.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1.value = 1
    dut.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1.value = 1
    dut.io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr.value = addr
    dut.io_in_bits_resp_in_0_s2_full_pred_2_is_call.value = 1
    dut.io_in_bits_resp_in_0_s2_full_pred_2_is_ret.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_hit.value = 1

    # s3 set zero
    dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0.value = 1
    dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1.value = 1
    dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1.value = 1
    dut.io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr.value = addr
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_call.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_ret.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_hit.value = 1

def s2_push(dut, addr):
    dut.io_s3_redirect_2.value = 0
    # fire
    dut.io_s2_fire_2.value = 1
    dut.io_s3_fire_2.value = 1

    #dut in s2
    dut.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0.value = 1
    dut.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1.value = 1
    dut.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1.value = 1
    dut.io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr.value = addr
    dut.io_in_bits_resp_in_0_s2_full_pred_2_is_call.value = 1
    dut.io_in_bits_resp_in_0_s2_full_pred_2_is_ret.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_hit.value = 1
    dut.io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call.value = 0

    # s3 set zero
    dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr.value = addr
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_call.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_ret.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_hit.value = 0

def s3_push(dut, addr):
    dut.io_s3_redirect_2.value = 0
    # fire
    dut.io_s2_fire_2.value = 1
    dut.io_s3_fire_2.value = 1

    #s2 set zero
    dut.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr.value = addr
    dut.io_in_bits_resp_in_0_s2_full_pred_2_is_call.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_is_ret.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_hit.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call.value = 0

    # s3
    dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0.value = 1
    dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1.value = 1
    dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1.value = 1
    dut.io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr.value = addr
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_call.value = 1
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_ret.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_hit.value = 1

def set_push_valid_zero(dut):
    dut.io_s3_redirect_2.value = 0
    # fire
    dut.io_s2_fire_2.value = 1
    dut.io_s3_fire_2.value = 1

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

    # s3
    dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_call.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_ret.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_hit.value = 0

def cmd_pop(dut):
    #s2 set zero
    dut.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1.value = 1
    dut.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1.value = 1
    dut.io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_is_call.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_is_ret.value = 1
    dut.io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_hit.value = 1
    # s3
    dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1.value = 1
    dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1.value = 1
    dut.io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_call.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_ret.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_hit.value = 1


def s2_pop(dut):

    dut.io_s3_redirect_2.value = 0
    # fire
    dut.io_s2_fire_2.value = 1
    dut.io_s3_fire_2.value = 1

    #s2
    dut.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1.value = 1
    dut.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1.value = 1
    dut.io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_is_call.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_is_ret.value = 1
    dut.io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_hit.value = 1
    # s3
    dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_call.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_ret.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_hit.value = 0


def s3_pop(dut):

    dut.io_s3_redirect_2.value = 0
    # fire
    dut.io_s2_fire_2.value = 1
    dut.io_s3_fire_2.value = 1

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
    # s3
    dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1.value = 1
    dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1.value = 1
    dut.io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_call.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_ret.value = 1
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_hit.value = 1
def set_pop_valid_zero(dut):

    dut.io_s3_redirect_2.value = 0
    # fire
    dut.io_s2_fire_2.value = 1
    dut.io_s3_fire_2.value = 1

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
    # s3
    dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_call.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_ret.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing.value = 0
    dut.io_in_bits_resp_in_0_s3_full_pred_2_hit.value = 0


def commit_push(dut, tosw, ssp):
    dut.io_s3_redirect_2.value = 0
    # fire
    dut.io_s2_fire_2.value = 1
    dut.io_s3_fire_2.value = 1

    dut.io_update_valid.value = 1
    dut.io_update_bits_ftb_entry_tailSlot_offset.value = 1
    dut.io_update_bits_ftb_entry_tailSlot_valid.value = 1
    dut.io_update_bits_ftb_entry_isCall.value = 1
    dut.io_update_bits_ftb_entry_isRet.value = 1
    dut.io_update_bits_cfi_idx_valid.value = 1
    dut.io_update_bits_cfi_idx_bits.value = 1
    dut.io_update_bits_jmp_taken.value = 1
    dut.io_update_bits_meta.value = (tosw << 12) + (ssp << 21)

def commit_valid_zero(dut):
    dut.io_s3_redirect_2.value = 0
    # fire
    dut.io_s2_fire_2.value = 1
    dut.io_s3_fire_2.value = 1

    dut.io_update_valid.value = 0
    dut.io_update_bits_ftb_entry_tailSlot_offset.value = 0
    dut.io_update_bits_ftb_entry_tailSlot_valid.value = 0
    dut.io_update_bits_ftb_entry_isCall.value = 0
    dut.io_update_bits_ftb_entry_isRet.value = 0
    dut.io_update_bits_cfi_idx_valid.value = 0
    dut.io_update_bits_cfi_idx_bits.value = 0
    dut.io_update_bits_jmp_taken.value = 0
    dut.io_update_bits_meta.value = 0

def commit_pop_valid(dut, ssp):
    dut.io_s3_redirect_2.value = 0
    # fire
    dut.io_s2_fire_2.value = 1
    dut.io_s3_fire_2.value = 1

    dut.io_update_valid.value = 0
    dut.io_update_bits_ftb_entry_tailSlot_offset.value = 1
    dut.io_update_bits_ftb_entry_tailSlot_valid.value = 1
    dut.io_update_bits_ftb_entry_isCall.value = 0
    dut.io_update_bits_ftb_entry_isRet.value = 1
    dut.io_update_bits_cfi_idx_valid.value = 1
    dut.io_update_bits_cfi_idx_bits.value = 1
    dut.io_update_bits_jmp_taken.value = 1
    dut.io_update_bits_meta.value = (ssp << 21)

def ras_redirect(dut, pc, isRVC, isCall, isRet, meta):
    dut.io_s3_redirect_2.value = 0
    # fire
    dut.io_s2_fire_2.value = 1
    dut.io_s3_fire_2.value = 1

    dut.io_redirect_valid.value = 1
    dut.io_redirect_bits_level.value = 0
    dut.io_redirect_bits_cfiUpdate_pc.value = pc
    dut.io_redirect_bits_cfiUpdate_pd_isRVC.value = isRVC
    dut.io_redirect_bits_cfiUpdate_pd_isCall.value = isCall
    dut.io_redirect_bits_cfiUpdate_pd_isRet.value = isRet
    dut.io_redirect_bits_cfiUpdate_ssp.value = meta['ssp']
    dut.io_redirect_bits_cfiUpdate_sctr.value = meta['sctr']
    dut.io_redirect_bits_cfiUpdate_TOSW_flag.value = meta['TOSW_flag']
    dut.io_redirect_bits_cfiUpdate_TOSW_value.value = meta['TOSW_value']
    dut.io_redirect_bits_cfiUpdate_TOSR_flag.value = meta['TOSR_flag']
    dut.io_redirect_bits_cfiUpdate_TOSR_value.value = meta['TOSR_value']
    dut.io_redirect_bits_cfiUpdate_NOS_flag.value = meta['NOS_flag']
    dut.io_redirect_bits_cfiUpdate_NOS_value.value = meta['NOS_value']
    
def ras_redirect_valid_zero(dut):
    dut.io_s3_redirect_2.value = 0
    # fire
    dut.io_s2_fire_2.value = 1
    dut.io_s3_fire_2.value = 1

    dut.io_redirect_valid.value = 0
    dut.io_redirect_bits_level.value = 0
    dut.io_redirect_bits_cfiUpdate_pc.value = 0
    dut.io_redirect_bits_cfiUpdate_pd_isRVC.value = 0
    dut.io_redirect_bits_cfiUpdate_pd_isCall.value = 0
    dut.io_redirect_bits_cfiUpdate_pd_isRet.value = 0
    dut.io_redirect_bits_cfiUpdate_ssp.value = 0
    dut.io_redirect_bits_cfiUpdate_sctr.value = 0
    dut.io_redirect_bits_cfiUpdate_TOSW_flag.value = 0
    dut.io_redirect_bits_cfiUpdate_TOSW_value.value = 0
    dut.io_redirect_bits_cfiUpdate_TOSR_flag.value = 0
    dut.io_redirect_bits_cfiUpdate_TOSR_value.value = 0
    dut.io_redirect_bits_cfiUpdate_NOS_flag.value = 0
    dut.io_redirect_bits_cfiUpdate_NOS_value.value = 0


###################################################################################################
class RASWrapper():
    def __init__(self, dut):
        self.dut = dut
        self.dut.clock.value = 0
        self.dut.io_ctrl_ras_enable.value = 1

    def __getattr__(self, name):
        return getattr(self.dut, name)

    async def reset(self):
        self.dut.reset.value = 1
        self.dut.io_reset_vector.value = 1
        self.dut.io_s2_fire_2.value = 1
        await Timer(20, units="ns")
        self.dut.reset.value = 0
        self.dut.io_reset_vector.value = 0
        self.dut.io_s2_fire_2.value = 0
        await Timer(40, units="ns")
        print("RAS reset done")
    async def push(self,addr):
        # s2 push
        # cmd_push(self.dut, addr)
        # cmd_push(self.dut, addr)
        # await Timer(20, units="ns")
        s2_push(self.dut, addr)
        # # cmd_push(self.dut, addr)
        await Timer(20, units="ns")
        # await RisingEdge(self.dut.clock)
        meta = get_meta(self.dut)
        # s3 push
        s3_push(self.dut, addr)
        # # cmd_push(self.dut, addr)
        await Timer(20, units="ns")
        # # set_push_valid_zero(self.dut)
        set_push_valid_zero(self.dut)
        await Timer(20, units="ns")
        #s2 set zero
        return meta

    async def pop(self):
        # s2 pop
        s2_pop(self.dut)
        await Timer(20, units="ns")
        # meta = get_meta(self.dut)
        # s3 pop
        s3_pop(self.dut)
        pop_value = self.dut.io_out_last_stage_spec_info_topAddr.value
        await Timer(20, units="ns")
        #s2 set zero
        set_pop_valid_zero(self.dut)
        await Timer(20, units="ns")
        # print(pop_value)
        return pop_value
    
    async def commit_push(self, meta):
        commit_push(self.dut, meta["TOSW_value"], meta["ssp"]),
        await Timer(20, units="ns")
        commit_valid_zero(self.dut)
        await Timer(40, units="ns")

    async def commit_pop(self, meta):
        commit_pop_valid(self.dut, meta["ssp"]),
        await Timer(20, units="ns")
        commit_valid_zero(self.dut)
        await Timer(40, units="ns")

    
    async def keep_after_push(self, addr):   # spec_push
        # s2
        s2_push(self.dut, addr)
        await Timer(20, units="ns")
        # s3
        set_push_valid_zero(self.dut)
        await Timer(40, units="ns")
        meta = get_meta(self.dut)
        return meta

    
    async def pop_after_keep(self):   # spec_push
        # s2
        set_push_valid_zero(self.dut)
        await Timer(20, units="ns")
        # s3
        s3_pop(self.dut)
        await Timer(20, units="ns")
        pop_value = self.dut.io_out_last_stage_spec_info_topAddr.value
        set_push_valid_zero(self.dut)
        await Timer(40, units="ns")
        return pop_value

    async def keep_after_pop(self):
        # s2
        s2_pop(self.dut)
        await Timer(20, units="ns")
        # s3
        set_push_valid_zero(self.dut)
        await Timer(20, units="ns")
        meta = get_meta(self.dut)
        set_push_valid_zero(self.dut)
        await Timer(40, units="ns")
        return meta

    async def push_after_keep(self, addr):
        # s2
        set_push_valid_zero(self.dut)
        await Timer(20, units="ns")
        # s3
        s3_push(self.dut, addr)
        print(self.dut.RASStack.io_s3_cancel)
        await Timer(40, units="ns")
        meta = get_meta(self.dut)
        set_push_valid_zero(self.dut)
        await Timer(40, units="ns")
        return meta

    
    async def redirect_push(self, pc, isRVC, meta):
        ras_redirect(self.dut, pc, isRVC, 1, 0, meta )
        await Timer(20, units="ns")
        new_meta = get_meta(self.dut)
        ras_redirect_valid_zero(self.dut)
        await Timer(60, units="ns")
        return new_meta
    
    async def redirect_pop(self, meta):
        ras_redirect(self.dut, 0, 0, 0, 1, meta )
        await Timer(20, units="ns")
        pop_value = self.dut.io_out_last_stage_spec_info_topAddr.value
        await Timer(60, units="ns")

        return pop_value
