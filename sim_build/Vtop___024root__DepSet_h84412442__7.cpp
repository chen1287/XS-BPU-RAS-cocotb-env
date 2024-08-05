// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_flag = vlSelfRef.__Vdly__RAS__DOT__RASStack__DOT__TOSR_flag;
    vlSelfRef.RAS__DOT__RASStack__DOT__TOSW_value = vlSelfRef.__Vdly__RAS__DOT__RASStack__DOT__TOSW_value;
    vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value = vlSelfRef.__Vdly__RAS__DOT__RASStack__DOT__TOSR_value;
    vlSelfRef.RAS__DOT___RASStack_io_spec_pop_addr 
        = vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr;
    vlSelfRef.RAS__DOT___RASStack_io_ssp = vlSelfRef.RAS__DOT__RASStack__DOT__ssp;
    vlSelfRef.RAS__DOT___RASStack_io_sctr = vlSelfRef.RAS__DOT__RASStack__DOT__sctr;
    vlSelfRef.RAS__DOT___RASStack_io_TOSW_flag = vlSelfRef.RAS__DOT__RASStack__DOT__TOSW_flag;
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_flag) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSR_flag))) {
        ++(vlSymsp->__Vcoverage[7393]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSR_flag 
            = vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_flag;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSR_flag 
        = vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_flag;
    vlSelfRef.RAS__DOT___RASStack_io_TOSR_flag = vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_flag;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSW_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[7400]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSW_value 
            = ((0x1eU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSW_value)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSW_value)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSW_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[7401]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSW_value 
            = ((0x1dU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSW_value)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSW_value)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSW_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[7402]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSW_value 
            = ((0x1bU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSW_value)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSW_value)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSW_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[7403]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSW_value 
            = ((0x17U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSW_value)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSW_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSW_value) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[7404]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSW_value 
            = ((0xfU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSW_value)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSW_value)));
    }
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_19 = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSW_flag) 
                                                   << 5U) 
                                                  | (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSW_value));
    vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSW_value 
        = vlSelfRef.RAS__DOT__RASStack__DOT__TOSW_value;
    vlSelfRef.RAS__DOT___RASStack_io_TOSW_value = vlSelfRef.RAS__DOT__RASStack__DOT__TOSW_value;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[7394]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSR_value 
            = ((0x1eU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSR_value)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[7395]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSR_value 
            = ((0x1dU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSR_value)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[7396]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSR_value 
            = ((0x1bU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSR_value)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[7397]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSR_value 
            = ((0x17U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSR_value)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[7398]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSR_value 
            = ((0xfU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__TOSR_value)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value)));
    }
    vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSR_value 
        = vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value;
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_1 = ((0x51fU 
                                                  >= 
                                                  (0x7ffU 
                                                   & ((IData)(0x29U) 
                                                      * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value))))
                                                  ? 
                                                 (0x1ffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[
                                                                      (((IData)(0x28U) 
                                                                        + 
                                                                        (0x7ffU 
                                                                         & ((IData)(0x29U) 
                                                                            * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value)))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x29U) 
                                                            * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value))))
                                                        ? 0x20U
                                                        : 
                                                       ((IData)(0x40U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x29U) 
                                                            * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value)))))) 
                                                     | (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x29U) 
                                                              * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value))))
                                                          ? 0ULL
                                                          : 
                                                         ((QData)((IData)(
                                                                          vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[
                                                                          (((IData)(0x1fU) 
                                                                            + 
                                                                            (0x7ffU 
                                                                             & ((IData)(0x29U) 
                                                                                * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value)))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x29U) 
                                                               * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value)))))) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[
                                                                           (0x3fU 
                                                                            & (((IData)(0x29U) 
                                                                                * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value)) 
                                                                               >> 5U))])) 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x29U) 
                                                               * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value)))))))
                                                  : 0ULL);
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_8 = ((0x9fU 
                                                  >= 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value))))
                                                  ? 
                                                 (0x1fU 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(5U) 
                                                           * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value))))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.RAS__DOT__RASStack__DOT___GEN_7[
                                                       (((IData)(4U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(5U) 
                                                             * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value)))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(5U) 
                                                            * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value)))))) 
                                                     | (vlSelfRef.RAS__DOT__RASStack__DOT___GEN_7[
                                                        (7U 
                                                         & (((IData)(5U) 
                                                             * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value)) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(5U) 
                                                            * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value))))))
                                                  : 0U);
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN = ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value) 
                                               >= (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__BOS_value));
    vlSelfRef.RAS__DOT___RASStack_io_TOSR_value = vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value;
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSR_flag) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_flag))) {
        ++(vlSymsp->__Vcoverage[4820]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_flag 
            = vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSR_flag;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_80 = (0x3fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_19)));
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSW_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[4827]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value 
            = ((0x1eU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSW_value)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSW_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[4828]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value 
            = ((0x1dU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSW_value)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSW_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[4829]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value 
            = ((0x1bU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSW_value)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSW_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[4830]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value 
            = ((0x17U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSW_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSW_value) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[4831]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value 
            = ((0xfU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSW_value)));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSR_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[4821]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value 
            = ((0x1eU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSR_value)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSR_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[4822]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value 
            = ((0x1dU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSR_value)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSR_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[4823]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value 
            = ((0x1bU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSR_value)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSR_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[4824]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value 
            = ((0x17U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSR_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSR_value) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[4825]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value 
            = ((0xfU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSR_value)));
    }
    vlSelfRef.RAS__DOT__RASStack__DOT__topEntry_inflightValid 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_flag) 
            ^ ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__BOS_flag) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN))) 
           & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_flag) 
              ^ ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSW_flag) 
                 ^ ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value) 
                    < (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSW_value)))));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_21 = ((IData)(vlSelfRef.RAS__DOT__s2_spec_push) 
                                                  & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_80) 
                                                     == (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_20)));
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__topEntry_inflightValid) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__topEntry_inflightValid))) {
        ++(vlSymsp->__Vcoverage[7468]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__topEntry_inflightValid 
            = vlSelfRef.RAS__DOT__RASStack__DOT__topEntry_inflightValid;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_13 = ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_value) 
                                                  >= (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__BOS_value));
    vlSelfRef.RAS__DOT__RASStack__DOT__differentFlag_15 
        = ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__BOS_flag) 
           ^ (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_flag));
    vlSelfRef.RAS__DOT__RASStack__DOT__compare_15 = 
        ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value) 
         < (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__BOS_value));
    vlSelfRef.RAS__DOT____VdfgRegularize_h17404982_6_0 
        = ((~ (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_level)) 
           & (IData)(vlSelfRef.RAS__DOT__redirect_next_valid_last_r));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_17 = ((IData)(vlSelfRef.RAS__DOT__s3_meta_NOS_value) 
                                                  >= (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__BOS_value));
    vlSelfRef.RAS__DOT__RASStack__DOT__differentFlag_10 
        = ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__BOS_flag) 
           ^ (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_flag));
    vlSelfRef.RAS__DOT__RASStack__DOT__compare_10 = 
        ((IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value) 
         < (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__BOS_value));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_23 = ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_78) 
                                                  == (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_20));
    if (vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassValid) {
        vlSelfRef.RAS__DOT___RASStack_io_NOS_flag = 
            (1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassNos_flag));
        vlSelfRef.RAS__DOT___RASStack_io_NOS_value 
            = vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassNos_value;
    } else {
        vlSelfRef.RAS__DOT___RASStack_io_NOS_flag = 
            (1U & (vlSelfRef.RAS__DOT__RASStack__DOT___GEN_6 
                   >> (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value)));
        vlSelfRef.RAS__DOT___RASStack_io_NOS_value 
            = vlSelfRef.RAS__DOT__RASStack__DOT___GEN_8;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT___writeEntry_ctr_T_7 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassValid)
             ? vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr
             : ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__topEntry_inflightValid)
                 ? vlSelfRef.RAS__DOT__RASStack__DOT___GEN_1
                 : vlSelfRef.RAS__DOT__RASStack__DOT___GEN_4)) 
           == vlSelfRef.RAS__DOT___s2_spec_new_addr_T_1);
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_14 = ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_flag) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__BOS_flag) 
                                                   ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_13)));
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__differentFlag_15) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__differentFlag_15))) {
        ++(vlSymsp->__Vcoverage[7475]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__differentFlag_15 
            = vlSelfRef.RAS__DOT__RASStack__DOT__differentFlag_15;
    }
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__compare_15) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__compare_15))) {
        ++(vlSymsp->__Vcoverage[7476]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__compare_15 
            = vlSelfRef.RAS__DOT__RASStack__DOT__compare_15;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT__redirectTopEntry_inflightValid 
        = (((~ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__compare_15)) 
            ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__differentFlag_15)) 
           & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__differentFlag_16) 
              ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__compare_16)));
    vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_isRet 
        = ((IData)(vlSelfRef.RAS__DOT____VdfgRegularize_h17404982_6_0) 
           & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pd_isRet));
    vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_isCall 
        = ((IData)(vlSelfRef.RAS__DOT____VdfgRegularize_h17404982_6_0) 
           & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pd_isCall));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_18 = ((IData)(vlSelfRef.RAS__DOT__s3_meta_NOS_flag) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__BOS_flag) 
                                                   ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_17)));
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__differentFlag_10) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__differentFlag_10))) {
        ++(vlSymsp->__Vcoverage[7667]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__differentFlag_10 
            = vlSelfRef.RAS__DOT__RASStack__DOT__differentFlag_10;
    }
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__compare_10) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__compare_10))) {
        ++(vlSymsp->__Vcoverage[7668]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__compare_10 
            = vlSelfRef.RAS__DOT__RASStack__DOT__compare_10;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT__s3TopEntry_inflightValid 
        = (((~ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__compare_10)) 
            ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__differentFlag_10)) 
           & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__differentFlag_11) 
              ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__compare_11)));
    vlSelfRef.RAS__DOT__RASStack__DOT__io_NOS_flag 
        = vlSelfRef.RAS__DOT___RASStack_io_NOS_flag;
    vlSelfRef.RAS__DOT__RASStack__DOT__topNos_flag 
        = vlSelfRef.RAS__DOT___RASStack_io_NOS_flag;
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_15 = ((IData)(vlSelfRef.RAS__DOT___RASStack_io_NOS_value) 
                                                  >= (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__BOS_value));
    vlSelfRef.RAS__DOT__RASStack__DOT__io_NOS_value 
        = vlSelfRef.RAS__DOT___RASStack_io_NOS_value;
    vlSelfRef.RAS__DOT__RASStack__DOT__topNos_value 
        = vlSelfRef.RAS__DOT___RASStack_io_NOS_value;
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_12 = ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT___writeEntry_ctr_T_7) 
                                                  & (7U 
                                                     != (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__sctr)));
    vlSelfRef.RAS__DOT__RASStack__DOT__inflightValid_8 
        = ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_14) 
           & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_flag) 
              ^ ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_flag) 
                 ^ ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_value) 
                    < (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value)))));
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__redirectTopEntry_inflightValid) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__redirectTopEntry_inflightValid))) {
        ++(vlSymsp->__Vcoverage[7479]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__redirectTopEntry_inflightValid 
            = vlSelfRef.RAS__DOT__RASStack__DOT__redirectTopEntry_inflightValid;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT___writeEntry_ctr_T_1 
        = ((0x1ffffffffffULL & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__redirectTopEntry_inflightValid)
                                 ? ((0x51fU >= (0x7ffU 
                                                & ((IData)(0x29U) 
                                                   * (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value))))
                                     ? (((QData)((IData)(
                                                         vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[
                                                         (((IData)(0x28U) 
                                                           + 
                                                           (0x7ffU 
                                                            & ((IData)(0x29U) 
                                                               * (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value)))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x29U) 
                                                  * (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value)))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x29U) 
                                                 * (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x7ffU 
                                                                   & ((IData)(0x29U) 
                                                                      * (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value)))))) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[
                                                              (0x3fU 
                                                               & (((IData)(0x29U) 
                                                                   * (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value)) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value))))))
                                     : 0ULL) : ((0x28fU 
                                                 >= 
                                                 (0x3ffU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp))))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelfRef.RAS__DOT__RASStack__DOT___GEN_3[
                                                                  (((IData)(0x28U) 
                                                                    + 
                                                                    (0x3ffU 
                                                                     & ((IData)(0x29U) 
                                                                        * (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x29U) 
                                                        * (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x29U) 
                                                        * (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp)))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x29U) 
                                                          * (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp))))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(
                                                                      vlSelfRef.RAS__DOT__RASStack__DOT___GEN_3[
                                                                      (((IData)(0x1fU) 
                                                                        + 
                                                                        (0x3ffU 
                                                                         & ((IData)(0x29U) 
                                                                            * (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp)))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x29U) 
                                                           * (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp)))))) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.RAS__DOT__RASStack__DOT___GEN_3[
                                                                       (0x1fU 
                                                                        & (((IData)(0x29U) 
                                                                            * (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp)) 
                                                                           >> 5U))])) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x29U) 
                                                           * (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp))))))
                                                 : 0ULL))) 
           == vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr);
    vlSelfRef.RAS__DOT__RASStack__DOT__io_redirect_isRet 
        = vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_isRet;
    if (((IData)(vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_isRet) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_isRet))) {
        ++(vlSymsp->__Vcoverage[4768]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_isRet 
            = vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_isRet;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_11 = ((IData)(vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_isRet) 
                                                  & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__redirectTopEntry_inflightValid));
    vlSelfRef.RAS__DOT__RASStack__DOT__io_redirect_isCall 
        = vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_isCall;
    if (((IData)(vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_isCall) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_isCall))) {
        ++(vlSymsp->__Vcoverage[4767]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_isCall 
            = vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_isCall;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_9 = (1U 
                                                 & ((~ (IData)(vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_s3_missed_push)) 
                                                    | (IData)(vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_isCall)));
    vlSelfRef.RAS__DOT__RASStack__DOT___realPush_T_4 
        = ((IData)(vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_isCall) 
           & (IData)(vlSelfRef.RAS__DOT__redirect_next_valid_last_r));
    vlSelfRef.RAS__DOT__RASStack__DOT__inflightValid_6 
        = ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_18) 
           & ((IData)(vlSelfRef.RAS__DOT__s3_meta_NOS_flag) 
              ^ ((IData)(vlSelfRef.RAS__DOT__s3_meta_TOSW_flag) 
                 ^ ((IData)(vlSelfRef.RAS__DOT__s3_meta_NOS_value) 
                    < (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSW_value)))));
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__s3TopEntry_inflightValid) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3TopEntry_inflightValid))) {
        ++(vlSymsp->__Vcoverage[7671]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3TopEntry_inflightValid 
            = vlSelfRef.RAS__DOT__RASStack__DOT__s3TopEntry_inflightValid;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_77 = ((IData)(vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_s3_missed_pop) 
                                                  & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__s3TopEntry_inflightValid));
    vlSelfRef.RAS__DOT__RASStack__DOT___s3_missPushEntry_ctr_T 
        = ((0x1ffffffffffULL & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__s3TopEntry_inflightValid)
                                 ? ((0x51fU >= (0x7ffU 
                                                & ((IData)(0x29U) 
                                                   * (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value))))
                                     ? (((QData)((IData)(
                                                         vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[
                                                         (((IData)(0x28U) 
                                                           + 
                                                           (0x7ffU 
                                                            & ((IData)(0x29U) 
                                                               * (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value)))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x29U) 
                                                  * (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value)))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x29U) 
                                                 * (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x7ffU 
                                                                   & ((IData)(0x29U) 
                                                                      * (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value)))))) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[
                                                              (0x3fU 
                                                               & (((IData)(0x29U) 
                                                                   * (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value)) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value))))))
                                     : 0ULL) : ((0x28fU 
                                                 >= 
                                                 (0x3ffU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelfRef.RAS__DOT__s3_meta_ssp))))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelfRef.RAS__DOT__RASStack__DOT___GEN_3[
                                                                  (((IData)(0x28U) 
                                                                    + 
                                                                    (0x3ffU 
                                                                     & ((IData)(0x29U) 
                                                                        * (IData)(vlSelfRef.RAS__DOT__s3_meta_ssp)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x29U) 
                                                        * (IData)(vlSelfRef.RAS__DOT__s3_meta_ssp))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x29U) 
                                                        * (IData)(vlSelfRef.RAS__DOT__s3_meta_ssp)))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x29U) 
                                                          * (IData)(vlSelfRef.RAS__DOT__s3_meta_ssp))))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(
                                                                      vlSelfRef.RAS__DOT__RASStack__DOT___GEN_3[
                                                                      (((IData)(0x1fU) 
                                                                        + 
                                                                        (0x3ffU 
                                                                         & ((IData)(0x29U) 
                                                                            * (IData)(vlSelfRef.RAS__DOT__s3_meta_ssp)))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x29U) 
                                                           * (IData)(vlSelfRef.RAS__DOT__s3_meta_ssp)))))) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.RAS__DOT__RASStack__DOT___GEN_3[
                                                                       (0x1fU 
                                                                        & (((IData)(0x29U) 
                                                                            * (IData)(vlSelfRef.RAS__DOT__s3_meta_ssp)) 
                                                                           >> 5U))])) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x29U) 
                                                           * (IData)(vlSelfRef.RAS__DOT__s3_meta_ssp))))))
                                                 : 0ULL))) 
           == vlSelfRef.RAS__DOT__s3_spec_new_addr);
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_NOS_flag) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_flag))) {
        ++(vlSymsp->__Vcoverage[4832]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_flag 
            = vlSelfRef.RAS__DOT__RASStack__DOT__io_NOS_flag;
    }
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__topNos_flag) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__topNos_flag))) {
        ++(vlSymsp->__Vcoverage[7469]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__topNos_flag 
            = vlSelfRef.RAS__DOT__RASStack__DOT__topNos_flag;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_16 = ((IData)(vlSelfRef.RAS__DOT___RASStack_io_NOS_flag) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__BOS_flag) 
                                                   ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_15)));
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_NOS_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[4833]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value 
            = ((0x1eU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_NOS_value)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_NOS_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[4834]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value 
            = ((0x1dU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_NOS_value)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_NOS_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[4835]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value 
            = ((0x1bU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_NOS_value)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_NOS_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[4836]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value 
            = ((0x17U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_NOS_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_NOS_value) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[4837]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value 
            = ((0xfU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_NOS_value)));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__topNos_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__topNos_value)))) {
        ++(vlSymsp->__Vcoverage[7470]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__topNos_value 
            = ((0x1eU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__topNos_value)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__topNos_value)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__topNos_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__topNos_value)))) {
        ++(vlSymsp->__Vcoverage[7471]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__topNos_value 
            = ((0x1dU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__topNos_value)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__topNos_value)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__topNos_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__topNos_value)))) {
        ++(vlSymsp->__Vcoverage[7472]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__topNos_value 
            = ((0x1bU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__topNos_value)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__topNos_value)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__topNos_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__topNos_value)))) {
        ++(vlSymsp->__Vcoverage[7473]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__topNos_value 
            = ((0x17U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__topNos_value)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__topNos_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__topNos_value) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__topNos_value)))) {
        ++(vlSymsp->__Vcoverage[7474]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__topNos_value 
            = ((0xfU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__topNos_value)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__topNos_value)));
    }
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__inflightValid_8) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__inflightValid_8))) {
        ++(vlSymsp->__Vcoverage[7691]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__inflightValid_8 
            = vlSelfRef.RAS__DOT__RASStack__DOT__inflightValid_8;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_10 = vlSelfRef.RAS__DOT__RASStack__DOT___writeEntry_ctr_T_1;
    if (vlSelfRef.RAS__DOT__RASStack__DOT___GEN_9) {
        vlSelfRef.RAS__DOT__RASStack__DOT__realNos_flag 
            = vlSelfRef.RAS__DOT__RASStack__DOT__realNos_next_flag;
        vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_value 
            = vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_next_value;
        vlSelfRef.RAS__DOT__RASStack__DOT__realNos_value 
            = vlSelfRef.RAS__DOT__RASStack__DOT__realNos_next_value;
        vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
            = vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr;
    } else {
        vlSelfRef.RAS__DOT__RASStack__DOT__realNos_flag 
            = vlSelfRef.RAS__DOT__s3_meta_TOSR_flag;
        vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_value 
            = vlSelfRef.RAS__DOT__s3_meta_TOSW_value;
        vlSelfRef.RAS__DOT__RASStack__DOT__realNos_value 
            = vlSelfRef.RAS__DOT__s3_meta_TOSR_value;
        vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
            = vlSelfRef.RAS__DOT__s3_spec_new_addr;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_75 = ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT___realPush_T_4) 
                                                  & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_76) 
                                                     == (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_20)));
    vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassValidWire 
        = ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT___realPush_T_4) 
           | ((~ (IData)(vlSelfRef.RAS__DOT__redirect_next_valid_last_r)) 
              & ((IData)(vlSelfRef.io_s2_fire_2) ? (IData)(vlSelfRef.RAS__DOT__s2_spec_push)
                  : ((~ (IData)(vlSelfRef.io_s3_fire_2)) 
                     & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassValid)))));
    if (vlSelfRef.RAS__DOT__RASStack__DOT___realPush_T_4) {
        vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_ctr 
            = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT___writeEntry_ctr_T_1) 
                & (7U > (0xffU & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__redirectTopEntry_inflightValid)
                                   ? (((0U == (0x1fU 
                                               & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value), 3U)))
                                        ? 0U : (vlSelfRef.RAS__DOT__RASStack__DOT___GEN_2[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value), 3U))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value), 3U))))) 
                                      | (vlSelfRef.RAS__DOT__RASStack__DOT___GEN_2[
                                         (7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value), 3U) 
                                                >> 5U))] 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value), 3U))))
                                   : (((0U == (0x1fU 
                                               & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp), 3U)))
                                        ? 0U : (vlSelfRef.RAS__DOT__RASStack__DOT___GEN_5[
                                                (((IData)(7U) 
                                                  + 
                                                  (0x7fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp), 3U))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp), 3U))))) 
                                      | (vlSelfRef.RAS__DOT__RASStack__DOT___GEN_5[
                                         (3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp), 3U) 
                                                >> 5U))] 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp), 3U))))))))
                ? (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___sctr_T_12)
                : 0U);
        vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
            = vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr;
    } else {
        vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_ctr 
            = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT___writeEntry_ctr_T_7) 
                & (7U > (0xffU & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassValid)
                                   ? (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_ctr)
                                   : ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__topEntry_inflightValid)
                                       ? (((0U == (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value), 3U)))
                                            ? 0U : 
                                           (vlSelfRef.RAS__DOT__RASStack__DOT___GEN_2[
                                            (((IData)(7U) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value), 3U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value), 3U))))) 
                                          | (vlSelfRef.RAS__DOT__RASStack__DOT___GEN_2[
                                             (7U & 
                                              (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value), 3U) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value), 3U))))
                                       : (((0U == (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__ssp), 3U)))
                                            ? 0U : 
                                           (vlSelfRef.RAS__DOT__RASStack__DOT___GEN_5[
                                            (((IData)(7U) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__ssp), 3U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__ssp), 3U))))) 
                                          | (vlSelfRef.RAS__DOT__RASStack__DOT___GEN_5[
                                             (3U & 
                                              (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__ssp), 3U) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__ssp), 3U)))))))))
                ? (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___sctr_T)
                : 0U);
        vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
            = vlSelfRef.RAS__DOT___s2_spec_new_addr_T_1;
    }
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__inflightValid_6) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__inflightValid_6))) {
        ++(vlSymsp->__Vcoverage[7692]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__inflightValid_6 
            = vlSelfRef.RAS__DOT__RASStack__DOT__inflightValid_6;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_79 = ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT___s3_missPushEntry_ctr_T) 
                                                  & (7U 
                                                     != (IData)(vlSelfRef.RAS__DOT__s3_meta_sctr)));
    vlSelfRef.RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT___s3_missPushEntry_ctr_T) 
            & (7U > (0xffU & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__s3TopEntry_inflightValid)
                               ? (((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value), 3U)))
                                    ? 0U : (vlSelfRef.RAS__DOT__RASStack__DOT___GEN_2[
                                            (((IData)(7U) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value), 3U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value), 3U))))) 
                                  | (vlSelfRef.RAS__DOT__RASStack__DOT___GEN_2[
                                     (7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value), 3U) 
                                            >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value), 3U))))
                               : (((0U == (0x1fU & 
                                           VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.RAS__DOT__s3_meta_ssp), 3U)))
                                    ? 0U : (vlSelfRef.RAS__DOT__RASStack__DOT___GEN_5[
                                            (((IData)(7U) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.RAS__DOT__s3_meta_ssp), 3U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.RAS__DOT__s3_meta_ssp), 3U))))) 
                                  | (vlSelfRef.RAS__DOT__RASStack__DOT___GEN_5[
                                     (3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.RAS__DOT__s3_meta_ssp), 3U) 
                                            >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.RAS__DOT__s3_meta_ssp), 3U))))))))
            ? (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___sctr_T_10)
            : 0U);
    vlSelfRef.RAS__DOT__RASStack__DOT__inflightValid_4 
        = ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_16) 
           & ((IData)(vlSelfRef.RAS__DOT___RASStack_io_NOS_flag) 
              ^ ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSW_flag) 
                 ^ ((IData)(vlSelfRef.RAS__DOT___RASStack_io_NOS_value) 
                    < (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSW_value)))));
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_flag) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_flag))) {
        ++(vlSymsp->__Vcoverage[7685]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_flag 
            = vlSelfRef.RAS__DOT__RASStack__DOT__realNos_flag;
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value)))) {
        ++(vlSymsp->__Vcoverage[7680]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value 
            = ((0x1eU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_value)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value)))) {
        ++(vlSymsp->__Vcoverage[7681]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value 
            = ((0x1dU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_value)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value)))) {
        ++(vlSymsp->__Vcoverage[7682]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value 
            = ((0x1bU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_value)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value)))) {
        ++(vlSymsp->__Vcoverage[7683]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value 
            = ((0x17U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_value) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value)))) {
        ++(vlSymsp->__Vcoverage[7684]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value 
            = ((0xfU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_value)));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_value)))) {
        ++(vlSymsp->__Vcoverage[7686]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_value 
            = ((0x1eU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_value)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_value)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_value)))) {
        ++(vlSymsp->__Vcoverage[7687]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_value 
            = ((0x1dU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_value)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_value)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_value)))) {
        ++(vlSymsp->__Vcoverage[7688]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_value 
            = ((0x1bU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_value)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_value)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_value)))) {
        ++(vlSymsp->__Vcoverage[7689]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_value 
            = ((0x17U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_value)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_value) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_value)))) {
        ++(vlSymsp->__Vcoverage[7690]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_value 
            = ((0xfU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_value)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_value)));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr)))) {
        ++(vlSymsp->__Vcoverage[7611]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[7612]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[7613]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7614]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7615]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7616]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[7617]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7618]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[7619]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[7620]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[7621]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[7622]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[7623]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[7624]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[7625]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[7626]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[7627]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[7628]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[7629]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[7630]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[7631]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[7632]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[7633]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[7634]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[7635]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[7636]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[7637]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[7638]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[7639]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[7640]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[7641]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[7642]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[7643]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[7644]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[7645]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[7646]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[7647]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[7648]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[7649]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7650]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[7651]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassValidWire) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassValidWire))) {
        ++(vlSymsp->__Vcoverage[7666]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassValidWire 
            = vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassValidWire;
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_ctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8020]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr 
            = ((0xfeU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_ctr)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_ctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8021]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr 
            = ((0xfdU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_ctr)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_ctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8022]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr 
            = ((0xfbU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_ctr)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_ctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8023]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr 
            = ((0xf7U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_ctr)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_ctr) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8024]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr 
            = ((0xefU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_ctr)));
    }
    if ((0x20U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_ctr) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8025]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr 
            = ((0xdfU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)) 
               | (0x20U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_ctr)));
    }
    if ((0x40U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_ctr) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8026]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr 
            = ((0xbfU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)) 
               | (0x40U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_ctr)));
    }
    if ((0x80U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_ctr) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8027]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr 
            = ((0x7fU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)) 
               | (0x80U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_ctr)));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr)))) {
        ++(vlSymsp->__Vcoverage[7480]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[7481]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[7482]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7483]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7484]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7485]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[7486]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7487]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[7488]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[7489]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[7490]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[7491]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[7492]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[7493]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[7494]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[7495]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[7496]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[7497]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[7498]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[7499]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[7500]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[7501]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[7502]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[7503]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[7504]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[7505]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[7506]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[7507]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[7508]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[7509]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[7510]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[7511]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[7512]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[7513]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[7514]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[7515]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[7516]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[7517]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[7518]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7519]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[7520]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[7672]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr 
            = ((0xfeU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[7673]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr 
            = ((0xfdU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[7674]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr 
            = ((0xfbU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[7675]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr 
            = ((0xf7U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[7676]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr 
            = ((0xefU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr)));
    }
    if ((0x20U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[7677]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr 
            = ((0xdfU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)) 
               | (0x20U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr)));
    }
    if ((0x40U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[7678]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr 
            = ((0xbfU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)) 
               | (0x40U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr)));
    }
    if ((0x80U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[7679]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr 
            = ((0x7fU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)) 
               | (0x80U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr)));
    }
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__inflightValid_4) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__inflightValid_4))) {
        ++(vlSymsp->__Vcoverage[7693]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__inflightValid_4 
            = vlSelfRef.RAS__DOT__RASStack__DOT__inflightValid_4;
    }
}
