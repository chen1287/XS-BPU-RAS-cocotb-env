// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "svdpi.h"

class Vtop__Syms;
class Vtop___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtop VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_0_offsets_0,3,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_0_offsets_1,3,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_0_hit,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_1_offsets_0,3,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_1_offsets_1,3,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_1_hit,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_2_offsets_0,3,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_2_offsets_1,3,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_2_is_jalr,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_2_is_call,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_2_is_ret,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_2_hit,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_3_offsets_0,3,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_3_offsets_1,3,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s2_full_pred_3_hit,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_0_hit,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_1_hit,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_2_is_jalr,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_2_is_call,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_2_is_ret,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_2_hit,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_3_offsets_0,3,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_3_offsets_1,3,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing,0,0);
    VL_IN8(&io_in_bits_resp_in_0_s3_full_pred_3_hit,0,0);
    VL_IN8(&io_in_bits_resp_in_0_last_stage_ftb_entry_valid,0,0);
    VL_IN8(&io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset,3,0);
    VL_IN8(&io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat,1,0);
    VL_IN8(&io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing,0,0);
    VL_IN8(&io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid,0,0);
    VL_IN8(&io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset,3,0);
    VL_IN8(&io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat,1,0);
    VL_IN8(&io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing,0,0);
    VL_IN8(&io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid,0,0);
    VL_IN8(&io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr,3,0);
    VL_IN8(&io_in_bits_resp_in_0_last_stage_ftb_entry_carry,0,0);
    VL_IN8(&io_in_bits_resp_in_0_last_stage_ftb_entry_isCall,0,0);
    VL_IN8(&io_in_bits_resp_in_0_last_stage_ftb_entry_isRet,0,0);
    VL_IN8(&io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr,0,0);
    VL_IN8(&io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call,0,0);
    VL_IN8(&io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0,0,0);
    VL_IN8(&io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1,0,0);
    VL_OUT8(&io_out_s2_full_pred_0_br_taken_mask_0,0,0);
    VL_OUT8(&io_out_s2_full_pred_0_br_taken_mask_1,0,0);
    VL_OUT8(&io_out_s2_full_pred_0_slot_valids_0,0,0);
    VL_OUT8(&io_out_s2_full_pred_0_slot_valids_1,0,0);
    VL_OUT8(&io_out_s2_full_pred_0_offsets_0,3,0);
    VL_OUT8(&io_out_s2_full_pred_0_offsets_1,3,0);
    VL_OUT8(&io_out_s2_full_pred_0_is_br_sharing,0,0);
    VL_OUT8(&io_out_s2_full_pred_0_hit,0,0);
    VL_OUT8(&io_out_s2_full_pred_1_br_taken_mask_0,0,0);
    VL_OUT8(&io_out_s2_full_pred_1_br_taken_mask_1,0,0);
    VL_OUT8(&io_out_s2_full_pred_1_slot_valids_0,0,0);
    VL_OUT8(&io_out_s2_full_pred_1_slot_valids_1,0,0);
    VL_OUT8(&io_out_s2_full_pred_1_offsets_0,3,0);
    VL_OUT8(&io_out_s2_full_pred_1_offsets_1,3,0);
    VL_OUT8(&io_out_s2_full_pred_1_is_br_sharing,0,0);
    VL_OUT8(&io_out_s2_full_pred_1_hit,0,0);
    VL_OUT8(&io_out_s2_full_pred_2_br_taken_mask_0,0,0);
    VL_OUT8(&io_out_s2_full_pred_2_br_taken_mask_1,0,0);
    VL_OUT8(&io_out_s2_full_pred_2_slot_valids_0,0,0);
    VL_OUT8(&io_out_s2_full_pred_2_slot_valids_1,0,0);
    VL_OUT8(&io_out_s2_full_pred_2_offsets_0,3,0);
    VL_OUT8(&io_out_s2_full_pred_2_offsets_1,3,0);
    VL_OUT8(&io_out_s2_full_pred_2_is_br_sharing,0,0);
    VL_OUT8(&io_out_s2_full_pred_2_hit,0,0);
    VL_OUT8(&io_out_s2_full_pred_3_br_taken_mask_0,0,0);
    VL_OUT8(&io_out_s2_full_pred_3_br_taken_mask_1,0,0);
    VL_OUT8(&io_out_s2_full_pred_3_slot_valids_0,0,0);
    VL_OUT8(&io_out_s2_full_pred_3_slot_valids_1,0,0);
    VL_OUT8(&io_out_s2_full_pred_3_offsets_0,3,0);
    VL_OUT8(&io_out_s2_full_pred_3_offsets_1,3,0);
    VL_OUT8(&io_out_s2_full_pred_3_fallThroughErr,0,0);
    VL_OUT8(&io_out_s2_full_pred_3_is_br_sharing,0,0);
    VL_OUT8(&io_out_s2_full_pred_3_hit,0,0);
    VL_OUT8(&io_out_s3_full_pred_0_br_taken_mask_0,0,0);
    VL_OUT8(&io_out_s3_full_pred_0_br_taken_mask_1,0,0);
    VL_OUT8(&io_out_s3_full_pred_0_slot_valids_0,0,0);
    VL_OUT8(&io_out_s3_full_pred_0_slot_valids_1,0,0);
    VL_OUT8(&io_out_s3_full_pred_0_fallThroughErr,0,0);
    VL_OUT8(&io_out_s3_full_pred_0_is_br_sharing,0,0);
    VL_OUT8(&io_out_s3_full_pred_0_hit,0,0);
    VL_OUT8(&io_out_s3_full_pred_1_br_taken_mask_0,0,0);
    VL_OUT8(&io_out_s3_full_pred_1_br_taken_mask_1,0,0);
    VL_OUT8(&io_out_s3_full_pred_1_slot_valids_0,0,0);
    VL_OUT8(&io_out_s3_full_pred_1_slot_valids_1,0,0);
    VL_OUT8(&io_out_s3_full_pred_1_fallThroughErr,0,0);
    VL_OUT8(&io_out_s3_full_pred_1_is_br_sharing,0,0);
    VL_OUT8(&io_out_s3_full_pred_1_hit,0,0);
    VL_OUT8(&io_out_s3_full_pred_2_br_taken_mask_0,0,0);
    VL_OUT8(&io_out_s3_full_pred_2_br_taken_mask_1,0,0);
    VL_OUT8(&io_out_s3_full_pred_2_slot_valids_0,0,0);
    VL_OUT8(&io_out_s3_full_pred_2_slot_valids_1,0,0);
    VL_OUT8(&io_out_s3_full_pred_2_fallThroughErr,0,0);
    VL_OUT8(&io_out_s3_full_pred_2_is_br_sharing,0,0);
    VL_OUT8(&io_out_s3_full_pred_2_hit,0,0);
    VL_OUT8(&io_out_s3_full_pred_3_br_taken_mask_0,0,0);
    VL_OUT8(&io_out_s3_full_pred_3_br_taken_mask_1,0,0);
    VL_OUT8(&io_out_s3_full_pred_3_slot_valids_0,0,0);
    VL_OUT8(&io_out_s3_full_pred_3_slot_valids_1,0,0);
    VL_OUT8(&io_out_s3_full_pred_3_offsets_0,3,0);
    VL_OUT8(&io_out_s3_full_pred_3_offsets_1,3,0);
    VL_OUT8(&io_out_s3_full_pred_3_fallThroughErr,0,0);
    VL_OUT8(&io_out_s3_full_pred_3_is_br_sharing,0,0);
    VL_OUT8(&io_out_s3_full_pred_3_hit,0,0);
    VL_OUT8(&io_out_last_stage_spec_info_ssp,3,0);
    VL_OUT8(&io_out_last_stage_spec_info_sctr,1,0);
    VL_OUT8(&io_out_last_stage_spec_info_TOSW_flag,0,0);
    VL_OUT8(&io_out_last_stage_spec_info_TOSW_value,4,0);
    VL_OUT8(&io_out_last_stage_spec_info_TOSR_flag,0,0);
    VL_OUT8(&io_out_last_stage_spec_info_TOSR_value,4,0);
    VL_OUT8(&io_out_last_stage_spec_info_NOS_flag,0,0);
    VL_OUT8(&io_out_last_stage_spec_info_NOS_value,4,0);
    VL_OUT8(&io_out_last_stage_ftb_entry_valid,0,0);
    VL_OUT8(&io_out_last_stage_ftb_entry_brSlots_0_offset,3,0);
    VL_OUT8(&io_out_last_stage_ftb_entry_brSlots_0_tarStat,1,0);
    VL_OUT8(&io_out_last_stage_ftb_entry_brSlots_0_sharing,0,0);
    VL_OUT8(&io_out_last_stage_ftb_entry_brSlots_0_valid,0,0);
    VL_OUT8(&io_out_last_stage_ftb_entry_tailSlot_offset,3,0);
    VL_OUT8(&io_out_last_stage_ftb_entry_tailSlot_tarStat,1,0);
    VL_OUT8(&io_out_last_stage_ftb_entry_tailSlot_sharing,0,0);
    VL_OUT8(&io_out_last_stage_ftb_entry_tailSlot_valid,0,0);
    VL_OUT8(&io_out_last_stage_ftb_entry_pftAddr,3,0);
    VL_OUT8(&io_out_last_stage_ftb_entry_carry,0,0);
    VL_OUT8(&io_out_last_stage_ftb_entry_isCall,0,0);
    VL_OUT8(&io_out_last_stage_ftb_entry_isRet,0,0);
    VL_OUT8(&io_out_last_stage_ftb_entry_isJalr,0,0);
    VL_OUT8(&io_out_last_stage_ftb_entry_last_may_be_rvi_call,0,0);
    VL_OUT8(&io_out_last_stage_ftb_entry_always_taken_0,0,0);
    VL_OUT8(&io_out_last_stage_ftb_entry_always_taken_1,0,0);
    VL_IN8(&io_ctrl_ras_enable,0,0);
    VL_IN8(&io_s0_fire_0,0,0);
    VL_IN8(&io_s0_fire_1,0,0);
    VL_IN8(&io_s0_fire_2,0,0);
    VL_IN8(&io_s0_fire_3,0,0);
    VL_IN8(&io_s1_fire_0,0,0);
    VL_IN8(&io_s1_fire_1,0,0);
    VL_IN8(&io_s1_fire_2,0,0);
    VL_IN8(&io_s1_fire_3,0,0);
    VL_IN8(&io_s2_fire_0,0,0);
    VL_IN8(&io_s2_fire_1,0,0);
    VL_IN8(&io_s2_fire_2,0,0);
    VL_IN8(&io_s2_fire_3,0,0);
    VL_IN8(&io_s3_fire_2,0,0);
    VL_IN8(&io_s3_redirect_2,0,0);
    VL_IN8(&io_update_valid,0,0);
    VL_IN8(&io_update_bits_ftb_entry_tailSlot_offset,3,0);
    VL_IN8(&io_update_bits_ftb_entry_tailSlot_valid,0,0);
    VL_IN8(&io_update_bits_ftb_entry_isCall,0,0);
    VL_IN8(&io_update_bits_ftb_entry_isRet,0,0);
    VL_IN8(&io_update_bits_cfi_idx_valid,0,0);
    VL_IN8(&io_update_bits_cfi_idx_bits,3,0);
    VL_IN8(&io_update_bits_jmp_taken,0,0);
    VL_IN8(&io_redirect_valid,0,0);
    VL_IN8(&io_redirect_bits_level,0,0);
    VL_IN8(&io_redirect_bits_cfiUpdate_pd_isRVC,0,0);
    VL_IN8(&io_redirect_bits_cfiUpdate_pd_isCall,0,0);
    VL_IN8(&io_redirect_bits_cfiUpdate_pd_isRet,0,0);
    VL_IN8(&io_redirect_bits_cfiUpdate_ssp,3,0);
    VL_IN8(&io_redirect_bits_cfiUpdate_sctr,1,0);
    VL_IN8(&io_redirect_bits_cfiUpdate_TOSW_flag,0,0);
    VL_IN8(&io_redirect_bits_cfiUpdate_TOSW_value,4,0);
    VL_IN8(&io_redirect_bits_cfiUpdate_TOSR_flag,0,0);
    VL_IN8(&io_redirect_bits_cfiUpdate_TOSR_value,4,0);
    VL_IN8(&io_redirect_bits_cfiUpdate_NOS_flag,0,0);
    VL_IN8(&io_redirect_bits_cfiUpdate_NOS_value,4,0);
    VL_IN16(&io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower,11,0);
    VL_OUT16(&io_out_last_stage_ftb_entry_brSlots_0_lower,11,0);
    VL_IN(&io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower,19,0);
    VL_OUTW(&io_out_last_stage_meta,222,0,7);
    VL_OUT(&io_out_last_stage_ftb_entry_tailSlot_lower,19,0);
    VL_INW(&io_update_bits_meta,222,0,7);
    VL_IN64(&io_reset_vector,35,0);
    VL_IN64(&io_in_bits_s0_pc_0,40,0);
    VL_IN64(&io_in_bits_s0_pc_1,40,0);
    VL_IN64(&io_in_bits_s0_pc_2,40,0);
    VL_IN64(&io_in_bits_s0_pc_3,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s2_full_pred_0_targets_0,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s2_full_pred_0_targets_1,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s2_full_pred_0_jalr_target,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s2_full_pred_1_targets_0,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s2_full_pred_1_targets_1,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s2_full_pred_1_jalr_target,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s2_full_pred_2_targets_0,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s2_full_pred_2_targets_1,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s2_full_pred_2_jalr_target,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s2_full_pred_3_targets_0,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s2_full_pred_3_targets_1,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s2_full_pred_3_jalr_target,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s3_full_pred_0_targets_0,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s3_full_pred_0_targets_1,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s3_full_pred_0_jalr_target,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s3_full_pred_1_targets_0,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s3_full_pred_1_targets_1,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s3_full_pred_1_jalr_target,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s3_full_pred_2_targets_0,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s3_full_pred_2_targets_1,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s3_full_pred_2_jalr_target,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s3_full_pred_3_targets_0,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s3_full_pred_3_targets_1,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s3_full_pred_3_jalr_target,40,0);
    VL_IN64(&io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr,40,0);
    VL_OUT64(&io_out_s2_pc_0,40,0);
    VL_OUT64(&io_out_s2_pc_1,40,0);
    VL_OUT64(&io_out_s2_pc_2,40,0);
    VL_OUT64(&io_out_s2_pc_3,40,0);
    VL_OUT64(&io_out_s2_full_pred_0_targets_0,40,0);
    VL_OUT64(&io_out_s2_full_pred_0_targets_1,40,0);
    VL_OUT64(&io_out_s2_full_pred_0_fallThroughAddr,40,0);
    VL_OUT64(&io_out_s2_full_pred_1_targets_0,40,0);
    VL_OUT64(&io_out_s2_full_pred_1_targets_1,40,0);
    VL_OUT64(&io_out_s2_full_pred_1_fallThroughAddr,40,0);
    VL_OUT64(&io_out_s2_full_pred_2_targets_0,40,0);
    VL_OUT64(&io_out_s2_full_pred_2_targets_1,40,0);
    VL_OUT64(&io_out_s2_full_pred_2_fallThroughAddr,40,0);
    VL_OUT64(&io_out_s2_full_pred_3_targets_0,40,0);
    VL_OUT64(&io_out_s2_full_pred_3_targets_1,40,0);
    VL_OUT64(&io_out_s2_full_pred_3_fallThroughAddr,40,0);
    VL_OUT64(&io_out_s3_pc_0,40,0);
    VL_OUT64(&io_out_s3_pc_1,40,0);
    VL_OUT64(&io_out_s3_pc_2,40,0);
    VL_OUT64(&io_out_s3_pc_3,40,0);
    VL_OUT64(&io_out_s3_full_pred_0_targets_0,40,0);
    VL_OUT64(&io_out_s3_full_pred_0_targets_1,40,0);
    VL_OUT64(&io_out_s3_full_pred_0_fallThroughAddr,40,0);
    VL_OUT64(&io_out_s3_full_pred_1_targets_0,40,0);
    VL_OUT64(&io_out_s3_full_pred_1_targets_1,40,0);
    VL_OUT64(&io_out_s3_full_pred_1_fallThroughAddr,40,0);
    VL_OUT64(&io_out_s3_full_pred_2_targets_0,40,0);
    VL_OUT64(&io_out_s3_full_pred_2_targets_1,40,0);
    VL_OUT64(&io_out_s3_full_pred_2_fallThroughAddr,40,0);
    VL_OUT64(&io_out_s3_full_pred_3_targets_0,40,0);
    VL_OUT64(&io_out_s3_full_pred_3_targets_1,40,0);
    VL_OUT64(&io_out_s3_full_pred_3_fallThroughAddr,40,0);
    VL_OUT64(&io_out_last_stage_spec_info_topAddr,40,0);
    VL_IN64(&io_redirect_bits_cfiUpdate_pc,40,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtop(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtop();
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
