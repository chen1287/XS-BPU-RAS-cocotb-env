def cmd_rest_on():
    return {"control": {"io_reset_vector": 1, "reset": 1, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1}}


def cmd_rest_off():
    return {"control": {"reset":0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1}}


def cmd_zero(n=0, cb=None):
        ret = {
            "control": {"io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
            "*":0,
           }
        if cb is not None:
            ret.update({"func": cb})
        if n <= 0:
            return ret
        return [ret] * n

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


# def cmd_push(address):
#     return [{
#             "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
#             "in_full_pred_s2_2": {"is_call": 1, "is_ret": 0, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": address,
#                                   "slot_valids_0": 0, "br_taken_mask_0": 0},
#             "in_full_pred_s3_2": {"is_call": 0, "is_ret": 0, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": address,
#                                   "slot_valids_0": 0, "br_taken_mask_0": 0},
#            },
#             {
#             "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
#             "in_full_pred_s2_2": {"is_call": 0, "is_ret": 0, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": address,
#                                   "slot_valids_0": 0, "br_taken_mask_0": 0},
#             "in_full_pred_s3_2": {"is_call": 1, "is_ret": 0, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": address,
#                                   "slot_valids_0": 0, "br_taken_mask_0": 0},           }]


# def cmd_xpush(address):
#     return {
#             "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
#             "in_full_pred_s2_2": {"is_call": 0, "is_ret": 0, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": address,
#                                   "slot_valids_0": 0, "br_taken_mask_0": 0},
#             "in_full_pred_s3_2": {"is_call": 1, "is_ret": 0, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": address,
#                                   "slot_valids_0": 0, "br_taken_mask_0": 0},
#            }


# def cmd_pop():
#     return [{
#             "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
#             "in_full_pred_s2_2": {"is_call": 0, "is_ret": 1, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": 0x00,
#                                   "slot_valids_0": 0, "br_taken_mask_0": 0},
#             "in_full_pred_s3_2": {"is_call": 0, "is_ret": 0, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": 0x00,
#                                   "slot_valids_0": 0, "br_taken_mask_0": 0},
#            },
#             {
#             "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 0},
#             "in_full_pred_s2_2": {"is_call": 0, "is_ret": 0, "is_br_sharing": 0, "hit": 0, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": 0x00,
#                                   "slot_valids_0": 0, "br_taken_mask_0": 0},
#             "in_full_pred_s3_2": {"is_call": 0, "is_ret": 1, "is_br_sharing": 0, "hit": 0, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": 0x00,
#                                   "slot_valids_0": 0, "br_taken_mask_0": 0},
#            }]


# def cmd_xpop():
#     return {
#             "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
#             "in_full_pred_s2_2": {"is_call": 0, "is_ret": 0, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": 0x00,
#                                   "slot_valids_0": 0, "br_taken_mask_0": 0},
#             "in_full_pred_s3_2": {"is_call": 0, "is_ret": 1, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": 0x00,
#                                   "slot_valids_0": 0, "br_taken_mask_0": 0},
#            }

# def cmd_commit_push(tosw, ssp):
#     return {
#         "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
#         "update": {"valid": 1, "bits_ftb_entry_tailSlot_valid": 1, 
#                                "bits_ftb_entry_isCall": 1, 
#                                "bits_ftb_entry_isRet": 0,
#                                "bits_jmp_taken" : 1, "bits_cfi_idx_valid" :1, "bits_cfi_idx_bits" : 1, "bits_ftb_entry_tailSlot_offset" : 1,
#                 "bits_meta" : (tosw << 12) + (ssp << 21)},
#         "*": 0,
#     }



# def cmd_commit_pop(ssp):
#     """
#         io_commit_pop_valid
#       (io_update_valid & io_update_bits_ftb_entry_tailSlot_valid
#        & io_update_bits_ftb_entry_isRet & io_update_bits_jmp_taken
#        & io_update_bits_cfi_idx_valid & _GEN_1)
#        """
#     return {
#         "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
#         "update": {"valid": 1, "bits_ftb_entry_tailSlot_valid": 1, 
#                                "bits_ftb_entry_isCall": 0, 
#                                "bits_ftb_entry_isRet": 1,
#                                "bits_jmp_taken" : 1, "bits_cfi_idx_valid" :1, "bits_cfi_idx_bits" : 1, "bits_ftb_entry_tailSlot_offset" : 1,
#                 "bits_meta" : (ssp << 21)},
#         "*": 0,
#     }

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