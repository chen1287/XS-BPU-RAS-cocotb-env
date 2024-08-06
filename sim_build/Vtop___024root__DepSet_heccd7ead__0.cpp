// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___ico_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___ico_sequent__TOP__3(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
        Vtop___024root___ico_sequent__TOP__2(vlSelf);
        Vtop___024root___ico_sequent__TOP__3(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/kurumi/XS-BPU-RAS-cocotb-env/hdl/RAS.sv", 58, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/kurumi/XS-BPU-RAS-cocotb-env/hdl/RAS.sv", 58, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/kurumi/XS-BPU-RAS-cocotb-env/hdl/RAS.sv", 58, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelfRef.io_reset_vector & 0ULL))) {
        Verilated::overWidthError("io_reset_vector");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_s0_pc_0 & 0ULL))) {
        Verilated::overWidthError("io_in_bits_s0_pc_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_s0_pc_1 & 0ULL))) {
        Verilated::overWidthError("io_in_bits_s0_pc_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_s0_pc_2 & 0ULL))) {
        Verilated::overWidthError("io_in_bits_s0_pc_2");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_s0_pc_3 & 0ULL))) {
        Verilated::overWidthError("io_in_bits_s0_pc_3");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_0_targets_0 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_0_targets_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_0_targets_1 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_0_targets_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_0_jalr_target 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_0_jalr_target");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_0_offsets_0 
                     & 0xf0U))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_0_offsets_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_0_offsets_1 
                     & 0xf0U))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_0_offsets_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_0_hit 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_0_hit");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_1_targets_0 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_1_targets_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_1_targets_1 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_1_targets_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_1_jalr_target 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_1_jalr_target");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_1_offsets_0 
                     & 0xf0U))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_1_offsets_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_1_offsets_1 
                     & 0xf0U))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_1_offsets_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_1_hit 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_1_hit");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_2_targets_0 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_2_targets_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_2_targets_1 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_2_targets_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_2_jalr_target 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_2_jalr_target");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_2_offsets_0 
                     & 0xf0U))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_2_offsets_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_2_offsets_1 
                     & 0xf0U))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_2_offsets_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_2_is_jalr 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_2_is_jalr");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_2_is_call 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_2_is_call");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_2_is_ret 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_2_is_ret");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_2_hit 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_2_hit");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_3_targets_0 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_3_targets_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_3_targets_1 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_3_targets_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_3_jalr_target 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_3_jalr_target");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_3_offsets_0 
                     & 0xf0U))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_3_offsets_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_3_offsets_1 
                     & 0xf0U))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_3_offsets_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_3_hit 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s2_full_pred_3_hit");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_0_targets_0 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_0_targets_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_0_targets_1 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_0_targets_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_0_jalr_target 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_0_jalr_target");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_0_hit 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_0_hit");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_1_targets_0 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_1_targets_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_1_targets_1 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_1_targets_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_1_jalr_target 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_1_jalr_target");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_1_hit 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_1_hit");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_2_targets_0 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_2_targets_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_2_targets_1 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_2_targets_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_2_jalr_target 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_2_jalr_target");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_2_is_jalr 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_2_is_jalr");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_2_is_call 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_2_is_call");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_2_is_ret 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_2_is_ret");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_2_hit 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_2_hit");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_3_targets_0 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_3_targets_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_3_targets_1 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_3_targets_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_3_jalr_target 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_3_jalr_target");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_3_offsets_0 
                     & 0xf0U))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_3_offsets_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_3_offsets_1 
                     & 0xf0U))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_3_offsets_1");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr 
                     & 0ULL))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_3_hit 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_s3_full_pred_3_hit");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_last_stage_ftb_entry_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_last_stage_ftb_entry_valid");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset 
                     & 0xf0U))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower 
                     & 0xf000U))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat 
                     & 0xfcU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset 
                     & 0xf0U))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower 
                     & 0xfff00000U))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat 
                     & 0xfcU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr 
                     & 0xf0U))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_last_stage_ftb_entry_carry 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_last_stage_ftb_entry_carry");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_last_stage_ftb_entry_isCall 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_last_stage_ftb_entry_isCall");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_last_stage_ftb_entry_isRet 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_last_stage_ftb_entry_isRet");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0");}
    if (VL_UNLIKELY((vlSelfRef.io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1");}
    if (VL_UNLIKELY((vlSelfRef.io_ctrl_ras_enable & 0xfeU))) {
        Verilated::overWidthError("io_ctrl_ras_enable");}
    if (VL_UNLIKELY((vlSelfRef.io_s0_fire_0 & 0xfeU))) {
        Verilated::overWidthError("io_s0_fire_0");}
    if (VL_UNLIKELY((vlSelfRef.io_s0_fire_1 & 0xfeU))) {
        Verilated::overWidthError("io_s0_fire_1");}
    if (VL_UNLIKELY((vlSelfRef.io_s0_fire_2 & 0xfeU))) {
        Verilated::overWidthError("io_s0_fire_2");}
    if (VL_UNLIKELY((vlSelfRef.io_s0_fire_3 & 0xfeU))) {
        Verilated::overWidthError("io_s0_fire_3");}
    if (VL_UNLIKELY((vlSelfRef.io_s1_fire_0 & 0xfeU))) {
        Verilated::overWidthError("io_s1_fire_0");}
    if (VL_UNLIKELY((vlSelfRef.io_s1_fire_1 & 0xfeU))) {
        Verilated::overWidthError("io_s1_fire_1");}
    if (VL_UNLIKELY((vlSelfRef.io_s1_fire_2 & 0xfeU))) {
        Verilated::overWidthError("io_s1_fire_2");}
    if (VL_UNLIKELY((vlSelfRef.io_s1_fire_3 & 0xfeU))) {
        Verilated::overWidthError("io_s1_fire_3");}
    if (VL_UNLIKELY((vlSelfRef.io_s2_fire_0 & 0xfeU))) {
        Verilated::overWidthError("io_s2_fire_0");}
    if (VL_UNLIKELY((vlSelfRef.io_s2_fire_1 & 0xfeU))) {
        Verilated::overWidthError("io_s2_fire_1");}
    if (VL_UNLIKELY((vlSelfRef.io_s2_fire_2 & 0xfeU))) {
        Verilated::overWidthError("io_s2_fire_2");}
    if (VL_UNLIKELY((vlSelfRef.io_s2_fire_3 & 0xfeU))) {
        Verilated::overWidthError("io_s2_fire_3");}
    if (VL_UNLIKELY((vlSelfRef.io_s3_fire_2 & 0xfeU))) {
        Verilated::overWidthError("io_s3_fire_2");}
    if (VL_UNLIKELY((vlSelfRef.io_s3_redirect_2 & 0xfeU))) {
        Verilated::overWidthError("io_s3_redirect_2");}
    if (VL_UNLIKELY((vlSelfRef.io_update_valid & 0xfeU))) {
        Verilated::overWidthError("io_update_valid");}
    if (VL_UNLIKELY((vlSelfRef.io_update_bits_ftb_entry_tailSlot_offset 
                     & 0xf0U))) {
        Verilated::overWidthError("io_update_bits_ftb_entry_tailSlot_offset");}
    if (VL_UNLIKELY((vlSelfRef.io_update_bits_ftb_entry_tailSlot_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("io_update_bits_ftb_entry_tailSlot_valid");}
    if (VL_UNLIKELY((vlSelfRef.io_update_bits_ftb_entry_isCall 
                     & 0xfeU))) {
        Verilated::overWidthError("io_update_bits_ftb_entry_isCall");}
    if (VL_UNLIKELY((vlSelfRef.io_update_bits_ftb_entry_isRet 
                     & 0xfeU))) {
        Verilated::overWidthError("io_update_bits_ftb_entry_isRet");}
    if (VL_UNLIKELY((vlSelfRef.io_update_bits_cfi_idx_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("io_update_bits_cfi_idx_valid");}
    if (VL_UNLIKELY((vlSelfRef.io_update_bits_cfi_idx_bits 
                     & 0xf0U))) {
        Verilated::overWidthError("io_update_bits_cfi_idx_bits");}
    if (VL_UNLIKELY((vlSelfRef.io_update_bits_jmp_taken 
                     & 0xfeU))) {
        Verilated::overWidthError("io_update_bits_jmp_taken");}
    if (VL_UNLIKELY((vlSelfRef.io_update_bits_meta[6U] 
                     & 0x80000000U))) {
        Verilated::overWidthError("io_update_bits_meta");}
    if (VL_UNLIKELY((vlSelfRef.io_redirect_valid & 0xfeU))) {
        Verilated::overWidthError("io_redirect_valid");}
    if (VL_UNLIKELY((vlSelfRef.io_redirect_bits_level 
                     & 0xfeU))) {
        Verilated::overWidthError("io_redirect_bits_level");}
    if (VL_UNLIKELY((vlSelfRef.io_redirect_bits_cfiUpdate_pc 
                     & 0ULL))) {
        Verilated::overWidthError("io_redirect_bits_cfiUpdate_pc");}
    if (VL_UNLIKELY((vlSelfRef.io_redirect_bits_cfiUpdate_pd_isRVC 
                     & 0xfeU))) {
        Verilated::overWidthError("io_redirect_bits_cfiUpdate_pd_isRVC");}
    if (VL_UNLIKELY((vlSelfRef.io_redirect_bits_cfiUpdate_pd_isCall 
                     & 0xfeU))) {
        Verilated::overWidthError("io_redirect_bits_cfiUpdate_pd_isCall");}
    if (VL_UNLIKELY((vlSelfRef.io_redirect_bits_cfiUpdate_pd_isRet 
                     & 0xfeU))) {
        Verilated::overWidthError("io_redirect_bits_cfiUpdate_pd_isRet");}
    if (VL_UNLIKELY((vlSelfRef.io_redirect_bits_cfiUpdate_ssp 
                     & 0xf0U))) {
        Verilated::overWidthError("io_redirect_bits_cfiUpdate_ssp");}
    if (VL_UNLIKELY((vlSelfRef.io_redirect_bits_cfiUpdate_sctr 
                     & 0xfcU))) {
        Verilated::overWidthError("io_redirect_bits_cfiUpdate_sctr");}
    if (VL_UNLIKELY((vlSelfRef.io_redirect_bits_cfiUpdate_TOSW_flag 
                     & 0xfeU))) {
        Verilated::overWidthError("io_redirect_bits_cfiUpdate_TOSW_flag");}
    if (VL_UNLIKELY((vlSelfRef.io_redirect_bits_cfiUpdate_TOSW_value 
                     & 0xe0U))) {
        Verilated::overWidthError("io_redirect_bits_cfiUpdate_TOSW_value");}
    if (VL_UNLIKELY((vlSelfRef.io_redirect_bits_cfiUpdate_TOSR_flag 
                     & 0xfeU))) {
        Verilated::overWidthError("io_redirect_bits_cfiUpdate_TOSR_flag");}
    if (VL_UNLIKELY((vlSelfRef.io_redirect_bits_cfiUpdate_TOSR_value 
                     & 0xe0U))) {
        Verilated::overWidthError("io_redirect_bits_cfiUpdate_TOSR_value");}
    if (VL_UNLIKELY((vlSelfRef.io_redirect_bits_cfiUpdate_NOS_flag 
                     & 0xfeU))) {
        Verilated::overWidthError("io_redirect_bits_cfiUpdate_NOS_flag");}
    if (VL_UNLIKELY((vlSelfRef.io_redirect_bits_cfiUpdate_NOS_value 
                     & 0xe0U))) {
        Verilated::overWidthError("io_redirect_bits_cfiUpdate_NOS_value");}
}
#endif  // VL_DEBUG
