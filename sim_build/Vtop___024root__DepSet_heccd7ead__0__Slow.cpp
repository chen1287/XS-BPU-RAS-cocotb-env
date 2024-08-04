// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h857aae6f__0;
    // Body
    vlSelf->RAS__DOT__io_in_bits_s0_pc_0 = vlSelf->io_in_bits_s0_pc_0;
    vlSelf->RAS__DOT__io_in_bits_s0_pc_1 = vlSelf->io_in_bits_s0_pc_1;
    vlSelf->RAS__DOT__io_in_bits_s0_pc_2 = vlSelf->io_in_bits_s0_pc_2;
    vlSelf->RAS__DOT__io_in_bits_s0_pc_3 = vlSelf->io_in_bits_s0_pc_3;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_targets_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_targets_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_targets_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_targets_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_jalr_target 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_jalr_target;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_offsets_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_offsets_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_offsets_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_offsets_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_hit 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_hit;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_targets_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_targets_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_targets_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_targets_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_jalr_target 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_jalr_target;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_offsets_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_offsets_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_offsets_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_offsets_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_hit 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_hit;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_targets_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_targets_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_targets_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_targets_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_jalr_target 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_jalr_target;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_offsets_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_offsets_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_offsets_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_offsets_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_is_jalr 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_is_jalr;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_is_call 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_is_call;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_is_ret 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_is_ret;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_hit 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_hit;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_targets_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_targets_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_targets_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_targets_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_jalr_target 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_jalr_target;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_offsets_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_offsets_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_offsets_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_offsets_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_hit 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_hit;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_targets_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_targets_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_targets_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_targets_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_jalr_target 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_jalr_target;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_multiHit 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_multiHit;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_hit 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_hit;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_targets_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_targets_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_targets_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_targets_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_jalr_target 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_jalr_target;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_multiHit 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_multiHit;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_hit 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_hit;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_targets_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_targets_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_targets_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_targets_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_jalr_target 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_jalr_target;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_multiHit 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_multiHit;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_is_jalr 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_is_jalr;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_is_call 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_is_call;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_is_ret 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_is_ret;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_hit 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_hit;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_targets_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_targets_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_targets_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_targets_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_jalr_target 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_jalr_target;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_offsets_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_offsets_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_offsets_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_offsets_1;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_multiHit 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_multiHit;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_hit 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_hit;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_isCall 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_isCall;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_isRet 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_isRet;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_valid 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_valid;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_carry 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_carry;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0;
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1;
    vlSelf->RAS__DOT__io_ctrl_ras_enable = vlSelf->io_ctrl_ras_enable;
    vlSelf->RAS__DOT__io_s0_fire_0 = vlSelf->io_s0_fire_0;
    vlSelf->RAS__DOT__io_s0_fire_1 = vlSelf->io_s0_fire_1;
    vlSelf->RAS__DOT__io_s0_fire_2 = vlSelf->io_s0_fire_2;
    vlSelf->RAS__DOT__io_s0_fire_3 = vlSelf->io_s0_fire_3;
    vlSelf->RAS__DOT__io_s1_fire_0 = vlSelf->io_s1_fire_0;
    vlSelf->RAS__DOT__io_s1_fire_1 = vlSelf->io_s1_fire_1;
    vlSelf->RAS__DOT__io_s1_fire_2 = vlSelf->io_s1_fire_2;
    vlSelf->RAS__DOT__io_s1_fire_3 = vlSelf->io_s1_fire_3;
    vlSelf->RAS__DOT__io_s2_fire_0 = vlSelf->io_s2_fire_0;
    vlSelf->RAS__DOT__io_s2_fire_1 = vlSelf->io_s2_fire_1;
    vlSelf->RAS__DOT__io_s2_fire_3 = vlSelf->io_s2_fire_3;
    vlSelf->RAS__DOT__io_s3_redirect_2 = vlSelf->io_s3_redirect_2;
    vlSelf->RAS__DOT__io_update_valid = vlSelf->io_update_valid;
    vlSelf->RAS__DOT__io_update_bits_ftb_entry_isCall 
        = vlSelf->io_update_bits_ftb_entry_isCall;
    vlSelf->RAS__DOT__io_update_bits_ftb_entry_isRet 
        = vlSelf->io_update_bits_ftb_entry_isRet;
    vlSelf->RAS__DOT__io_update_bits_ftb_entry_tailSlot_offset 
        = vlSelf->io_update_bits_ftb_entry_tailSlot_offset;
    vlSelf->RAS__DOT__io_update_bits_ftb_entry_tailSlot_valid 
        = vlSelf->io_update_bits_ftb_entry_tailSlot_valid;
    vlSelf->RAS__DOT__io_update_bits_cfi_idx_valid 
        = vlSelf->io_update_bits_cfi_idx_valid;
    vlSelf->RAS__DOT__io_update_bits_cfi_idx_bits = vlSelf->io_update_bits_cfi_idx_bits;
    vlSelf->RAS__DOT__io_update_bits_jmp_taken = vlSelf->io_update_bits_jmp_taken;
    vlSelf->RAS__DOT__io_update_bits_meta[0U] = vlSelf->io_update_bits_meta[0U];
    vlSelf->RAS__DOT__io_update_bits_meta[1U] = vlSelf->io_update_bits_meta[1U];
    vlSelf->RAS__DOT__io_update_bits_meta[2U] = vlSelf->io_update_bits_meta[2U];
    vlSelf->RAS__DOT__io_update_bits_meta[3U] = vlSelf->io_update_bits_meta[3U];
    vlSelf->RAS__DOT__io_update_bits_meta[4U] = vlSelf->io_update_bits_meta[4U];
    vlSelf->RAS__DOT__io_update_bits_meta[5U] = vlSelf->io_update_bits_meta[5U];
    vlSelf->RAS__DOT__io_update_bits_meta[6U] = vlSelf->io_update_bits_meta[6U];
    vlSelf->RAS__DOT__io_update_bits_meta[7U] = vlSelf->io_update_bits_meta[7U];
    vlSelf->RAS__DOT__io_update_bits_meta[8U] = vlSelf->io_update_bits_meta[8U];
    vlSelf->RAS__DOT__io_redirect_valid = vlSelf->io_redirect_valid;
    vlSelf->RAS__DOT__io_redirect_bits_level = vlSelf->io_redirect_bits_level;
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_pc 
        = vlSelf->io_redirect_bits_cfiUpdate_pc;
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_pd_isRVC 
        = vlSelf->io_redirect_bits_cfiUpdate_pd_isRVC;
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_pd_isCall 
        = vlSelf->io_redirect_bits_cfiUpdate_pd_isCall;
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_pd_isRet 
        = vlSelf->io_redirect_bits_cfiUpdate_pd_isRet;
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_ssp 
        = vlSelf->io_redirect_bits_cfiUpdate_ssp;
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_sctr 
        = vlSelf->io_redirect_bits_cfiUpdate_sctr;
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_TOSW_flag 
        = vlSelf->io_redirect_bits_cfiUpdate_TOSW_flag;
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_TOSW_value 
        = vlSelf->io_redirect_bits_cfiUpdate_TOSW_value;
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_TOSR_flag 
        = vlSelf->io_redirect_bits_cfiUpdate_TOSR_flag;
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_TOSR_value 
        = vlSelf->io_redirect_bits_cfiUpdate_TOSR_value;
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_NOS_flag 
        = vlSelf->io_redirect_bits_cfiUpdate_NOS_flag;
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_NOS_value 
        = vlSelf->io_redirect_bits_cfiUpdate_NOS_value;
    vlSelf->RAS__DOT__RASStack__DOT__io_commit_meta_TOSW_flag 
        = (1U & (vlSelf->io_update_bits_meta[0U] >> 5U));
    vlSelf->RAS__DOT__RASStack__DOT__io_commit_meta_TOSW_value 
        = (0x1fU & (((0U == 0U) ? 0U : (vlSelf->io_update_bits_meta[
                                        (((IData)(4U) 
                                          + (IData)(0U)) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (IData)(0U)))) 
                    | (vlSelf->io_update_bits_meta[0U] 
                       >> 0U)));
    vlSelf->RAS__DOT__RASStack__DOT__io_commit_meta_ssp 
        = (0xfU & (((0U == 6U) ? 0U : (vlSelf->io_update_bits_meta[
                                       (((IData)(3U) 
                                         + (IData)(6U)) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (IData)(6U)))) 
                   | (vlSelf->io_update_bits_meta[0U] 
                      >> 6U)));
    vlSelf->RAS__DOT__io_reset_vector = vlSelf->io_reset_vector;
    vlSelf->RAS__DOT__io_s2_fire_2 = vlSelf->io_s2_fire_2;
    vlSelf->RAS__DOT__io_s3_fire_2 = vlSelf->io_s3_fire_2;
    vlSelf->RAS__DOT__io_out_s2_full_pred_0_br_taken_mask_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0;
    vlSelf->RAS__DOT__io_out_s2_full_pred_0_br_taken_mask_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1;
    vlSelf->RAS__DOT__io_out_s2_full_pred_0_slot_valids_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0;
    vlSelf->RAS__DOT__io_out_s2_full_pred_0_slot_valids_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1;
    vlSelf->RAS__DOT__io_out_s2_full_pred_0_targets_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_targets_0;
    vlSelf->RAS__DOT__io_out_s2_full_pred_0_offsets_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_offsets_0;
    vlSelf->RAS__DOT__io_out_s2_full_pred_0_offsets_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_offsets_1;
    vlSelf->RAS__DOT__io_out_s2_full_pred_0_fallThroughAddr 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr;
    vlSelf->RAS__DOT__io_out_s2_full_pred_0_is_br_sharing 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing;
    vlSelf->RAS__DOT__io_out_s2_full_pred_0_hit = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_hit;
    vlSelf->RAS__DOT__io_out_s2_full_pred_1_br_taken_mask_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0;
    vlSelf->RAS__DOT__io_out_s2_full_pred_1_br_taken_mask_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1;
    vlSelf->RAS__DOT__io_out_s2_full_pred_1_slot_valids_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0;
    vlSelf->RAS__DOT__io_out_s2_full_pred_1_slot_valids_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1;
    vlSelf->RAS__DOT__io_out_s2_full_pred_1_targets_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_targets_0;
    vlSelf->RAS__DOT__io_out_s2_full_pred_1_offsets_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_offsets_0;
    vlSelf->RAS__DOT__io_out_s2_full_pred_1_offsets_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_offsets_1;
    vlSelf->RAS__DOT__io_out_s2_full_pred_1_fallThroughAddr 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr;
    vlSelf->RAS__DOT__io_out_s2_full_pred_1_is_br_sharing 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing;
    vlSelf->RAS__DOT__io_out_s2_full_pred_1_hit = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_hit;
    vlSelf->RAS__DOT__io_out_s2_full_pred_2_br_taken_mask_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0;
    vlSelf->RAS__DOT__io_out_s2_full_pred_2_br_taken_mask_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1;
    vlSelf->RAS__DOT__io_out_s2_full_pred_2_slot_valids_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0;
    vlSelf->RAS__DOT__io_out_s2_full_pred_2_slot_valids_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1;
    vlSelf->RAS__DOT__io_out_s2_full_pred_2_targets_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_targets_0;
    vlSelf->RAS__DOT__io_out_s2_full_pred_2_offsets_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_offsets_0;
    vlSelf->RAS__DOT__io_out_s2_full_pred_2_offsets_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_offsets_1;
    vlSelf->RAS__DOT__io_out_s2_full_pred_2_fallThroughAddr 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr;
    vlSelf->RAS__DOT__io_out_s2_full_pred_2_is_br_sharing 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing;
    vlSelf->RAS__DOT__io_out_s2_full_pred_2_hit = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_hit;
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_br_taken_mask_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0;
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_br_taken_mask_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1;
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_slot_valids_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0;
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_slot_valids_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1;
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_targets_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_targets_0;
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_offsets_0 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_offsets_0;
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_offsets_1 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_offsets_1;
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_fallThroughAddr 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr;
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_fallThroughErr 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr;
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_is_br_sharing 
        = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing;
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_hit = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_hit;
    vlSelf->RAS__DOT__io_out_s3_full_pred_0_br_taken_mask_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0;
    vlSelf->RAS__DOT__io_out_s3_full_pred_0_br_taken_mask_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1;
    vlSelf->RAS__DOT__io_out_s3_full_pred_0_slot_valids_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0;
    vlSelf->RAS__DOT__io_out_s3_full_pred_0_slot_valids_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1;
    vlSelf->RAS__DOT__io_out_s3_full_pred_0_targets_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_targets_0;
    vlSelf->RAS__DOT__io_out_s3_full_pred_0_fallThroughAddr 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr;
    vlSelf->RAS__DOT__io_out_s3_full_pred_0_fallThroughErr 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr;
    vlSelf->RAS__DOT__io_out_s3_full_pred_0_multiHit 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_multiHit;
    vlSelf->RAS__DOT__io_out_s3_full_pred_0_is_br_sharing 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing;
    vlSelf->RAS__DOT__io_out_s3_full_pred_0_hit = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_hit;
    vlSelf->RAS__DOT__io_out_s3_full_pred_1_br_taken_mask_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0;
    vlSelf->RAS__DOT__io_out_s3_full_pred_1_br_taken_mask_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1;
    vlSelf->RAS__DOT__io_out_s3_full_pred_1_slot_valids_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0;
    vlSelf->RAS__DOT__io_out_s3_full_pred_1_slot_valids_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1;
    vlSelf->RAS__DOT__io_out_s3_full_pred_1_targets_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_targets_0;
    vlSelf->RAS__DOT__io_out_s3_full_pred_1_fallThroughAddr 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr;
    vlSelf->RAS__DOT__io_out_s3_full_pred_1_fallThroughErr 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr;
    vlSelf->RAS__DOT__io_out_s3_full_pred_1_multiHit 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_multiHit;
    vlSelf->RAS__DOT__io_out_s3_full_pred_1_is_br_sharing 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing;
    vlSelf->RAS__DOT__io_out_s3_full_pred_1_hit = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_hit;
    vlSelf->RAS__DOT__io_out_s3_full_pred_2_br_taken_mask_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0;
    vlSelf->RAS__DOT__io_out_s3_full_pred_2_br_taken_mask_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1;
    vlSelf->RAS__DOT__io_out_s3_full_pred_2_slot_valids_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0;
    vlSelf->RAS__DOT__io_out_s3_full_pred_2_slot_valids_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1;
    vlSelf->RAS__DOT__io_out_s3_full_pred_2_targets_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_targets_0;
    vlSelf->RAS__DOT__io_out_s3_full_pred_2_fallThroughAddr 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr;
    vlSelf->RAS__DOT__io_out_s3_full_pred_2_fallThroughErr 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr;
    vlSelf->RAS__DOT__io_out_s3_full_pred_2_multiHit 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_multiHit;
    vlSelf->RAS__DOT__io_out_s3_full_pred_2_is_br_sharing 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing;
    vlSelf->RAS__DOT__io_out_s3_full_pred_2_hit = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_hit;
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_br_taken_mask_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0;
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_br_taken_mask_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1;
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_slot_valids_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0;
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_slot_valids_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1;
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_targets_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_targets_0;
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_offsets_0 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_offsets_0;
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_offsets_1 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_offsets_1;
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_fallThroughAddr 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr;
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_fallThroughErr 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr;
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_multiHit 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_multiHit;
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_is_br_sharing 
        = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing;
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_hit = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_hit;
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_isCall 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_isCall;
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_isRet 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_isRet;
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_isJalr 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr;
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_valid 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_valid;
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_brSlots_0_offset 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset;
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_brSlots_0_sharing 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing;
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_brSlots_0_valid 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid;
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower;
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_brSlots_0_tarStat 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat;
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_tailSlot_offset 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset;
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_tailSlot_sharing 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing;
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_tailSlot_valid 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid;
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_tailSlot_lower 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower;
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_tailSlot_tarStat 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat;
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_pftAddr 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr;
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_carry 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_carry;
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_last_may_be_rvi_call 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call;
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_always_taken_0 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0;
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_always_taken_1 
        = vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1;
    vlSelf->RAS__DOT__clock = vlSelf->clock;
    vlSelf->RAS__DOT__reset = vlSelf->reset;
    vlSelf->RAS__DOT___GEN = ((IData)(vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_is_ret) 
                              & (IData)(vlSelf->io_ctrl_ras_enable));
    vlSelf->RAS__DOT___GEN_0 = ((IData)(vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_is_ret) 
                                & (IData)(vlSelf->io_ctrl_ras_enable));
    vlSelf->RAS__DOT___s2_spec_pop_T_8 = ((IData)(vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0) 
                                          & (IData)(vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0));
    vlSelf->RAS__DOT___s2_spec_pop_T_9 = ((IData)(vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing) 
                                          & (IData)(vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1));
    vlSelf->RAS__DOT___GEN_1 = ((IData)(vlSelf->io_update_bits_cfi_idx_bits) 
                                == (IData)(vlSelf->io_update_bits_ftb_entry_tailSlot_offset));
    vlSelf->RAS__DOT___s3_pop_T_8 = ((IData)(vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0) 
                                     & (IData)(vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0));
    vlSelf->RAS__DOT___s3_pop_T_9 = ((IData)(vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing) 
                                     & (IData)(vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_26 = (0U 
                                                == 
                                                (0xfU 
                                                 & (vlSelf->io_update_bits_meta[0U] 
                                                    >> 6U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_28 = (1U 
                                                == 
                                                (0xfU 
                                                 & (vlSelf->io_update_bits_meta[0U] 
                                                    >> 6U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_30 = (2U 
                                                == 
                                                (0xfU 
                                                 & (vlSelf->io_update_bits_meta[0U] 
                                                    >> 6U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_32 = (3U 
                                                == 
                                                (0xfU 
                                                 & (vlSelf->io_update_bits_meta[0U] 
                                                    >> 6U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_34 = (4U 
                                                == 
                                                (0xfU 
                                                 & (vlSelf->io_update_bits_meta[0U] 
                                                    >> 6U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_36 = (5U 
                                                == 
                                                (0xfU 
                                                 & (vlSelf->io_update_bits_meta[0U] 
                                                    >> 6U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_38 = (6U 
                                                == 
                                                (0xfU 
                                                 & (vlSelf->io_update_bits_meta[0U] 
                                                    >> 6U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_40 = (7U 
                                                == 
                                                (0xfU 
                                                 & (vlSelf->io_update_bits_meta[0U] 
                                                    >> 6U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_42 = (8U 
                                                == 
                                                (0xfU 
                                                 & (vlSelf->io_update_bits_meta[0U] 
                                                    >> 6U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_44 = (9U 
                                                == 
                                                (0xfU 
                                                 & (vlSelf->io_update_bits_meta[0U] 
                                                    >> 6U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_46 = (0xaU 
                                                == 
                                                (0xfU 
                                                 & (vlSelf->io_update_bits_meta[0U] 
                                                    >> 6U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_48 = (0xbU 
                                                == 
                                                (0xfU 
                                                 & (vlSelf->io_update_bits_meta[0U] 
                                                    >> 6U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_50 = (0xcU 
                                                == 
                                                (0xfU 
                                                 & (vlSelf->io_update_bits_meta[0U] 
                                                    >> 6U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_52 = (0xdU 
                                                == 
                                                (0xfU 
                                                 & (vlSelf->io_update_bits_meta[0U] 
                                                    >> 6U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_54 = (0xeU 
                                                == 
                                                (0xfU 
                                                 & (vlSelf->io_update_bits_meta[0U] 
                                                    >> 6U)));
    vlSelf->RAS__DOT__RASStack__DOT___nsp_T_2 = (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    ((vlSelf->io_update_bits_meta[0U] 
                                                      << 0x1aU) 
                                                     | (vlSelf->io_update_bits_meta[0U] 
                                                        >> 6U))));
    vlSelf->RAS__DOT__io_out_last_stage_spec_info_topAddr 
        = vlSelf->RAS__DOT__s3_top;
    vlSelf->RAS__DOT__reset_vector_pipMod__DOT__io_out_bits 
        = vlSelf->RAS__DOT__reset_vector_pipMod__DOT__res_bits;
    vlSelf->RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
        = (0x1ffffffffffULL & (vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                               + (QData)((IData)(((IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_pd_isRVC)
                                                   ? 2U
                                                   : 4U)))));
    vlSelf->RAS__DOT___s2_spec_new_addr_T_1 = (0x1ffffffffffULL 
                                               & (vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr 
                                                  + 
                                                  ((QData)((IData)(vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call)) 
                                                   << 1U)));
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_meta_ssp 
        = vlSelf->RAS__DOT__s3_meta_ssp;
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_meta_sctr 
        = vlSelf->RAS__DOT__s3_meta_sctr;
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_meta_TOSR_flag 
        = vlSelf->RAS__DOT__s3_meta_TOSR_flag;
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_meta_TOSR_value 
        = vlSelf->RAS__DOT__s3_meta_TOSR_value;
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_meta_NOS_flag 
        = vlSelf->RAS__DOT__s3_meta_NOS_flag;
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_meta_NOS_value 
        = vlSelf->RAS__DOT__s3_meta_NOS_value;
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_pushAddr 
        = vlSelf->RAS__DOT__s3_spec_new_addr;
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_meta_ssp 
        = vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp;
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_meta_sctr 
        = vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_sctr;
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_meta_TOSR_flag 
        = vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_flag;
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_meta_NOS_flag 
        = vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_flag;
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_meta_NOS_value 
        = vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_value;
    vlSelf->RAS__DOT__RASStack__DOT___sctr_T_16 = (0xfU 
                                                   & ((IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp) 
                                                      - (IData)(1U)));
    vlSelf->RAS__DOT__RASStack__DOT___sctr_T_8 = (0xfU 
                                                  & ((IData)(vlSelf->RAS__DOT__s3_meta_ssp) 
                                                     - (IData)(1U)));
    vlSelf->RAS__DOT__RASStack__DOT___sctr_T_10 = (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->RAS__DOT__s3_meta_sctr)));
    vlSelf->RAS__DOT__io_out_last_stage_spec_info_ssp 
        = vlSelf->RAS__DOT__s3_meta_ssp;
    vlSelf->RAS__DOT__io_out_last_stage_spec_info_sctr 
        = vlSelf->RAS__DOT__s3_meta_sctr;
    vlSelf->RAS__DOT__io_out_last_stage_spec_info_TOSR_flag 
        = vlSelf->RAS__DOT__s3_meta_TOSR_flag;
    vlSelf->RAS__DOT__io_out_last_stage_spec_info_TOSR_value 
        = vlSelf->RAS__DOT__s3_meta_TOSR_value;
    vlSelf->RAS__DOT__io_out_last_stage_spec_info_NOS_flag 
        = vlSelf->RAS__DOT__s3_meta_NOS_flag;
    vlSelf->RAS__DOT__io_out_last_stage_spec_info_NOS_value 
        = vlSelf->RAS__DOT__s3_meta_NOS_value;
    vlSelf->RAS__DOT__RASStack__DOT___sctr_T_12 = (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_sctr)));
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_meta_TOSW_flag 
        = vlSelf->RAS__DOT__s3_meta_TOSW_flag;
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_meta_TOSW_value 
        = vlSelf->RAS__DOT__s3_meta_TOSW_value;
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_meta_TOSW_flag 
        = vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_flag;
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_meta_TOSW_value 
        = vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value;
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_meta_TOSR_value 
        = vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value;
    vlSelf->RAS__DOT__RASStack__DOT___GEN_10 = (0x3fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (((IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_flag) 
                                                     << 5U) 
                                                    | (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value))));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_13 = (0x3fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (((IData)(vlSelf->RAS__DOT__s3_meta_TOSW_flag) 
                                                     << 5U) 
                                                    | (IData)(vlSelf->RAS__DOT__s3_meta_TOSW_value))));
    vlSelf->RAS__DOT__io_out_last_stage_spec_info_TOSW_flag 
        = vlSelf->RAS__DOT__s3_meta_TOSW_flag;
    vlSelf->RAS__DOT__io_out_last_stage_spec_info_TOSW_value 
        = vlSelf->RAS__DOT__s3_meta_TOSW_value;
    VL_EXTEND_WI(254,4, __Vtemp_h857aae6f__0, (IData)(vlSelf->RAS__DOT__s3_meta_ssp));
    vlSelf->RAS__DOT__io_out_last_stage_meta[0U] = 
        ((__Vtemp_h857aae6f__0[0U] << 6U) | (((IData)(vlSelf->RAS__DOT__s3_meta_TOSW_flag) 
                                              << 5U) 
                                             | (IData)(vlSelf->RAS__DOT__s3_meta_TOSW_value)));
    vlSelf->RAS__DOT__io_out_last_stage_meta[1U] = 
        ((__Vtemp_h857aae6f__0[0U] >> 0x1aU) | (__Vtemp_h857aae6f__0[1U] 
                                                << 6U));
    vlSelf->RAS__DOT__io_out_last_stage_meta[2U] = 
        ((__Vtemp_h857aae6f__0[1U] >> 0x1aU) | (__Vtemp_h857aae6f__0[2U] 
                                                << 6U));
    vlSelf->RAS__DOT__io_out_last_stage_meta[3U] = 
        ((__Vtemp_h857aae6f__0[2U] >> 0x1aU) | (__Vtemp_h857aae6f__0[3U] 
                                                << 6U));
    vlSelf->RAS__DOT__io_out_last_stage_meta[4U] = 
        ((__Vtemp_h857aae6f__0[3U] >> 0x1aU) | (__Vtemp_h857aae6f__0[4U] 
                                                << 6U));
    vlSelf->RAS__DOT__io_out_last_stage_meta[5U] = 
        ((__Vtemp_h857aae6f__0[4U] >> 0x1aU) | (__Vtemp_h857aae6f__0[5U] 
                                                << 6U));
    vlSelf->RAS__DOT__io_out_last_stage_meta[6U] = 
        ((__Vtemp_h857aae6f__0[5U] >> 0x1aU) | (__Vtemp_h857aae6f__0[6U] 
                                                << 6U));
    vlSelf->RAS__DOT__io_out_last_stage_meta[7U] = 
        ((__Vtemp_h857aae6f__0[6U] >> 0x1aU) | (__Vtemp_h857aae6f__0[7U] 
                                                << 6U));
    vlSelf->RAS__DOT__io_out_last_stage_meta[8U] = 
        (__Vtemp_h857aae6f__0[7U] >> 0x1aU);
    vlSelf->RAS__DOT__RASStack__DOT__differentFlag_11 
        = ((IData)(vlSelf->RAS__DOT__s3_meta_TOSR_flag) 
           ^ (IData)(vlSelf->RAS__DOT__s3_meta_TOSW_flag));
    vlSelf->RAS__DOT__RASStack__DOT__compare_11 = ((IData)(vlSelf->RAS__DOT__s3_meta_TOSR_value) 
                                                   < (IData)(vlSelf->RAS__DOT__s3_meta_TOSW_value));
    vlSelf->RAS__DOT__RASStack__DOT__differentFlag_16 
        = ((IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_flag) 
           ^ (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_flag));
    vlSelf->RAS__DOT__RASStack__DOT__compare_16 = ((IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value) 
                                                   < (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value));
    vlSelf->RAS__DOT__reset_vector_pipMod__DOT__io_in_bits 
        = vlSelf->RAS__DOT__io_reset_vector;
    vlSelf->RAS__DOT__RASStack__DOT__io_s2_fire = vlSelf->RAS__DOT__io_s2_fire_2;
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_fire = vlSelf->RAS__DOT__io_s3_fire_2;
    vlSelf->io_out_s2_full_pred_0_br_taken_mask_0 = vlSelf->RAS__DOT__io_out_s2_full_pred_0_br_taken_mask_0;
    vlSelf->io_out_s2_full_pred_0_br_taken_mask_1 = vlSelf->RAS__DOT__io_out_s2_full_pred_0_br_taken_mask_1;
    vlSelf->io_out_s2_full_pred_0_slot_valids_0 = vlSelf->RAS__DOT__io_out_s2_full_pred_0_slot_valids_0;
    vlSelf->io_out_s2_full_pred_0_slot_valids_1 = vlSelf->RAS__DOT__io_out_s2_full_pred_0_slot_valids_1;
    vlSelf->io_out_s2_full_pred_0_targets_0 = vlSelf->RAS__DOT__io_out_s2_full_pred_0_targets_0;
    vlSelf->io_out_s2_full_pred_0_offsets_0 = vlSelf->RAS__DOT__io_out_s2_full_pred_0_offsets_0;
    vlSelf->io_out_s2_full_pred_0_offsets_1 = vlSelf->RAS__DOT__io_out_s2_full_pred_0_offsets_1;
    vlSelf->io_out_s2_full_pred_0_fallThroughAddr = vlSelf->RAS__DOT__io_out_s2_full_pred_0_fallThroughAddr;
    vlSelf->io_out_s2_full_pred_0_is_br_sharing = vlSelf->RAS__DOT__io_out_s2_full_pred_0_is_br_sharing;
    vlSelf->io_out_s2_full_pred_0_hit = vlSelf->RAS__DOT__io_out_s2_full_pred_0_hit;
    vlSelf->io_out_s2_full_pred_1_br_taken_mask_0 = vlSelf->RAS__DOT__io_out_s2_full_pred_1_br_taken_mask_0;
    vlSelf->io_out_s2_full_pred_1_br_taken_mask_1 = vlSelf->RAS__DOT__io_out_s2_full_pred_1_br_taken_mask_1;
    vlSelf->io_out_s2_full_pred_1_slot_valids_0 = vlSelf->RAS__DOT__io_out_s2_full_pred_1_slot_valids_0;
    vlSelf->io_out_s2_full_pred_1_slot_valids_1 = vlSelf->RAS__DOT__io_out_s2_full_pred_1_slot_valids_1;
    vlSelf->io_out_s2_full_pred_1_targets_0 = vlSelf->RAS__DOT__io_out_s2_full_pred_1_targets_0;
    vlSelf->io_out_s2_full_pred_1_offsets_0 = vlSelf->RAS__DOT__io_out_s2_full_pred_1_offsets_0;
    vlSelf->io_out_s2_full_pred_1_offsets_1 = vlSelf->RAS__DOT__io_out_s2_full_pred_1_offsets_1;
    vlSelf->io_out_s2_full_pred_1_fallThroughAddr = vlSelf->RAS__DOT__io_out_s2_full_pred_1_fallThroughAddr;
    vlSelf->io_out_s2_full_pred_1_is_br_sharing = vlSelf->RAS__DOT__io_out_s2_full_pred_1_is_br_sharing;
    vlSelf->io_out_s2_full_pred_1_hit = vlSelf->RAS__DOT__io_out_s2_full_pred_1_hit;
    vlSelf->io_out_s2_full_pred_2_br_taken_mask_0 = vlSelf->RAS__DOT__io_out_s2_full_pred_2_br_taken_mask_0;
    vlSelf->io_out_s2_full_pred_2_br_taken_mask_1 = vlSelf->RAS__DOT__io_out_s2_full_pred_2_br_taken_mask_1;
    vlSelf->io_out_s2_full_pred_2_slot_valids_0 = vlSelf->RAS__DOT__io_out_s2_full_pred_2_slot_valids_0;
    vlSelf->io_out_s2_full_pred_2_slot_valids_1 = vlSelf->RAS__DOT__io_out_s2_full_pred_2_slot_valids_1;
    vlSelf->io_out_s2_full_pred_2_targets_0 = vlSelf->RAS__DOT__io_out_s2_full_pred_2_targets_0;
    vlSelf->io_out_s2_full_pred_2_offsets_0 = vlSelf->RAS__DOT__io_out_s2_full_pred_2_offsets_0;
    vlSelf->io_out_s2_full_pred_2_offsets_1 = vlSelf->RAS__DOT__io_out_s2_full_pred_2_offsets_1;
    vlSelf->io_out_s2_full_pred_2_fallThroughAddr = vlSelf->RAS__DOT__io_out_s2_full_pred_2_fallThroughAddr;
    vlSelf->io_out_s2_full_pred_2_is_br_sharing = vlSelf->RAS__DOT__io_out_s2_full_pred_2_is_br_sharing;
    vlSelf->io_out_s2_full_pred_2_hit = vlSelf->RAS__DOT__io_out_s2_full_pred_2_hit;
    vlSelf->io_out_s2_full_pred_3_br_taken_mask_0 = vlSelf->RAS__DOT__io_out_s2_full_pred_3_br_taken_mask_0;
    vlSelf->io_out_s2_full_pred_3_br_taken_mask_1 = vlSelf->RAS__DOT__io_out_s2_full_pred_3_br_taken_mask_1;
    vlSelf->io_out_s2_full_pred_3_slot_valids_0 = vlSelf->RAS__DOT__io_out_s2_full_pred_3_slot_valids_0;
    vlSelf->io_out_s2_full_pred_3_slot_valids_1 = vlSelf->RAS__DOT__io_out_s2_full_pred_3_slot_valids_1;
    vlSelf->io_out_s2_full_pred_3_targets_0 = vlSelf->RAS__DOT__io_out_s2_full_pred_3_targets_0;
    vlSelf->io_out_s2_full_pred_3_offsets_0 = vlSelf->RAS__DOT__io_out_s2_full_pred_3_offsets_0;
    vlSelf->io_out_s2_full_pred_3_offsets_1 = vlSelf->RAS__DOT__io_out_s2_full_pred_3_offsets_1;
    vlSelf->io_out_s2_full_pred_3_fallThroughAddr = vlSelf->RAS__DOT__io_out_s2_full_pred_3_fallThroughAddr;
    vlSelf->io_out_s2_full_pred_3_fallThroughErr = vlSelf->RAS__DOT__io_out_s2_full_pred_3_fallThroughErr;
    vlSelf->io_out_s2_full_pred_3_is_br_sharing = vlSelf->RAS__DOT__io_out_s2_full_pred_3_is_br_sharing;
    vlSelf->io_out_s2_full_pred_3_hit = vlSelf->RAS__DOT__io_out_s2_full_pred_3_hit;
    vlSelf->io_out_s3_full_pred_0_br_taken_mask_0 = vlSelf->RAS__DOT__io_out_s3_full_pred_0_br_taken_mask_0;
    vlSelf->io_out_s3_full_pred_0_br_taken_mask_1 = vlSelf->RAS__DOT__io_out_s3_full_pred_0_br_taken_mask_1;
    vlSelf->io_out_s3_full_pred_0_slot_valids_0 = vlSelf->RAS__DOT__io_out_s3_full_pred_0_slot_valids_0;
    vlSelf->io_out_s3_full_pred_0_slot_valids_1 = vlSelf->RAS__DOT__io_out_s3_full_pred_0_slot_valids_1;
    vlSelf->io_out_s3_full_pred_0_targets_0 = vlSelf->RAS__DOT__io_out_s3_full_pred_0_targets_0;
    vlSelf->io_out_s3_full_pred_0_fallThroughAddr = vlSelf->RAS__DOT__io_out_s3_full_pred_0_fallThroughAddr;
    vlSelf->io_out_s3_full_pred_0_fallThroughErr = vlSelf->RAS__DOT__io_out_s3_full_pred_0_fallThroughErr;
    vlSelf->io_out_s3_full_pred_0_multiHit = vlSelf->RAS__DOT__io_out_s3_full_pred_0_multiHit;
    vlSelf->io_out_s3_full_pred_0_is_br_sharing = vlSelf->RAS__DOT__io_out_s3_full_pred_0_is_br_sharing;
    vlSelf->io_out_s3_full_pred_0_hit = vlSelf->RAS__DOT__io_out_s3_full_pred_0_hit;
    vlSelf->io_out_s3_full_pred_1_br_taken_mask_0 = vlSelf->RAS__DOT__io_out_s3_full_pred_1_br_taken_mask_0;
    vlSelf->io_out_s3_full_pred_1_br_taken_mask_1 = vlSelf->RAS__DOT__io_out_s3_full_pred_1_br_taken_mask_1;
    vlSelf->io_out_s3_full_pred_1_slot_valids_0 = vlSelf->RAS__DOT__io_out_s3_full_pred_1_slot_valids_0;
    vlSelf->io_out_s3_full_pred_1_slot_valids_1 = vlSelf->RAS__DOT__io_out_s3_full_pred_1_slot_valids_1;
    vlSelf->io_out_s3_full_pred_1_targets_0 = vlSelf->RAS__DOT__io_out_s3_full_pred_1_targets_0;
    vlSelf->io_out_s3_full_pred_1_fallThroughAddr = vlSelf->RAS__DOT__io_out_s3_full_pred_1_fallThroughAddr;
    vlSelf->io_out_s3_full_pred_1_fallThroughErr = vlSelf->RAS__DOT__io_out_s3_full_pred_1_fallThroughErr;
    vlSelf->io_out_s3_full_pred_1_multiHit = vlSelf->RAS__DOT__io_out_s3_full_pred_1_multiHit;
    vlSelf->io_out_s3_full_pred_1_is_br_sharing = vlSelf->RAS__DOT__io_out_s3_full_pred_1_is_br_sharing;
    vlSelf->io_out_s3_full_pred_1_hit = vlSelf->RAS__DOT__io_out_s3_full_pred_1_hit;
    vlSelf->io_out_s3_full_pred_2_br_taken_mask_0 = vlSelf->RAS__DOT__io_out_s3_full_pred_2_br_taken_mask_0;
    vlSelf->io_out_s3_full_pred_2_br_taken_mask_1 = vlSelf->RAS__DOT__io_out_s3_full_pred_2_br_taken_mask_1;
    vlSelf->io_out_s3_full_pred_2_slot_valids_0 = vlSelf->RAS__DOT__io_out_s3_full_pred_2_slot_valids_0;
    vlSelf->io_out_s3_full_pred_2_slot_valids_1 = vlSelf->RAS__DOT__io_out_s3_full_pred_2_slot_valids_1;
    vlSelf->io_out_s3_full_pred_2_targets_0 = vlSelf->RAS__DOT__io_out_s3_full_pred_2_targets_0;
    vlSelf->io_out_s3_full_pred_2_fallThroughAddr = vlSelf->RAS__DOT__io_out_s3_full_pred_2_fallThroughAddr;
    vlSelf->io_out_s3_full_pred_2_fallThroughErr = vlSelf->RAS__DOT__io_out_s3_full_pred_2_fallThroughErr;
    vlSelf->io_out_s3_full_pred_2_multiHit = vlSelf->RAS__DOT__io_out_s3_full_pred_2_multiHit;
    vlSelf->io_out_s3_full_pred_2_is_br_sharing = vlSelf->RAS__DOT__io_out_s3_full_pred_2_is_br_sharing;
    vlSelf->io_out_s3_full_pred_2_hit = vlSelf->RAS__DOT__io_out_s3_full_pred_2_hit;
    vlSelf->io_out_s3_full_pred_3_br_taken_mask_0 = vlSelf->RAS__DOT__io_out_s3_full_pred_3_br_taken_mask_0;
    vlSelf->io_out_s3_full_pred_3_br_taken_mask_1 = vlSelf->RAS__DOT__io_out_s3_full_pred_3_br_taken_mask_1;
    vlSelf->io_out_s3_full_pred_3_slot_valids_0 = vlSelf->RAS__DOT__io_out_s3_full_pred_3_slot_valids_0;
    vlSelf->io_out_s3_full_pred_3_slot_valids_1 = vlSelf->RAS__DOT__io_out_s3_full_pred_3_slot_valids_1;
    vlSelf->io_out_s3_full_pred_3_targets_0 = vlSelf->RAS__DOT__io_out_s3_full_pred_3_targets_0;
    vlSelf->io_out_s3_full_pred_3_offsets_0 = vlSelf->RAS__DOT__io_out_s3_full_pred_3_offsets_0;
    vlSelf->io_out_s3_full_pred_3_offsets_1 = vlSelf->RAS__DOT__io_out_s3_full_pred_3_offsets_1;
    vlSelf->io_out_s3_full_pred_3_fallThroughAddr = vlSelf->RAS__DOT__io_out_s3_full_pred_3_fallThroughAddr;
    vlSelf->io_out_s3_full_pred_3_fallThroughErr = vlSelf->RAS__DOT__io_out_s3_full_pred_3_fallThroughErr;
    vlSelf->io_out_s3_full_pred_3_multiHit = vlSelf->RAS__DOT__io_out_s3_full_pred_3_multiHit;
    vlSelf->io_out_s3_full_pred_3_is_br_sharing = vlSelf->RAS__DOT__io_out_s3_full_pred_3_is_br_sharing;
    vlSelf->io_out_s3_full_pred_3_hit = vlSelf->RAS__DOT__io_out_s3_full_pred_3_hit;
    vlSelf->io_out_last_stage_ftb_entry_isCall = vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_isCall;
    vlSelf->io_out_last_stage_ftb_entry_isRet = vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_isRet;
    vlSelf->io_out_last_stage_ftb_entry_isJalr = vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_isJalr;
    vlSelf->io_out_last_stage_ftb_entry_valid = vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_valid;
    vlSelf->io_out_last_stage_ftb_entry_brSlots_0_offset 
        = vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_brSlots_0_offset;
    vlSelf->io_out_last_stage_ftb_entry_brSlots_0_sharing 
        = vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_brSlots_0_sharing;
    vlSelf->io_out_last_stage_ftb_entry_brSlots_0_valid 
        = vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_brSlots_0_valid;
    vlSelf->io_out_last_stage_ftb_entry_brSlots_0_lower 
        = vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower;
    vlSelf->io_out_last_stage_ftb_entry_brSlots_0_tarStat 
        = vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_brSlots_0_tarStat;
    vlSelf->io_out_last_stage_ftb_entry_tailSlot_offset 
        = vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_tailSlot_offset;
    vlSelf->io_out_last_stage_ftb_entry_tailSlot_sharing 
        = vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_tailSlot_sharing;
    vlSelf->io_out_last_stage_ftb_entry_tailSlot_valid 
        = vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_tailSlot_valid;
    vlSelf->io_out_last_stage_ftb_entry_tailSlot_lower 
        = vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_tailSlot_lower;
    vlSelf->io_out_last_stage_ftb_entry_tailSlot_tarStat 
        = vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_tailSlot_tarStat;
    vlSelf->io_out_last_stage_ftb_entry_pftAddr = vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_pftAddr;
    vlSelf->io_out_last_stage_ftb_entry_carry = vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_carry;
    vlSelf->io_out_last_stage_ftb_entry_last_may_be_rvi_call 
        = vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_last_may_be_rvi_call;
    vlSelf->io_out_last_stage_ftb_entry_always_taken_0 
        = vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_always_taken_0;
    vlSelf->io_out_last_stage_ftb_entry_always_taken_1 
        = vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_always_taken_1;
    vlSelf->RAS__DOT__reset_vector_pipMod__DOT__clock 
        = vlSelf->RAS__DOT__clock;
    vlSelf->RAS__DOT__RASStack__DOT__clock = vlSelf->RAS__DOT__clock;
    vlSelf->RAS__DOT__reset_vector_pipMod__DOT__io_in_valid 
        = vlSelf->RAS__DOT__reset;
    vlSelf->RAS__DOT__RASStack__DOT__reset = vlSelf->RAS__DOT__reset;
    if (vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_is_jalr) {
        if (vlSelf->RAS__DOT___GEN_0) {
            vlSelf->RAS__DOT__io_out_s3_full_pred_0_targets_1 
                = vlSelf->RAS__DOT__s3_top;
            vlSelf->RAS__DOT__io_out_s3_full_pred_1_targets_1 
                = vlSelf->RAS__DOT__s3_top;
            vlSelf->RAS__DOT__io_out_s3_full_pred_2_targets_1 
                = vlSelf->RAS__DOT__s3_top;
            vlSelf->RAS__DOT__io_out_s3_full_pred_3_targets_1 
                = vlSelf->RAS__DOT__s3_top;
        } else {
            vlSelf->RAS__DOT__io_out_s3_full_pred_0_targets_1 
                = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_jalr_target;
            vlSelf->RAS__DOT__io_out_s3_full_pred_1_targets_1 
                = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_jalr_target;
            vlSelf->RAS__DOT__io_out_s3_full_pred_2_targets_1 
                = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_jalr_target;
            vlSelf->RAS__DOT__io_out_s3_full_pred_3_targets_1 
                = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_jalr_target;
        }
    } else {
        vlSelf->RAS__DOT__io_out_s3_full_pred_0_targets_1 
            = vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_targets_1;
        vlSelf->RAS__DOT__io_out_s3_full_pred_1_targets_1 
            = vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_targets_1;
        vlSelf->RAS__DOT__io_out_s3_full_pred_2_targets_1 
            = vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_targets_1;
        vlSelf->RAS__DOT__io_out_s3_full_pred_3_targets_1 
            = vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_targets_1;
    }
    vlSelf->RAS__DOT__s2_spec_pop = ((((((((IData)(vlSelf->io_s2_fire_2) 
                                           & (~ ((IData)(vlSelf->RAS__DOT___s2_spec_pop_T_8) 
                                                 & (IData)(vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_hit)))) 
                                          & (IData)(vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1)) 
                                         & ((IData)(vlSelf->RAS__DOT___s2_spec_pop_T_9) 
                                            | (~ (IData)(vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing)))) 
                                        & (IData)(vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_hit)) 
                                       & (~ (IData)(vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing))) 
                                      & (IData)(vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_is_ret)) 
                                     & (~ (IData)(vlSelf->io_s3_redirect_2)));
    vlSelf->RAS__DOT__s2_spec_push = ((((((((IData)(vlSelf->io_s2_fire_2) 
                                            & (~ ((IData)(vlSelf->RAS__DOT___s2_spec_pop_T_8) 
                                                  & (IData)(vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_hit)))) 
                                           & (IData)(vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1)) 
                                          & ((IData)(vlSelf->RAS__DOT___s2_spec_pop_T_9) 
                                             | (~ (IData)(vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing)))) 
                                         & (IData)(vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_hit)) 
                                        & (~ (IData)(vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing))) 
                                       & (IData)(vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_is_call)) 
                                      & (~ (IData)(vlSelf->io_s3_redirect_2)));
    vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_push_valid 
        = ((((((IData)(vlSelf->io_update_valid) & (IData)(vlSelf->io_update_bits_ftb_entry_tailSlot_valid)) 
              & (IData)(vlSelf->io_update_bits_ftb_entry_isCall)) 
             & (IData)(vlSelf->io_update_bits_jmp_taken)) 
            & (IData)(vlSelf->io_update_bits_cfi_idx_valid)) 
           & (IData)(vlSelf->RAS__DOT___GEN_1));
    vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid 
        = ((((((IData)(vlSelf->io_update_valid) & (IData)(vlSelf->io_update_bits_ftb_entry_tailSlot_valid)) 
              & (IData)(vlSelf->io_update_bits_ftb_entry_isRet)) 
             & (IData)(vlSelf->io_update_bits_jmp_taken)) 
            & (IData)(vlSelf->io_update_bits_cfi_idx_valid)) 
           & (IData)(vlSelf->RAS__DOT___GEN_1));
    vlSelf->RAS__DOT__s3_pop = ((((((~ ((IData)(vlSelf->RAS__DOT___s3_pop_T_8) 
                                        & (IData)(vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_hit))) 
                                    & (IData)(vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1)) 
                                   & ((IData)(vlSelf->RAS__DOT___s3_pop_T_9) 
                                      | (~ (IData)(vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing)))) 
                                  & (IData)(vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_hit)) 
                                 & (~ (IData)(vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing))) 
                                & (IData)(vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_is_ret));
    vlSelf->RAS__DOT__s3_push = ((((((~ ((IData)(vlSelf->RAS__DOT___s3_pop_T_8) 
                                         & (IData)(vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_hit))) 
                                     & (IData)(vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1)) 
                                    & ((IData)(vlSelf->RAS__DOT___s3_pop_T_9) 
                                       | (~ (IData)(vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing)))) 
                                   & (IData)(vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_hit)) 
                                  & (~ (IData)(vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing))) 
                                 & (IData)(vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_is_call));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_58 = (0U 
                                                == (IData)(vlSelf->RAS__DOT__RASStack__DOT___nsp_T_2));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_59 = (1U 
                                                == (IData)(vlSelf->RAS__DOT__RASStack__DOT___nsp_T_2));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_60 = (2U 
                                                == (IData)(vlSelf->RAS__DOT__RASStack__DOT___nsp_T_2));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_61 = (3U 
                                                == (IData)(vlSelf->RAS__DOT__RASStack__DOT___nsp_T_2));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_62 = (4U 
                                                == (IData)(vlSelf->RAS__DOT__RASStack__DOT___nsp_T_2));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_63 = (5U 
                                                == (IData)(vlSelf->RAS__DOT__RASStack__DOT___nsp_T_2));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_64 = (6U 
                                                == (IData)(vlSelf->RAS__DOT__RASStack__DOT___nsp_T_2));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_65 = (7U 
                                                == (IData)(vlSelf->RAS__DOT__RASStack__DOT___nsp_T_2));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_66 = (8U 
                                                == (IData)(vlSelf->RAS__DOT__RASStack__DOT___nsp_T_2));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_67 = (9U 
                                                == (IData)(vlSelf->RAS__DOT__RASStack__DOT___nsp_T_2));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_68 = (0xaU 
                                                == (IData)(vlSelf->RAS__DOT__RASStack__DOT___nsp_T_2));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_69 = (0xbU 
                                                == (IData)(vlSelf->RAS__DOT__RASStack__DOT___nsp_T_2));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_70 = (0xcU 
                                                == (IData)(vlSelf->RAS__DOT__RASStack__DOT___nsp_T_2));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_71 = (0xdU 
                                                == (IData)(vlSelf->RAS__DOT__RASStack__DOT___nsp_T_2));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_72 = (0xeU 
                                                == (IData)(vlSelf->RAS__DOT__RASStack__DOT___nsp_T_2));
    vlSelf->io_out_last_stage_spec_info_topAddr = vlSelf->RAS__DOT__io_out_last_stage_spec_info_topAddr;
    vlSelf->RAS__DOT___reset_vector_pipMod_io_out_bits 
        = vlSelf->RAS__DOT__reset_vector_pipMod__DOT__io_out_bits;
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_callAddr 
        = vlSelf->RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr;
    vlSelf->RAS__DOT__RASStack__DOT__io_spec_push_addr 
        = vlSelf->RAS__DOT___s2_spec_new_addr_T_1;
    vlSelf->io_out_last_stage_spec_info_ssp = vlSelf->RAS__DOT__io_out_last_stage_spec_info_ssp;
    vlSelf->io_out_last_stage_spec_info_sctr = vlSelf->RAS__DOT__io_out_last_stage_spec_info_sctr;
    vlSelf->io_out_last_stage_spec_info_TOSR_flag = vlSelf->RAS__DOT__io_out_last_stage_spec_info_TOSR_flag;
    vlSelf->io_out_last_stage_spec_info_TOSR_value 
        = vlSelf->RAS__DOT__io_out_last_stage_spec_info_TOSR_value;
    vlSelf->io_out_last_stage_spec_info_NOS_flag = vlSelf->RAS__DOT__io_out_last_stage_spec_info_NOS_flag;
    vlSelf->io_out_last_stage_spec_info_NOS_value = vlSelf->RAS__DOT__io_out_last_stage_spec_info_NOS_value;
    vlSelf->io_out_last_stage_spec_info_TOSW_flag = vlSelf->RAS__DOT__io_out_last_stage_spec_info_TOSW_flag;
    vlSelf->io_out_last_stage_spec_info_TOSW_value 
        = vlSelf->RAS__DOT__io_out_last_stage_spec_info_TOSW_value;
    vlSelf->io_out_last_stage_meta[0U] = vlSelf->RAS__DOT__io_out_last_stage_meta[0U];
    vlSelf->io_out_last_stage_meta[1U] = vlSelf->RAS__DOT__io_out_last_stage_meta[1U];
    vlSelf->io_out_last_stage_meta[2U] = vlSelf->RAS__DOT__io_out_last_stage_meta[2U];
    vlSelf->io_out_last_stage_meta[3U] = vlSelf->RAS__DOT__io_out_last_stage_meta[3U];
    vlSelf->io_out_last_stage_meta[4U] = vlSelf->RAS__DOT__io_out_last_stage_meta[4U];
    vlSelf->io_out_last_stage_meta[5U] = vlSelf->RAS__DOT__io_out_last_stage_meta[5U];
    vlSelf->io_out_last_stage_meta[6U] = vlSelf->RAS__DOT__io_out_last_stage_meta[6U];
    vlSelf->io_out_last_stage_meta[7U] = vlSelf->RAS__DOT__io_out_last_stage_meta[7U];
    vlSelf->io_out_last_stage_meta[8U] = vlSelf->RAS__DOT__io_out_last_stage_meta[8U];
    vlSelf->io_out_s3_full_pred_0_targets_1 = vlSelf->RAS__DOT__io_out_s3_full_pred_0_targets_1;
    vlSelf->io_out_s3_full_pred_1_targets_1 = vlSelf->RAS__DOT__io_out_s3_full_pred_1_targets_1;
    vlSelf->io_out_s3_full_pred_2_targets_1 = vlSelf->RAS__DOT__io_out_s3_full_pred_2_targets_1;
    vlSelf->io_out_s3_full_pred_3_targets_1 = vlSelf->RAS__DOT__io_out_s3_full_pred_3_targets_1;
    vlSelf->RAS__DOT__RASStack__DOT__io_spec_pop_valid 
        = vlSelf->RAS__DOT__s2_spec_pop;
    vlSelf->RAS__DOT__RASStack__DOT__io_spec_push_valid 
        = vlSelf->RAS__DOT__s2_spec_push;
    vlSelf->RAS__DOT__RASStack__DOT__io_commit_push_valid 
        = vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_push_valid;
    vlSelf->RAS__DOT__RASStack__DOT__io_commit_pop_valid 
        = vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid;
    vlSelf->RAS__DOT____Vcellinp__RASStack__io_s3_missed_pop 
        = ((IData)(vlSelf->RAS__DOT__s3_pop) & (~ (IData)(vlSelf->RAS__DOT__s3_popped_in_s2)));
    vlSelf->RAS__DOT____Vcellinp__RASStack__io_s3_cancel 
        = ((IData)(vlSelf->io_s3_fire_2) & (((IData)(vlSelf->RAS__DOT__s3_pushed_in_s2) 
                                             != (IData)(vlSelf->RAS__DOT__s3_push)) 
                                            | ((IData)(vlSelf->RAS__DOT__s3_popped_in_s2) 
                                               != (IData)(vlSelf->RAS__DOT__s3_pop))));
    vlSelf->RAS__DOT____Vcellinp__RASStack__io_s3_missed_push 
        = ((IData)(vlSelf->RAS__DOT__s3_push) & (~ (IData)(vlSelf->RAS__DOT__s3_pushed_in_s2)));
    vlSelf->RAS__DOT___GEN_2 = vlSelf->RAS__DOT___reset_vector_pipMod_io_out_bits;
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_missed_pop 
        = vlSelf->RAS__DOT____Vcellinp__RASStack__io_s3_missed_pop;
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_cancel = vlSelf->RAS__DOT____Vcellinp__RASStack__io_s3_cancel;
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_missed_push 
        = vlSelf->RAS__DOT____Vcellinp__RASStack__io_s3_missed_push;
    vlSelf->RAS__DOT__RASStack__DOT__realPush = (((IData)(vlSelf->io_s3_fire_2) 
                                                  & (((~ (IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_s3_cancel)) 
                                                      & (IData)(vlSelf->RAS__DOT__RASStack__DOT__realPush_r)) 
                                                     | (IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_s3_missed_push))) 
                                                 | (IData)(vlSelf->RAS__DOT__RASStack__DOT__realPush_REG));
}

VL_ATTR_COLD void Vtop___024root___initial__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__5\n"); );
    // Body
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_2 = 1U;
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_1_2 = 1U;
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_2_2 = 1U;
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_3_2 = 1U;
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_2 = 1U;
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_1_2 = 1U;
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_2_2 = 1U;
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_3_2 = 1U;
    if (vlSelf->reset) {
        vlSelf->RAS__DOT__s2_pc_seg_0_value = 0U;
        vlSelf->RAS__DOT__s2_pc_seg_1_value = 0U;
        vlSelf->RAS__DOT__s2_pc_seg_2_value = 0U;
        vlSelf->RAS__DOT__s2_pc_seg_0_value_1 = 0U;
        vlSelf->RAS__DOT__s2_pc_seg_1_value_1 = 0U;
        vlSelf->RAS__DOT__s2_pc_seg_2_value_1 = 0U;
        vlSelf->RAS__DOT__s2_pc_seg_0_value_2 = 0U;
        vlSelf->RAS__DOT__s2_pc_seg_1_value_2 = 0U;
        vlSelf->RAS__DOT__s2_pc_seg_2_value_2 = 0U;
        vlSelf->RAS__DOT__s2_pc_seg_0_value_3 = 0U;
        vlSelf->RAS__DOT__s2_pc_seg_1_value_3 = 0U;
        vlSelf->RAS__DOT__s2_pc_seg_2_value_3 = 0U;
        vlSelf->RAS__DOT__s3_pc_seg_0_value = 0U;
        vlSelf->RAS__DOT__s3_pc_seg_1_value = 0U;
        vlSelf->RAS__DOT__s3_pc_seg_2_value = 0U;
        vlSelf->RAS__DOT__s3_pc_seg_0_value_1 = 0U;
        vlSelf->RAS__DOT__s3_pc_seg_1_value_1 = 0U;
        vlSelf->RAS__DOT__s3_pc_seg_2_value_1 = 0U;
        vlSelf->RAS__DOT__s3_pc_seg_0_value_2 = 0U;
        vlSelf->RAS__DOT__s3_pc_seg_1_value_2 = 0U;
        vlSelf->RAS__DOT__s3_pc_seg_2_value_2 = 0U;
        vlSelf->RAS__DOT__s3_pc_seg_0_value_3 = 0U;
        vlSelf->RAS__DOT__s3_pc_seg_1_value_3 = 0U;
        vlSelf->RAS__DOT__s3_pc_seg_2_value_3 = 0U;
        vlSelf->RAS__DOT__redirect_next_valid_last_REG = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_0_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_0_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_1_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_1_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_2_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_2_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_3_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_3_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_4_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_4_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_5_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_5_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_6_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_6_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_7_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_7_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_8_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_8_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_9_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_9_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_10_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_10_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_11_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_11_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_12_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_12_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_13_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_13_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_14_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_14_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_15_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__commit_stack_15_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_0_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_0_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_1_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_1_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_2_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_2_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_3_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_3_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_4_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_4_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_5_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_5_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_6_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_6_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_7_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_7_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_8_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_8_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_9_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_9_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_10_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_10_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_11_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_11_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_12_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_12_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_13_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_13_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_14_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_14_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_15_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_15_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_16_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_16_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_17_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_17_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_18_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_18_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_19_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_19_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_20_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_20_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_21_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_21_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_22_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_22_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_23_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_23_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_24_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_24_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_25_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_25_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_26_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_26_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_27_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_27_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_28_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_28_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_29_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_29_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_30_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_30_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_31_retAddr = 0ULL;
        vlSelf->RAS__DOT__RASStack__DOT__spec_queue_31_ctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_0_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_0_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_1_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_1_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_2_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_2_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_3_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_3_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_4_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_4_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_5_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_5_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_6_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_6_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_7_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_7_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_8_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_8_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_9_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_9_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_10_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_10_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_11_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_11_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_12_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_12_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_13_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_13_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_14_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_14_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_15_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_15_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_16_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_16_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_17_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_17_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_18_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_18_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_19_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_19_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_20_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_20_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_21_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_21_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_22_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_22_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_23_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_23_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_24_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_24_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_25_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_25_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_26_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_26_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_27_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_27_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_28_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_28_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_29_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_29_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_30_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_30_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_31_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_nos_31_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__nsp = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__ssp = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__sctr = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__TOSR_flag = 1U;
        vlSelf->RAS__DOT__RASStack__DOT__TOSR_value = 0x1fU;
        vlSelf->RAS__DOT__RASStack__DOT__TOSW_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__TOSW_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__BOS_flag = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__BOS_value = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__spec_overflowed = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__writeBypassValid = 0U;
        vlSelf->RAS__DOT__RASStack__DOT__timingTop_retAddr = 0ULL;
    }
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__8\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h03830e33__0;
    VlWide<3>/*95:0*/ __Vtemp_h9be9b9d7__0;
    // Body
    vlSelf->RAS__DOT__debug_s3_pc_addr = (((QData)((IData)(vlSelf->RAS__DOT__s3_pc_seg_0_value)) 
                                           << 0x18U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelf->RAS__DOT__s3_pc_seg_1_value) 
                                                              << 0xcU) 
                                                             | (IData)(vlSelf->RAS__DOT__s3_pc_seg_2_value)))));
    vlSelf->RAS__DOT__debug_s3_pc_addr_1 = (((QData)((IData)(vlSelf->RAS__DOT__s3_pc_seg_0_value_1)) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->RAS__DOT__s3_pc_seg_1_value_1) 
                                                                << 0xcU) 
                                                               | (IData)(vlSelf->RAS__DOT__s3_pc_seg_2_value_1)))));
    vlSelf->RAS__DOT__debug_s3_pc_addr_2 = (((QData)((IData)(vlSelf->RAS__DOT__s3_pc_seg_0_value_2)) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->RAS__DOT__s3_pc_seg_1_value_2) 
                                                                << 0xcU) 
                                                               | (IData)(vlSelf->RAS__DOT__s3_pc_seg_2_value_2)))));
    vlSelf->RAS__DOT__debug_s3_pc_addr_3 = (((QData)((IData)(vlSelf->RAS__DOT__s3_pc_seg_0_value_3)) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->RAS__DOT__s3_pc_seg_1_value_3) 
                                                                << 0xcU) 
                                                               | (IData)(vlSelf->RAS__DOT__s3_pc_seg_2_value_3)))));
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_0 
        = (vlSelf->RAS__DOT__s3_pc_seg_0_value != vlSelf->RAS__DOT__s2_pc_seg_0_value);
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_0 
        = (vlSelf->RAS__DOT__s2_pc_seg_0_value != (0x1ffffU 
                                                   & (IData)(
                                                             (vlSelf->RAS__DOT__s1_pc_dup_0 
                                                              >> 0x18U))));
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_1 
        = ((IData)(vlSelf->RAS__DOT__s3_pc_seg_1_value) 
           != (IData)(vlSelf->RAS__DOT__s2_pc_seg_1_value));
    vlSelf->RAS__DOT__debug_s2_pc_addr = (((QData)((IData)(vlSelf->RAS__DOT__s2_pc_seg_0_value)) 
                                           << 0x18U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelf->RAS__DOT__s2_pc_seg_1_value) 
                                                              << 0xcU) 
                                                             | (IData)(vlSelf->RAS__DOT__s2_pc_seg_2_value)))));
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_1 
        = ((IData)(vlSelf->RAS__DOT__s2_pc_seg_1_value) 
           != (0xfffU & (IData)((vlSelf->RAS__DOT__s1_pc_dup_0 
                                 >> 0xcU))));
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_1_0 
        = (vlSelf->RAS__DOT__s3_pc_seg_0_value_1 != vlSelf->RAS__DOT__s2_pc_seg_0_value_1);
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_1_0 
        = (vlSelf->RAS__DOT__s2_pc_seg_0_value_1 != 
           (0x1ffffU & (IData)((vlSelf->RAS__DOT__s1_pc_dup_1 
                                >> 0x18U))));
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_1_1 
        = ((IData)(vlSelf->RAS__DOT__s3_pc_seg_1_value_1) 
           != (IData)(vlSelf->RAS__DOT__s2_pc_seg_1_value_1));
    vlSelf->RAS__DOT__debug_s2_pc_addr_1 = (((QData)((IData)(vlSelf->RAS__DOT__s2_pc_seg_0_value_1)) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->RAS__DOT__s2_pc_seg_1_value_1) 
                                                                << 0xcU) 
                                                               | (IData)(vlSelf->RAS__DOT__s2_pc_seg_2_value_1)))));
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_1_1 
        = ((IData)(vlSelf->RAS__DOT__s2_pc_seg_1_value_1) 
           != (0xfffU & (IData)((vlSelf->RAS__DOT__s1_pc_dup_1 
                                 >> 0xcU))));
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_2_0 
        = (vlSelf->RAS__DOT__s3_pc_seg_0_value_2 != vlSelf->RAS__DOT__s2_pc_seg_0_value_2);
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_2_0 
        = (vlSelf->RAS__DOT__s2_pc_seg_0_value_2 != 
           (0x1ffffU & (IData)((vlSelf->RAS__DOT__s1_pc_dup_2 
                                >> 0x18U))));
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_2_1 
        = ((IData)(vlSelf->RAS__DOT__s3_pc_seg_1_value_2) 
           != (IData)(vlSelf->RAS__DOT__s2_pc_seg_1_value_2));
    vlSelf->RAS__DOT__debug_s2_pc_addr_2 = (((QData)((IData)(vlSelf->RAS__DOT__s2_pc_seg_0_value_2)) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->RAS__DOT__s2_pc_seg_1_value_2) 
                                                                << 0xcU) 
                                                               | (IData)(vlSelf->RAS__DOT__s2_pc_seg_2_value_2)))));
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_2_1 
        = ((IData)(vlSelf->RAS__DOT__s2_pc_seg_1_value_2) 
           != (0xfffU & (IData)((vlSelf->RAS__DOT__s1_pc_dup_2 
                                 >> 0xcU))));
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_3_0 
        = (vlSelf->RAS__DOT__s3_pc_seg_0_value_3 != vlSelf->RAS__DOT__s2_pc_seg_0_value_3);
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_3_0 
        = (vlSelf->RAS__DOT__s2_pc_seg_0_value_3 != 
           (0x1ffffU & (IData)((vlSelf->RAS__DOT__s1_pc_dup_3 
                                >> 0x18U))));
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_3_1 
        = ((IData)(vlSelf->RAS__DOT__s3_pc_seg_1_value_3) 
           != (IData)(vlSelf->RAS__DOT__s2_pc_seg_1_value_3));
    vlSelf->RAS__DOT__debug_s2_pc_addr_3 = (((QData)((IData)(vlSelf->RAS__DOT__s2_pc_seg_0_value_3)) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->RAS__DOT__s2_pc_seg_1_value_3) 
                                                                << 0xcU) 
                                                               | (IData)(vlSelf->RAS__DOT__s2_pc_seg_2_value_3)))));
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_3_1 
        = ((IData)(vlSelf->RAS__DOT__s2_pc_seg_1_value_3) 
           != (0xfffU & (IData)((vlSelf->RAS__DOT__s1_pc_dup_3 
                                 >> 0xcU))));
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_valid 
        = vlSelf->RAS__DOT__redirect_next_valid_last_REG;
    vlSelf->RAS__DOT____Vcellinp__RASStack__io_redirect_isRet 
        = (((IData)(vlSelf->RAS__DOT__redirect_next_valid_last_REG) 
            & (~ (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_level))) 
           & (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_pd_isRet));
    vlSelf->RAS__DOT____Vcellinp__RASStack__io_redirect_isCall 
        = (((IData)(vlSelf->RAS__DOT__redirect_next_valid_last_REG) 
            & (~ (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_level))) 
           & (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_pd_isCall));
    vlSelf->RAS__DOT__RASStack__DOT___sctr_T = (7U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->RAS__DOT__RASStack__DOT__sctr)));
    vlSelf->RAS__DOT__RASStack__DOT__io_sctr = vlSelf->RAS__DOT__RASStack__DOT__sctr;
    __Vtemp_h03830e33__0[0U] = (IData)((((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_20_ctr)) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_19_ctr)) 
                                            << 0x39U) 
                                           | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_18_ctr)) 
                                               << 0x36U) 
                                              | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_17_ctr)) 
                                                  << 0x33U) 
                                                 | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_16_ctr)) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_15_ctr)) 
                                                        << 0x2dU) 
                                                       | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_14_ctr)) 
                                                           << 0x2aU) 
                                                          | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_13_ctr)) 
                                                              << 0x27U) 
                                                             | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_12_ctr)) 
                                                                 << 0x24U) 
                                                                | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_11_ctr)) 
                                                                    << 0x21U) 
                                                                   | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_10_ctr)) 
                                                                       << 0x1eU) 
                                                                      | (QData)((IData)(
                                                                                (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_9_ctr) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_8_ctr) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_7_ctr) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_6_ctr) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_5_ctr) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_4_ctr) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_3_ctr) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_2_ctr) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_1_ctr) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_0_ctr))))))))))))))))))))))));
    __Vtemp_h03830e33__0[1U] = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_21_ctr) 
                                 << 0x1fU) | (IData)(
                                                     ((((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_20_ctr)) 
                                                        << 0x3cU) 
                                                       | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_19_ctr)) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_18_ctr)) 
                                                              << 0x36U) 
                                                             | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_17_ctr)) 
                                                                 << 0x33U) 
                                                                | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_16_ctr)) 
                                                                    << 0x30U) 
                                                                   | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_15_ctr)) 
                                                                       << 0x2dU) 
                                                                      | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_14_ctr)) 
                                                                          << 0x2aU) 
                                                                         | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_13_ctr)) 
                                                                             << 0x27U) 
                                                                            | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_12_ctr)) 
                                                                                << 0x24U) 
                                                                               | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_11_ctr)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_10_ctr)) 
                                                                                << 0x1eU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_9_ctr) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_8_ctr) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_7_ctr) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_6_ctr) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_5_ctr) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_4_ctr) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_3_ctr) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_2_ctr) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_1_ctr) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_0_ctr))))))))))))))))))))))) 
                                                      >> 0x20U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_2[0U] = __Vtemp_h03830e33__0[0U];
    vlSelf->RAS__DOT__RASStack__DOT___GEN_2[1U] = __Vtemp_h03830e33__0[1U];
    vlSelf->RAS__DOT__RASStack__DOT___GEN_2[2U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_31_ctr) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_30_ctr) 
                                                       << 0x1aU) 
                                                      | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_29_ctr) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_28_ctr) 
                                                             << 0x14U) 
                                                            | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_27_ctr) 
                                                                << 0x11U) 
                                                               | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_26_ctr) 
                                                                   << 0xeU) 
                                                                  | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_25_ctr) 
                                                                      << 0xbU) 
                                                                     | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_24_ctr) 
                                                                         << 8U) 
                                                                        | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_23_ctr) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_22_ctr) 
                                                                               << 2U) 
                                                                              | ((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_21_ctr) 
                                                                                >> 1U)))))))))));
    vlSelf->RAS__DOT__RASStack__DOT___sctr_T_4 = (0xfU 
                                                  & ((IData)(vlSelf->RAS__DOT__RASStack__DOT__ssp) 
                                                     - (IData)(1U)));
    vlSelf->RAS__DOT__RASStack__DOT__io_ssp = vlSelf->RAS__DOT__RASStack__DOT__ssp;
    vlSelf->RAS__DOT__RASStack__DOT__io_TOSR_flag = vlSelf->RAS__DOT__RASStack__DOT__TOSR_flag;
    vlSelf->RAS__DOT__RASStack__DOT__io_TOSW_flag = vlSelf->RAS__DOT__RASStack__DOT__TOSW_flag;
    vlSelf->RAS__DOT__RASStack__DOT___GEN_14 = (0x3fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (((IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSW_flag) 
                                                     << 5U) 
                                                    | (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSW_value))));
    vlSelf->RAS__DOT__RASStack__DOT__io_TOSW_value 
        = vlSelf->RAS__DOT__RASStack__DOT__TOSW_value;
    vlSelf->RAS__DOT__RASStack__DOT___GEN_6 = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_31_flag) 
                                                << 0x1fU) 
                                               | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_30_flag) 
                                                   << 0x1eU) 
                                                  | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_29_flag) 
                                                      << 0x1dU) 
                                                     | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_28_flag) 
                                                         << 0x1cU) 
                                                        | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_27_flag) 
                                                            << 0x1bU) 
                                                           | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_26_flag) 
                                                               << 0x1aU) 
                                                              | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_25_flag) 
                                                                  << 0x19U) 
                                                                 | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_24_flag) 
                                                                     << 0x18U) 
                                                                    | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_23_flag) 
                                                                        << 0x17U) 
                                                                       | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_22_flag) 
                                                                           << 0x16U) 
                                                                          | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_21_flag) 
                                                                              << 0x15U) 
                                                                             | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_20_flag) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_19_flag) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_18_flag) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_17_flag) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_16_flag) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_15_flag) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_14_flag) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_13_flag) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_12_flag) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_11_flag) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_10_flag) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_9_flag) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_8_flag) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_7_flag) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_6_flag) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_5_flag) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_4_flag) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_3_flag) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_2_flag) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_1_flag) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_0_flag))))))))))))))))))))))))))))))));
    vlSelf->RAS__DOT__RASStack__DOT__io_spec_pop_addr 
        = vlSelf->RAS__DOT__RASStack__DOT__timingTop_retAddr;
    vlSelf->RAS__DOT__RASStack__DOT___GEN_3[0U] = (IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_0_retAddr);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_3[1U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_1_retAddr) 
                                                    << 9U) 
                                                   | (IData)(
                                                             (vlSelf->RAS__DOT__RASStack__DOT__commit_stack_0_retAddr 
                                                              >> 0x20U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_3[2U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_2_retAddr) 
                                                    << 0x12U) 
                                                   | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_1_retAddr) 
                                                       >> 0x17U) 
                                                      | ((IData)(
                                                                 (vlSelf->RAS__DOT__RASStack__DOT__commit_stack_1_retAddr 
                                                                  >> 0x20U)) 
                                                         << 9U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_3[3U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_3_retAddr) 
                                                    << 0x1bU) 
                                                   | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_2_retAddr) 
                                                       >> 0xeU) 
                                                      | ((IData)(
                                                                 (vlSelf->RAS__DOT__RASStack__DOT__commit_stack_2_retAddr 
                                                                  >> 0x20U)) 
                                                         << 0x12U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_3[4U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_3_retAddr) 
                                                    >> 5U) 
                                                   | ((IData)(
                                                              (vlSelf->RAS__DOT__RASStack__DOT__commit_stack_3_retAddr 
                                                               >> 0x20U)) 
                                                      << 0x1bU));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_3[5U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_4_retAddr) 
                                                    << 4U) 
                                                   | ((IData)(
                                                              (vlSelf->RAS__DOT__RASStack__DOT__commit_stack_3_retAddr 
                                                               >> 0x20U)) 
                                                      >> 5U));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_3[6U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_5_retAddr) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_4_retAddr) 
                                                       >> 0x1cU) 
                                                      | ((IData)(
                                                                 (vlSelf->RAS__DOT__RASStack__DOT__commit_stack_4_retAddr 
                                                                  >> 0x20U)) 
                                                         << 4U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_3[7U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_6_retAddr) 
                                                    << 0x16U) 
                                                   | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_5_retAddr) 
                                                       >> 0x13U) 
                                                      | ((IData)(
                                                                 (vlSelf->RAS__DOT__RASStack__DOT__commit_stack_5_retAddr 
                                                                  >> 0x20U)) 
                                                         << 0xdU)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_3[8U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_7_retAddr) 
                                                    << 0x1fU) 
                                                   | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_6_retAddr) 
                                                       >> 0xaU) 
                                                      | ((IData)(
                                                                 (vlSelf->RAS__DOT__RASStack__DOT__commit_stack_6_retAddr 
                                                                  >> 0x20U)) 
                                                         << 0x16U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_3[9U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_7_retAddr) 
                                                    >> 1U) 
                                                   | ((IData)(
                                                              (vlSelf->RAS__DOT__RASStack__DOT__commit_stack_7_retAddr 
                                                               >> 0x20U)) 
                                                      << 0x1fU));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_3[0xaU] = 
        (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_8_retAddr) 
          << 8U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__commit_stack_7_retAddr 
                             >> 0x20U)) >> 1U));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_3[0xbU] = 
        (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_9_retAddr) 
          << 0x11U) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_8_retAddr) 
                        >> 0x18U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__commit_stack_8_retAddr 
                                              >> 0x20U)) 
                                     << 8U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_3[0xcU] = 
        (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_10_retAddr) 
          << 0x1aU) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_9_retAddr) 
                        >> 0xfU) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__commit_stack_9_retAddr 
                                             >> 0x20U)) 
                                    << 0x11U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_3[0xdU] = 
        (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_10_retAddr) 
          >> 6U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__commit_stack_10_retAddr 
                             >> 0x20U)) << 0x1aU));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_3[0xeU] = 
        (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_11_retAddr) 
          << 3U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__commit_stack_10_retAddr 
                             >> 0x20U)) >> 6U));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_3[0xfU] = 
        (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_12_retAddr) 
          << 0xcU) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_11_retAddr) 
                       >> 0x1dU) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__commit_stack_11_retAddr 
                                             >> 0x20U)) 
                                    << 3U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_3[0x10U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_13_retAddr) 
            << 0x15U) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_12_retAddr) 
                          >> 0x14U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__commit_stack_12_retAddr 
                                                >> 0x20U)) 
                                       << 0xcU)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_3[0x11U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_14_retAddr) 
            << 0x1eU) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_13_retAddr) 
                          >> 0xbU) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__commit_stack_13_retAddr 
                                               >> 0x20U)) 
                                      << 0x15U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_3[0x12U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_14_retAddr) 
            >> 2U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__commit_stack_14_retAddr 
                               >> 0x20U)) << 0x1eU));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_3[0x13U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_15_retAddr) 
            << 7U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__commit_stack_14_retAddr 
                               >> 0x20U)) >> 2U));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_3[0x14U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_15_retAddr) 
            >> 0x19U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__commit_stack_15_retAddr 
                                  >> 0x20U)) << 7U));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0U] = (IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_0_retAddr);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[1U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_1_retAddr) 
                                                    << 9U) 
                                                   | (IData)(
                                                             (vlSelf->RAS__DOT__RASStack__DOT__spec_queue_0_retAddr 
                                                              >> 0x20U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[2U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_2_retAddr) 
                                                    << 0x12U) 
                                                   | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_1_retAddr) 
                                                       >> 0x17U) 
                                                      | ((IData)(
                                                                 (vlSelf->RAS__DOT__RASStack__DOT__spec_queue_1_retAddr 
                                                                  >> 0x20U)) 
                                                         << 9U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[3U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_3_retAddr) 
                                                    << 0x1bU) 
                                                   | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_2_retAddr) 
                                                       >> 0xeU) 
                                                      | ((IData)(
                                                                 (vlSelf->RAS__DOT__RASStack__DOT__spec_queue_2_retAddr 
                                                                  >> 0x20U)) 
                                                         << 0x12U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[4U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_3_retAddr) 
                                                    >> 5U) 
                                                   | ((IData)(
                                                              (vlSelf->RAS__DOT__RASStack__DOT__spec_queue_3_retAddr 
                                                               >> 0x20U)) 
                                                      << 0x1bU));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[5U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_4_retAddr) 
                                                    << 4U) 
                                                   | ((IData)(
                                                              (vlSelf->RAS__DOT__RASStack__DOT__spec_queue_3_retAddr 
                                                               >> 0x20U)) 
                                                      >> 5U));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[6U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_5_retAddr) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_4_retAddr) 
                                                       >> 0x1cU) 
                                                      | ((IData)(
                                                                 (vlSelf->RAS__DOT__RASStack__DOT__spec_queue_4_retAddr 
                                                                  >> 0x20U)) 
                                                         << 4U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[7U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_6_retAddr) 
                                                    << 0x16U) 
                                                   | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_5_retAddr) 
                                                       >> 0x13U) 
                                                      | ((IData)(
                                                                 (vlSelf->RAS__DOT__RASStack__DOT__spec_queue_5_retAddr 
                                                                  >> 0x20U)) 
                                                         << 0xdU)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[8U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_7_retAddr) 
                                                    << 0x1fU) 
                                                   | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_6_retAddr) 
                                                       >> 0xaU) 
                                                      | ((IData)(
                                                                 (vlSelf->RAS__DOT__RASStack__DOT__spec_queue_6_retAddr 
                                                                  >> 0x20U)) 
                                                         << 0x16U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[9U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_7_retAddr) 
                                                    >> 1U) 
                                                   | ((IData)(
                                                              (vlSelf->RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                               >> 0x20U)) 
                                                      << 0x1fU));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0xaU] = 
        (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_8_retAddr) 
          << 8U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                             >> 0x20U)) >> 1U));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0xbU] = 
        (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_9_retAddr) 
          << 0x11U) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_8_retAddr) 
                        >> 0x18U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                              >> 0x20U)) 
                                     << 8U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0xcU] = 
        (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_10_retAddr) 
          << 0x1aU) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_9_retAddr) 
                        >> 0xfU) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                             >> 0x20U)) 
                                    << 0x11U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0xdU] = 
        (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_10_retAddr) 
          >> 6U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                             >> 0x20U)) << 0x1aU));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0xeU] = 
        (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_11_retAddr) 
          << 3U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                             >> 0x20U)) >> 6U));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0xfU] = 
        (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_12_retAddr) 
          << 0xcU) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_11_retAddr) 
                       >> 0x1dU) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                             >> 0x20U)) 
                                    << 3U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x10U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_13_retAddr) 
            << 0x15U) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_12_retAddr) 
                          >> 0x14U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                >> 0x20U)) 
                                       << 0xcU)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x11U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_14_retAddr) 
            << 0x1eU) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_13_retAddr) 
                          >> 0xbU) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                               >> 0x20U)) 
                                      << 0x15U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x12U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_14_retAddr) 
            >> 2U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                               >> 0x20U)) << 0x1eU));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x13U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_15_retAddr) 
            << 7U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                               >> 0x20U)) >> 2U));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x14U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_16_retAddr) 
            << 0x10U) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_15_retAddr) 
                          >> 0x19U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                >> 0x20U)) 
                                       << 7U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x15U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_17_retAddr) 
            << 0x19U) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_16_retAddr) 
                          >> 0x10U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                >> 0x20U)) 
                                       << 0x10U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x16U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_17_retAddr) 
            >> 7U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                               >> 0x20U)) << 0x19U));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x17U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_18_retAddr) 
            << 2U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                               >> 0x20U)) >> 7U));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x18U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_19_retAddr) 
            << 0xbU) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_18_retAddr) 
                         >> 0x1eU) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                               >> 0x20U)) 
                                      << 2U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x19U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_20_retAddr) 
            << 0x14U) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_19_retAddr) 
                          >> 0x15U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                >> 0x20U)) 
                                       << 0xbU)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x1aU] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_21_retAddr) 
            << 0x1dU) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_20_retAddr) 
                          >> 0xcU) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                               >> 0x20U)) 
                                      << 0x14U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x1bU] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_21_retAddr) 
            >> 3U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                               >> 0x20U)) << 0x1dU));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x1cU] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_22_retAddr) 
            << 6U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                               >> 0x20U)) >> 3U));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x1dU] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_23_retAddr) 
            << 0xfU) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_22_retAddr) 
                         >> 0x1aU) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                               >> 0x20U)) 
                                      << 6U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x1eU] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_24_retAddr) 
            << 0x18U) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_23_retAddr) 
                          >> 0x11U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                >> 0x20U)) 
                                       << 0xfU)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x1fU] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_24_retAddr) 
            >> 8U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                               >> 0x20U)) << 0x18U));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x20U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_25_retAddr) 
            << 1U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                               >> 0x20U)) >> 8U));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x21U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_26_retAddr) 
            << 0xaU) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_25_retAddr) 
                         >> 0x1fU) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                               >> 0x20U)) 
                                      << 1U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x22U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_27_retAddr) 
            << 0x13U) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_26_retAddr) 
                          >> 0x16U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x23U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_28_retAddr) 
            << 0x1cU) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_27_retAddr) 
                          >> 0xdU) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                               >> 0x20U)) 
                                      << 0x13U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x24U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_28_retAddr) 
            >> 4U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                               >> 0x20U)) << 0x1cU));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x25U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_29_retAddr) 
            << 5U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                               >> 0x20U)) >> 4U));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x26U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_30_retAddr) 
            << 0xeU) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_29_retAddr) 
                         >> 0x1bU) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                               >> 0x20U)) 
                                      << 5U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x27U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_31_retAddr) 
            << 0x17U) | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_30_retAddr) 
                          >> 0x12U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                >> 0x20U)) 
                                       << 0xeU)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_0[0x28U] 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_queue_31_retAddr) 
            >> 9U) | ((IData)((vlSelf->RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                               >> 0x20U)) << 0x17U));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_5 = (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_15_ctr)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_14_ctr)) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_13_ctr)) 
                                                      << 0x27U) 
                                                     | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_12_ctr)) 
                                                         << 0x24U) 
                                                        | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_11_ctr)) 
                                                            << 0x21U) 
                                                           | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_10_ctr)) 
                                                               << 0x1eU) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_9_ctr) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_8_ctr) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_7_ctr) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_6_ctr) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_5_ctr) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_4_ctr) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_3_ctr) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_2_ctr) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_1_ctr) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelf->RAS__DOT__RASStack__DOT__commit_stack_0_ctr))))))))))))))))));
    __Vtemp_h9be9b9d7__0[1U] = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_12_value) 
                                 << 0x1cU) | (IData)(
                                                     ((((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_11_value)) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_10_value)) 
                                                           << 0x32U) 
                                                          | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_9_value)) 
                                                              << 0x2dU) 
                                                             | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_8_value)) 
                                                                 << 0x28U) 
                                                                | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_7_value)) 
                                                                    << 0x23U) 
                                                                   | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_6_value)) 
                                                                       << 0x1eU) 
                                                                      | (QData)((IData)(
                                                                                (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_5_value) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_4_value) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_3_value) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_2_value) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_1_value) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_0_value)))))))))))))) 
                                                      >> 0x20U)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_7[0U] = (IData)(
                                                          (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_11_value)) 
                                                            << 0x37U) 
                                                           | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_10_value)) 
                                                               << 0x32U) 
                                                              | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_9_value)) 
                                                                  << 0x2dU) 
                                                                 | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_8_value)) 
                                                                     << 0x28U) 
                                                                    | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_7_value)) 
                                                                        << 0x23U) 
                                                                       | (((QData)((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_6_value)) 
                                                                           << 0x1eU) 
                                                                          | (QData)((IData)(
                                                                                (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_5_value) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_4_value) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_3_value) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_2_value) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_1_value) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_0_value)))))))))))))));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_7[1U] = __Vtemp_h9be9b9d7__0[1U];
    vlSelf->RAS__DOT__RASStack__DOT___GEN_7[2U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_19_value) 
                                                    << 0x1fU) 
                                                   | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_18_value) 
                                                       << 0x1aU) 
                                                      | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_17_value) 
                                                          << 0x15U) 
                                                         | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_16_value) 
                                                             << 0x10U) 
                                                            | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_15_value) 
                                                                << 0xbU) 
                                                               | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_14_value) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_13_value) 
                                                                      << 1U) 
                                                                     | ((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_12_value) 
                                                                        >> 4U))))))));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_7[3U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_25_value) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_24_value) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_23_value) 
                                                          << 0x13U) 
                                                         | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_22_value) 
                                                             << 0xeU) 
                                                            | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_21_value) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_20_value) 
                                                                   << 4U) 
                                                                  | ((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_19_value) 
                                                                     >> 1U)))))));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_7[4U] = (
                                                   ((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_31_value) 
                                                    << 0x1bU) 
                                                   | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_30_value) 
                                                       << 0x16U) 
                                                      | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_29_value) 
                                                          << 0x11U) 
                                                         | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_28_value) 
                                                             << 0xcU) 
                                                            | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_27_value) 
                                                                << 7U) 
                                                               | (((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_26_value) 
                                                                   << 2U) 
                                                                  | ((IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_nos_25_value) 
                                                                     >> 3U)))))));
    vlSelf->RAS__DOT__RASStack__DOT__differentFlag_10 
        = ((IData)(vlSelf->RAS__DOT__s3_meta_TOSR_flag) 
           ^ (IData)(vlSelf->RAS__DOT__RASStack__DOT__BOS_flag));
    vlSelf->RAS__DOT__RASStack__DOT__differentFlag_15 
        = ((IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_flag) 
           ^ (IData)(vlSelf->RAS__DOT__RASStack__DOT__BOS_flag));
    vlSelf->RAS__DOT__RASStack__DOT__io_TOSR_value 
        = vlSelf->RAS__DOT__RASStack__DOT__TOSR_value;
    vlSelf->RAS__DOT__RASStack__DOT___GEN_23 = ((IData)(vlSelf->RAS__DOT__s2_spec_push) 
                                                & ((0x1fU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSW_value))) 
                                                   == (IData)(vlSelf->RAS__DOT__RASStack__DOT__BOS_value)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_73 = ((IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_push_valid) 
                                                & ((~ (IData)(vlSelf->RAS__DOT__RASStack__DOT__spec_overflowed)) 
                                                   | (((vlSelf->io_update_bits_meta[0U] 
                                                        >> 5U) 
                                                       ^ (IData)(vlSelf->RAS__DOT__RASStack__DOT__BOS_flag)) 
                                                      ^ 
                                                      ((0x1fU 
                                                        & vlSelf->io_update_bits_meta[0U]) 
                                                       > (IData)(vlSelf->RAS__DOT__RASStack__DOT__BOS_value)))));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_22 = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__BOS_flag) 
                                                 << 5U) 
                                                | (IData)(vlSelf->RAS__DOT__RASStack__DOT__BOS_value));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_16 = ((IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_value) 
                                                >= (IData)(vlSelf->RAS__DOT__RASStack__DOT__BOS_value));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_20 = ((IData)(vlSelf->RAS__DOT__s3_meta_NOS_value) 
                                                >= (IData)(vlSelf->RAS__DOT__RASStack__DOT__BOS_value));
    vlSelf->RAS__DOT__RASStack__DOT__compare_10 = ((IData)(vlSelf->RAS__DOT__s3_meta_TOSR_value) 
                                                   < (IData)(vlSelf->RAS__DOT__RASStack__DOT__BOS_value));
    vlSelf->RAS__DOT__RASStack__DOT___GEN = ((IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value) 
                                             >= (IData)(vlSelf->RAS__DOT__RASStack__DOT__BOS_value));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_24 = ((0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->RAS__DOT__s3_meta_TOSW_value))) 
                                                == (IData)(vlSelf->RAS__DOT__RASStack__DOT__BOS_value));
    vlSelf->RAS__DOT__RASStack__DOT__compare_15 = ((IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value) 
                                                   < (IData)(vlSelf->RAS__DOT__RASStack__DOT__BOS_value));
    vlSelf->RAS__DOT__io_out_s3_pc_0 = vlSelf->RAS__DOT__debug_s3_pc_addr;
    vlSelf->RAS__DOT__io_out_s3_pc_1 = vlSelf->RAS__DOT__debug_s3_pc_addr_1;
    vlSelf->RAS__DOT__io_out_s3_pc_2 = vlSelf->RAS__DOT__debug_s3_pc_addr_2;
    vlSelf->RAS__DOT__io_out_s3_pc_3 = vlSelf->RAS__DOT__debug_s3_pc_addr_3;
    vlSelf->RAS__DOT__io_out_s2_pc_0 = vlSelf->RAS__DOT__debug_s2_pc_addr;
    vlSelf->RAS__DOT__io_out_s2_pc_1 = vlSelf->RAS__DOT__debug_s2_pc_addr_1;
    vlSelf->RAS__DOT__io_out_s2_pc_2 = vlSelf->RAS__DOT__debug_s2_pc_addr_2;
    vlSelf->RAS__DOT__io_out_s2_pc_3 = vlSelf->RAS__DOT__debug_s2_pc_addr_3;
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_isRet 
        = vlSelf->RAS__DOT____Vcellinp__RASStack__io_redirect_isRet;
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_isCall 
        = vlSelf->RAS__DOT____Vcellinp__RASStack__io_redirect_isCall;
    vlSelf->RAS__DOT__RASStack__DOT___GEN_74 = (((IData)(vlSelf->RAS__DOT__redirect_next_valid_last_REG) 
                                                 & (IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_redirect_isCall)) 
                                                & ((0x1fU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value))) 
                                                   == (IData)(vlSelf->RAS__DOT__RASStack__DOT__BOS_value)));
    vlSelf->RAS__DOT__RASStack__DOT___realPush_T_4 
        = ((IData)(vlSelf->RAS__DOT__redirect_next_valid_last_REG) 
           & (IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_redirect_isCall));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_9 = (1U & 
                                               ((IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_redirect_isCall) 
                                                | (~ (IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_s3_missed_push))));
    vlSelf->RAS__DOT___RASStack_io_sctr = vlSelf->RAS__DOT__RASStack__DOT__io_sctr;
    vlSelf->RAS__DOT___RASStack_io_ssp = vlSelf->RAS__DOT__RASStack__DOT__io_ssp;
    vlSelf->RAS__DOT___RASStack_io_TOSR_flag = vlSelf->RAS__DOT__RASStack__DOT__io_TOSR_flag;
    vlSelf->RAS__DOT___RASStack_io_TOSW_flag = vlSelf->RAS__DOT__RASStack__DOT__io_TOSW_flag;
    vlSelf->RAS__DOT___RASStack_io_TOSW_value = vlSelf->RAS__DOT__RASStack__DOT__io_TOSW_value;
    vlSelf->RAS__DOT__RASStack__DOT__topNos_flag = 
        (1U & ((IData)(vlSelf->RAS__DOT__RASStack__DOT__writeBypassValid)
                ? (IData)(vlSelf->RAS__DOT__RASStack__DOT__writeBypassNos_flag)
                : (vlSelf->RAS__DOT__RASStack__DOT___GEN_6 
                   >> (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value))));
    vlSelf->RAS__DOT___RASStack_io_spec_pop_addr = vlSelf->RAS__DOT__RASStack__DOT__io_spec_pop_addr;
    vlSelf->RAS__DOT__RASStack__DOT___GEN_4 = ((0x28fU 
                                                >= 
                                                (0x3ffU 
                                                 & ((IData)(0x29U) 
                                                    * (IData)(vlSelf->RAS__DOT__RASStack__DOT__ssp))))
                                                ? (0x1ffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->RAS__DOT__RASStack__DOT___GEN_3[
                                                                       (((IData)(0x28U) 
                                                                         + 
                                                                         (0x3ffU 
                                                                          & ((IData)(0x29U) 
                                                                             * (IData)(vlSelf->RAS__DOT__RASStack__DOT__ssp)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x29U) 
                                                             * (IData)(vlSelf->RAS__DOT__RASStack__DOT__ssp))))
                                                         ? 0x20U
                                                         : 
                                                        ((IData)(0x40U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x29U) 
                                                             * (IData)(vlSelf->RAS__DOT__RASStack__DOT__ssp)))))) 
                                                      | (((0U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(0x29U) 
                                                               * (IData)(vlSelf->RAS__DOT__RASStack__DOT__ssp))))
                                                           ? 0ULL
                                                           : 
                                                          ((QData)((IData)(
                                                                           vlSelf->RAS__DOT__RASStack__DOT___GEN_3[
                                                                           (((IData)(0x1fU) 
                                                                             + 
                                                                             (0x3ffU 
                                                                              & ((IData)(0x29U) 
                                                                                * (IData)(vlSelf->RAS__DOT__RASStack__DOT__ssp)))) 
                                                                            >> 5U)])) 
                                                           << 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & ((IData)(0x29U) 
                                                                * (IData)(vlSelf->RAS__DOT__RASStack__DOT__ssp)))))) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->RAS__DOT__RASStack__DOT___GEN_3[
                                                                            (0x1fU 
                                                                             & (((IData)(0x29U) 
                                                                                * (IData)(vlSelf->RAS__DOT__RASStack__DOT__ssp)) 
                                                                                >> 5U))])) 
                                                            >> 
                                                            (0x1fU 
                                                             & ((IData)(0x29U) 
                                                                * (IData)(vlSelf->RAS__DOT__RASStack__DOT__ssp)))))))
                                                : 0ULL);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_1 = ((0x51fU 
                                                >= 
                                                (0x7ffU 
                                                 & ((IData)(0x29U) 
                                                    * (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value))))
                                                ? (0x1ffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->RAS__DOT__RASStack__DOT___GEN_0[
                                                                       (((IData)(0x28U) 
                                                                         + 
                                                                         (0x7ffU 
                                                                          & ((IData)(0x29U) 
                                                                             * (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x29U) 
                                                             * (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value))))
                                                         ? 0x20U
                                                         : 
                                                        ((IData)(0x40U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x29U) 
                                                             * (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value)))))) 
                                                      | (((0U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(0x29U) 
                                                               * (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value))))
                                                           ? 0ULL
                                                           : 
                                                          ((QData)((IData)(
                                                                           vlSelf->RAS__DOT__RASStack__DOT___GEN_0[
                                                                           (((IData)(0x1fU) 
                                                                             + 
                                                                             (0x7ffU 
                                                                              & ((IData)(0x29U) 
                                                                                * (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value)))) 
                                                                            >> 5U)])) 
                                                           << 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & ((IData)(0x29U) 
                                                                * (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value)))))) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->RAS__DOT__RASStack__DOT___GEN_0[
                                                                            (0x3fU 
                                                                             & (((IData)(0x29U) 
                                                                                * (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value)) 
                                                                                >> 5U))])) 
                                                            >> 
                                                            (0x1fU 
                                                             & ((IData)(0x29U) 
                                                                * (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value)))))))
                                                : 0ULL);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_25 = ((0x2fU 
                                                 >= 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->RAS__DOT__RASStack__DOT__nsp))))
                                                 ? 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->RAS__DOT__RASStack__DOT___GEN_5 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(3U) 
                                                                * (IData)(vlSelf->RAS__DOT__RASStack__DOT__nsp))))))
                                                 : 0U);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_8 = ((0x9fU 
                                                >= 
                                                (0xffU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value))))
                                                ? (0x1fU 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(5U) 
                                                            * (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value))))
                                                        ? 0U
                                                        : 
                                                       (vlSelf->RAS__DOT__RASStack__DOT___GEN_7[
                                                        (((IData)(4U) 
                                                          + 
                                                          (0xffU 
                                                           & ((IData)(5U) 
                                                              * (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value)))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(5U) 
                                                             * (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value)))))) 
                                                      | (vlSelf->RAS__DOT__RASStack__DOT___GEN_7[
                                                         (7U 
                                                          & (((IData)(5U) 
                                                              * (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value)) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(5U) 
                                                             * (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value))))))
                                                : 0U);
    vlSelf->RAS__DOT___RASStack_io_TOSR_value = vlSelf->RAS__DOT__RASStack__DOT__io_TOSR_value;
    vlSelf->RAS__DOT__RASStack__DOT___BOS_new_ptr_T_11 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_22)));
    vlSelf->RAS__DOT__RASStack__DOT___BOS_new_ptr_T_6 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_22)));
    vlSelf->RAS__DOT__RASStack__DOT___BOS_new_ptr_T_1 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_22)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_17 = (((IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_flag) 
                                                 ^ (IData)(vlSelf->RAS__DOT__RASStack__DOT__BOS_flag)) 
                                                ^ (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_16));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_21 = (((IData)(vlSelf->RAS__DOT__s3_meta_NOS_flag) 
                                                 ^ (IData)(vlSelf->RAS__DOT__RASStack__DOT__BOS_flag)) 
                                                ^ (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_20));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_75 = (((IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_s3_missed_pop) 
                                                 & ((IData)(vlSelf->RAS__DOT__RASStack__DOT__differentFlag_10) 
                                                    ^ 
                                                    (~ (IData)(vlSelf->RAS__DOT__RASStack__DOT__compare_10)))) 
                                                & ((IData)(vlSelf->RAS__DOT__RASStack__DOT__differentFlag_11) 
                                                   ^ (IData)(vlSelf->RAS__DOT__RASStack__DOT__compare_11)));
    vlSelf->RAS__DOT__RASStack__DOT__s3TopEntry_inflightValid 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__differentFlag_10) 
            ^ (~ (IData)(vlSelf->RAS__DOT__RASStack__DOT__compare_10))) 
           & ((IData)(vlSelf->RAS__DOT__RASStack__DOT__differentFlag_11) 
              ^ (IData)(vlSelf->RAS__DOT__RASStack__DOT__compare_11)));
    vlSelf->RAS__DOT__RASStack__DOT__topEntry_inflightValid 
        = ((((IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_flag) 
             ^ (IData)(vlSelf->RAS__DOT__RASStack__DOT__BOS_flag)) 
            ^ (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN)) 
           & (((IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_flag) 
               ^ (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSW_flag)) 
              ^ ((IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value) 
                 < (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSW_value))));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_12 = (((IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_redirect_isRet) 
                                                 & ((IData)(vlSelf->RAS__DOT__RASStack__DOT__differentFlag_15) 
                                                    ^ 
                                                    (~ (IData)(vlSelf->RAS__DOT__RASStack__DOT__compare_15)))) 
                                                & ((IData)(vlSelf->RAS__DOT__RASStack__DOT__differentFlag_16) 
                                                   ^ (IData)(vlSelf->RAS__DOT__RASStack__DOT__compare_16)));
    vlSelf->RAS__DOT__RASStack__DOT__redirectTopEntry_inflightValid 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__differentFlag_15) 
            ^ (~ (IData)(vlSelf->RAS__DOT__RASStack__DOT__compare_15))) 
           & ((IData)(vlSelf->RAS__DOT__RASStack__DOT__differentFlag_16) 
              ^ (IData)(vlSelf->RAS__DOT__RASStack__DOT__compare_16)));
    vlSelf->io_out_s3_pc_0 = vlSelf->RAS__DOT__io_out_s3_pc_0;
    vlSelf->io_out_s3_pc_1 = vlSelf->RAS__DOT__io_out_s3_pc_1;
    vlSelf->io_out_s3_pc_2 = vlSelf->RAS__DOT__io_out_s3_pc_2;
    vlSelf->io_out_s3_pc_3 = vlSelf->RAS__DOT__io_out_s3_pc_3;
    vlSelf->io_out_s2_pc_0 = vlSelf->RAS__DOT__io_out_s2_pc_0;
    vlSelf->io_out_s2_pc_1 = vlSelf->RAS__DOT__io_out_s2_pc_1;
    vlSelf->io_out_s2_pc_2 = vlSelf->RAS__DOT__io_out_s2_pc_2;
    vlSelf->io_out_s2_pc_3 = vlSelf->RAS__DOT__io_out_s2_pc_3;
    vlSelf->RAS__DOT__RASStack__DOT__writeEntry_retAddr 
        = ((IData)(vlSelf->RAS__DOT__RASStack__DOT___realPush_T_4)
            ? vlSelf->RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr
            : vlSelf->RAS__DOT___s2_spec_new_addr_T_1);
    vlSelf->RAS__DOT__RASStack__DOT__writeBypassValidWire 
        = ((IData)(vlSelf->RAS__DOT__RASStack__DOT___realPush_T_4) 
           | ((~ (IData)(vlSelf->RAS__DOT__redirect_next_valid_last_REG)) 
              & ((IData)(vlSelf->io_s2_fire_2) ? (IData)(vlSelf->RAS__DOT__s2_spec_push)
                  : ((~ (IData)(vlSelf->io_s3_fire_2)) 
                     & (IData)(vlSelf->RAS__DOT__RASStack__DOT__writeBypassValid)))));
    if (vlSelf->RAS__DOT__RASStack__DOT___GEN_9) {
        vlSelf->RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
            = vlSelf->RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr;
        vlSelf->RAS__DOT__RASStack__DOT__realWriteAddr_value 
            = vlSelf->RAS__DOT__RASStack__DOT__realWriteAddr_next_value;
        vlSelf->RAS__DOT__RASStack__DOT__realNos_flag 
            = vlSelf->RAS__DOT__RASStack__DOT__realNos_next_flag;
        vlSelf->RAS__DOT__RASStack__DOT__realNos_value 
            = vlSelf->RAS__DOT__RASStack__DOT__realNos_next_value;
    } else {
        vlSelf->RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
            = vlSelf->RAS__DOT__s3_spec_new_addr;
        vlSelf->RAS__DOT__RASStack__DOT__realWriteAddr_value 
            = vlSelf->RAS__DOT__s3_meta_TOSW_value;
        vlSelf->RAS__DOT__RASStack__DOT__realNos_flag 
            = vlSelf->RAS__DOT__s3_meta_TOSR_flag;
        vlSelf->RAS__DOT__RASStack__DOT__realNos_value 
            = vlSelf->RAS__DOT__s3_meta_TOSR_value;
    }
    vlSelf->RAS__DOT__RASStack__DOT__io_NOS_flag = vlSelf->RAS__DOT__RASStack__DOT__topNos_flag;
    if (vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_is_jalr) {
        if (vlSelf->RAS__DOT___GEN) {
            vlSelf->RAS__DOT__io_out_s2_full_pred_0_targets_1 
                = vlSelf->RAS__DOT___RASStack_io_spec_pop_addr;
            vlSelf->RAS__DOT__io_out_s2_full_pred_1_targets_1 
                = vlSelf->RAS__DOT___RASStack_io_spec_pop_addr;
            vlSelf->RAS__DOT__io_out_s2_full_pred_2_targets_1 
                = vlSelf->RAS__DOT___RASStack_io_spec_pop_addr;
            vlSelf->RAS__DOT__io_out_s2_full_pred_3_targets_1 
                = vlSelf->RAS__DOT___RASStack_io_spec_pop_addr;
        } else {
            vlSelf->RAS__DOT__io_out_s2_full_pred_0_targets_1 
                = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_jalr_target;
            vlSelf->RAS__DOT__io_out_s2_full_pred_1_targets_1 
                = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_jalr_target;
            vlSelf->RAS__DOT__io_out_s2_full_pred_2_targets_1 
                = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_jalr_target;
            vlSelf->RAS__DOT__io_out_s2_full_pred_3_targets_1 
                = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_jalr_target;
        }
    } else {
        vlSelf->RAS__DOT__io_out_s2_full_pred_0_targets_1 
            = vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_targets_1;
        vlSelf->RAS__DOT__io_out_s2_full_pred_1_targets_1 
            = vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_targets_1;
        vlSelf->RAS__DOT__io_out_s2_full_pred_2_targets_1 
            = vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_targets_1;
        vlSelf->RAS__DOT__io_out_s2_full_pred_3_targets_1 
            = vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_targets_1;
    }
    vlSelf->RAS__DOT__RASStack__DOT___commit_stack_ctr_T 
        = (7U & ((IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_25) 
                 - (IData)(1U)));
    vlSelf->RAS__DOT__RASStack__DOT___commit_stack_ctr_T_2 
        = (7U & ((IData)(1U) + (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_25)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_27 = (((IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
                                                 & (0U 
                                                    != (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_25))) 
                                                & (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_26));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_29 = (((IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
                                                 & (0U 
                                                    != (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_25))) 
                                                & (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_28));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_31 = (((IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
                                                 & (0U 
                                                    != (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_25))) 
                                                & (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_30));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_33 = (((IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
                                                 & (0U 
                                                    != (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_25))) 
                                                & (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_32));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_35 = (((IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
                                                 & (0U 
                                                    != (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_25))) 
                                                & (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_34));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_37 = (((IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
                                                 & (0U 
                                                    != (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_25))) 
                                                & (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_36));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_39 = (((IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
                                                 & (0U 
                                                    != (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_25))) 
                                                & (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_38));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_41 = (((IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
                                                 & (0U 
                                                    != (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_25))) 
                                                & (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_40));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_43 = (((IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
                                                 & (0U 
                                                    != (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_25))) 
                                                & (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_42));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_45 = (((IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
                                                 & (0U 
                                                    != (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_25))) 
                                                & (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_44));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_47 = (((IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
                                                 & (0U 
                                                    != (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_25))) 
                                                & (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_46));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_49 = (((IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
                                                 & (0U 
                                                    != (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_25))) 
                                                & (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_48));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_51 = (((IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
                                                 & (0U 
                                                    != (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_25))) 
                                                & (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_50));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_53 = (((IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
                                                 & (0U 
                                                    != (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_25))) 
                                                & (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_52));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_55 = (((IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
                                                 & (0U 
                                                    != (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_25))) 
                                                & (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_54));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_56 = (((IData)(vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
                                                 & (0x3c0U 
                                                    == 
                                                    (0x3c0U 
                                                     & vlSelf->io_update_bits_meta[0U]))) 
                                                & (0U 
                                                   != (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_25)));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_57 = ((7U 
                                                 != (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_25)) 
                                                & (((0x28fU 
                                                     >= 
                                                     (0x3ffU 
                                                      & ((IData)(0x29U) 
                                                         * (IData)(vlSelf->RAS__DOT__RASStack__DOT__nsp))))
                                                     ? 
                                                    (0x1ffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->RAS__DOT__RASStack__DOT___GEN_3[
                                                                         (((IData)(0x28U) 
                                                                           + 
                                                                           (0x3ffU 
                                                                            & ((IData)(0x29U) 
                                                                               * (IData)(vlSelf->RAS__DOT__RASStack__DOT__nsp)))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((0U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(0x29U) 
                                                               * (IData)(vlSelf->RAS__DOT__RASStack__DOT__nsp))))
                                                           ? 0x20U
                                                           : 
                                                          ((IData)(0x40U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x29U) 
                                                               * (IData)(vlSelf->RAS__DOT__RASStack__DOT__nsp)))))) 
                                                        | (((0U 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(0x29U) 
                                                                 * (IData)(vlSelf->RAS__DOT__RASStack__DOT__nsp))))
                                                             ? 0ULL
                                                             : 
                                                            ((QData)((IData)(
                                                                             vlSelf->RAS__DOT__RASStack__DOT___GEN_3[
                                                                             (((IData)(0x1fU) 
                                                                               + 
                                                                               (0x3ffU 
                                                                                & ((IData)(0x29U) 
                                                                                * (IData)(vlSelf->RAS__DOT__RASStack__DOT__nsp)))) 
                                                                              >> 5U)])) 
                                                             << 
                                                             ((IData)(0x20U) 
                                                              - 
                                                              (0x1fU 
                                                               & ((IData)(0x29U) 
                                                                  * (IData)(vlSelf->RAS__DOT__RASStack__DOT__nsp)))))) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->RAS__DOT__RASStack__DOT___GEN_3[
                                                                              (0x1fU 
                                                                               & (((IData)(0x29U) 
                                                                                * (IData)(vlSelf->RAS__DOT__RASStack__DOT__nsp)) 
                                                                                >> 5U))])) 
                                                              >> 
                                                              (0x1fU 
                                                               & ((IData)(0x29U) 
                                                                  * (IData)(vlSelf->RAS__DOT__RASStack__DOT__nsp)))))))
                                                     : 0ULL) 
                                                   == 
                                                   ((0x51fU 
                                                     >= 
                                                     (0x7ffU 
                                                      & ((IData)(0x29U) 
                                                         * 
                                                         (0x1fU 
                                                          & vlSelf->io_update_bits_meta[0U]))))
                                                     ? 
                                                    (0x1ffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->RAS__DOT__RASStack__DOT___GEN_0[
                                                                         (((IData)(0x28U) 
                                                                           + 
                                                                           (0x7ffU 
                                                                            & ((IData)(0x29U) 
                                                                               * 
                                                                               (0x1fU 
                                                                                & vlSelf->io_update_bits_meta[0U])))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((0U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(0x29U) 
                                                               * 
                                                               (0x1fU 
                                                                & vlSelf->io_update_bits_meta[0U]))))
                                                           ? 0x20U
                                                           : 
                                                          ((IData)(0x40U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x29U) 
                                                               * 
                                                               (0x1fU 
                                                                & vlSelf->io_update_bits_meta[0U])))))) 
                                                        | (((0U 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(0x29U) 
                                                                 * 
                                                                 (0x1fU 
                                                                  & vlSelf->io_update_bits_meta[0U]))))
                                                             ? 0ULL
                                                             : 
                                                            ((QData)((IData)(
                                                                             vlSelf->RAS__DOT__RASStack__DOT___GEN_0[
                                                                             (((IData)(0x1fU) 
                                                                               + 
                                                                               (0x7ffU 
                                                                                & ((IData)(0x29U) 
                                                                                * 
                                                                                (0x1fU 
                                                                                & vlSelf->io_update_bits_meta[0U])))) 
                                                                              >> 5U)])) 
                                                             << 
                                                             ((IData)(0x20U) 
                                                              - 
                                                              (0x1fU 
                                                               & ((IData)(0x29U) 
                                                                  * 
                                                                  (0x1fU 
                                                                   & vlSelf->io_update_bits_meta[0U])))))) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->RAS__DOT__RASStack__DOT___GEN_0[
                                                                              (0x3fU 
                                                                               & (((IData)(0x29U) 
                                                                                * 
                                                                                (0x1fU 
                                                                                & vlSelf->io_update_bits_meta[0U])) 
                                                                                >> 5U))])) 
                                                              >> 
                                                              (0x1fU 
                                                               & ((IData)(0x29U) 
                                                                  * 
                                                                  (0x1fU 
                                                                   & vlSelf->io_update_bits_meta[0U])))))))
                                                     : 0ULL)));
    vlSelf->RAS__DOT__RASStack__DOT__topNos_value = 
        ((IData)(vlSelf->RAS__DOT__RASStack__DOT__writeBypassValid)
          ? (IData)(vlSelf->RAS__DOT__RASStack__DOT__writeBypassNos_value)
          : (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_8));
    vlSelf->RAS__DOT__RASStack__DOT__inflightValid_8 
        = ((IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_17) 
           & (((IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_flag) 
               ^ (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_flag)) 
              ^ ((IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_value) 
                 < (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value))));
    vlSelf->RAS__DOT__RASStack__DOT__inflightValid_6 
        = ((IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_21) 
           & (((IData)(vlSelf->RAS__DOT__s3_meta_NOS_flag) 
               ^ (IData)(vlSelf->RAS__DOT__s3_meta_TOSW_flag)) 
              ^ ((IData)(vlSelf->RAS__DOT__s3_meta_NOS_value) 
                 < (IData)(vlSelf->RAS__DOT__s3_meta_TOSW_value))));
    vlSelf->RAS__DOT__RASStack__DOT___s3_missPushEntry_ctr_T 
        = ((0x1ffffffffffULL & ((IData)(vlSelf->RAS__DOT__RASStack__DOT__s3TopEntry_inflightValid)
                                 ? ((0x51fU >= (0x7ffU 
                                                & ((IData)(0x29U) 
                                                   * (IData)(vlSelf->RAS__DOT__s3_meta_TOSR_value))))
                                     ? (((QData)((IData)(
                                                         vlSelf->RAS__DOT__RASStack__DOT___GEN_0[
                                                         (((IData)(0x28U) 
                                                           + 
                                                           (0x7ffU 
                                                            & ((IData)(0x29U) 
                                                               * (IData)(vlSelf->RAS__DOT__s3_meta_TOSR_value)))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x29U) 
                                                  * (IData)(vlSelf->RAS__DOT__s3_meta_TOSR_value))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelf->RAS__DOT__s3_meta_TOSR_value)))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x29U) 
                                                 * (IData)(vlSelf->RAS__DOT__s3_meta_TOSR_value))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->RAS__DOT__RASStack__DOT___GEN_0[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x7ffU 
                                                                   & ((IData)(0x29U) 
                                                                      * (IData)(vlSelf->RAS__DOT__s3_meta_TOSR_value)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelf->RAS__DOT__s3_meta_TOSR_value)))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->RAS__DOT__RASStack__DOT___GEN_0[
                                                              (0x3fU 
                                                               & (((IData)(0x29U) 
                                                                   * (IData)(vlSelf->RAS__DOT__s3_meta_TOSR_value)) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelf->RAS__DOT__s3_meta_TOSR_value))))))
                                     : 0ULL) : ((0x28fU 
                                                 >= 
                                                 (0x3ffU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelf->RAS__DOT__s3_meta_ssp))))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->RAS__DOT__RASStack__DOT___GEN_3[
                                                                  (((IData)(0x28U) 
                                                                    + 
                                                                    (0x3ffU 
                                                                     & ((IData)(0x29U) 
                                                                        * (IData)(vlSelf->RAS__DOT__s3_meta_ssp)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x29U) 
                                                        * (IData)(vlSelf->RAS__DOT__s3_meta_ssp))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x29U) 
                                                        * (IData)(vlSelf->RAS__DOT__s3_meta_ssp)))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x29U) 
                                                          * (IData)(vlSelf->RAS__DOT__s3_meta_ssp))))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(
                                                                      vlSelf->RAS__DOT__RASStack__DOT___GEN_3[
                                                                      (((IData)(0x1fU) 
                                                                        + 
                                                                        (0x3ffU 
                                                                         & ((IData)(0x29U) 
                                                                            * (IData)(vlSelf->RAS__DOT__s3_meta_ssp)))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x29U) 
                                                           * (IData)(vlSelf->RAS__DOT__s3_meta_ssp)))))) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->RAS__DOT__RASStack__DOT___GEN_3[
                                                                       (0x1fU 
                                                                        & (((IData)(0x29U) 
                                                                            * (IData)(vlSelf->RAS__DOT__s3_meta_ssp)) 
                                                                           >> 5U))])) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x29U) 
                                                           * (IData)(vlSelf->RAS__DOT__s3_meta_ssp))))))
                                                 : 0ULL))) 
           == vlSelf->RAS__DOT__s3_spec_new_addr);
    vlSelf->RAS__DOT__RASStack__DOT___writeEntry_ctr_T_7 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__writeBypassValid)
             ? vlSelf->RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr
             : ((IData)(vlSelf->RAS__DOT__RASStack__DOT__topEntry_inflightValid)
                 ? vlSelf->RAS__DOT__RASStack__DOT___GEN_1
                 : vlSelf->RAS__DOT__RASStack__DOT___GEN_4)) 
           == vlSelf->RAS__DOT___s2_spec_new_addr_T_1);
    vlSelf->RAS__DOT__RASStack__DOT___writeEntry_ctr_T_1 
        = ((0x1ffffffffffULL & ((IData)(vlSelf->RAS__DOT__RASStack__DOT__redirectTopEntry_inflightValid)
                                 ? ((0x51fU >= (0x7ffU 
                                                & ((IData)(0x29U) 
                                                   * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value))))
                                     ? (((QData)((IData)(
                                                         vlSelf->RAS__DOT__RASStack__DOT___GEN_0[
                                                         (((IData)(0x28U) 
                                                           + 
                                                           (0x7ffU 
                                                            & ((IData)(0x29U) 
                                                               * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value)))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x29U) 
                                                  * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value)))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x29U) 
                                                 * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->RAS__DOT__RASStack__DOT___GEN_0[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x7ffU 
                                                                   & ((IData)(0x29U) 
                                                                      * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value)))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->RAS__DOT__RASStack__DOT___GEN_0[
                                                              (0x3fU 
                                                               & (((IData)(0x29U) 
                                                                   * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value)) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value))))))
                                     : 0ULL) : ((0x28fU 
                                                 >= 
                                                 (0x3ffU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp))))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->RAS__DOT__RASStack__DOT___GEN_3[
                                                                  (((IData)(0x28U) 
                                                                    + 
                                                                    (0x3ffU 
                                                                     & ((IData)(0x29U) 
                                                                        * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x29U) 
                                                        * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x29U) 
                                                        * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp)))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x29U) 
                                                          * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp))))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(
                                                                      vlSelf->RAS__DOT__RASStack__DOT___GEN_3[
                                                                      (((IData)(0x1fU) 
                                                                        + 
                                                                        (0x3ffU 
                                                                         & ((IData)(0x29U) 
                                                                            * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp)))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x29U) 
                                                           * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp)))))) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->RAS__DOT__RASStack__DOT___GEN_3[
                                                                       (0x1fU 
                                                                        & (((IData)(0x29U) 
                                                                            * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp)) 
                                                                           >> 5U))])) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x29U) 
                                                           * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp))))))
                                                 : 0ULL))) 
           == vlSelf->RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr);
    vlSelf->RAS__DOT___RASStack_io_NOS_flag = vlSelf->RAS__DOT__RASStack__DOT__io_NOS_flag;
    vlSelf->io_out_s2_full_pred_0_targets_1 = vlSelf->RAS__DOT__io_out_s2_full_pred_0_targets_1;
    vlSelf->io_out_s2_full_pred_1_targets_1 = vlSelf->RAS__DOT__io_out_s2_full_pred_1_targets_1;
    vlSelf->io_out_s2_full_pred_2_targets_1 = vlSelf->RAS__DOT__io_out_s2_full_pred_2_targets_1;
    vlSelf->io_out_s2_full_pred_3_targets_1 = vlSelf->RAS__DOT__io_out_s2_full_pred_3_targets_1;
    vlSelf->RAS__DOT__RASStack__DOT__io_NOS_value = vlSelf->RAS__DOT__RASStack__DOT__topNos_value;
    vlSelf->RAS__DOT__RASStack__DOT___GEN_18 = ((IData)(vlSelf->RAS__DOT__RASStack__DOT__topNos_value) 
                                                >= (IData)(vlSelf->RAS__DOT__RASStack__DOT__BOS_value));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_76 = ((IData)(vlSelf->RAS__DOT__RASStack__DOT___s3_missPushEntry_ctr_T) 
                                                & (7U 
                                                   != (IData)(vlSelf->RAS__DOT__s3_meta_sctr)));
    vlSelf->RAS__DOT__RASStack__DOT___s3_missPushEntry_ctr_T_2 
        = ((IData)(vlSelf->RAS__DOT__RASStack__DOT___s3_missPushEntry_ctr_T) 
           & (7U != (7U & ((IData)(vlSelf->RAS__DOT__RASStack__DOT__s3TopEntry_inflightValid)
                            ? ((0x5fU >= (0x7fU & ((IData)(3U) 
                                                   * (IData)(vlSelf->RAS__DOT__s3_meta_TOSR_value))))
                                ? (((0U == (0x1fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlSelf->RAS__DOT__s3_meta_TOSR_value))))
                                     ? 0U : (vlSelf->RAS__DOT__RASStack__DOT___GEN_2[
                                             (((IData)(2U) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->RAS__DOT__s3_meta_TOSR_value)))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->RAS__DOT__s3_meta_TOSR_value)))))) 
                                   | (vlSelf->RAS__DOT__RASStack__DOT___GEN_2[
                                      (3U & (((IData)(3U) 
                                              * (IData)(vlSelf->RAS__DOT__s3_meta_TOSR_value)) 
                                             >> 5U))] 
                                      >> (0x1fU & ((IData)(3U) 
                                                   * (IData)(vlSelf->RAS__DOT__s3_meta_TOSR_value)))))
                                : 0U) : ((0x2fU >= 
                                          (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->RAS__DOT__s3_meta_ssp))))
                                          ? (IData)(
                                                    (vlSelf->RAS__DOT__RASStack__DOT___GEN_5 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(3U) 
                                                         * (IData)(vlSelf->RAS__DOT__s3_meta_ssp)))))
                                          : 0U)))));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_15 = ((IData)(vlSelf->RAS__DOT__RASStack__DOT___writeEntry_ctr_T_7) 
                                                & (7U 
                                                   != (IData)(vlSelf->RAS__DOT__RASStack__DOT__sctr)));
    vlSelf->RAS__DOT__RASStack__DOT___writeEntry_ctr_T_9 
        = ((IData)(vlSelf->RAS__DOT__RASStack__DOT___writeEntry_ctr_T_7) 
           & (7U != (7U & ((IData)(vlSelf->RAS__DOT__RASStack__DOT__writeBypassValid)
                            ? (IData)(vlSelf->RAS__DOT__RASStack__DOT__writeBypassEntry_ctr)
                            : ((IData)(vlSelf->RAS__DOT__RASStack__DOT__topEntry_inflightValid)
                                ? ((0x5fU >= (0x7fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value))))
                                    ? (((0U == (0x1fU 
                                                & ((IData)(3U) 
                                                   * (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value))))
                                         ? 0U : (vlSelf->RAS__DOT__RASStack__DOT___GEN_2[
                                                 (((IData)(2U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value)))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value)))))) 
                                       | (vlSelf->RAS__DOT__RASStack__DOT___GEN_2[
                                          (3U & (((IData)(3U) 
                                                  * (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value)) 
                                                 >> 5U))] 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSR_value)))))
                                    : 0U) : ((0x2fU 
                                              >= (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->RAS__DOT__RASStack__DOT__ssp))))
                                              ? (IData)(
                                                        (vlSelf->RAS__DOT__RASStack__DOT___GEN_5 
                                                         >> 
                                                         (0x3fU 
                                                          & ((IData)(3U) 
                                                             * (IData)(vlSelf->RAS__DOT__RASStack__DOT__ssp)))))
                                              : 0U))))));
    vlSelf->RAS__DOT__RASStack__DOT___GEN_11 = ((IData)(vlSelf->RAS__DOT__RASStack__DOT___writeEntry_ctr_T_1) 
                                                & (7U 
                                                   != (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_sctr)));
    vlSelf->RAS__DOT__RASStack__DOT___writeEntry_ctr_T_6 
        = (((IData)(vlSelf->RAS__DOT__RASStack__DOT___writeEntry_ctr_T_1) 
            & (7U != (7U & ((IData)(vlSelf->RAS__DOT__RASStack__DOT__redirectTopEntry_inflightValid)
                             ? ((0x5fU >= (0x7fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value))))
                                 ? (((0U == (0x1fU 
                                             & ((IData)(3U) 
                                                * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value))))
                                      ? 0U : (vlSelf->RAS__DOT__RASStack__DOT___GEN_2[
                                              (((IData)(2U) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value)))))) 
                                    | (vlSelf->RAS__DOT__RASStack__DOT___GEN_2[
                                       (3U & (((IData)(3U) 
                                               * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value)) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value)))))
                                 : 0U) : ((0x2fU >= 
                                           (0x3fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp))))
                                           ? (IData)(
                                                     (vlSelf->RAS__DOT__RASStack__DOT___GEN_5 
                                                      >> 
                                                      (0x3fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp)))))
                                           : 0U)))))
            ? (IData)(vlSelf->RAS__DOT__RASStack__DOT___sctr_T_12)
            : 0U);
    vlSelf->RAS__DOT___RASStack_io_NOS_value = vlSelf->RAS__DOT__RASStack__DOT__io_NOS_value;
    vlSelf->RAS__DOT__RASStack__DOT___GEN_19 = (((IData)(vlSelf->RAS__DOT__RASStack__DOT__topNos_flag) 
                                                 ^ (IData)(vlSelf->RAS__DOT__RASStack__DOT__BOS_flag)) 
                                                ^ (IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_18));
    vlSelf->RAS__DOT__RASStack__DOT__inflightValid_4 
        = ((IData)(vlSelf->RAS__DOT__RASStack__DOT___GEN_19) 
           & (((IData)(vlSelf->RAS__DOT__RASStack__DOT__topNos_flag) 
               ^ (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSW_flag)) 
              ^ ((IData)(vlSelf->RAS__DOT__RASStack__DOT__topNos_value) 
                 < (IData)(vlSelf->RAS__DOT__RASStack__DOT__TOSW_value))));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
    Vtop___024root___initial__TOP__5(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__2(vlSelf);
    Vtop___024root___settle__TOP__8(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_reset_vector = VL_RAND_RESET_Q(36);
    vlSelf->io_in_bits_s0_pc_0 = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_s0_pc_1 = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_s0_pc_2 = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_s0_pc_3 = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_jalr_target = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_offsets_0 = VL_RAND_RESET_I(4);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_offsets_1 = VL_RAND_RESET_I(4);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_0_hit = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_jalr_target = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_offsets_0 = VL_RAND_RESET_I(4);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_offsets_1 = VL_RAND_RESET_I(4);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_1_hit = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_jalr_target = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_offsets_0 = VL_RAND_RESET_I(4);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_offsets_1 = VL_RAND_RESET_I(4);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_is_call = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_is_ret = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_2_hit = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_jalr_target = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_offsets_0 = VL_RAND_RESET_I(4);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_offsets_1 = VL_RAND_RESET_I(4);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s2_full_pred_3_hit = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_jalr_target = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_multiHit = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_0_hit = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_jalr_target = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_multiHit = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_1_hit = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_jalr_target = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_multiHit = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_is_call = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_is_ret = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_2_hit = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_jalr_target = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_offsets_0 = VL_RAND_RESET_I(4);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_offsets_1 = VL_RAND_RESET_I(4);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_multiHit = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_s3_full_pred_3_hit = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_isCall = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_isRet = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_valid = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset = VL_RAND_RESET_I(4);
    vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower = VL_RAND_RESET_I(12);
    vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat = VL_RAND_RESET_I(2);
    vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset = VL_RAND_RESET_I(4);
    vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower = VL_RAND_RESET_I(20);
    vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat = VL_RAND_RESET_I(2);
    vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr = VL_RAND_RESET_I(4);
    vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_carry = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0 = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_pc_0 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s2_pc_1 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s2_pc_2 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s2_pc_3 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s2_full_pred_0_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_0_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_0_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_0_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_0_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s2_full_pred_0_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s2_full_pred_0_offsets_0 = VL_RAND_RESET_I(4);
    vlSelf->io_out_s2_full_pred_0_offsets_1 = VL_RAND_RESET_I(4);
    vlSelf->io_out_s2_full_pred_0_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s2_full_pred_0_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_0_hit = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_1_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_1_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_1_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_1_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_1_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s2_full_pred_1_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s2_full_pred_1_offsets_0 = VL_RAND_RESET_I(4);
    vlSelf->io_out_s2_full_pred_1_offsets_1 = VL_RAND_RESET_I(4);
    vlSelf->io_out_s2_full_pred_1_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s2_full_pred_1_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_1_hit = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_2_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_2_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_2_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_2_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_2_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s2_full_pred_2_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s2_full_pred_2_offsets_0 = VL_RAND_RESET_I(4);
    vlSelf->io_out_s2_full_pred_2_offsets_1 = VL_RAND_RESET_I(4);
    vlSelf->io_out_s2_full_pred_2_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s2_full_pred_2_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_2_hit = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_3_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_3_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_3_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_3_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_3_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s2_full_pred_3_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s2_full_pred_3_offsets_0 = VL_RAND_RESET_I(4);
    vlSelf->io_out_s2_full_pred_3_offsets_1 = VL_RAND_RESET_I(4);
    vlSelf->io_out_s2_full_pred_3_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s2_full_pred_3_fallThroughErr = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_3_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->io_out_s2_full_pred_3_hit = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_pc_0 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s3_pc_1 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s3_pc_2 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s3_pc_3 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s3_full_pred_0_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_0_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_0_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_0_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_0_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s3_full_pred_0_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s3_full_pred_0_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s3_full_pred_0_fallThroughErr = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_0_multiHit = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_0_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_0_hit = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_1_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_1_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_1_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_1_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_1_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s3_full_pred_1_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s3_full_pred_1_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s3_full_pred_1_fallThroughErr = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_1_multiHit = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_1_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_1_hit = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_2_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_2_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_2_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_2_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_2_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s3_full_pred_2_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s3_full_pred_2_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s3_full_pred_2_fallThroughErr = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_2_multiHit = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_2_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_2_hit = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_3_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_3_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_3_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_3_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_3_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s3_full_pred_3_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s3_full_pred_3_offsets_0 = VL_RAND_RESET_I(4);
    vlSelf->io_out_s3_full_pred_3_offsets_1 = VL_RAND_RESET_I(4);
    vlSelf->io_out_s3_full_pred_3_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->io_out_s3_full_pred_3_fallThroughErr = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_3_multiHit = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_3_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->io_out_s3_full_pred_3_hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(260, vlSelf->io_out_last_stage_meta);
    vlSelf->io_out_last_stage_spec_info_ssp = VL_RAND_RESET_I(4);
    vlSelf->io_out_last_stage_spec_info_sctr = VL_RAND_RESET_I(3);
    vlSelf->io_out_last_stage_spec_info_TOSW_flag = VL_RAND_RESET_I(1);
    vlSelf->io_out_last_stage_spec_info_TOSW_value = VL_RAND_RESET_I(5);
    vlSelf->io_out_last_stage_spec_info_TOSR_flag = VL_RAND_RESET_I(1);
    vlSelf->io_out_last_stage_spec_info_TOSR_value = VL_RAND_RESET_I(5);
    vlSelf->io_out_last_stage_spec_info_NOS_flag = VL_RAND_RESET_I(1);
    vlSelf->io_out_last_stage_spec_info_NOS_value = VL_RAND_RESET_I(5);
    vlSelf->io_out_last_stage_spec_info_topAddr = VL_RAND_RESET_Q(41);
    vlSelf->io_out_last_stage_ftb_entry_isCall = VL_RAND_RESET_I(1);
    vlSelf->io_out_last_stage_ftb_entry_isRet = VL_RAND_RESET_I(1);
    vlSelf->io_out_last_stage_ftb_entry_isJalr = VL_RAND_RESET_I(1);
    vlSelf->io_out_last_stage_ftb_entry_valid = VL_RAND_RESET_I(1);
    vlSelf->io_out_last_stage_ftb_entry_brSlots_0_offset = VL_RAND_RESET_I(4);
    vlSelf->io_out_last_stage_ftb_entry_brSlots_0_sharing = VL_RAND_RESET_I(1);
    vlSelf->io_out_last_stage_ftb_entry_brSlots_0_valid = VL_RAND_RESET_I(1);
    vlSelf->io_out_last_stage_ftb_entry_brSlots_0_lower = VL_RAND_RESET_I(12);
    vlSelf->io_out_last_stage_ftb_entry_brSlots_0_tarStat = VL_RAND_RESET_I(2);
    vlSelf->io_out_last_stage_ftb_entry_tailSlot_offset = VL_RAND_RESET_I(4);
    vlSelf->io_out_last_stage_ftb_entry_tailSlot_sharing = VL_RAND_RESET_I(1);
    vlSelf->io_out_last_stage_ftb_entry_tailSlot_valid = VL_RAND_RESET_I(1);
    vlSelf->io_out_last_stage_ftb_entry_tailSlot_lower = VL_RAND_RESET_I(20);
    vlSelf->io_out_last_stage_ftb_entry_tailSlot_tarStat = VL_RAND_RESET_I(2);
    vlSelf->io_out_last_stage_ftb_entry_pftAddr = VL_RAND_RESET_I(4);
    vlSelf->io_out_last_stage_ftb_entry_carry = VL_RAND_RESET_I(1);
    vlSelf->io_out_last_stage_ftb_entry_last_may_be_rvi_call = VL_RAND_RESET_I(1);
    vlSelf->io_out_last_stage_ftb_entry_always_taken_0 = VL_RAND_RESET_I(1);
    vlSelf->io_out_last_stage_ftb_entry_always_taken_1 = VL_RAND_RESET_I(1);
    vlSelf->io_ctrl_ras_enable = VL_RAND_RESET_I(1);
    vlSelf->io_s0_fire_0 = VL_RAND_RESET_I(1);
    vlSelf->io_s0_fire_1 = VL_RAND_RESET_I(1);
    vlSelf->io_s0_fire_2 = VL_RAND_RESET_I(1);
    vlSelf->io_s0_fire_3 = VL_RAND_RESET_I(1);
    vlSelf->io_s1_fire_0 = VL_RAND_RESET_I(1);
    vlSelf->io_s1_fire_1 = VL_RAND_RESET_I(1);
    vlSelf->io_s1_fire_2 = VL_RAND_RESET_I(1);
    vlSelf->io_s1_fire_3 = VL_RAND_RESET_I(1);
    vlSelf->io_s2_fire_0 = VL_RAND_RESET_I(1);
    vlSelf->io_s2_fire_1 = VL_RAND_RESET_I(1);
    vlSelf->io_s2_fire_2 = VL_RAND_RESET_I(1);
    vlSelf->io_s2_fire_3 = VL_RAND_RESET_I(1);
    vlSelf->io_s3_fire_2 = VL_RAND_RESET_I(1);
    vlSelf->io_s3_redirect_2 = VL_RAND_RESET_I(1);
    vlSelf->io_update_valid = VL_RAND_RESET_I(1);
    vlSelf->io_update_bits_ftb_entry_isCall = VL_RAND_RESET_I(1);
    vlSelf->io_update_bits_ftb_entry_isRet = VL_RAND_RESET_I(1);
    vlSelf->io_update_bits_ftb_entry_tailSlot_offset = VL_RAND_RESET_I(4);
    vlSelf->io_update_bits_ftb_entry_tailSlot_valid = VL_RAND_RESET_I(1);
    vlSelf->io_update_bits_cfi_idx_valid = VL_RAND_RESET_I(1);
    vlSelf->io_update_bits_cfi_idx_bits = VL_RAND_RESET_I(4);
    vlSelf->io_update_bits_jmp_taken = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(260, vlSelf->io_update_bits_meta);
    vlSelf->io_redirect_valid = VL_RAND_RESET_I(1);
    vlSelf->io_redirect_bits_level = VL_RAND_RESET_I(1);
    vlSelf->io_redirect_bits_cfiUpdate_pc = VL_RAND_RESET_Q(41);
    vlSelf->io_redirect_bits_cfiUpdate_pd_isRVC = VL_RAND_RESET_I(1);
    vlSelf->io_redirect_bits_cfiUpdate_pd_isCall = VL_RAND_RESET_I(1);
    vlSelf->io_redirect_bits_cfiUpdate_pd_isRet = VL_RAND_RESET_I(1);
    vlSelf->io_redirect_bits_cfiUpdate_ssp = VL_RAND_RESET_I(4);
    vlSelf->io_redirect_bits_cfiUpdate_sctr = VL_RAND_RESET_I(3);
    vlSelf->io_redirect_bits_cfiUpdate_TOSW_flag = VL_RAND_RESET_I(1);
    vlSelf->io_redirect_bits_cfiUpdate_TOSW_value = VL_RAND_RESET_I(5);
    vlSelf->io_redirect_bits_cfiUpdate_TOSR_flag = VL_RAND_RESET_I(1);
    vlSelf->io_redirect_bits_cfiUpdate_TOSR_value = VL_RAND_RESET_I(5);
    vlSelf->io_redirect_bits_cfiUpdate_NOS_flag = VL_RAND_RESET_I(1);
    vlSelf->io_redirect_bits_cfiUpdate_NOS_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_reset_vector = VL_RAND_RESET_Q(36);
    vlSelf->RAS__DOT__io_in_bits_s0_pc_0 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_s0_pc_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_s0_pc_2 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_s0_pc_3 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_jalr_target = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_offsets_0 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_offsets_1 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_0_hit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_jalr_target = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_offsets_0 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_offsets_1 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_1_hit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_jalr_target = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_offsets_0 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_offsets_1 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_is_call = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_is_ret = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_2_hit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_jalr_target = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_offsets_0 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_offsets_1 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s2_full_pred_3_hit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_jalr_target = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_multiHit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_0_hit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_jalr_target = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_multiHit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_1_hit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_jalr_target = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_multiHit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_is_call = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_is_ret = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_2_hit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_jalr_target = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_offsets_0 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_offsets_1 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_multiHit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_s3_full_pred_3_hit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_isCall = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_isRet = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_valid = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower = VL_RAND_RESET_I(12);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat = VL_RAND_RESET_I(2);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower = VL_RAND_RESET_I(20);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat = VL_RAND_RESET_I(2);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_carry = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_pc_0 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s2_pc_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s2_pc_2 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s2_pc_3 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s2_full_pred_0_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_0_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_0_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_0_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_0_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s2_full_pred_0_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s2_full_pred_0_offsets_0 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_out_s2_full_pred_0_offsets_1 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_out_s2_full_pred_0_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s2_full_pred_0_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_0_hit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_1_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_1_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_1_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_1_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_1_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s2_full_pred_1_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s2_full_pred_1_offsets_0 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_out_s2_full_pred_1_offsets_1 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_out_s2_full_pred_1_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s2_full_pred_1_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_1_hit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_2_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_2_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_2_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_2_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_2_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s2_full_pred_2_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s2_full_pred_2_offsets_0 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_out_s2_full_pred_2_offsets_1 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_out_s2_full_pred_2_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s2_full_pred_2_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_2_hit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_offsets_0 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_offsets_1 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_fallThroughErr = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s2_full_pred_3_hit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_pc_0 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s3_pc_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s3_pc_2 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s3_pc_3 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s3_full_pred_0_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_0_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_0_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_0_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_0_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s3_full_pred_0_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s3_full_pred_0_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s3_full_pred_0_fallThroughErr = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_0_multiHit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_0_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_0_hit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_1_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_1_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_1_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_1_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_1_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s3_full_pred_1_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s3_full_pred_1_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s3_full_pred_1_fallThroughErr = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_1_multiHit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_1_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_1_hit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_2_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_2_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_2_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_2_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_2_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s3_full_pred_2_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s3_full_pred_2_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s3_full_pred_2_fallThroughErr = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_2_multiHit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_2_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_2_hit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_br_taken_mask_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_br_taken_mask_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_slot_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_slot_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_targets_0 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_targets_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_offsets_0 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_offsets_1 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_fallThroughAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_fallThroughErr = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_multiHit = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_is_br_sharing = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_s3_full_pred_3_hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(260, vlSelf->RAS__DOT__io_out_last_stage_meta);
    vlSelf->RAS__DOT__io_out_last_stage_spec_info_ssp = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_out_last_stage_spec_info_sctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__io_out_last_stage_spec_info_TOSW_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_last_stage_spec_info_TOSW_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__io_out_last_stage_spec_info_TOSR_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_last_stage_spec_info_TOSR_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__io_out_last_stage_spec_info_NOS_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_last_stage_spec_info_NOS_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__io_out_last_stage_spec_info_topAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_isCall = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_isRet = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_isJalr = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_valid = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_brSlots_0_offset = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_brSlots_0_sharing = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_brSlots_0_valid = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower = VL_RAND_RESET_I(12);
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_brSlots_0_tarStat = VL_RAND_RESET_I(2);
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_tailSlot_offset = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_tailSlot_sharing = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_tailSlot_valid = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_tailSlot_lower = VL_RAND_RESET_I(20);
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_tailSlot_tarStat = VL_RAND_RESET_I(2);
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_pftAddr = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_carry = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_last_may_be_rvi_call = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_always_taken_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_out_last_stage_ftb_entry_always_taken_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_ctrl_ras_enable = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_s0_fire_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_s0_fire_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_s0_fire_2 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_s0_fire_3 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_s1_fire_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_s1_fire_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_s1_fire_2 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_s1_fire_3 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_s2_fire_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_s2_fire_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_s2_fire_2 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_s2_fire_3 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_s3_fire_2 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_s3_redirect_2 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_update_valid = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_update_bits_ftb_entry_isCall = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_update_bits_ftb_entry_isRet = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_update_bits_ftb_entry_tailSlot_offset = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_update_bits_ftb_entry_tailSlot_valid = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_update_bits_cfi_idx_valid = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_update_bits_cfi_idx_bits = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_update_bits_jmp_taken = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(260, vlSelf->RAS__DOT__io_update_bits_meta);
    vlSelf->RAS__DOT__io_redirect_valid = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_redirect_bits_level = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_pc = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_pd_isRVC = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_pd_isCall = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_pd_isRet = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_ssp = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_sctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_TOSW_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_TOSW_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_TOSR_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_TOSR_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_NOS_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__io_redirect_bits_cfiUpdate_NOS_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT___RASStack_io_spec_pop_addr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT___RASStack_io_ssp = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT___RASStack_io_sctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT___RASStack_io_TOSR_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT___RASStack_io_TOSR_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT___RASStack_io_TOSW_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT___RASStack_io_TOSW_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT___RASStack_io_NOS_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT___RASStack_io_NOS_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT___reset_vector_pipMod_io_out_bits = VL_RAND_RESET_Q(36);
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_2 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_1_2 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_2_2 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_3_2 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_2 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_1_2 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_2_2 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_3_2 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__s1_pc_dup_0 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__s1_pc_dup_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__s1_pc_dup_2 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__s1_pc_dup_3 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__s2_pc_seg_0_value = VL_RAND_RESET_I(17);
    vlSelf->RAS__DOT__s2_pc_seg_1_value = VL_RAND_RESET_I(12);
    vlSelf->RAS__DOT__s2_pc_seg_2_value = VL_RAND_RESET_I(12);
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_s2_pc_addr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__s2_pc_seg_0_value_1 = VL_RAND_RESET_I(17);
    vlSelf->RAS__DOT__s2_pc_seg_1_value_1 = VL_RAND_RESET_I(12);
    vlSelf->RAS__DOT__s2_pc_seg_2_value_1 = VL_RAND_RESET_I(12);
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_1_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_1_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_s2_pc_addr_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__s2_pc_seg_0_value_2 = VL_RAND_RESET_I(17);
    vlSelf->RAS__DOT__s2_pc_seg_1_value_2 = VL_RAND_RESET_I(12);
    vlSelf->RAS__DOT__s2_pc_seg_2_value_2 = VL_RAND_RESET_I(12);
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_2_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_2_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_s2_pc_addr_2 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__s2_pc_seg_0_value_3 = VL_RAND_RESET_I(17);
    vlSelf->RAS__DOT__s2_pc_seg_1_value_3 = VL_RAND_RESET_I(12);
    vlSelf->RAS__DOT__s2_pc_seg_2_value_3 = VL_RAND_RESET_I(12);
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_3_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_modified_debug_s2_pc_modified_3_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_s2_pc_addr_3 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__s3_pc_seg_0_value = VL_RAND_RESET_I(17);
    vlSelf->RAS__DOT__s3_pc_seg_1_value = VL_RAND_RESET_I(12);
    vlSelf->RAS__DOT__s3_pc_seg_2_value = VL_RAND_RESET_I(12);
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_s3_pc_addr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__s3_pc_seg_0_value_1 = VL_RAND_RESET_I(17);
    vlSelf->RAS__DOT__s3_pc_seg_1_value_1 = VL_RAND_RESET_I(12);
    vlSelf->RAS__DOT__s3_pc_seg_2_value_1 = VL_RAND_RESET_I(12);
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_1_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_1_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_s3_pc_addr_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__s3_pc_seg_0_value_2 = VL_RAND_RESET_I(17);
    vlSelf->RAS__DOT__s3_pc_seg_1_value_2 = VL_RAND_RESET_I(12);
    vlSelf->RAS__DOT__s3_pc_seg_2_value_2 = VL_RAND_RESET_I(12);
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_2_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_2_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_s3_pc_addr_2 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__s3_pc_seg_0_value_3 = VL_RAND_RESET_I(17);
    vlSelf->RAS__DOT__s3_pc_seg_1_value_3 = VL_RAND_RESET_I(12);
    vlSelf->RAS__DOT__s3_pc_seg_2_value_3 = VL_RAND_RESET_I(12);
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_3_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_modified_debug_s3_pc_modified_3_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__debug_s3_pc_addr_3 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__REG = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__REG_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT___s2_spec_new_addr_T_1 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT___s2_spec_pop_T_8 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT___s2_spec_pop_T_9 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__s2_spec_push = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__s2_spec_pop = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__s3_top = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__s3_spec_new_addr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__s3_pushed_in_s2 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__s3_popped_in_s2 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT___s3_pop_T_8 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT___s3_pop_T_9 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__s3_push = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__s3_pop = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__s3_meta_ssp = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__s3_meta_sctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__s3_meta_TOSW_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__s3_meta_TOSW_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__s3_meta_TOSR_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__s3_meta_TOSR_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__s3_meta_NOS_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__s3_meta_NOS_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__redirect_next_valid_last_REG = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__redirect_next_bits_r_level = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_pc = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_pd_isRVC = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_pd_isCall = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_pd_isRet = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_sctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT___GEN_2 = VL_RAND_RESET_Q(41);
    for (int __Vi0=0; __Vi0<22; ++__Vi0) {
        vlSelf->RAS__DOT___RANDOM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT____Vcellinp__RASStack__io_redirect_isRet = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT____Vcellinp__RASStack__io_redirect_isCall = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT____Vcellinp__RASStack__io_commit_push_valid = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT____Vcellinp__RASStack__io_s3_missed_push = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT____Vcellinp__RASStack__io_s3_missed_pop = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT____Vcellinp__RASStack__io_s3_cancel = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__reset_vector_pipMod__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__reset_vector_pipMod__DOT__io_in_bits = VL_RAND_RESET_Q(36);
    vlSelf->RAS__DOT__reset_vector_pipMod__DOT__io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__reset_vector_pipMod__DOT__io_out_bits = VL_RAND_RESET_Q(36);
    vlSelf->RAS__DOT__reset_vector_pipMod__DOT__valid_REG = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__reset_vector_pipMod__DOT__data = VL_RAND_RESET_Q(36);
    vlSelf->RAS__DOT__reset_vector_pipMod__DOT__valid_REG_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__reset_vector_pipMod__DOT__data_1 = VL_RAND_RESET_Q(36);
    vlSelf->RAS__DOT__reset_vector_pipMod__DOT__valid_REG_2 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__reset_vector_pipMod__DOT__data_2 = VL_RAND_RESET_Q(36);
    vlSelf->RAS__DOT__reset_vector_pipMod__DOT__valid_REG_3 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__reset_vector_pipMod__DOT__data_3 = VL_RAND_RESET_Q(36);
    vlSelf->RAS__DOT__reset_vector_pipMod__DOT__res_bits = VL_RAND_RESET_Q(36);
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->RAS__DOT__reset_vector_pipMod__DOT___RANDOM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->RAS__DOT__RASStack__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_spec_push_valid = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_spec_pop_valid = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_spec_push_addr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__io_s2_fire = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_fire = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_cancel = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_meta_ssp = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_meta_sctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_meta_TOSW_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_meta_TOSW_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_meta_TOSR_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_meta_TOSR_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_meta_NOS_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_meta_NOS_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_missed_pop = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_missed_push = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_s3_pushAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__io_spec_pop_addr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__io_commit_push_valid = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_commit_pop_valid = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_commit_meta_TOSW_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_commit_meta_TOSW_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__io_commit_meta_ssp = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_valid = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_isCall = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_isRet = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_meta_ssp = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_meta_sctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_meta_TOSW_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_meta_TOSW_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_meta_TOSR_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_meta_TOSR_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_meta_NOS_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_meta_NOS_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__io_redirect_callAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__io_ssp = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__RASStack__DOT__io_sctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__io_TOSR_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_TOSR_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__io_TOSW_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_TOSW_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__io_NOS_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__io_NOS_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_0_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_0_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_1_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_1_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_2_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_2_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_3_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_3_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_4_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_4_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_5_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_5_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_6_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_6_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_7_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_7_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_8_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_8_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_9_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_9_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_10_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_10_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_11_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_11_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_12_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_12_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_13_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_13_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_14_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_14_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_15_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__commit_stack_15_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_0_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_0_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_1_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_1_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_2_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_2_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_3_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_3_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_4_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_4_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_5_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_5_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_6_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_6_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_7_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_7_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_8_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_8_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_9_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_9_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_10_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_10_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_11_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_11_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_12_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_12_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_13_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_13_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_14_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_14_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_15_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_15_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_16_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_16_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_17_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_17_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_18_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_18_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_19_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_19_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_20_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_20_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_21_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_21_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_22_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_22_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_23_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_23_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_24_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_24_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_25_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_25_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_26_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_26_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_27_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_27_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_28_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_28_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_29_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_29_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_30_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_30_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_31_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__spec_queue_31_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_0_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_0_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_1_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_1_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_2_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_2_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_3_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_3_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_4_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_4_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_5_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_5_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_6_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_6_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_7_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_7_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_8_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_8_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_9_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_9_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_10_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_10_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_11_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_11_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_12_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_12_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_13_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_13_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_14_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_14_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_15_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_15_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_16_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_16_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_17_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_17_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_18_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_18_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_19_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_19_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_20_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_20_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_21_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_21_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_22_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_22_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_23_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_23_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_24_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_24_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_25_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_25_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_26_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_26_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_27_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_27_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_28_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_28_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_29_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_29_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_30_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_30_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_31_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__spec_nos_31_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__nsp = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__RASStack__DOT__ssp = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__RASStack__DOT__sctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__TOSR_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__TOSR_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__TOSW_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__TOSW_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__BOS_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__BOS_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__spec_overflowed = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__writeBypassEntry_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__writeBypassNos_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__writeBypassNos_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__writeBypassValid = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___realPush_T_4 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__topEntry_inflightValid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1312, vlSelf->RAS__DOT__RASStack__DOT___GEN_0);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_1 = VL_RAND_RESET_Q(41);
    VL_RAND_RESET_W(96, vlSelf->RAS__DOT__RASStack__DOT___GEN_2);
    VL_RAND_RESET_W(656, vlSelf->RAS__DOT__RASStack__DOT___GEN_3);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_4 = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_5 = VL_RAND_RESET_Q(48);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_6 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->RAS__DOT__RASStack__DOT___GEN_7);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_8 = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__topNos_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__topNos_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__differentFlag_15 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__compare_15 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__differentFlag_16 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__compare_16 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__redirectTopEntry_inflightValid = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__writeEntry_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT___writeEntry_ctr_T_1 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___sctr_T_12 = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT___writeEntry_ctr_T_7 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___sctr_T = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__timingTop_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__realWriteEntry_retAddr = VL_RAND_RESET_Q(41);
    vlSelf->RAS__DOT__RASStack__DOT__realWriteAddr_next_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__realNos_next_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__realNos_next_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__realPush_r = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__realPush_REG = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__realPush = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_10 = VL_RAND_RESET_I(6);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___sctr_T_16 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__RASStack__DOT___sctr_T_8 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_13 = VL_RAND_RESET_I(6);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_14 = VL_RAND_RESET_I(6);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___sctr_T_4 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__RASStack__DOT__writeBypassValidWire = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__differentFlag_10 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__compare_10 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__differentFlag_11 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__compare_11 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__s3TopEntry_inflightValid = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_17 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_19 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_21 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___s3_missPushEntry_ctr_T = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___s3_missPushEntry_ctr_T_2 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___sctr_T_10 = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__realWriteAddr_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT__realNos_flag = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__realNos_value = VL_RAND_RESET_I(5);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_22 = VL_RAND_RESET_I(6);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_23 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_24 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_25 = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT___commit_stack_ctr_T = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_26 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_27 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_28 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_29 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_30 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_31 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_32 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_33 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_34 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_35 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_36 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_37 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_38 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_39 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_40 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_41 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_42 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_43 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_44 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_45 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_46 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_47 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_48 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_49 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_50 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_51 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_52 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_53 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_54 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_55 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_56 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_57 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___nsp_T_2 = VL_RAND_RESET_I(4);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_58 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_59 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_60 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_61 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_62 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_63 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_64 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_65 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_66 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_67 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_68 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_69 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_70 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_71 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_72 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_73 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_74 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___commit_stack_ctr_T_2 = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT__inflightValid_8 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_75 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__inflightValid_6 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___GEN_76 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT__inflightValid_4 = VL_RAND_RESET_I(1);
    vlSelf->RAS__DOT__RASStack__DOT___BOS_new_ptr_T_11 = VL_RAND_RESET_I(6);
    vlSelf->RAS__DOT__RASStack__DOT___BOS_new_ptr_T_6 = VL_RAND_RESET_I(6);
    vlSelf->RAS__DOT__RASStack__DOT___BOS_new_ptr_T_1 = VL_RAND_RESET_I(6);
    vlSelf->RAS__DOT__RASStack__DOT___writeEntry_ctr_T_6 = VL_RAND_RESET_I(3);
    vlSelf->RAS__DOT__RASStack__DOT___writeEntry_ctr_T_9 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<78; ++__Vi0) {
        vlSelf->RAS__DOT__RASStack__DOT___RANDOM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vdly__RAS__DOT__RASStack__DOT__TOSR_value = VL_RAND_RESET_I(5);
}
