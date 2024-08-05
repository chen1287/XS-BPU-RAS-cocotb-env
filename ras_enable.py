import cocotb
import random
from cocotb.regression import TestFactory
from cocotb.triggers import Timer, FallingEdge
from ras_enable import *

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
    dut.io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_is_call.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_is_ret.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing.value = 0
    dut.io_in_bits_resp_in_0_s2_full_pred_2_hit.value = 0

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

def s2_pop(dut):

    dut.io_s3_redirect_2.value = 0
    # fire
    dut.io_s2_fire_2.value = 1
    dut.io_s3_fire_2.value = 1

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


def s3_pop(dut):

    dut.io_s3_redirect_2.value = 0
    # fire
    dut.io_s2_fire_2.value = 1
    dut.io_s3_fire_2.value = 1

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

def commit_push_valid_zero(dut):
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

def commit_pop(dut):
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
    dut.io_update_bits_meta.value = 0

# def ras_redirect(dut, isRVC, isCall, isRet, ssp, sctr, TOSW_flag, TOSW_value, TOSR_flag, TOSR_value, NOS_flag, NOS_value ):

# def cmd_redirect(pc, isRVC, isCall, isRet, ssp, sctr, TOSW_flag, TOSW_value, TOSR_flag, TOSR_value, NOS_flag, NOS_value ):
#     return {
#         "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
#         "redirect": {"valid": 1, "bits_level": 0, "bits_cfiUpdate_pc": pc, "bits_cfiUpdate_pd_isRVC": isRVC, "bits_cfiUpdate_pd_isCall": isCall, "bits_cfiUpdate_pd_isRet": isRet,
#                      "bits_cfiUpdate_ssp": ssp, "bits_cfiUpdate_sctr": 1, "bits_cfiUpdate_TOSW_flag": TOSW_flag, "bits_cfiUpdate_TOSW_value": TOSW_value,
#                      "bits_cfiUpdate_TOSR_flag": TOSR_flag, "bits_cfiUpdate_TOSR_value": TOSR_value, "bits_cfiUpdate_NOS_flag": NOS_flag, "bits_cfiUpdate_NOS_value": NOS_value},
#         "*": 0,
#     }

# def cmd_redirect_zero():
#     return {
#         "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
#         "redirect": {"valid": 0, "bits_level": 0, "bits_cfiUpdate_pc": 0, "bits_cfiUpdate_pd_isRVC": 0, "bits_cfiUpdate_pd_isCall": 0, "bits_cfiUpdate_pd_isRet": 0,
#                      "bits_cfiUpdate_ssp": 0, "bits_cfiUpdate_sctr": 0, "bits_cfiUpdate_TOSW_flag": 0, "bits_cfiUpdate_TOSW_value": 0,
#                      "bits_cfiUpdate_TOSR_flag": 0, "bits_cfiUpdate_TOSR_value": 0, "bits_cfiUpdate_NOS_flag": 0, "bits_cfiUpdate_NOS_value": 0}
#     }

# def s2_push(address):
#     return [{
#             "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
#             "in_full_pred_s2_2": {"is_call": 1, "is_ret": 0, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": address,
#                                   "slot_valids_0": 0, "br_taken_mask_0": 0},
#             "*": 0,
#            }]

# def s2_pop():
#     return [{
#             "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
#             "in_full_pred_s2_2": {"is_call": 0, "is_ret": 1, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": 0x00,
#                                   "slot_valids_0": 0, "br_taken_mask_0": 0},
#             "*": 0,}]

# def s2_keep():
#     return [{
#             "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
#             "in_full_pred_s2_2": {"is_call": 0, "is_ret": 0, "is_br_sharing": 0, "hit": 0, "slot_valids_1": 0, "br_taken_mask_1": 0,
#                                   "slot_valids_0": 0, "br_taken_mask_0": 0},
#             "*": 0,}]


# def s3_keep():
#     return [{
#             "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
#             "in_full_pred_s2_2": {"is_call": 0, "is_ret": 0, "is_br_sharing": 0, "hit": 0, "slot_valids_1": 0, "br_taken_mask_1": 0, "fallThroughAddr": 0,
#                                   "slot_valids_0": 0, "br_taken_mask_0": 0},
#             "in_full_pred_s3_2": {"is_call": 0, "is_ret": 0, "is_br_sharing": 0, "hit": 0, "slot_valids_1": 0, "br_taken_mask_1": 0, "fallThroughAddr": 0,
#                                   "slot_valids_0": 0, "br_taken_mask_0": 0},
#     }]

# def s3_pop():
#     return [{
#             "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
#             "in_full_pred_s2_2": {"is_call": 0, "is_ret": 0, "is_br_sharing": 0, "hit": 0, "slot_valids_1": 0, "br_taken_mask_1": 0, 
#                                   "slot_valids_0": 0, "br_taken_mask_0": 0},
#             "in_full_pred_s3_2": {"is_call": 0, "is_ret": 1, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 0, 
#                                   "slot_valids_0": 0, "br_taken_mask_0": 0},
#     }]