// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.RAS__DOT__s2_spec_push) 
         | (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___realPush_T_4))) {
        ++(vlSymsp->__Vcoverage[8028]);
        vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
            = vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr;
        vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_ctr 
            = vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_ctr;
        if (vlSelfRef.RAS__DOT__RASStack__DOT___realPush_T_4) {
            vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassNos_flag 
                = vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_flag;
            vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassNos_value 
                = vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_value;
        } else {
            vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassNos_flag 
                = vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_flag;
            vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassNos_value 
                = vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value;
        }
    } else {
        ++(vlSymsp->__Vcoverage[8029]);
    }
    if (((IData)(vlSelfRef.io_s2_fire_2) | (IData)(vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_isCall))) {
        ++(vlSymsp->__Vcoverage[8030]);
        vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
            = vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_retAddr;
        vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr 
            = vlSelfRef.RAS__DOT__RASStack__DOT__writeEntry_ctr;
    } else {
        ++(vlSymsp->__Vcoverage[8031]);
    }
    if (((IData)(vlSelfRef.io_s2_fire_2) | (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___realPush_T_4))) {
        ++(vlSymsp->__Vcoverage[8032]);
        vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_next_value 
            = ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT___realPush_T_4)
                ? (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value)
                : (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__TOSW_value));
    } else {
        ++(vlSymsp->__Vcoverage[8033]);
    }
    if (((IData)(vlSelfRef.io_s2_fire_2) | (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___realPush_T_4))) {
        ++(vlSymsp->__Vcoverage[8034]);
        if (vlSelfRef.RAS__DOT__RASStack__DOT___realPush_T_4) {
            vlSelfRef.RAS__DOT__RASStack__DOT__realNos_next_flag 
                = vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_flag;
            vlSelfRef.RAS__DOT__RASStack__DOT__realNos_next_value 
                = vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value;
        } else {
            vlSelfRef.RAS__DOT__RASStack__DOT__realNos_next_flag 
                = vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_flag;
            vlSelfRef.RAS__DOT__RASStack__DOT__realNos_next_value 
                = vlSelfRef.RAS__DOT__RASStack__DOT__TOSR_value;
        }
    } else {
        ++(vlSymsp->__Vcoverage[8035]);
    }
    if (vlSelfRef.io_s2_fire_2) {
        ++(vlSymsp->__Vcoverage[8036]);
        vlSelfRef.RAS__DOT__RASStack__DOT__realPush_r 
            = vlSelfRef.RAS__DOT__s2_spec_push;
    } else {
        ++(vlSymsp->__Vcoverage[8037]);
    }
    ++(vlSymsp->__Vcoverage[8038]);
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_next_flag) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_flag))) {
        ++(vlSymsp->__Vcoverage[7657]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_flag 
            = vlSelfRef.RAS__DOT__RASStack__DOT__realNos_next_flag;
    }
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realPush_r) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realPush_r))) {
        ++(vlSymsp->__Vcoverage[7663]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realPush_r 
            = vlSelfRef.RAS__DOT__RASStack__DOT__realPush_r;
    }
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassNos_flag) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_flag))) {
        ++(vlSymsp->__Vcoverage[7461]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_flag 
            = vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassNos_flag;
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_next_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value)))) {
        ++(vlSymsp->__Vcoverage[7652]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value 
            = ((0x1eU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_next_value)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_next_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value)))) {
        ++(vlSymsp->__Vcoverage[7653]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value 
            = ((0x1dU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_next_value)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_next_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value)))) {
        ++(vlSymsp->__Vcoverage[7654]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value 
            = ((0x1bU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_next_value)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_next_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value)))) {
        ++(vlSymsp->__Vcoverage[7655]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value 
            = ((0x17U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_next_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_next_value) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value)))) {
        ++(vlSymsp->__Vcoverage[7656]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value 
            = ((0xfU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteAddr_next_value)));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_next_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value)))) {
        ++(vlSymsp->__Vcoverage[7658]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value 
            = ((0x1eU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_next_value)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_next_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value)))) {
        ++(vlSymsp->__Vcoverage[7659]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value 
            = ((0x1dU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_next_value)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_next_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value)))) {
        ++(vlSymsp->__Vcoverage[7660]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value 
            = ((0x1bU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_next_value)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_next_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value)))) {
        ++(vlSymsp->__Vcoverage[7661]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value 
            = ((0x17U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_next_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_next_value) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value)))) {
        ++(vlSymsp->__Vcoverage[7662]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value 
            = ((0xfU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realNos_next_value)));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)))) {
        ++(vlSymsp->__Vcoverage[7603]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr 
            = ((0xfeU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)))) {
        ++(vlSymsp->__Vcoverage[7604]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr 
            = ((0xfdU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)))) {
        ++(vlSymsp->__Vcoverage[7605]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr 
            = ((0xfbU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)))) {
        ++(vlSymsp->__Vcoverage[7606]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr 
            = ((0xf7U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)))) {
        ++(vlSymsp->__Vcoverage[7607]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr 
            = ((0xefU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr)));
    }
    if ((0x20U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)))) {
        ++(vlSymsp->__Vcoverage[7608]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr 
            = ((0xdfU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)) 
               | (0x20U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr)));
    }
    if ((0x40U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)))) {
        ++(vlSymsp->__Vcoverage[7609]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr 
            = ((0xbfU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)) 
               | (0x40U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr)));
    }
    if ((0x80U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)))) {
        ++(vlSymsp->__Vcoverage[7610]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr 
            = ((0x7fU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)) 
               | (0x80U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr)));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassNos_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value)))) {
        ++(vlSymsp->__Vcoverage[7462]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value 
            = ((0x1eU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassNos_value)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassNos_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value)))) {
        ++(vlSymsp->__Vcoverage[7463]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value 
            = ((0x1dU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassNos_value)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassNos_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value)))) {
        ++(vlSymsp->__Vcoverage[7464]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value 
            = ((0x1bU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassNos_value)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassNos_value) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value)))) {
        ++(vlSymsp->__Vcoverage[7465]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value 
            = ((0x17U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassNos_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassNos_value) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value)))) {
        ++(vlSymsp->__Vcoverage[7466]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value 
            = ((0xfU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassNos_value)));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_ctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[7453]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr 
            = ((0xfeU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_ctr)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_ctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[7454]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr 
            = ((0xfdU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_ctr)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_ctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[7455]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr 
            = ((0xfbU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_ctr)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_ctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[7456]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr 
            = ((0xf7U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_ctr)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_ctr) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[7457]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr 
            = ((0xefU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_ctr)));
    }
    if ((0x20U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_ctr) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[7458]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr 
            = ((0xdfU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)) 
               | (0x20U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_ctr)));
    }
    if ((0x40U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_ctr) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[7459]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr 
            = ((0xbfU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)) 
               | (0x40U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_ctr)));
    }
    if ((0x80U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_ctr) 
                  ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[7460]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr 
            = ((0x7fU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)) 
               | (0x80U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_ctr)));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr)))) {
        ++(vlSymsp->__Vcoverage[7412]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[7413]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[7414]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7415]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7416]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7417]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[7418]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7419]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[7420]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[7421]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[7422]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[7423]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[7424]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[7425]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[7426]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[7427]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[7428]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[7429]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[7430]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[7431]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[7432]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[7433]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[7434]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[7435]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[7436]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[7437]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[7438]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[7439]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[7440]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[7441]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[7442]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[7443]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[7444]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[7445]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[7446]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[7447]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[7448]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[7449]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[7450]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7451]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[7452]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr)))) {
        ++(vlSymsp->__Vcoverage[7562]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[7563]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[7564]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7565]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7566]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7567]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[7568]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7569]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[7570]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[7571]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[7572]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[7573]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[7574]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[7575]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[7576]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[7577]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[7578]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[7579]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[7580]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[7581]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[7582]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[7583]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[7584]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[7585]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[7586]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[7587]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[7588]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[7589]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[7590]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[7591]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[7592]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[7593]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[7594]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[7595]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[7596]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[7597]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[7598]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[7599]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[7600]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7601]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[7602]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if (vlSelfRef.RAS__DOT__REG_1) {
        ++(vlSymsp->__Vcoverage[4434]);
        vlSelfRef.__Vdly__RAS__DOT__s1_pc_dup_0 = vlSelfRef.RAS__DOT___GEN_2;
        vlSelfRef.__Vdly__RAS__DOT__s1_pc_dup_1 = vlSelfRef.RAS__DOT___GEN_2;
        vlSelfRef.__Vdly__RAS__DOT__s1_pc_dup_2 = vlSelfRef.RAS__DOT___GEN_2;
        vlSelfRef.__Vdly__RAS__DOT__s1_pc_dup_3 = vlSelfRef.RAS__DOT___GEN_2;
    } else {
        if (vlSelfRef.io_s0_fire_0) {
            ++(vlSymsp->__Vcoverage[4426]);
            vlSelfRef.__Vdly__RAS__DOT__s1_pc_dup_0 
                = vlSelfRef.io_in_bits_s0_pc_0;
        } else {
            ++(vlSymsp->__Vcoverage[4427]);
        }
        if (vlSelfRef.io_s0_fire_1) {
            ++(vlSymsp->__Vcoverage[4428]);
            vlSelfRef.__Vdly__RAS__DOT__s1_pc_dup_1 
                = vlSelfRef.io_in_bits_s0_pc_1;
        } else {
            ++(vlSymsp->__Vcoverage[4429]);
        }
        if (vlSelfRef.io_s0_fire_2) {
            ++(vlSymsp->__Vcoverage[4430]);
            vlSelfRef.__Vdly__RAS__DOT__s1_pc_dup_2 
                = vlSelfRef.io_in_bits_s0_pc_2;
        } else {
            ++(vlSymsp->__Vcoverage[4431]);
        }
        if (vlSelfRef.io_s0_fire_3) {
            ++(vlSymsp->__Vcoverage[4432]);
            vlSelfRef.__Vdly__RAS__DOT__s1_pc_dup_3 
                = vlSelfRef.io_in_bits_s0_pc_3;
        } else {
            ++(vlSymsp->__Vcoverage[4433]);
        }
        ++(vlSymsp->__Vcoverage[4435]);
    }
    if (vlSelfRef.io_s1_fire_0) {
        ++(vlSymsp->__Vcoverage[4436]);
        vlSelfRef.__Vdly__RAS__DOT__s2_pc_dup_0 = vlSelfRef.RAS__DOT__s1_pc_dup_0;
    } else {
        ++(vlSymsp->__Vcoverage[4437]);
    }
    if (vlSelfRef.io_s1_fire_1) {
        ++(vlSymsp->__Vcoverage[4438]);
        vlSelfRef.__Vdly__RAS__DOT__s2_pc_dup_1 = vlSelfRef.RAS__DOT__s1_pc_dup_1;
    } else {
        ++(vlSymsp->__Vcoverage[4439]);
    }
    if (vlSelfRef.io_s1_fire_2) {
        ++(vlSymsp->__Vcoverage[4440]);
        vlSelfRef.__Vdly__RAS__DOT__s2_pc_dup_2 = vlSelfRef.RAS__DOT__s1_pc_dup_2;
    } else {
        ++(vlSymsp->__Vcoverage[4441]);
    }
    if (vlSelfRef.io_s1_fire_3) {
        ++(vlSymsp->__Vcoverage[4442]);
        vlSelfRef.__Vdly__RAS__DOT__s2_pc_dup_3 = vlSelfRef.RAS__DOT__s1_pc_dup_3;
    } else {
        ++(vlSymsp->__Vcoverage[4443]);
    }
    if (vlSelfRef.io_s2_fire_0) {
        ++(vlSymsp->__Vcoverage[4444]);
        vlSelfRef.RAS__DOT__s3_pc_dup_0 = vlSelfRef.RAS__DOT__s2_pc_dup_0;
    } else {
        ++(vlSymsp->__Vcoverage[4445]);
    }
    if (vlSelfRef.io_s2_fire_1) {
        ++(vlSymsp->__Vcoverage[4446]);
        vlSelfRef.RAS__DOT__s3_pc_dup_1 = vlSelfRef.RAS__DOT__s2_pc_dup_1;
    } else {
        ++(vlSymsp->__Vcoverage[4447]);
    }
    if (vlSelfRef.io_s2_fire_2) {
        ++(vlSymsp->__Vcoverage[4448]);
        vlSelfRef.RAS__DOT__s3_pc_dup_2 = vlSelfRef.RAS__DOT__s2_pc_dup_2;
        vlSelfRef.RAS__DOT__s3_top = vlSelfRef.RAS__DOT___RASStack_io_spec_pop_addr;
        vlSelfRef.RAS__DOT__s3_spec_new_addr = vlSelfRef.RAS__DOT___s2_spec_new_addr_T_1;
        vlSelfRef.RAS__DOT__s3_pushed_in_s2 = vlSelfRef.RAS__DOT__s2_spec_push;
        vlSelfRef.RAS__DOT__s3_popped_in_s2 = vlSelfRef.RAS__DOT__s2_spec_pop;
        vlSelfRef.RAS__DOT__s3_meta_ssp = vlSelfRef.RAS__DOT___RASStack_io_ssp;
        vlSelfRef.RAS__DOT__s3_meta_sctr = vlSelfRef.RAS__DOT___RASStack_io_sctr;
        vlSelfRef.RAS__DOT__s3_meta_TOSW_flag = vlSelfRef.RAS__DOT___RASStack_io_TOSW_flag;
        vlSelfRef.RAS__DOT__s3_meta_TOSW_value = vlSelfRef.RAS__DOT___RASStack_io_TOSW_value;
        vlSelfRef.RAS__DOT__s3_meta_TOSR_flag = vlSelfRef.RAS__DOT___RASStack_io_TOSR_flag;
        vlSelfRef.RAS__DOT__s3_meta_TOSR_value = vlSelfRef.RAS__DOT___RASStack_io_TOSR_value;
        vlSelfRef.RAS__DOT__s3_meta_NOS_flag = vlSelfRef.RAS__DOT___RASStack_io_NOS_flag;
        vlSelfRef.RAS__DOT__s3_meta_NOS_value = vlSelfRef.RAS__DOT___RASStack_io_NOS_value;
    } else {
        ++(vlSymsp->__Vcoverage[4449]);
    }
    if (vlSelfRef.io_s2_fire_3) {
        ++(vlSymsp->__Vcoverage[4450]);
        vlSelfRef.RAS__DOT__s3_pc_dup_3 = vlSelfRef.RAS__DOT__s2_pc_dup_3;
    } else {
        ++(vlSymsp->__Vcoverage[4451]);
    }
    if (vlSelfRef.io_redirect_valid) {
        ++(vlSymsp->__Vcoverage[4452]);
        vlSelfRef.RAS__DOT__redirect_next_bits_r_level 
            = vlSelfRef.io_redirect_bits_level;
        vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
            = vlSelfRef.io_redirect_bits_cfiUpdate_pc;
        vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pd_isRVC 
            = vlSelfRef.io_redirect_bits_cfiUpdate_pd_isRVC;
        vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pd_isCall 
            = vlSelfRef.io_redirect_bits_cfiUpdate_pd_isCall;
        vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pd_isRet 
            = vlSelfRef.io_redirect_bits_cfiUpdate_pd_isRet;
        vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp 
            = vlSelfRef.io_redirect_bits_cfiUpdate_ssp;
        vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_sctr 
            = vlSelfRef.io_redirect_bits_cfiUpdate_sctr;
        vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_flag 
            = vlSelfRef.io_redirect_bits_cfiUpdate_TOSW_flag;
        vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value 
            = vlSelfRef.io_redirect_bits_cfiUpdate_TOSW_value;
        vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_flag 
            = vlSelfRef.io_redirect_bits_cfiUpdate_TOSR_flag;
        vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value 
            = vlSelfRef.io_redirect_bits_cfiUpdate_TOSR_value;
        vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_flag 
            = vlSelfRef.io_redirect_bits_cfiUpdate_NOS_flag;
        vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_value 
            = vlSelfRef.io_redirect_bits_cfiUpdate_NOS_value;
    } else {
        ++(vlSymsp->__Vcoverage[4453]);
    }
    ++(vlSymsp->__Vcoverage[4454]);
    vlSelfRef.RAS__DOT___GEN_2 = vlSelfRef.RAS__DOT__reset_vector_delay__DOT__REG_4;
    vlSelfRef.RAS__DOT__s1_pc_dup_0 = vlSelfRef.__Vdly__RAS__DOT__s1_pc_dup_0;
    vlSelfRef.RAS__DOT__s1_pc_dup_1 = vlSelfRef.__Vdly__RAS__DOT__s1_pc_dup_1;
    vlSelfRef.RAS__DOT__s1_pc_dup_2 = vlSelfRef.__Vdly__RAS__DOT__s1_pc_dup_2;
    vlSelfRef.RAS__DOT__s1_pc_dup_3 = vlSelfRef.__Vdly__RAS__DOT__s1_pc_dup_3;
    vlSelfRef.RAS__DOT__s2_pc_dup_0 = vlSelfRef.__Vdly__RAS__DOT__s2_pc_dup_0;
    vlSelfRef.RAS__DOT__s2_pc_dup_1 = vlSelfRef.__Vdly__RAS__DOT__s2_pc_dup_1;
    vlSelfRef.RAS__DOT__s2_pc_dup_2 = vlSelfRef.__Vdly__RAS__DOT__s2_pc_dup_2;
    vlSelfRef.RAS__DOT__s2_pc_dup_3 = vlSelfRef.__Vdly__RAS__DOT__s2_pc_dup_3;
    if (((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pd_isRet) 
         ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pd_isRet))) {
        ++(vlSymsp->__Vcoverage[4401]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pd_isRet 
            = vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pd_isRet;
    }
    if (((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_flag) 
         ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_NOS_flag))) {
        ++(vlSymsp->__Vcoverage[4420]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_NOS_flag 
            = vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_flag;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT__io_redirect_meta_NOS_flag 
        = vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_flag;
    if (((IData)(vlSelfRef.RAS__DOT__s3_popped_in_s2) 
         ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_popped_in_s2))) {
        ++(vlSymsp->__Vcoverage[4328]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_popped_in_s2 
            = vlSelfRef.RAS__DOT__s3_popped_in_s2;
    }
    vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_s3_missed_pop 
        = ((~ (IData)(vlSelfRef.RAS__DOT__s3_popped_in_s2)) 
           & (IData)(vlSelfRef.RAS__DOT__s3_pop));
    vlSelfRef.RAS__DOT__REG_1 = ((IData)(vlSelfRef.RAS__DOT__REG) 
                                 & (~ (IData)(vlSelfRef.reset)));
    vlSelfRef.RAS__DOT__RASStack__DOT__io_redirect_meta_NOS_value 
        = vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_value;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[4421]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_NOS_value 
            = ((0x1eU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_NOS_value)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_value)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[4422]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_NOS_value 
            = ((0x1dU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_NOS_value)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_value)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[4423]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_NOS_value 
            = ((0x1bU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_NOS_value)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_value)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[4424]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_NOS_value 
            = ((0x17U & (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_NOS_value)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_value) 
                  ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[4425]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_NOS_value 
            = ((0xfU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_NOS_value)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_NOS_value)));
    }
    vlSelfRef.RAS__DOT__RASStack__DOT__io_redirect_meta_sctr 
        = vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_sctr;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_sctr) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_sctr)))) {
        ++(vlSymsp->__Vcoverage[4406]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_sctr 
            = ((2U & (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_sctr)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_sctr)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_sctr) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_sctr)))) {
        ++(vlSymsp->__Vcoverage[4407]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_sctr 
            = ((1U & (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_sctr)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_sctr)));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_sctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_meta_sctr)))) {
        ++(vlSymsp->__Vcoverage[4769]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_meta_sctr 
            = ((6U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_meta_sctr)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_sctr)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_sctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_meta_sctr)))) {
        ++(vlSymsp->__Vcoverage[4770]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_meta_sctr 
            = ((5U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_meta_sctr)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_sctr)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_sctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_meta_sctr)))) {
        ++(vlSymsp->__Vcoverage[4771]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_meta_sctr 
            = ((3U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_meta_sctr)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_sctr)));
    }
    vlSelfRef.RAS__DOT__RASStack__DOT___sctr_T_12 = 
        (7U & ((IData)(1U) + (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_sctr)));
    vlSelfRef.RAS__DOT__RASStack__DOT__io_redirect_meta_ssp 
        = vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp;
    vlSelfRef.RAS__DOT__RASStack__DOT___sctr_T_16 = 
        (0xfU & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp) 
                 - (IData)(1U)));
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_ssp)))) {
        ++(vlSymsp->__Vcoverage[4402]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_ssp 
            = ((0xeU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_ssp)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_ssp)))) {
        ++(vlSymsp->__Vcoverage[4403]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_ssp 
            = ((0xdU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_ssp)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_ssp)))) {
        ++(vlSymsp->__Vcoverage[4404]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_ssp 
            = ((0xbU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_ssp)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_ssp)))) {
        ++(vlSymsp->__Vcoverage[4405]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_ssp 
            = ((7U & (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_ssp)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_ssp)));
    }
    if (((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_flag) 
         ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSW_flag))) {
        ++(vlSymsp->__Vcoverage[4408]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSW_flag 
            = vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_flag;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT__io_redirect_meta_TOSW_flag 
        = vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_flag;
    vlSelfRef.RAS__DOT__RASStack__DOT__io_redirect_meta_TOSW_value 
        = vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[4409]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSW_value 
            = ((0x1eU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSW_value)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[4410]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSW_value 
            = ((0x1dU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSW_value)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[4411]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSW_value 
            = ((0x1bU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSW_value)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[4412]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSW_value 
            = ((0x17U & (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSW_value)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value) 
                  ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[4413]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSW_value 
            = ((0xfU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSW_value)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value)));
    }
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_74 = (((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_flag) 
                                                   << 5U) 
                                                  | (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value));
    if (((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_flag) 
         ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSR_flag))) {
        ++(vlSymsp->__Vcoverage[4414]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSR_flag 
            = vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_flag;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT__io_redirect_meta_TOSR_flag 
        = vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_flag;
    vlSelfRef.RAS__DOT__RASStack__DOT__differentFlag_16 
        = ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_flag) 
           ^ (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_flag));
    vlSelfRef.RAS__DOT__RASStack__DOT__io_redirect_meta_TOSR_value 
        = vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[4415]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSR_value 
            = ((0x1eU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSR_value)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[4416]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSR_value 
            = ((0x1dU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSR_value)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[4417]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSR_value 
            = ((0x1bU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSR_value)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[4418]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSR_value 
            = ((0x17U & (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSR_value)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value) 
                  ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[4419]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSR_value 
            = ((0xfU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_TOSR_value)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value)));
    }
    vlSelfRef.RAS__DOT__RASStack__DOT__compare_16 = 
        ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSR_value) 
         < (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_TOSW_value));
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__s1_pc_dup_0) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0)))) {
        ++(vlSymsp->__Vcoverage[3749]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__s1_pc_dup_0)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3750]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3751]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3752]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3753]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3754]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3755]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3756]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3757]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3758]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3759]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3760]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3761]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3762]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3763]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3764]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3765]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3766]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3767]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3768]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3769]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3770]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3771]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3772]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3773]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3774]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3775]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3776]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3777]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3778]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3779]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3780]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3781]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3782]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3783]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3784]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3785]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3786]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3787]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3788]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__s1_pc_dup_0 ^ vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[3789]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_0 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__s1_pc_dup_1) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1)))) {
        ++(vlSymsp->__Vcoverage[3790]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__s1_pc_dup_1)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3791]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3792]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3793]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3794]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3795]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3796]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3797]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3798]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3799]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3800]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3801]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3802]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3803]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3804]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3805]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3806]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3807]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3808]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3809]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3810]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3811]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3812]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3813]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3814]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3815]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3816]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3817]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3818]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3819]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3820]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3821]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3822]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3823]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3824]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3825]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3826]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3827]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3828]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3829]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__s1_pc_dup_1 ^ vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[3830]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__s1_pc_dup_2) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2)))) {
        ++(vlSymsp->__Vcoverage[3831]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__s1_pc_dup_2)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3832]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3833]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3834]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3835]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3836]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3837]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3838]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3839]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3840]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3841]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3842]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3843]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3844]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3845]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3846]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3847]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3848]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3849]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3850]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3851]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3852]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3853]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3854]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3855]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3856]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3857]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3858]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3859]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3860]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3861]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3862]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3863]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3864]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3865]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3866]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3867]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3868]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3869]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3870]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__s1_pc_dup_2 ^ vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[3871]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__s1_pc_dup_3) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3)))) {
        ++(vlSymsp->__Vcoverage[3872]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__s1_pc_dup_3)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3873]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3874]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3875]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3876]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3877]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3878]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3879]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3880]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3881]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3882]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3883]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3884]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3885]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3886]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3887]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3888]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3889]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3890]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3891]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3892]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3893]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3894]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3895]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3896]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3897]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3898]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3899]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3900]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3901]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3902]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3903]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3904]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3905]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3906]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3907]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3908]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3909]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3910]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3911]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__s1_pc_dup_3 ^ vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[3912]);
        vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s1_pc_dup_3 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if (((IData)(vlSelfRef.RAS__DOT__s3_pushed_in_s2) 
         ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_pushed_in_s2))) {
        ++(vlSymsp->__Vcoverage[4327]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pushed_in_s2 
            = vlSelfRef.RAS__DOT__s3_pushed_in_s2;
    }
    vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_s3_cancel 
        = ((IData)(vlSelfRef.io_s3_fire_2) & (((IData)(vlSelfRef.RAS__DOT__s3_pushed_in_s2) 
                                               != (IData)(vlSelfRef.RAS__DOT__s3_push)) 
                                              | ((IData)(vlSelfRef.RAS__DOT__s3_popped_in_s2) 
                                                 != (IData)(vlSelfRef.RAS__DOT__s3_pop))));
    vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_s3_missed_push 
        = ((~ (IData)(vlSelfRef.RAS__DOT__s3_pushed_in_s2)) 
           & (IData)(vlSelfRef.RAS__DOT__s3_push));
    vlSelfRef.io_out_s2_pc_0 = vlSelfRef.RAS__DOT__s2_pc_dup_0;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__s2_pc_dup_0) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0)))) {
        ++(vlSymsp->__Vcoverage[3913]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__s2_pc_dup_0)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3914]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3915]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3916]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3917]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3918]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3919]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3920]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3921]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3922]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3923]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3924]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3925]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3926]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3927]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3928]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3929]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3930]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3931]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3932]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3933]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3934]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3935]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3936]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3937]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3938]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3939]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3940]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3941]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3942]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3943]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3944]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3945]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3946]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3947]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3948]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3949]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3950]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3951]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3952]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__s2_pc_dup_0 ^ vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[3953]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_0 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelfRef.RAS__DOT__io_out_s2_pc_0 = vlSelfRef.RAS__DOT__s2_pc_dup_0;
    vlSelfRef.io_out_s2_pc_1 = vlSelfRef.RAS__DOT__s2_pc_dup_1;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__s2_pc_dup_1) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1)))) {
        ++(vlSymsp->__Vcoverage[3954]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__s2_pc_dup_1)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3955]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3956]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3957]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3958]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3959]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3960]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3961]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3962]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3963]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3964]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3965]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3966]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3967]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3968]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3969]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3970]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3971]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3972]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3973]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3974]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3975]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3976]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3977]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3978]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3979]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3980]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3981]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3982]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3983]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3984]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3985]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3986]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3987]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3988]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3989]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3990]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3991]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3992]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3993]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__s2_pc_dup_1 ^ vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[3994]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelfRef.RAS__DOT__io_out_s2_pc_1 = vlSelfRef.RAS__DOT__s2_pc_dup_1;
    vlSelfRef.io_out_s2_pc_2 = vlSelfRef.RAS__DOT__s2_pc_dup_2;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__s2_pc_dup_2) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2)))) {
        ++(vlSymsp->__Vcoverage[3995]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__s2_pc_dup_2)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3996]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3997]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3998]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3999]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4000]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4001]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4002]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4003]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4004]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4005]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4006]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4007]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4008]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4009]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4010]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4011]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4012]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4013]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4014]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4015]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4016]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4017]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4018]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4019]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4020]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4021]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4022]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4023]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4024]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4025]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4026]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4027]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4028]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4029]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4030]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4031]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4032]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4033]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4034]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__s2_pc_dup_2 ^ vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4035]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelfRef.RAS__DOT__io_out_s2_pc_2 = vlSelfRef.RAS__DOT__s2_pc_dup_2;
    vlSelfRef.io_out_s2_pc_3 = vlSelfRef.RAS__DOT__s2_pc_dup_3;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__s2_pc_dup_3) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3)))) {
        ++(vlSymsp->__Vcoverage[4036]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__s2_pc_dup_3)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4037]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4038]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4039]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4040]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4041]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4042]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4043]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4044]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4045]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4046]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4047]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4048]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4049]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4050]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4051]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4052]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4053]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4054]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4055]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4056]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4057]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4058]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4059]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4060]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4061]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4062]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4063]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4064]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4065]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4066]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4067]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4068]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4069]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4070]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4071]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4072]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4073]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4074]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4075]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__s2_pc_dup_3 ^ vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4076]);
        vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s2_pc_dup_3 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelfRef.RAS__DOT__io_out_s2_pc_3 = vlSelfRef.RAS__DOT__s2_pc_dup_3;
    vlSelfRef.io_out_s3_pc_0 = vlSelfRef.RAS__DOT__s3_pc_dup_0;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__s3_pc_dup_0) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0)))) {
        ++(vlSymsp->__Vcoverage[4077]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__s3_pc_dup_0)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4078]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4079]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4080]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4081]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4082]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4083]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4084]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4085]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4086]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4087]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4088]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4089]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4090]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4091]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4092]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4093]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4094]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4095]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4096]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4097]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4098]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4099]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4100]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4101]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4102]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4103]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4104]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4105]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4106]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4107]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4108]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4109]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4110]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4111]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4112]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4113]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4114]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4115]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4116]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__s3_pc_dup_0 ^ vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4117]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_0 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelfRef.RAS__DOT__io_out_s3_pc_0 = vlSelfRef.RAS__DOT__s3_pc_dup_0;
    vlSelfRef.io_out_s3_pc_1 = vlSelfRef.RAS__DOT__s3_pc_dup_1;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__s3_pc_dup_1) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1)))) {
        ++(vlSymsp->__Vcoverage[4118]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__s3_pc_dup_1)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4119]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4120]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4121]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4122]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4123]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4124]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4125]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4126]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4127]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4128]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4129]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4130]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4131]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4132]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4133]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4134]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4135]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4136]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4137]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4138]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4139]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4140]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4141]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4142]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4143]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4144]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4145]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4146]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4147]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4148]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4149]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4150]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4151]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4152]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4153]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4154]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4155]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4156]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4157]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__s3_pc_dup_1 ^ vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4158]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelfRef.RAS__DOT__io_out_s3_pc_1 = vlSelfRef.RAS__DOT__s3_pc_dup_1;
    vlSelfRef.io_out_s3_pc_2 = vlSelfRef.RAS__DOT__s3_pc_dup_2;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__s3_pc_dup_2) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2)))) {
        ++(vlSymsp->__Vcoverage[4159]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__s3_pc_dup_2)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4160]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4161]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4162]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4163]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4164]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4165]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4166]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4167]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4168]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4169]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4170]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4171]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4172]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4173]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4174]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4175]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4176]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4177]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4178]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4179]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4180]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4181]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4182]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4183]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4184]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4185]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4186]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4187]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4188]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4189]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4190]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4191]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4192]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4193]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4194]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4195]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4196]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4197]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4198]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__s3_pc_dup_2 ^ vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4199]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelfRef.RAS__DOT__io_out_s3_pc_2 = vlSelfRef.RAS__DOT__s3_pc_dup_2;
    vlSelfRef.io_out_s3_pc_3 = vlSelfRef.RAS__DOT__s3_pc_dup_3;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__s3_pc_dup_3) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3)))) {
        ++(vlSymsp->__Vcoverage[4200]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__s3_pc_dup_3)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4201]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4202]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4203]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4204]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4205]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4206]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4207]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4208]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4209]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4210]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4211]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4212]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4213]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4214]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4215]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4216]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4217]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4218]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4219]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4220]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4221]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4222]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4223]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4224]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4225]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4226]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4227]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4228]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4229]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4230]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4231]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4232]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4233]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4234]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4235]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4236]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4237]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4238]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4239]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__s3_pc_dup_3 ^ vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4240]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_pc_dup_3 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelfRef.RAS__DOT__io_out_s3_pc_3 = vlSelfRef.RAS__DOT__s3_pc_dup_3;
    vlSelfRef.RAS__DOT__RASStack__DOT__io_s3_pushAddr 
        = vlSelfRef.RAS__DOT__s3_spec_new_addr;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__s3_spec_new_addr) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr)))) {
        ++(vlSymsp->__Vcoverage[4286]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__s3_spec_new_addr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4287]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4288]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4289]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4290]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4291]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4292]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4293]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4294]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4295]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4296]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4297]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4298]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4299]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4300]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4301]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4302]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4303]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4304]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4305]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4306]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4307]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4308]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4309]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4310]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4311]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4312]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4313]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4314]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4315]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4316]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4317]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4318]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4319]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4320]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4321]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4322]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4323]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4324]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4325]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4326]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__s3_spec_new_addr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if (((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pd_isRVC) 
         ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pd_isRVC))) {
        ++(vlSymsp->__Vcoverage[4399]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pd_isRVC 
            = vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pd_isRVC;
    }
    if (((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pd_isCall) 
         ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pd_isCall))) {
        ++(vlSymsp->__Vcoverage[4400]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pd_isCall 
            = vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pd_isCall;
    }
    if (((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_level) 
         ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_level))) {
        ++(vlSymsp->__Vcoverage[4357]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_level 
            = vlSelfRef.RAS__DOT__redirect_next_bits_r_level;
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc)))) {
        ++(vlSymsp->__Vcoverage[4358]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4359]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4360]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4361]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4362]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4363]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4364]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4365]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4366]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4367]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4368]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4369]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4370]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4371]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4372]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4373]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4374]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4375]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4376]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4377]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4378]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4379]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4380]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4381]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4382]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4383]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4384]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4385]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4386]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4387]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4388]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4389]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4390]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4391]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4392]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4393]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4394]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4395]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4396]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4397]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4398]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__redirect_next_bits_r_cfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
        = (0x1ffffffffffULL & (vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pc 
                               + (QData)((IData)(((IData)(vlSelfRef.RAS__DOT__redirect_next_bits_r_cfiUpdate_pd_isRVC)
                                                   ? 2U
                                                   : 4U)))));
    vlSelfRef.io_out_last_stage_spec_info_topAddr = vlSelfRef.RAS__DOT__s3_top;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__s3_top) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_top)))) {
        ++(vlSymsp->__Vcoverage[4245]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1fffffffffeULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | (IData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelfRef.RAS__DOT__s3_top)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4246]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1fffffffffdULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 1U))))) 
                                                    << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4247]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1fffffffffbULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 2U))))) 
                                                    << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4248]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1fffffffff7ULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 3U))))) 
                                                    << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4249]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1ffffffffefULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 4U))))) 
                                                    << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4250]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1ffffffffdfULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 5U))))) 
                                                    << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4251]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1ffffffffbfULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 6U))))) 
                                                    << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4252]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1ffffffff7fULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 7U))))) 
                                                    << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4253]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1fffffffeffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 8U))))) 
                                                    << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4254]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1fffffffdffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 9U))))) 
                                                    << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4255]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1fffffffbffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0xaU))))) 
                                                    << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4256]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1fffffff7ffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0xbU))))) 
                                                    << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4257]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1ffffffefffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0xcU))))) 
                                                    << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4258]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1ffffffdfffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0xdU))))) 
                                                    << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4259]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1ffffffbfffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0xeU))))) 
                                                    << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4260]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1ffffff7fffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0xfU))))) 
                                                    << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4261]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1fffffeffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x10U))))) 
                                                    << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4262]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1fffffdffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x11U))))) 
                                                    << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4263]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1fffffbffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x12U))))) 
                                                    << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4264]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1fffff7ffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x13U))))) 
                                                    << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4265]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1ffffefffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x14U))))) 
                                                    << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4266]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1ffffdfffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x15U))))) 
                                                    << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4267]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1ffffbfffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x16U))))) 
                                                    << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4268]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1ffff7fffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x17U))))) 
                                                    << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4269]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1fffeffffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x18U))))) 
                                                    << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4270]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1fffdffffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x19U))))) 
                                                    << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4271]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1fffbffffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x1aU))))) 
                                                    << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4272]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1fff7ffffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x1bU))))) 
                                                    << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4273]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1ffefffffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x1cU))))) 
                                                    << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4274]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1ffdfffffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x1dU))))) 
                                                    << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4275]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1ffbfffffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x1eU))))) 
                                                    << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4276]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1ff7fffffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x1fU))))) 
                                                    << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4277]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1feffffffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x20U))))) 
                                                    << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4278]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1fdffffffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x21U))))) 
                                                    << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4279]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1fbffffffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x22U))))) 
                                                    << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4280]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1f7ffffffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x23U))))) 
                                                    << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4281]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1efffffffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x24U))))) 
                                                    << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4282]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1dfffffffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x25U))))) 
                                                    << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4283]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x1bfffffffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x26U))))) 
                                                    << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__s3_top 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__s3_top 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4284]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0x17fffffffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x27U))))) 
                                                    << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__s3_top ^ vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4285]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_top = ((0xffffffffffULL 
                                                  & vlSelfRef.RAS__DOT____Vtogcov__s3_top) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.RAS__DOT__s3_top 
                                                                                >> 0x28U))))) 
                                                    << 0x28U));
    }
    vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
        = vlSelfRef.RAS__DOT__s3_top;
    if (vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_2_is_jalr) {
        if (vlSelfRef.RAS__DOT___GEN_0) {
            vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                = vlSelfRef.RAS__DOT__s3_top;
            vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                = vlSelfRef.RAS__DOT__s3_top;
            vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                = vlSelfRef.RAS__DOT__s3_top;
            vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                = vlSelfRef.RAS__DOT__s3_top;
        } else {
            vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                = vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_0_jalr_target;
            vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                = vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_1_jalr_target;
            vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                = vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_2_jalr_target;
            vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                = vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_3_jalr_target;
        }
    } else {
        vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
            = vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_0_targets_1;
        vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
            = vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_1_targets_1;
        vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
            = vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_2_targets_1;
        vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
            = vlSelfRef.io_in_bits_resp_in_0_s3_full_pred_3_targets_1;
    }
    if (((IData)(vlSelfRef.RAS__DOT__s3_meta_NOS_flag) 
         ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_NOS_flag))) {
        ++(vlSymsp->__Vcoverage[4350]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_NOS_flag 
            = vlSelfRef.RAS__DOT__s3_meta_NOS_flag;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT__io_s3_meta_NOS_flag 
        = vlSelfRef.RAS__DOT__s3_meta_NOS_flag;
    vlSelfRef.io_out_last_stage_spec_info_NOS_flag 
        = vlSelfRef.RAS__DOT__s3_meta_NOS_flag;
    vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_NOS_flag 
        = vlSelfRef.RAS__DOT__s3_meta_NOS_flag;
    vlSelfRef.RAS__DOT__RASStack__DOT__io_s3_meta_NOS_value 
        = vlSelfRef.RAS__DOT__s3_meta_NOS_value;
    vlSelfRef.io_out_last_stage_spec_info_NOS_value 
        = vlSelfRef.RAS__DOT__s3_meta_NOS_value;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_NOS_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[4351]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_NOS_value 
            = ((0x1eU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_NOS_value)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__s3_meta_NOS_value)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_NOS_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[4352]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_NOS_value 
            = ((0x1dU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_NOS_value)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__s3_meta_NOS_value)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_NOS_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[4353]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_NOS_value 
            = ((0x1bU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_NOS_value)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__s3_meta_NOS_value)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_NOS_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[4354]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_NOS_value 
            = ((0x17U & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_NOS_value)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__s3_meta_NOS_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_NOS_value) 
                  ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[4355]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_NOS_value 
            = ((0xfU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_NOS_value)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__s3_meta_NOS_value)));
    }
    vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_NOS_value 
        = vlSelfRef.RAS__DOT__s3_meta_NOS_value;
    vlSelfRef.RAS__DOT__RASStack__DOT__io_s3_meta_sctr 
        = vlSelfRef.RAS__DOT__s3_meta_sctr;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_sctr) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_sctr)))) {
        ++(vlSymsp->__Vcoverage[4335]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_sctr 
            = ((6U & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_sctr)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__s3_meta_sctr)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_sctr) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_sctr)))) {
        ++(vlSymsp->__Vcoverage[4336]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_sctr 
            = ((5U & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_sctr)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__s3_meta_sctr)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_sctr) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_sctr)))) {
        ++(vlSymsp->__Vcoverage[4337]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_sctr 
            = ((3U & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_sctr)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__s3_meta_sctr)));
    }
    vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_sctr 
        = (3U & (IData)(vlSelfRef.RAS__DOT__s3_meta_sctr));
    vlSelfRef.RAS__DOT__RASStack__DOT___sctr_T_10 = 
        (7U & ((IData)(1U) + (IData)(vlSelfRef.RAS__DOT__s3_meta_sctr)));
    if (((IData)(vlSelfRef.RAS__DOT__s3_meta_TOSW_flag) 
         ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSW_flag))) {
        ++(vlSymsp->__Vcoverage[4338]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSW_flag 
            = vlSelfRef.RAS__DOT__s3_meta_TOSW_flag;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT__io_s3_meta_TOSW_flag 
        = vlSelfRef.RAS__DOT__s3_meta_TOSW_flag;
    vlSelfRef.io_out_last_stage_spec_info_TOSW_flag 
        = vlSelfRef.RAS__DOT__s3_meta_TOSW_flag;
    vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSW_flag 
        = vlSelfRef.RAS__DOT__s3_meta_TOSW_flag;
    vlSelfRef.RAS__DOT__RASStack__DOT__io_s3_meta_ssp 
        = vlSelfRef.RAS__DOT__s3_meta_ssp;
    vlSelfRef.io_out_last_stage_spec_info_ssp = vlSelfRef.RAS__DOT__s3_meta_ssp;
    vlSelfRef.RAS__DOT__RASStack__DOT___sctr_T_8 = 
        (0xfU & ((IData)(vlSelfRef.RAS__DOT__s3_meta_ssp) 
                 - (IData)(1U)));
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_ssp) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_ssp)))) {
        ++(vlSymsp->__Vcoverage[4331]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_ssp 
            = ((0xeU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_ssp)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__s3_meta_ssp)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_ssp) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_ssp)))) {
        ++(vlSymsp->__Vcoverage[4332]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_ssp 
            = ((0xdU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_ssp)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__s3_meta_ssp)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_ssp) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_ssp)))) {
        ++(vlSymsp->__Vcoverage[4333]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_ssp 
            = ((0xbU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_ssp)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__s3_meta_ssp)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_ssp) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_ssp)))) {
        ++(vlSymsp->__Vcoverage[4334]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_ssp 
            = ((7U & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_ssp)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__s3_meta_ssp)));
    }
    vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_ssp 
        = vlSelfRef.RAS__DOT__s3_meta_ssp;
    vlSelfRef.RAS__DOT__RASStack__DOT__io_s3_meta_TOSW_value 
        = vlSelfRef.RAS__DOT__s3_meta_TOSW_value;
    vlSelfRef.io_out_last_stage_spec_info_TOSW_value 
        = vlSelfRef.RAS__DOT__s3_meta_TOSW_value;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_TOSW_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[4339]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSW_value 
            = ((0x1eU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSW_value)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSW_value)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_TOSW_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[4340]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSW_value 
            = ((0x1dU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSW_value)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSW_value)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_TOSW_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[4341]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSW_value 
            = ((0x1bU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSW_value)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSW_value)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_TOSW_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[4342]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSW_value 
            = ((0x17U & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSW_value)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSW_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_TOSW_value) 
                  ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[4343]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSW_value 
            = ((0xfU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSW_value)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSW_value)));
    }
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_22 = (((IData)(vlSelfRef.RAS__DOT__s3_meta_TOSW_flag) 
                                                   << 5U) 
                                                  | (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSW_value));
    vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSW_value 
        = vlSelfRef.RAS__DOT__s3_meta_TOSW_value;
    if (((IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_flag) 
         ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSR_flag))) {
        ++(vlSymsp->__Vcoverage[4344]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSR_flag 
            = vlSelfRef.RAS__DOT__s3_meta_TOSR_flag;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT__io_s3_meta_TOSR_flag 
        = vlSelfRef.RAS__DOT__s3_meta_TOSR_flag;
    vlSelfRef.io_out_last_stage_spec_info_TOSR_flag 
        = vlSelfRef.RAS__DOT__s3_meta_TOSR_flag;
    vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSR_flag 
        = vlSelfRef.RAS__DOT__s3_meta_TOSR_flag;
    vlSelfRef.RAS__DOT__RASStack__DOT__differentFlag_11 
        = ((IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_flag) 
           ^ (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSW_flag));
    vlSelfRef.RAS__DOT__RASStack__DOT__io_s3_meta_TOSR_value 
        = vlSelfRef.RAS__DOT__s3_meta_TOSR_value;
    vlSelfRef.io_out_last_stage_spec_info_TOSR_value 
        = vlSelfRef.RAS__DOT__s3_meta_TOSR_value;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[4345]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSR_value 
            = ((0x1eU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSR_value)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[4346]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSR_value 
            = ((0x1dU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSR_value)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[4347]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSR_value 
            = ((0x1bU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSR_value)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[4348]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSR_value 
            = ((0x17U & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSR_value)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value) 
                  ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[4349]);
        vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSR_value 
            = ((0xfU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__s3_meta_TOSR_value)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value)));
    }
    vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSR_value 
        = vlSelfRef.RAS__DOT__s3_meta_TOSR_value;
    vlSelfRef.RAS__DOT__RASStack__DOT__compare_11 = 
        ((IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value) 
         < (IData)(vlSelfRef.RAS__DOT__s3_meta_TOSW_value));
    vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
        = (((IData)(vlSelfRef.RAS__DOT__s3_meta_ssp) 
            << 0x15U) | (((IData)(vlSelfRef.RAS__DOT__s3_meta_sctr) 
                          << 0x12U) | (((IData)(vlSelfRef.RAS__DOT__s3_meta_TOSW_flag) 
                                        << 0x11U) | 
                                       (((IData)(vlSelfRef.RAS__DOT__s3_meta_TOSW_value) 
                                         << 0xcU) | 
                                        (((IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_flag) 
                                          << 0xbU) 
                                         | (((IData)(vlSelfRef.RAS__DOT__s3_meta_TOSR_value) 
                                             << 6U) 
                                            | (((IData)(vlSelfRef.RAS__DOT__s3_meta_NOS_flag) 
                                                << 5U) 
                                               | (IData)(vlSelfRef.RAS__DOT__s3_meta_NOS_value))))))));
    vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] = 0U;
    vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] = 0U;
    vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] = 0U;
    vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] = 0U;
    vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] = 0U;
    vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] = 0U;
    vlSelfRef.RAS__DOT__RASStack__DOT__io_s3_missed_pop 
        = vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_s3_missed_pop;
    if (((IData)(vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_s3_missed_pop) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_s3_missed_pop))) {
        ++(vlSymsp->__Vcoverage[4722]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_s3_missed_pop 
            = vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_s3_missed_pop;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_76 = (0x3fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_74)));
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__differentFlag_16) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__differentFlag_16))) {
        ++(vlSymsp->__Vcoverage[7477]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__differentFlag_16 
            = vlSelfRef.RAS__DOT__RASStack__DOT__differentFlag_16;
    }
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__compare_16) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__compare_16))) {
        ++(vlSymsp->__Vcoverage[7478]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__compare_16 
            = vlSelfRef.RAS__DOT__RASStack__DOT__compare_16;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT__io_s3_cancel 
        = vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_s3_cancel;
    if (((IData)(vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_s3_cancel) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_s3_cancel))) {
        ++(vlSymsp->__Vcoverage[4721]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_s3_cancel 
            = vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_s3_cancel;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT__io_s3_missed_push 
        = vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_s3_missed_push;
    if (((IData)(vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_s3_missed_push) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_s3_missed_push))) {
        ++(vlSymsp->__Vcoverage[4723]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_s3_missed_push 
            = vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_s3_missed_push;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT__realPush = (
                                                   ((IData)(vlSelfRef.io_s3_fire_2) 
                                                    & (((~ (IData)(vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_s3_cancel)) 
                                                        & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realPush_r)) 
                                                       | (IData)(vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_s3_missed_push))) 
                                                   | (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realPush_REG));
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_s2_pc_0) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0)))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__io_out_s2_pc_0)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_0 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_s2_pc_1) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1)))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__io_out_s2_pc_1)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1719]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1720]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1721]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1722]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1723]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1724]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1725]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1726]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1727]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1728]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1729]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1730]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1731]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1732]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1733]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1734]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1735]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1736]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1737]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1738]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1739]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1740]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1741]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1742]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1743]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1744]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1745]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1746]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1747]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1748]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1749]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1750]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1751]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1752]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1753]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1754]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[1755]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_s2_pc_2) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2)))) {
        ++(vlSymsp->__Vcoverage[1756]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__io_out_s2_pc_2)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1757]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1758]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1759]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1760]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1761]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1762]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1763]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1764]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1765]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1766]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1767]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1768]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1769]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1770]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1771]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1772]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1773]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1774]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1775]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1776]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1777]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1778]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1779]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1780]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1781]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1782]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1783]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1784]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1785]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1786]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1787]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1788]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1789]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1790]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1791]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1792]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1793]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1794]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1795]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[1796]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_s2_pc_3) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3)))) {
        ++(vlSymsp->__Vcoverage[1797]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__io_out_s2_pc_3)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1798]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1799]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1800]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1801]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1802]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1803]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1804]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1805]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1806]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1807]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1808]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1809]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1810]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1811]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1812]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1813]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1814]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1815]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1816]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1817]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1818]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1819]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1820]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1821]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1822]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1823]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1824]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1825]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1826]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1827]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1828]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1829]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1830]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1831]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1832]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1833]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1834]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1835]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1836]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[1837]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_pc_3 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_s3_pc_0) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0)))) {
        ++(vlSymsp->__Vcoverage[2387]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__io_out_s3_pc_0)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2388]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2389]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2390]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2391]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2392]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2393]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2394]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2395]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2396]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2397]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2398]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2399]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2400]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2401]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2402]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2403]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2404]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2405]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2406]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2407]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2408]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2409]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2410]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2411]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2412]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2413]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2414]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2415]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2416]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2417]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2418]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2419]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2420]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2421]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2422]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2423]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2424]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2425]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2426]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2427]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_0 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_s3_pc_1) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1)))) {
        ++(vlSymsp->__Vcoverage[2428]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__io_out_s3_pc_1)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2429]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2430]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2431]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2432]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2433]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2434]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2435]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2436]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2437]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2438]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2439]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2440]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2441]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2442]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2443]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2444]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2445]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2446]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2447]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2448]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2449]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2450]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2451]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2452]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2453]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2454]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2455]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2456]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2457]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2458]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2459]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2460]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2461]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2462]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2463]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2464]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2465]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2466]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2467]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2468]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_s3_pc_2) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2)))) {
        ++(vlSymsp->__Vcoverage[2469]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__io_out_s3_pc_2)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2470]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2471]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2472]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2473]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2474]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2475]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2476]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2477]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2478]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2479]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2480]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2481]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2482]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2483]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2484]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2485]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2486]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2487]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2488]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2489]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2490]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2491]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2492]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2493]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2494]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2495]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2496]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2497]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2498]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2499]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2500]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2501]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2502]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2503]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2504]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2505]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2506]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2507]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2508]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2509]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_s3_pc_3) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3)))) {
        ++(vlSymsp->__Vcoverage[2510]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__io_out_s3_pc_3)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2511]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2512]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2513]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2514]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2515]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2516]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2517]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2518]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2519]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2520]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2521]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2522]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2523]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2524]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2525]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2526]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2527]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2528]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2529]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2530]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2531]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2532]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2533]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2534]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2535]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2536]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2537]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2538]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2539]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2540]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2541]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2542]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2543]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2544]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2545]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2546]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2547]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2548]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2549]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2550]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_pc_3 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelfRef.RAS__DOT__RASStack__DOT__io_redirect_callAddr 
        = vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr)))) {
        ++(vlSymsp->__Vcoverage[4772]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4773]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4774]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4775]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4776]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4777]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4778]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4779]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4780]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4781]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4782]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4783]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4784]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4785]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4786]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4787]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4788]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4789]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4790]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4791]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4792]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4793]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4794]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4795]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4796]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4797]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4798]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4799]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4800]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4801]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4802]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4803]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4804]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4805]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4806]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4807]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4808]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4809]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4810]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4811]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4812]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr)))) {
        ++(vlSymsp->__Vcoverage[3326]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3327]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3328]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3329]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3330]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3331]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3332]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3333]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3334]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3335]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3336]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3337]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3338]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3339]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3340]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3341]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3342]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3343]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3344]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3345]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3346]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3347]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3348]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3349]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3350]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3351]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3352]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3353]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3354]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3355]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3356]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3357]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3358]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3359]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3360]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3361]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3362]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3363]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3364]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3365]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[3366]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelfRef.io_out_s3_full_pred_0_targets_1 = vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1)))) {
        ++(vlSymsp->__Vcoverage[2596]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2597]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2598]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2599]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2600]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2601]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2602]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2603]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2604]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2605]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2606]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2607]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2608]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2609]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2610]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2611]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2612]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2613]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2614]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2615]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2616]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2617]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2618]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2619]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2620]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2621]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2622]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2623]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2624]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2625]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2626]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2627]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2628]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2629]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2630]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2631]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2632]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2633]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2634]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2635]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2636]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelfRef.io_out_s3_full_pred_1_targets_1 = vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1)))) {
        ++(vlSymsp->__Vcoverage[2726]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2727]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2728]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2729]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2730]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2731]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2732]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2733]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2734]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2735]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2736]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2737]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2738]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2739]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2740]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2741]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2742]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2743]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2744]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2745]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2746]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2747]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2748]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2749]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2750]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2751]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2752]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2753]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2754]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2755]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2756]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2757]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2758]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2759]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2760]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2761]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2762]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2763]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2764]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2765]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2766]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelfRef.io_out_s3_full_pred_2_targets_1 = vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1)))) {
        ++(vlSymsp->__Vcoverage[2856]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2857]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2858]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2859]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2860]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2861]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2862]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2863]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2864]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2865]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2866]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2867]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2868]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2869]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2870]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2871]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2872]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2873]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2874]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2875]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2876]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2877]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2878]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2879]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2880]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2881]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2882]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2883]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2884]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2885]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2886]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2887]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2888]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2889]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2890]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2891]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2892]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2893]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2894]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2895]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2896]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelfRef.io_out_s3_full_pred_3_targets_1 = vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1)))) {
        ++(vlSymsp->__Vcoverage[2986]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2987]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2988]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2990]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2991]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2992]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2993]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2994]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2995]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2996]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2997]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2998]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2999]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3000]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3001]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3002]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3003]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3004]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3005]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3006]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3007]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if (((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_NOS_flag) 
         ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_flag))) {
        ++(vlSymsp->__Vcoverage[3320]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_flag 
            = vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_NOS_flag;
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_NOS_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[3321]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value 
            = ((0x1eU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_NOS_value)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_NOS_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[3322]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value 
            = ((0x1dU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_NOS_value)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_NOS_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[3323]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value 
            = ((0x1bU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_NOS_value)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_NOS_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[3324]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value 
            = ((0x17U & (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_NOS_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_NOS_value) 
                  ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[3325]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value 
            = ((0xfU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_NOS_value)));
    }
    vlSelfRef.io_out_last_stage_spec_info_sctr = vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_sctr;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_sctr) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_sctr)))) {
        ++(vlSymsp->__Vcoverage[3306]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_sctr 
            = ((2U & (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_sctr)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_sctr)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_sctr) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_sctr)))) {
        ++(vlSymsp->__Vcoverage[3307]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_sctr 
            = ((1U & (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_sctr)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_sctr)));
    }
    if (((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSW_flag) 
         ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_flag))) {
        ++(vlSymsp->__Vcoverage[3308]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_flag 
            = vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSW_flag;
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_ssp) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_ssp)))) {
        ++(vlSymsp->__Vcoverage[3302]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_ssp 
            = ((0xeU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_ssp)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_ssp)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_ssp) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_ssp)))) {
        ++(vlSymsp->__Vcoverage[3303]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_ssp 
            = ((0xdU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_ssp)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_ssp)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_ssp) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_ssp)))) {
        ++(vlSymsp->__Vcoverage[3304]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_ssp 
            = ((0xbU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_ssp)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_ssp)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_ssp) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_ssp)))) {
        ++(vlSymsp->__Vcoverage[3305]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_ssp 
            = ((7U & (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_ssp)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_ssp)));
    }
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_78 = (0x3fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_22)));
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSW_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[3309]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value 
            = ((0x1eU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSW_value)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSW_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[3310]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value 
            = ((0x1dU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSW_value)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSW_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[3311]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value 
            = ((0x1bU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSW_value)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSW_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[3312]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value 
            = ((0x17U & (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSW_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSW_value) 
                  ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[3313]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value 
            = ((0xfU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSW_value)));
    }
    if (((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSR_flag) 
         ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_flag))) {
        ++(vlSymsp->__Vcoverage[3314]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_flag 
            = vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSR_flag;
    }
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__differentFlag_11) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__differentFlag_11))) {
        ++(vlSymsp->__Vcoverage[7669]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__differentFlag_11 
            = vlSelfRef.RAS__DOT__RASStack__DOT__differentFlag_11;
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSR_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[3315]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value 
            = ((0x1eU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSR_value)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSR_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[3316]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value 
            = ((0x1dU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSR_value)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSR_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[3317]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value 
            = ((0x1bU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSR_value)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSR_value) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[3318]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value 
            = ((0x17U & (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSR_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSR_value) 
                  ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[3319]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value 
            = ((0xfU & (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value)) 
               | (0x10U & (IData)(vlSelfRef.RAS__DOT__io_out_last_stage_spec_info_TOSR_value)));
    }
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__compare_11) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__compare_11))) {
        ++(vlSymsp->__Vcoverage[7670]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__compare_11 
            = vlSelfRef.RAS__DOT__RASStack__DOT__compare_11;
    }
    vlSelfRef.io_out_last_stage_meta[0U] = vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U];
    vlSelfRef.io_out_last_stage_meta[1U] = vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U];
    vlSelfRef.io_out_last_stage_meta[2U] = vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U];
    vlSelfRef.io_out_last_stage_meta[3U] = vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U];
    vlSelfRef.io_out_last_stage_meta[4U] = vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U];
    vlSelfRef.io_out_last_stage_meta[5U] = vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U];
    vlSelfRef.io_out_last_stage_meta[6U] = vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U];
    if ((1U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3079]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffffffeU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (1U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((2U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3080]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffffffdU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (2U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((4U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3081]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffffffbU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (4U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((8U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3082]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffffff7U & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (8U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x10U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3083]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffffffefU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x10U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x20U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3084]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffffffdfU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x20U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x40U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3085]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffffffbfU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x40U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x80U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3086]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffffff7fU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x80U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x100U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3087]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffffeffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x100U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x200U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3088]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffffdffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x200U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x400U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3089]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffffbffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x400U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x800U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3090]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffff7ffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x800U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x1000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3091]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffffefffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x1000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x2000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3092]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffffdfffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x2000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x4000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3093]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffffbfffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x4000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x8000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3094]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffff7fffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x8000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x10000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3095]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffeffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x10000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x20000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3096]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffdffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x20000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x40000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3097]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffbffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x40000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x80000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3098]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfff7ffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x80000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x100000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3099]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffefffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x100000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x200000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3100]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffdfffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x200000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x400000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3101]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffbfffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x400000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x800000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3102]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xff7fffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x800000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x1000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3103]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfeffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x1000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x2000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3104]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfdffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x2000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x4000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3105]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfbffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x4000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x8000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3106]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xf7ffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x8000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x10000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                        ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3107]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xefffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x10000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x20000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                        ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3108]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xdfffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x20000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x40000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
                        ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3109]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xbfffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x40000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if (((vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U] 
          ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3110]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0x7fffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x80000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[0U]));
    }
    if ((1U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3111]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffffffeU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (1U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((2U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3112]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffffffdU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (2U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((4U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3113]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffffffbU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (4U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((8U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3114]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffffff7U & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (8U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x10U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3115]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffffffefU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x10U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x20U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3116]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffffffdfU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x20U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x40U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3117]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffffffbfU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x40U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x80U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3118]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffffff7fU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x80U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x100U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3119]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffffeffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x100U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x200U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3120]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffffdffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x200U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x400U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3121]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffffbffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x400U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x800U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3122]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffff7ffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x800U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x1000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3123]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffffefffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x1000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x2000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3124]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffffdfffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x2000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x4000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3125]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffffbfffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x4000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x8000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3126]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffff7fffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x8000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x10000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3127]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffeffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x10000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x20000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3128]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffdffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x20000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x40000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3129]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffbffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x40000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x80000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3130]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfff7ffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x80000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x100000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3131]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffefffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x100000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x200000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3132]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffdfffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x200000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x400000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3133]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffbfffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x400000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x800000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3134]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xff7fffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x800000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x1000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3135]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfeffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x1000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x2000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3136]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfdffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x2000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x4000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3137]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfbffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x4000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x8000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3138]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xf7ffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x8000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x10000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                        ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3139]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xefffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x10000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x20000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                        ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3140]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xdfffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x20000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x40000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
                        ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3141]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xbfffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x40000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if (((vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U] 
          ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3142]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0x7fffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x80000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[1U]));
    }
    if ((1U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3143]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffffffeU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (1U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((2U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3144]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffffffdU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (2U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((4U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3145]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffffffbU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (4U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((8U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3146]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffffff7U & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (8U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x10U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3147]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffffffefU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x10U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x20U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3148]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffffffdfU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x20U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x40U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3149]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffffffbfU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x40U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x80U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3150]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffffff7fU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x80U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x100U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3151]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffffeffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x100U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x200U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3152]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffffdffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x200U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x400U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3153]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffffbffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x400U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x800U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3154]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffff7ffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x800U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x1000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3155]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffffefffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x1000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x2000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3156]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffffdfffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x2000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x4000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3157]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffffbfffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x4000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x8000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3158]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffff7fffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x8000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x10000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3159]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffeffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x10000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x20000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3160]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffdffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x20000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x40000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3161]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffbffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x40000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x80000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3162]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfff7ffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x80000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x100000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3163]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffefffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x100000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x200000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3164]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffdfffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x200000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x400000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3165]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffbfffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x400000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x800000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3166]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xff7fffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x800000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x1000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3167]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfeffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x1000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x2000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3168]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfdffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x2000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x4000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3169]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfbffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x4000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x8000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3170]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xf7ffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x8000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x10000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                        ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3171]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xefffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x10000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x20000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                        ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3172]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xdfffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x20000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x40000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
                        ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3173]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xbfffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x40000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if (((vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U] 
          ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3174]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0x7fffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x80000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[2U]));
    }
    if ((1U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3175]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffffffeU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (1U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((2U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3176]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffffffdU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (2U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((4U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3177]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffffffbU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (4U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((8U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3178]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffffff7U & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (8U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x10U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3179]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffffffefU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x10U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x20U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3180]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffffffdfU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x20U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x40U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3181]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffffffbfU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x40U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x80U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3182]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffffff7fU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x80U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x100U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3183]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffffeffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x100U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x200U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3184]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffffdffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x200U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x400U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3185]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffffbffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x400U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x800U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3186]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffff7ffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x800U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x1000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3187]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffffefffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x1000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x2000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3188]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffffdfffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x2000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x4000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3189]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffffbfffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x4000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x8000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3190]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffff7fffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x8000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x10000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3191]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffeffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x10000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x20000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3192]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffdffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x20000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x40000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3193]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffbffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x40000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x80000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3194]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfff7ffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x80000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x100000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3195]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffefffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x100000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x200000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3196]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffdfffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x200000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x400000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3197]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffbfffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x400000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x800000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3198]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xff7fffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x800000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x1000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3199]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfeffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x1000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x2000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3200]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfdffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x2000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x4000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3201]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfbffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x4000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x8000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3202]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xf7ffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x8000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x10000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                        ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3203]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xefffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x10000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x20000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                        ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3204]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xdfffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x20000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x40000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
                        ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3205]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xbfffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x40000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if (((vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U] 
          ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3206]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0x7fffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x80000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[3U]));
    }
    if ((1U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3207]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffffffeU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (1U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((2U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3208]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffffffdU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (2U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((4U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3209]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffffffbU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (4U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((8U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3210]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffffff7U & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (8U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x10U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3211]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffffffefU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x10U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x20U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3212]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffffffdfU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x20U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x40U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3213]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffffffbfU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x40U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x80U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3214]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffffff7fU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x80U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x100U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3215]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffffeffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x100U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x200U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3216]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffffdffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x200U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x400U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3217]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffffbffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x400U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x800U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3218]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffff7ffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x800U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x1000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3219]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffffefffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x1000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x2000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3220]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffffdfffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x2000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x4000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3221]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffffbfffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x4000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x8000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3222]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffff7fffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x8000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x10000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3223]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffeffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x10000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x20000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3224]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffdffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x20000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x40000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3225]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffbffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x40000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x80000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3226]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfff7ffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x80000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x100000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3227]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffefffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x100000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x200000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3228]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffdfffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x200000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x400000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3229]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffbfffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x400000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x800000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3230]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xff7fffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x800000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x1000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3231]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfeffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x1000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x2000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3232]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfdffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x2000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x4000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3233]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfbffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x4000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x8000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3234]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xf7ffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x8000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x10000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                        ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3235]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xefffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x10000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x20000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                        ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3236]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xdfffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x20000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x40000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
                        ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3237]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xbfffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x40000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if (((vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U] 
          ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3238]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0x7fffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x80000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[4U]));
    }
    if ((1U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3239]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffffffeU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (1U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((2U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3240]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffffffdU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (2U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((4U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3241]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffffffbU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (4U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((8U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3242]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffffff7U & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (8U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x10U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3243]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffffffefU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x10U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x20U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3244]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffffffdfU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x20U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x40U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3245]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffffffbfU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x40U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x80U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3246]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffffff7fU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x80U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x100U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3247]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffffeffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x100U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x200U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3248]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffffdffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x200U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x400U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3249]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffffbffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x400U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x800U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3250]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffff7ffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x800U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x1000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3251]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffffefffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x1000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x2000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3252]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffffdfffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x2000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x4000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3253]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffffbfffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x4000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x8000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3254]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffff7fffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x8000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x10000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3255]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffeffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x10000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x20000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3256]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffdffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x20000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x40000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3257]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffbffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x40000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x80000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3258]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfff7ffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x80000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x100000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3259]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffefffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x100000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x200000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3260]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffdfffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x200000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x400000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3261]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffbfffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x400000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x800000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3262]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xff7fffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x800000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x1000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3263]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfeffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x1000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x2000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3264]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfdffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x2000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x4000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3265]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfbffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x4000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x8000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3266]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xf7ffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x8000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x10000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                        ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3267]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xefffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x10000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x20000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                        ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3268]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xdfffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x20000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x40000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
                        ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3269]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xbfffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x40000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if (((vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U] 
          ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3270]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0x7fffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x80000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[5U]));
    }
    if ((1U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3271]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7ffffffeU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (1U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((2U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3272]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7ffffffdU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (2U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((4U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3273]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7ffffffbU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (4U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((8U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
               ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3274]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7ffffff7U & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (8U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x10U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3275]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7fffffefU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x10U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x20U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3276]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7fffffdfU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x20U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x40U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3277]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7fffffbfU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x40U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x80U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3278]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7fffff7fU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x80U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x100U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3279]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7ffffeffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x100U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x200U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3280]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7ffffdffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x200U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x400U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3281]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7ffffbffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x400U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x800U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                   ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3282]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7ffff7ffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x800U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x1000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3283]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7fffefffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x1000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x2000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3284]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7fffdfffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x2000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x4000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3285]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7fffbfffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x4000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x8000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                    ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3286]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7fff7fffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x8000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x10000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3287]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7ffeffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x10000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x20000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3288]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7ffdffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x20000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x40000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3289]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7ffbffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x40000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x80000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                     ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3290]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7ff7ffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x80000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x100000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3291]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7fefffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x100000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x200000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3292]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7fdfffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x200000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x400000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3293]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7fbfffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x400000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x800000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                      ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3294]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7f7fffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x800000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x1000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3295]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7effffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x1000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x2000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3296]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7dffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x2000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x4000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3297]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7bffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x4000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x8000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                       ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3298]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x77ffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x8000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x10000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                        ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3299]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x6fffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x10000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x20000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                        ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3300]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x5fffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x20000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x40000000U & (vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U] 
                        ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3301]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x3fffffffU & vlSelfRef.RAS__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x40000000U & vlSelfRef.RAS__DOT__io_out_last_stage_meta[6U]));
    }
    if (((IData)(vlSelfRef.RAS__DOT__REG_1) ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__REG_1))) {
        ++(vlSymsp->__Vcoverage[4242]);
        vlSelfRef.RAS__DOT____Vtogcov__REG_1 = vlSelfRef.RAS__DOT__REG_1;
    }
    vlSelfRef.RAS__DOT__REG = vlSelfRef.reset;
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__realPush) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realPush))) {
        ++(vlSymsp->__Vcoverage[7665]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__realPush 
            = vlSelfRef.RAS__DOT__RASStack__DOT__realPush;
    }
    if (((IData)(vlSelfRef.RAS__DOT__REG) ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__REG))) {
        ++(vlSymsp->__Vcoverage[4241]);
        vlSelfRef.RAS__DOT____Vtogcov__REG = vlSelfRef.RAS__DOT__REG;
    }
}
