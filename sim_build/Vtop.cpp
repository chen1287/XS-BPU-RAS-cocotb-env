// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0}
    , io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1}
    , io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0}
    , io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1}
    , io_in_bits_resp_in_0_s2_full_pred_0_offsets_0{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_0_offsets_0}
    , io_in_bits_resp_in_0_s2_full_pred_0_offsets_1{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_0_offsets_1}
    , io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing}
    , io_in_bits_resp_in_0_s2_full_pred_0_hit{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_0_hit}
    , io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0}
    , io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1}
    , io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0}
    , io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1}
    , io_in_bits_resp_in_0_s2_full_pred_1_offsets_0{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_1_offsets_0}
    , io_in_bits_resp_in_0_s2_full_pred_1_offsets_1{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_1_offsets_1}
    , io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing}
    , io_in_bits_resp_in_0_s2_full_pred_1_hit{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_1_hit}
    , io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0}
    , io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1}
    , io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0}
    , io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1}
    , io_in_bits_resp_in_0_s2_full_pred_2_offsets_0{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_2_offsets_0}
    , io_in_bits_resp_in_0_s2_full_pred_2_offsets_1{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_2_offsets_1}
    , io_in_bits_resp_in_0_s2_full_pred_2_is_jalr{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_2_is_jalr}
    , io_in_bits_resp_in_0_s2_full_pred_2_is_call{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_2_is_call}
    , io_in_bits_resp_in_0_s2_full_pred_2_is_ret{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_2_is_ret}
    , io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call}
    , io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing}
    , io_in_bits_resp_in_0_s2_full_pred_2_hit{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_2_hit}
    , io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0}
    , io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1}
    , io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0}
    , io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1}
    , io_in_bits_resp_in_0_s2_full_pred_3_offsets_0{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_3_offsets_0}
    , io_in_bits_resp_in_0_s2_full_pred_3_offsets_1{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_3_offsets_1}
    , io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr}
    , io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing}
    , io_in_bits_resp_in_0_s2_full_pred_3_hit{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_3_hit}
    , io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0}
    , io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1}
    , io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0}
    , io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1}
    , io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr}
    , io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing}
    , io_in_bits_resp_in_0_s3_full_pred_0_hit{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_0_hit}
    , io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0}
    , io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1}
    , io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0}
    , io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1}
    , io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr}
    , io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing}
    , io_in_bits_resp_in_0_s3_full_pred_1_hit{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_1_hit}
    , io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0}
    , io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1}
    , io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0}
    , io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1}
    , io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr}
    , io_in_bits_resp_in_0_s3_full_pred_2_is_jalr{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_2_is_jalr}
    , io_in_bits_resp_in_0_s3_full_pred_2_is_call{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_2_is_call}
    , io_in_bits_resp_in_0_s3_full_pred_2_is_ret{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_2_is_ret}
    , io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing}
    , io_in_bits_resp_in_0_s3_full_pred_2_hit{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_2_hit}
    , io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0}
    , io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1}
    , io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0}
    , io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1}
    , io_in_bits_resp_in_0_s3_full_pred_3_offsets_0{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_3_offsets_0}
    , io_in_bits_resp_in_0_s3_full_pred_3_offsets_1{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_3_offsets_1}
    , io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr}
    , io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing}
    , io_in_bits_resp_in_0_s3_full_pred_3_hit{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_3_hit}
    , io_in_bits_resp_in_0_last_stage_ftb_entry_valid{vlSymsp->TOP.io_in_bits_resp_in_0_last_stage_ftb_entry_valid}
    , io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset{vlSymsp->TOP.io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset}
    , io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat{vlSymsp->TOP.io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat}
    , io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing{vlSymsp->TOP.io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing}
    , io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid{vlSymsp->TOP.io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid}
    , io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset{vlSymsp->TOP.io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset}
    , io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat{vlSymsp->TOP.io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat}
    , io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing{vlSymsp->TOP.io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing}
    , io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid{vlSymsp->TOP.io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid}
    , io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr{vlSymsp->TOP.io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr}
    , io_in_bits_resp_in_0_last_stage_ftb_entry_carry{vlSymsp->TOP.io_in_bits_resp_in_0_last_stage_ftb_entry_carry}
    , io_in_bits_resp_in_0_last_stage_ftb_entry_isCall{vlSymsp->TOP.io_in_bits_resp_in_0_last_stage_ftb_entry_isCall}
    , io_in_bits_resp_in_0_last_stage_ftb_entry_isRet{vlSymsp->TOP.io_in_bits_resp_in_0_last_stage_ftb_entry_isRet}
    , io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr{vlSymsp->TOP.io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr}
    , io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call{vlSymsp->TOP.io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call}
    , io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0{vlSymsp->TOP.io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0}
    , io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1{vlSymsp->TOP.io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1}
    , io_out_s2_full_pred_0_br_taken_mask_0{vlSymsp->TOP.io_out_s2_full_pred_0_br_taken_mask_0}
    , io_out_s2_full_pred_0_br_taken_mask_1{vlSymsp->TOP.io_out_s2_full_pred_0_br_taken_mask_1}
    , io_out_s2_full_pred_0_slot_valids_0{vlSymsp->TOP.io_out_s2_full_pred_0_slot_valids_0}
    , io_out_s2_full_pred_0_slot_valids_1{vlSymsp->TOP.io_out_s2_full_pred_0_slot_valids_1}
    , io_out_s2_full_pred_0_offsets_0{vlSymsp->TOP.io_out_s2_full_pred_0_offsets_0}
    , io_out_s2_full_pred_0_offsets_1{vlSymsp->TOP.io_out_s2_full_pred_0_offsets_1}
    , io_out_s2_full_pred_0_is_br_sharing{vlSymsp->TOP.io_out_s2_full_pred_0_is_br_sharing}
    , io_out_s2_full_pred_0_hit{vlSymsp->TOP.io_out_s2_full_pred_0_hit}
    , io_out_s2_full_pred_1_br_taken_mask_0{vlSymsp->TOP.io_out_s2_full_pred_1_br_taken_mask_0}
    , io_out_s2_full_pred_1_br_taken_mask_1{vlSymsp->TOP.io_out_s2_full_pred_1_br_taken_mask_1}
    , io_out_s2_full_pred_1_slot_valids_0{vlSymsp->TOP.io_out_s2_full_pred_1_slot_valids_0}
    , io_out_s2_full_pred_1_slot_valids_1{vlSymsp->TOP.io_out_s2_full_pred_1_slot_valids_1}
    , io_out_s2_full_pred_1_offsets_0{vlSymsp->TOP.io_out_s2_full_pred_1_offsets_0}
    , io_out_s2_full_pred_1_offsets_1{vlSymsp->TOP.io_out_s2_full_pred_1_offsets_1}
    , io_out_s2_full_pred_1_is_br_sharing{vlSymsp->TOP.io_out_s2_full_pred_1_is_br_sharing}
    , io_out_s2_full_pred_1_hit{vlSymsp->TOP.io_out_s2_full_pred_1_hit}
    , io_out_s2_full_pred_2_br_taken_mask_0{vlSymsp->TOP.io_out_s2_full_pred_2_br_taken_mask_0}
    , io_out_s2_full_pred_2_br_taken_mask_1{vlSymsp->TOP.io_out_s2_full_pred_2_br_taken_mask_1}
    , io_out_s2_full_pred_2_slot_valids_0{vlSymsp->TOP.io_out_s2_full_pred_2_slot_valids_0}
    , io_out_s2_full_pred_2_slot_valids_1{vlSymsp->TOP.io_out_s2_full_pred_2_slot_valids_1}
    , io_out_s2_full_pred_2_offsets_0{vlSymsp->TOP.io_out_s2_full_pred_2_offsets_0}
    , io_out_s2_full_pred_2_offsets_1{vlSymsp->TOP.io_out_s2_full_pred_2_offsets_1}
    , io_out_s2_full_pred_2_is_br_sharing{vlSymsp->TOP.io_out_s2_full_pred_2_is_br_sharing}
    , io_out_s2_full_pred_2_hit{vlSymsp->TOP.io_out_s2_full_pred_2_hit}
    , io_out_s2_full_pred_3_br_taken_mask_0{vlSymsp->TOP.io_out_s2_full_pred_3_br_taken_mask_0}
    , io_out_s2_full_pred_3_br_taken_mask_1{vlSymsp->TOP.io_out_s2_full_pred_3_br_taken_mask_1}
    , io_out_s2_full_pred_3_slot_valids_0{vlSymsp->TOP.io_out_s2_full_pred_3_slot_valids_0}
    , io_out_s2_full_pred_3_slot_valids_1{vlSymsp->TOP.io_out_s2_full_pred_3_slot_valids_1}
    , io_out_s2_full_pred_3_offsets_0{vlSymsp->TOP.io_out_s2_full_pred_3_offsets_0}
    , io_out_s2_full_pred_3_offsets_1{vlSymsp->TOP.io_out_s2_full_pred_3_offsets_1}
    , io_out_s2_full_pred_3_fallThroughErr{vlSymsp->TOP.io_out_s2_full_pred_3_fallThroughErr}
    , io_out_s2_full_pred_3_is_br_sharing{vlSymsp->TOP.io_out_s2_full_pred_3_is_br_sharing}
    , io_out_s2_full_pred_3_hit{vlSymsp->TOP.io_out_s2_full_pred_3_hit}
    , io_out_s3_full_pred_0_br_taken_mask_0{vlSymsp->TOP.io_out_s3_full_pred_0_br_taken_mask_0}
    , io_out_s3_full_pred_0_br_taken_mask_1{vlSymsp->TOP.io_out_s3_full_pred_0_br_taken_mask_1}
    , io_out_s3_full_pred_0_slot_valids_0{vlSymsp->TOP.io_out_s3_full_pred_0_slot_valids_0}
    , io_out_s3_full_pred_0_slot_valids_1{vlSymsp->TOP.io_out_s3_full_pred_0_slot_valids_1}
    , io_out_s3_full_pred_0_fallThroughErr{vlSymsp->TOP.io_out_s3_full_pred_0_fallThroughErr}
    , io_out_s3_full_pred_0_is_br_sharing{vlSymsp->TOP.io_out_s3_full_pred_0_is_br_sharing}
    , io_out_s3_full_pred_0_hit{vlSymsp->TOP.io_out_s3_full_pred_0_hit}
    , io_out_s3_full_pred_1_br_taken_mask_0{vlSymsp->TOP.io_out_s3_full_pred_1_br_taken_mask_0}
    , io_out_s3_full_pred_1_br_taken_mask_1{vlSymsp->TOP.io_out_s3_full_pred_1_br_taken_mask_1}
    , io_out_s3_full_pred_1_slot_valids_0{vlSymsp->TOP.io_out_s3_full_pred_1_slot_valids_0}
    , io_out_s3_full_pred_1_slot_valids_1{vlSymsp->TOP.io_out_s3_full_pred_1_slot_valids_1}
    , io_out_s3_full_pred_1_fallThroughErr{vlSymsp->TOP.io_out_s3_full_pred_1_fallThroughErr}
    , io_out_s3_full_pred_1_is_br_sharing{vlSymsp->TOP.io_out_s3_full_pred_1_is_br_sharing}
    , io_out_s3_full_pred_1_hit{vlSymsp->TOP.io_out_s3_full_pred_1_hit}
    , io_out_s3_full_pred_2_br_taken_mask_0{vlSymsp->TOP.io_out_s3_full_pred_2_br_taken_mask_0}
    , io_out_s3_full_pred_2_br_taken_mask_1{vlSymsp->TOP.io_out_s3_full_pred_2_br_taken_mask_1}
    , io_out_s3_full_pred_2_slot_valids_0{vlSymsp->TOP.io_out_s3_full_pred_2_slot_valids_0}
    , io_out_s3_full_pred_2_slot_valids_1{vlSymsp->TOP.io_out_s3_full_pred_2_slot_valids_1}
    , io_out_s3_full_pred_2_fallThroughErr{vlSymsp->TOP.io_out_s3_full_pred_2_fallThroughErr}
    , io_out_s3_full_pred_2_is_br_sharing{vlSymsp->TOP.io_out_s3_full_pred_2_is_br_sharing}
    , io_out_s3_full_pred_2_hit{vlSymsp->TOP.io_out_s3_full_pred_2_hit}
    , io_out_s3_full_pred_3_br_taken_mask_0{vlSymsp->TOP.io_out_s3_full_pred_3_br_taken_mask_0}
    , io_out_s3_full_pred_3_br_taken_mask_1{vlSymsp->TOP.io_out_s3_full_pred_3_br_taken_mask_1}
    , io_out_s3_full_pred_3_slot_valids_0{vlSymsp->TOP.io_out_s3_full_pred_3_slot_valids_0}
    , io_out_s3_full_pred_3_slot_valids_1{vlSymsp->TOP.io_out_s3_full_pred_3_slot_valids_1}
    , io_out_s3_full_pred_3_offsets_0{vlSymsp->TOP.io_out_s3_full_pred_3_offsets_0}
    , io_out_s3_full_pred_3_offsets_1{vlSymsp->TOP.io_out_s3_full_pred_3_offsets_1}
    , io_out_s3_full_pred_3_fallThroughErr{vlSymsp->TOP.io_out_s3_full_pred_3_fallThroughErr}
    , io_out_s3_full_pred_3_is_br_sharing{vlSymsp->TOP.io_out_s3_full_pred_3_is_br_sharing}
    , io_out_s3_full_pred_3_hit{vlSymsp->TOP.io_out_s3_full_pred_3_hit}
    , io_out_last_stage_spec_info_ssp{vlSymsp->TOP.io_out_last_stage_spec_info_ssp}
    , io_out_last_stage_spec_info_sctr{vlSymsp->TOP.io_out_last_stage_spec_info_sctr}
    , io_out_last_stage_spec_info_TOSW_flag{vlSymsp->TOP.io_out_last_stage_spec_info_TOSW_flag}
    , io_out_last_stage_spec_info_TOSW_value{vlSymsp->TOP.io_out_last_stage_spec_info_TOSW_value}
    , io_out_last_stage_spec_info_TOSR_flag{vlSymsp->TOP.io_out_last_stage_spec_info_TOSR_flag}
    , io_out_last_stage_spec_info_TOSR_value{vlSymsp->TOP.io_out_last_stage_spec_info_TOSR_value}
    , io_out_last_stage_spec_info_NOS_flag{vlSymsp->TOP.io_out_last_stage_spec_info_NOS_flag}
    , io_out_last_stage_spec_info_NOS_value{vlSymsp->TOP.io_out_last_stage_spec_info_NOS_value}
    , io_out_last_stage_ftb_entry_valid{vlSymsp->TOP.io_out_last_stage_ftb_entry_valid}
    , io_out_last_stage_ftb_entry_brSlots_0_offset{vlSymsp->TOP.io_out_last_stage_ftb_entry_brSlots_0_offset}
    , io_out_last_stage_ftb_entry_brSlots_0_tarStat{vlSymsp->TOP.io_out_last_stage_ftb_entry_brSlots_0_tarStat}
    , io_out_last_stage_ftb_entry_brSlots_0_sharing{vlSymsp->TOP.io_out_last_stage_ftb_entry_brSlots_0_sharing}
    , io_out_last_stage_ftb_entry_brSlots_0_valid{vlSymsp->TOP.io_out_last_stage_ftb_entry_brSlots_0_valid}
    , io_out_last_stage_ftb_entry_tailSlot_offset{vlSymsp->TOP.io_out_last_stage_ftb_entry_tailSlot_offset}
    , io_out_last_stage_ftb_entry_tailSlot_tarStat{vlSymsp->TOP.io_out_last_stage_ftb_entry_tailSlot_tarStat}
    , io_out_last_stage_ftb_entry_tailSlot_sharing{vlSymsp->TOP.io_out_last_stage_ftb_entry_tailSlot_sharing}
    , io_out_last_stage_ftb_entry_tailSlot_valid{vlSymsp->TOP.io_out_last_stage_ftb_entry_tailSlot_valid}
    , io_out_last_stage_ftb_entry_pftAddr{vlSymsp->TOP.io_out_last_stage_ftb_entry_pftAddr}
    , io_out_last_stage_ftb_entry_carry{vlSymsp->TOP.io_out_last_stage_ftb_entry_carry}
    , io_out_last_stage_ftb_entry_isCall{vlSymsp->TOP.io_out_last_stage_ftb_entry_isCall}
    , io_out_last_stage_ftb_entry_isRet{vlSymsp->TOP.io_out_last_stage_ftb_entry_isRet}
    , io_out_last_stage_ftb_entry_isJalr{vlSymsp->TOP.io_out_last_stage_ftb_entry_isJalr}
    , io_out_last_stage_ftb_entry_last_may_be_rvi_call{vlSymsp->TOP.io_out_last_stage_ftb_entry_last_may_be_rvi_call}
    , io_out_last_stage_ftb_entry_always_taken_0{vlSymsp->TOP.io_out_last_stage_ftb_entry_always_taken_0}
    , io_out_last_stage_ftb_entry_always_taken_1{vlSymsp->TOP.io_out_last_stage_ftb_entry_always_taken_1}
    , io_ctrl_ras_enable{vlSymsp->TOP.io_ctrl_ras_enable}
    , io_s0_fire_0{vlSymsp->TOP.io_s0_fire_0}
    , io_s0_fire_1{vlSymsp->TOP.io_s0_fire_1}
    , io_s0_fire_2{vlSymsp->TOP.io_s0_fire_2}
    , io_s0_fire_3{vlSymsp->TOP.io_s0_fire_3}
    , io_s1_fire_0{vlSymsp->TOP.io_s1_fire_0}
    , io_s1_fire_1{vlSymsp->TOP.io_s1_fire_1}
    , io_s1_fire_2{vlSymsp->TOP.io_s1_fire_2}
    , io_s1_fire_3{vlSymsp->TOP.io_s1_fire_3}
    , io_s2_fire_0{vlSymsp->TOP.io_s2_fire_0}
    , io_s2_fire_1{vlSymsp->TOP.io_s2_fire_1}
    , io_s2_fire_2{vlSymsp->TOP.io_s2_fire_2}
    , io_s2_fire_3{vlSymsp->TOP.io_s2_fire_3}
    , io_s3_fire_2{vlSymsp->TOP.io_s3_fire_2}
    , io_s3_redirect_2{vlSymsp->TOP.io_s3_redirect_2}
    , io_update_valid{vlSymsp->TOP.io_update_valid}
    , io_update_bits_ftb_entry_tailSlot_offset{vlSymsp->TOP.io_update_bits_ftb_entry_tailSlot_offset}
    , io_update_bits_ftb_entry_tailSlot_valid{vlSymsp->TOP.io_update_bits_ftb_entry_tailSlot_valid}
    , io_update_bits_ftb_entry_isCall{vlSymsp->TOP.io_update_bits_ftb_entry_isCall}
    , io_update_bits_ftb_entry_isRet{vlSymsp->TOP.io_update_bits_ftb_entry_isRet}
    , io_update_bits_cfi_idx_valid{vlSymsp->TOP.io_update_bits_cfi_idx_valid}
    , io_update_bits_cfi_idx_bits{vlSymsp->TOP.io_update_bits_cfi_idx_bits}
    , io_update_bits_jmp_taken{vlSymsp->TOP.io_update_bits_jmp_taken}
    , io_redirect_valid{vlSymsp->TOP.io_redirect_valid}
    , io_redirect_bits_level{vlSymsp->TOP.io_redirect_bits_level}
    , io_redirect_bits_cfiUpdate_pd_isRVC{vlSymsp->TOP.io_redirect_bits_cfiUpdate_pd_isRVC}
    , io_redirect_bits_cfiUpdate_pd_isCall{vlSymsp->TOP.io_redirect_bits_cfiUpdate_pd_isCall}
    , io_redirect_bits_cfiUpdate_pd_isRet{vlSymsp->TOP.io_redirect_bits_cfiUpdate_pd_isRet}
    , io_redirect_bits_cfiUpdate_ssp{vlSymsp->TOP.io_redirect_bits_cfiUpdate_ssp}
    , io_redirect_bits_cfiUpdate_sctr{vlSymsp->TOP.io_redirect_bits_cfiUpdate_sctr}
    , io_redirect_bits_cfiUpdate_TOSW_flag{vlSymsp->TOP.io_redirect_bits_cfiUpdate_TOSW_flag}
    , io_redirect_bits_cfiUpdate_TOSW_value{vlSymsp->TOP.io_redirect_bits_cfiUpdate_TOSW_value}
    , io_redirect_bits_cfiUpdate_TOSR_flag{vlSymsp->TOP.io_redirect_bits_cfiUpdate_TOSR_flag}
    , io_redirect_bits_cfiUpdate_TOSR_value{vlSymsp->TOP.io_redirect_bits_cfiUpdate_TOSR_value}
    , io_redirect_bits_cfiUpdate_NOS_flag{vlSymsp->TOP.io_redirect_bits_cfiUpdate_NOS_flag}
    , io_redirect_bits_cfiUpdate_NOS_value{vlSymsp->TOP.io_redirect_bits_cfiUpdate_NOS_value}
    , io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower{vlSymsp->TOP.io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower}
    , io_out_last_stage_ftb_entry_brSlots_0_lower{vlSymsp->TOP.io_out_last_stage_ftb_entry_brSlots_0_lower}
    , io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower{vlSymsp->TOP.io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower}
    , io_out_last_stage_meta{vlSymsp->TOP.io_out_last_stage_meta}
    , io_out_last_stage_ftb_entry_tailSlot_lower{vlSymsp->TOP.io_out_last_stage_ftb_entry_tailSlot_lower}
    , io_update_bits_meta{vlSymsp->TOP.io_update_bits_meta}
    , io_reset_vector{vlSymsp->TOP.io_reset_vector}
    , io_in_bits_s0_pc_0{vlSymsp->TOP.io_in_bits_s0_pc_0}
    , io_in_bits_s0_pc_1{vlSymsp->TOP.io_in_bits_s0_pc_1}
    , io_in_bits_s0_pc_2{vlSymsp->TOP.io_in_bits_s0_pc_2}
    , io_in_bits_s0_pc_3{vlSymsp->TOP.io_in_bits_s0_pc_3}
    , io_in_bits_resp_in_0_s2_full_pred_0_targets_0{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_0_targets_0}
    , io_in_bits_resp_in_0_s2_full_pred_0_targets_1{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_0_targets_1}
    , io_in_bits_resp_in_0_s2_full_pred_0_jalr_target{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_0_jalr_target}
    , io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr}
    , io_in_bits_resp_in_0_s2_full_pred_1_targets_0{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_1_targets_0}
    , io_in_bits_resp_in_0_s2_full_pred_1_targets_1{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_1_targets_1}
    , io_in_bits_resp_in_0_s2_full_pred_1_jalr_target{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_1_jalr_target}
    , io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr}
    , io_in_bits_resp_in_0_s2_full_pred_2_targets_0{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_2_targets_0}
    , io_in_bits_resp_in_0_s2_full_pred_2_targets_1{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_2_targets_1}
    , io_in_bits_resp_in_0_s2_full_pred_2_jalr_target{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_2_jalr_target}
    , io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr}
    , io_in_bits_resp_in_0_s2_full_pred_3_targets_0{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_3_targets_0}
    , io_in_bits_resp_in_0_s2_full_pred_3_targets_1{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_3_targets_1}
    , io_in_bits_resp_in_0_s2_full_pred_3_jalr_target{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_3_jalr_target}
    , io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr{vlSymsp->TOP.io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr}
    , io_in_bits_resp_in_0_s3_full_pred_0_targets_0{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_0_targets_0}
    , io_in_bits_resp_in_0_s3_full_pred_0_targets_1{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_0_targets_1}
    , io_in_bits_resp_in_0_s3_full_pred_0_jalr_target{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_0_jalr_target}
    , io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr}
    , io_in_bits_resp_in_0_s3_full_pred_1_targets_0{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_1_targets_0}
    , io_in_bits_resp_in_0_s3_full_pred_1_targets_1{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_1_targets_1}
    , io_in_bits_resp_in_0_s3_full_pred_1_jalr_target{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_1_jalr_target}
    , io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr}
    , io_in_bits_resp_in_0_s3_full_pred_2_targets_0{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_2_targets_0}
    , io_in_bits_resp_in_0_s3_full_pred_2_targets_1{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_2_targets_1}
    , io_in_bits_resp_in_0_s3_full_pred_2_jalr_target{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_2_jalr_target}
    , io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr}
    , io_in_bits_resp_in_0_s3_full_pred_3_targets_0{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_3_targets_0}
    , io_in_bits_resp_in_0_s3_full_pred_3_targets_1{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_3_targets_1}
    , io_in_bits_resp_in_0_s3_full_pred_3_jalr_target{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_3_jalr_target}
    , io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr{vlSymsp->TOP.io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr}
    , io_out_s2_pc_0{vlSymsp->TOP.io_out_s2_pc_0}
    , io_out_s2_pc_1{vlSymsp->TOP.io_out_s2_pc_1}
    , io_out_s2_pc_2{vlSymsp->TOP.io_out_s2_pc_2}
    , io_out_s2_pc_3{vlSymsp->TOP.io_out_s2_pc_3}
    , io_out_s2_full_pred_0_targets_0{vlSymsp->TOP.io_out_s2_full_pred_0_targets_0}
    , io_out_s2_full_pred_0_targets_1{vlSymsp->TOP.io_out_s2_full_pred_0_targets_1}
    , io_out_s2_full_pred_0_fallThroughAddr{vlSymsp->TOP.io_out_s2_full_pred_0_fallThroughAddr}
    , io_out_s2_full_pred_1_targets_0{vlSymsp->TOP.io_out_s2_full_pred_1_targets_0}
    , io_out_s2_full_pred_1_targets_1{vlSymsp->TOP.io_out_s2_full_pred_1_targets_1}
    , io_out_s2_full_pred_1_fallThroughAddr{vlSymsp->TOP.io_out_s2_full_pred_1_fallThroughAddr}
    , io_out_s2_full_pred_2_targets_0{vlSymsp->TOP.io_out_s2_full_pred_2_targets_0}
    , io_out_s2_full_pred_2_targets_1{vlSymsp->TOP.io_out_s2_full_pred_2_targets_1}
    , io_out_s2_full_pred_2_fallThroughAddr{vlSymsp->TOP.io_out_s2_full_pred_2_fallThroughAddr}
    , io_out_s2_full_pred_3_targets_0{vlSymsp->TOP.io_out_s2_full_pred_3_targets_0}
    , io_out_s2_full_pred_3_targets_1{vlSymsp->TOP.io_out_s2_full_pred_3_targets_1}
    , io_out_s2_full_pred_3_fallThroughAddr{vlSymsp->TOP.io_out_s2_full_pred_3_fallThroughAddr}
    , io_out_s3_pc_0{vlSymsp->TOP.io_out_s3_pc_0}
    , io_out_s3_pc_1{vlSymsp->TOP.io_out_s3_pc_1}
    , io_out_s3_pc_2{vlSymsp->TOP.io_out_s3_pc_2}
    , io_out_s3_pc_3{vlSymsp->TOP.io_out_s3_pc_3}
    , io_out_s3_full_pred_0_targets_0{vlSymsp->TOP.io_out_s3_full_pred_0_targets_0}
    , io_out_s3_full_pred_0_targets_1{vlSymsp->TOP.io_out_s3_full_pred_0_targets_1}
    , io_out_s3_full_pred_0_fallThroughAddr{vlSymsp->TOP.io_out_s3_full_pred_0_fallThroughAddr}
    , io_out_s3_full_pred_1_targets_0{vlSymsp->TOP.io_out_s3_full_pred_1_targets_0}
    , io_out_s3_full_pred_1_targets_1{vlSymsp->TOP.io_out_s3_full_pred_1_targets_1}
    , io_out_s3_full_pred_1_fallThroughAddr{vlSymsp->TOP.io_out_s3_full_pred_1_fallThroughAddr}
    , io_out_s3_full_pred_2_targets_0{vlSymsp->TOP.io_out_s3_full_pred_2_targets_0}
    , io_out_s3_full_pred_2_targets_1{vlSymsp->TOP.io_out_s3_full_pred_2_targets_1}
    , io_out_s3_full_pred_2_fallThroughAddr{vlSymsp->TOP.io_out_s3_full_pred_2_fallThroughAddr}
    , io_out_s3_full_pred_3_targets_0{vlSymsp->TOP.io_out_s3_full_pred_3_targets_0}
    , io_out_s3_full_pred_3_targets_1{vlSymsp->TOP.io_out_s3_full_pred_3_targets_1}
    , io_out_s3_full_pred_3_fallThroughAddr{vlSymsp->TOP.io_out_s3_full_pred_3_fallThroughAddr}
    , io_out_last_stage_spec_info_topAddr{vlSymsp->TOP.io_out_last_stage_spec_info_topAddr}
    , io_redirect_bits_cfiUpdate_pc{vlSymsp->TOP.io_redirect_bits_cfiUpdate_pc}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtop::Vtop(const char* _vcname__)
    : Vtop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_static(Vtop___024root* vlSelf);
void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
void Vtop___024root___eval_settle(Vtop___024root* vlSelf);
void Vtop___024root___eval(Vtop___024root* vlSelf);

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop___024root___eval_static(&(vlSymsp->TOP));
        Vtop___024root___eval_initial(&(vlSymsp->TOP));
        Vtop___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop::eventsPending() { return false; }

uint64_t Vtop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop___024root___eval_final(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop::final() {
    Vtop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop::hierName() const { return vlSymsp->name(); }
const char* Vtop::modelName() const { return "Vtop"; }
unsigned Vtop::threads() const { return 1; }
void Vtop::prepareClone() const { contextp()->prepareClone(); }
void Vtop::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_decl_types(tracep);
    Vtop___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
