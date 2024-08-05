// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ RAS__DOT__RASStack__DOT____VdfgRegularize_haeaa5fee_0_7;
    RAS__DOT__RASStack__DOT____VdfgRegularize_haeaa5fee_0_7 = 0;
    // Body
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5969]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5970]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5971]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5972]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5973]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5974]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5975]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5976]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5977]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5978]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5979]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5980]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5981]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5982]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5983]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5984]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5985]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5986]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5987]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5988]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5989]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5990]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5991]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5992]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5993]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5994]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5995]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5996]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5997]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5998]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5999]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6000]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6001]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6002]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6003]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6004]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[6005]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr)))) {
        ++(vlSymsp->__Vcoverage[6014]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6015]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6016]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6017]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6018]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6019]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6020]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6021]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6022]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6023]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6024]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6025]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6026]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6027]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6028]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6029]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6030]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6031]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6032]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6033]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6034]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6035]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6036]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6037]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6038]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6039]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6040]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6041]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6042]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6043]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6044]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6045]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6046]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6047]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6048]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6049]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6050]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6051]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6052]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6053]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[6054]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr)))) {
        ++(vlSymsp->__Vcoverage[6063]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6064]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6065]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6066]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6067]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6068]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6069]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6070]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6071]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6072]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6073]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6074]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6075]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6076]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6077]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6078]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6079]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6080]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6081]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6082]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6083]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6084]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6085]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6086]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6087]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6088]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6089]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6090]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6091]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6092]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6093]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6094]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6095]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6096]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6097]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6098]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6099]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6100]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6101]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6102]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[6103]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr)))) {
        ++(vlSymsp->__Vcoverage[6112]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6113]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6114]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6115]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6116]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6117]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6118]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6119]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6120]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6121]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6122]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6123]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6124]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6125]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6126]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6127]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6128]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6129]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6130]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6131]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6132]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6133]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6134]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6135]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6136]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6137]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6138]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6139]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6140]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6141]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6142]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6143]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6144]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6145]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6146]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6147]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6148]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6149]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6150]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6151]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[6152]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr)))) {
        ++(vlSymsp->__Vcoverage[6161]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6162]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6163]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6164]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6165]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6166]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6167]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6168]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6169]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6170]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6171]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6172]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6173]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6174]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6175]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6176]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6177]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6178]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6179]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6180]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6181]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6182]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6183]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6184]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6185]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6186]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6187]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6188]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6189]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6190]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6191]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6192]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6193]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6194]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6195]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6196]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6197]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6198]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6199]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6200]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[6201]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr)))) {
        ++(vlSymsp->__Vcoverage[6210]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6211]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6212]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6213]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6214]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6215]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6216]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6217]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6218]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6219]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6220]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6221]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6222]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6223]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6224]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6225]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6226]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6227]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6228]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6229]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6230]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6231]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6232]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6233]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6234]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6235]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6236]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6237]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6238]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6239]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6240]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6241]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6242]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6243]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6244]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6245]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6246]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6247]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6248]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6249]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[6250]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr)))) {
        ++(vlSymsp->__Vcoverage[6259]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6260]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6261]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6262]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6263]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6264]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6265]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6266]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6267]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6268]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6269]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6270]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6271]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6272]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6273]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6274]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6275]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6276]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6277]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6278]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6279]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6280]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6281]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6282]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6283]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6284]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6285]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6286]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6287]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6288]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6289]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6290]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6291]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6292]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6293]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6294]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6295]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6296]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6297]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6298]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[6299]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr)))) {
        ++(vlSymsp->__Vcoverage[6308]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6309]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6310]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6311]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6312]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6313]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6314]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6315]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6316]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6317]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6318]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6319]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6320]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6321]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6322]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6323]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6324]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6325]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6326]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6327]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6328]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6329]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6330]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6331]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6332]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6333]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6334]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6335]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6336]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6337]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6338]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6339]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6340]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6341]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6342]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6343]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6344]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6345]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6346]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6347]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[6348]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr)))) {
        ++(vlSymsp->__Vcoverage[6357]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6358]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6359]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6360]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6361]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6362]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6363]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6364]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6365]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6366]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6367]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6368]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6369]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6370]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6371]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6372]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6373]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6374]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6375]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6376]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6377]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6378]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6379]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6380]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6381]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6382]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6383]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6384]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6385]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6386]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6387]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6388]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6389]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6390]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6391]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6392]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6393]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6394]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6395]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6396]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[6397]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr)))) {
        ++(vlSymsp->__Vcoverage[6406]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6407]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6408]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6409]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6410]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6411]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6412]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6413]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6414]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6415]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6416]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6417]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6418]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6419]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6420]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6421]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6422]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6423]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6424]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6425]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6426]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6427]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6428]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6429]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6430]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6431]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6432]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6433]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6434]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6435]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6436]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6437]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6438]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6439]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6440]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6441]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6442]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6443]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6444]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6445]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[6446]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr)))) {
        ++(vlSymsp->__Vcoverage[6455]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6456]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6457]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6458]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6459]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6460]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6461]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6462]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6463]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6464]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6465]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6466]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6467]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6468]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6469]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6470]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6471]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6472]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6473]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6474]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6475]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6476]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6477]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6478]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6479]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6480]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6481]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6482]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6483]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6484]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6485]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6486]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6487]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6488]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6489]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6490]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6491]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6492]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6493]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6494]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[6495]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr)))) {
        ++(vlSymsp->__Vcoverage[6504]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6505]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6506]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6507]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6508]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6509]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6510]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6511]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6512]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6513]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6514]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6515]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6516]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6517]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6518]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6519]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6520]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6521]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6522]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6523]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6524]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6525]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6526]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6527]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6528]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6529]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6530]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6531]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6532]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6533]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6534]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6535]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6536]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6537]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6538]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6539]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6540]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6541]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6542]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6543]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[6544]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr)))) {
        ++(vlSymsp->__Vcoverage[6553]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6554]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6555]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6556]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6557]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6558]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6559]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6560]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6561]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6562]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6563]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6564]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6565]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6566]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6567]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6568]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6569]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6570]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6571]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6572]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6573]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6574]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6575]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6576]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6577]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6578]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6579]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6580]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6581]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6582]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6583]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6584]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6585]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6586]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6587]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6588]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6589]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6590]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6591]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6592]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[6593]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr)))) {
        ++(vlSymsp->__Vcoverage[6602]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6603]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6604]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6605]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6606]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6607]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6608]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6609]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6610]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6611]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6612]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6613]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6614]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6615]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6616]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6617]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6618]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6619]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6620]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6621]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6622]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6623]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6624]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6625]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6626]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6627]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6628]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6629]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6630]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6631]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6632]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6633]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6634]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6635]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6636]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6637]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6638]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6639]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6640]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6641]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[6642]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr)))) {
        ++(vlSymsp->__Vcoverage[6651]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6652]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6653]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6654]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6655]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6656]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6657]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6658]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6659]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6660]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6661]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6662]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6663]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6664]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6665]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6666]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6667]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6668]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6669]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6670]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6671]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6672]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6673]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6674]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6675]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6676]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6677]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6678]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6679]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6680]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6681]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6682]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6683]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6684]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6685]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6686]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6687]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6688]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6689]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6690]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[6691]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr)))) {
        ++(vlSymsp->__Vcoverage[6700]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6701]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6702]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6703]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6704]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6705]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6706]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6707]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6708]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6709]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6710]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6711]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6712]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6713]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6714]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6715]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6716]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6717]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6718]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6719]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6720]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6721]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6722]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6723]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6724]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6725]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6726]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6727]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6728]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6729]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6730]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6731]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6732]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6733]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6734]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6735]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6736]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6737]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6738]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6739]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[6740]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr)))) {
        ++(vlSymsp->__Vcoverage[6749]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6750]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6751]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6752]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6753]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6754]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6755]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6756]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6757]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6758]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6759]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6760]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6761]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6762]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6763]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6764]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6765]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6766]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6767]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6768]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6769]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6770]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6771]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6772]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6773]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6774]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6775]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6776]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6777]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6778]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6779]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6780]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6781]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6782]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6783]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6784]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6785]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6786]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6787]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6788]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[6789]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr)))) {
        ++(vlSymsp->__Vcoverage[6798]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6799]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6800]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6801]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6802]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6803]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6804]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6805]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6806]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6807]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6808]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6809]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6810]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6811]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6812]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6813]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6814]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6815]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6816]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6817]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6818]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6819]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6820]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6821]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6822]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6823]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6824]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6825]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6826]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6827]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6828]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6829]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6830]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6831]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6832]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6833]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6834]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6835]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6836]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6837]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[6838]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr)))) {
        ++(vlSymsp->__Vcoverage[6847]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6848]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6849]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6850]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6851]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6852]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6853]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6854]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6855]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6856]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6857]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6858]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6859]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6860]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6861]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6862]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6863]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6864]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6865]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6866]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6867]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6868]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6869]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6870]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6871]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6872]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6873]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6874]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6875]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6876]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6877]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6878]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6879]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6880]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6881]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6882]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6883]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6884]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6885]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6886]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[6887]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr)))) {
        ++(vlSymsp->__Vcoverage[6896]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6897]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6898]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6899]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6900]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6901]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6902]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6903]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6904]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6905]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6906]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6907]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6908]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6909]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6910]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6911]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6912]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6913]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6914]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6915]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6916]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6917]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6918]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6919]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6920]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6921]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6922]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6923]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6924]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6925]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6926]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6927]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6928]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6929]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6930]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6931]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6932]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6933]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6934]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6935]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[6936]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr)))) {
        ++(vlSymsp->__Vcoverage[6945]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6946]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6947]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6948]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6949]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6950]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6951]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6952]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6953]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6954]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6955]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6956]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6957]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6958]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6959]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6960]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6961]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6962]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6963]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6964]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6965]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6966]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6967]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6968]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6969]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6970]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6971]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6972]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6973]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6974]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6975]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6976]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6977]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6978]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6979]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6980]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6981]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6982]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6983]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6984]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[6985]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr)))) {
        ++(vlSymsp->__Vcoverage[6994]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6995]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6996]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6997]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6998]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6999]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[7000]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7001]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[7002]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[7003]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[7004]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[7005]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[7006]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[7007]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[7008]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[7009]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[7010]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[7011]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[7012]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[7013]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[7014]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[7015]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[7016]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[7017]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[7018]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[7019]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[7020]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[7021]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[7022]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[7023]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[7024]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[7025]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[7026]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[7027]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[7028]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[7029]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[7030]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[7031]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[7032]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7033]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[7034]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr)))) {
        ++(vlSymsp->__Vcoverage[7043]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[7044]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[7045]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7046]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7047]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7048]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[7049]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7050]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[7051]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[7052]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[7053]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[7054]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[7055]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[7056]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[7057]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[7058]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[7059]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[7060]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[7061]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[7062]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[7063]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[7064]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[7065]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[7066]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[7067]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[7068]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[7069]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[7070]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[7071]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[7072]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[7073]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[7074]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[7075]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[7076]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[7077]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[7078]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[7079]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[7080]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[7081]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7082]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[7083]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr)))) {
        ++(vlSymsp->__Vcoverage[7092]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[7093]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[7094]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7095]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7096]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7097]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[7098]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7099]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[7100]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[7101]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[7102]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[7103]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[7104]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[7105]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[7106]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[7107]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[7108]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[7109]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[7110]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[7111]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[7112]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[7113]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[7114]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[7115]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[7116]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[7117]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[7118]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[7119]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[7120]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[7121]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[7122]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[7123]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[7124]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[7125]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[7126]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[7127]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[7128]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[7129]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[7130]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7131]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[7132]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr)))) {
        ++(vlSymsp->__Vcoverage[7141]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[7142]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[7143]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7144]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7145]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7146]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[7147]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7148]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[7149]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[7150]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[7151]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[7152]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[7153]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[7154]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[7155]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[7156]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[7157]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[7158]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[7159]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[7160]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[7161]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[7162]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[7163]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[7164]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[7165]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[7166]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[7167]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[7168]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[7169]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[7170]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[7171]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[7172]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[7173]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[7174]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[7175]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[7176]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[7177]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[7178]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[7179]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7180]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[7181]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0U] = (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_0_retAddr);
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[1U] = 
        (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_1_retAddr) 
          << 9U) | (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_0_retAddr 
                            >> 0x20U)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[2U] = 
        (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_2_retAddr) 
          << 0x12U) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_1_retAddr) 
                        >> 0x17U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_1_retAddr 
                                              >> 0x20U)) 
                                     << 9U)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[3U] = 
        (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_3_retAddr) 
          << 0x1bU) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_2_retAddr) 
                        >> 0xeU) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_2_retAddr 
                                             >> 0x20U)) 
                                    << 0x12U)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[4U] = 
        (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_3_retAddr) 
          >> 5U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_3_retAddr 
                             >> 0x20U)) << 0x1bU));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[5U] = 
        (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_4_retAddr) 
          << 4U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_3_retAddr 
                             >> 0x20U)) >> 5U));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[6U] = 
        (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_5_retAddr) 
          << 0xdU) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_4_retAddr) 
                       >> 0x1cU) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_4_retAddr 
                                             >> 0x20U)) 
                                    << 4U)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[7U] = 
        (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_6_retAddr) 
          << 0x16U) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_5_retAddr) 
                        >> 0x13U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_5_retAddr 
                                              >> 0x20U)) 
                                     << 0xdU)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[8U] = 
        (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr) 
          << 0x1fU) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_6_retAddr) 
                        >> 0xaU) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_6_retAddr 
                                             >> 0x20U)) 
                                    << 0x16U)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[9U] = 
        (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr) 
          >> 1U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                             >> 0x20U)) << 0x1fU));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0xaU] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr) 
            << 8U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                               >> 0x20U)) >> 1U));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0xbU] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr) 
            << 0x11U) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr) 
                          >> 0x18U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                >> 0x20U)) 
                                       << 8U)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0xcU] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr) 
            << 0x1aU) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr) 
                          >> 0xfU) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                               >> 0x20U)) 
                                      << 0x11U)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0xdU] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr) 
            >> 6U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                               >> 0x20U)) << 0x1aU));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0xeU] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr) 
            << 3U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                               >> 0x20U)) >> 6U));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0xfU] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr) 
            << 0xcU) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr) 
                         >> 0x1dU) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                               >> 0x20U)) 
                                      << 3U)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x10U] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr) 
            << 0x15U) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr) 
                          >> 0x14U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                >> 0x20U)) 
                                       << 0xcU)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x11U] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr) 
            << 0x1eU) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr) 
                          >> 0xbU) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                               >> 0x20U)) 
                                      << 0x15U)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x12U] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr) 
            >> 2U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                               >> 0x20U)) << 0x1eU));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x13U] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr) 
            << 7U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                               >> 0x20U)) >> 2U));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x14U] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr) 
            << 0x10U) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr) 
                          >> 0x19U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                >> 0x20U)) 
                                       << 7U)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x15U] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr) 
            << 0x19U) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr) 
                          >> 0x10U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                >> 0x20U)) 
                                       << 0x10U)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x16U] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr) 
            >> 7U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                               >> 0x20U)) << 0x19U));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x17U] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr) 
            << 2U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                               >> 0x20U)) >> 7U));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x18U] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr) 
            << 0xbU) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr) 
                         >> 0x1eU) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                               >> 0x20U)) 
                                      << 2U)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x19U] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr) 
            << 0x14U) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr) 
                          >> 0x15U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                >> 0x20U)) 
                                       << 0xbU)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x1aU] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr) 
            << 0x1dU) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr) 
                          >> 0xcU) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                               >> 0x20U)) 
                                      << 0x14U)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x1bU] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr) 
            >> 3U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                               >> 0x20U)) << 0x1dU));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x1cU] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr) 
            << 6U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                               >> 0x20U)) >> 3U));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x1dU] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr) 
            << 0xfU) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr) 
                         >> 0x1aU) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                               >> 0x20U)) 
                                      << 6U)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x1eU] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr) 
            << 0x18U) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr) 
                          >> 0x11U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                >> 0x20U)) 
                                       << 0xfU)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x1fU] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr) 
            >> 8U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                               >> 0x20U)) << 0x18U));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x20U] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr) 
            << 1U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                               >> 0x20U)) >> 8U));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x21U] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr) 
            << 0xaU) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr) 
                         >> 0x1fU) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                               >> 0x20U)) 
                                      << 1U)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x22U] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr) 
            << 0x13U) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr) 
                          >> 0x16U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x23U] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr) 
            << 0x1cU) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr) 
                          >> 0xdU) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                               >> 0x20U)) 
                                      << 0x13U)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x24U] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr) 
            >> 4U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                               >> 0x20U)) << 0x1cU));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x25U] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr) 
            << 5U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                               >> 0x20U)) >> 4U));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x26U] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr) 
            << 0xeU) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr) 
                         >> 0x1bU) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                               >> 0x20U)) 
                                      << 5U)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x27U] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr) 
            << 0x17U) | (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr) 
                          >> 0x12U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                >> 0x20U)) 
                                       << 0xeU)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[0x28U] 
        = (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr) 
            >> 9U) | ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                               >> 0x20U)) << 0x17U));
    if (((IData)(vlSelfRef.RAS__DOT__redirect_next_valid_last_r) 
         ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__redirect_next_valid_last_r))) {
        ++(vlSymsp->__Vcoverage[4356]);
        vlSelfRef.RAS__DOT____Vtogcov__redirect_next_valid_last_r 
            = vlSelfRef.RAS__DOT__redirect_next_valid_last_r;
    }
    vlSelfRef.RAS__DOT__RASStack__DOT__io_redirect_valid 
        = vlSelfRef.RAS__DOT__redirect_next_valid_last_r;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr)))) {
        ++(vlSymsp->__Vcoverage[7521]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[7522]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[7523]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7524]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7525]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7526]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[7527]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7528]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[7529]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[7530]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[7531]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[7532]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[7533]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[7534]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[7535]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[7536]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[7537]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[7538]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[7539]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[7540]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[7541]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[7542]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[7543]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[7544]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[7545]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[7546]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[7547]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[7548]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[7549]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[7550]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[7551]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[7552]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[7553]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[7554]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[7555]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[7556]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[7557]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[7558]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[7559]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7560]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[7561]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__timingTop_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
        = vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr;
    if (vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_2_is_jalr) {
        if (vlSelfRef.RAS__DOT___GEN) {
            vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                = vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr;
            vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                = vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr;
            vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                = vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr;
            vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                = vlSelfRef.RAS__DOT__RASStack__DOT__timingTop_retAddr;
        } else {
            vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                = vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_0_jalr_target;
            vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                = vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_1_jalr_target;
            vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                = vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_2_jalr_target;
            vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                = vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_3_jalr_target;
        }
    } else {
        vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
            = vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_0_targets_1;
        vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
            = vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_1_targets_1;
        vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
            = vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_2_targets_1;
        vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
            = vlSelfRef.io_in_bits_resp_in_0_s2_full_pred_3_targets_1;
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_sctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_sctr)))) {
        ++(vlSymsp->__Vcoverage[4817]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_sctr 
            = ((6U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_sctr)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_sctr)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_sctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_sctr)))) {
        ++(vlSymsp->__Vcoverage[4818]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_sctr 
            = ((5U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_sctr)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_sctr)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_sctr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_sctr)))) {
        ++(vlSymsp->__Vcoverage[4819]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_sctr 
            = ((3U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_sctr)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_sctr)));
    }
    if (((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSW_flag) 
         ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_flag))) {
        ++(vlSymsp->__Vcoverage[4826]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_flag 
            = vlSelfRef.RAS__DOT__RASStack__DOT__io_TOSW_flag;
    }
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_ssp) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_ssp)))) {
        ++(vlSymsp->__Vcoverage[4813]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_ssp 
            = ((0xeU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_ssp)) 
               | (1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_ssp)));
    }
    if ((2U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_ssp) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_ssp)))) {
        ++(vlSymsp->__Vcoverage[4814]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_ssp 
            = ((0xdU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_ssp)) 
               | (2U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_ssp)));
    }
    if ((4U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_ssp) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_ssp)))) {
        ++(vlSymsp->__Vcoverage[4815]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_ssp 
            = ((0xbU & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_ssp)) 
               | (4U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_ssp)));
    }
    if ((8U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_ssp) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_ssp)))) {
        ++(vlSymsp->__Vcoverage[4816]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_ssp 
            = ((7U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_ssp)) 
               | (8U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_ssp)));
    }
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_24 = (0xffU 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__nsp), 3U)))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.RAS__DOT__RASStack__DOT___GEN_5[
                                                       (((IData)(7U) 
                                                         + 
                                                         (0x7fU 
                                                          & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__nsp), 3U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__nsp), 3U))))) 
                                                     | (vlSelfRef.RAS__DOT__RASStack__DOT___GEN_5[
                                                        (3U 
                                                         & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__nsp), 3U) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__nsp), 3U)))));
    vlSelfRef.RAS__DOT__RASStack__DOT___BOS_new_ptr_T_16 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_20)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_4 = ((0x28fU 
                                                  >= 
                                                  (0x3ffU 
                                                   & ((IData)(0x29U) 
                                                      * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__ssp))))
                                                  ? 
                                                 (0x1ffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.RAS__DOT__RASStack__DOT___GEN_3[
                                                                      (((IData)(0x28U) 
                                                                        + 
                                                                        (0x3ffU 
                                                                         & ((IData)(0x29U) 
                                                                            * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__ssp)))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x29U) 
                                                            * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__ssp))))
                                                        ? 0x20U
                                                        : 
                                                       ((IData)(0x40U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x29U) 
                                                            * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__ssp)))))) 
                                                     | (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x29U) 
                                                              * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__ssp))))
                                                          ? 0ULL
                                                          : 
                                                         ((QData)((IData)(
                                                                          vlSelfRef.RAS__DOT__RASStack__DOT___GEN_3[
                                                                          (((IData)(0x1fU) 
                                                                            + 
                                                                            (0x3ffU 
                                                                             & ((IData)(0x29U) 
                                                                                * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__ssp)))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x29U) 
                                                               * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__ssp)))))) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.RAS__DOT__RASStack__DOT___GEN_3[
                                                                           (0x1fU 
                                                                            & (((IData)(0x29U) 
                                                                                * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__ssp)) 
                                                                               >> 5U))])) 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x29U) 
                                                               * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__ssp)))))))
                                                  : 0ULL);
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr) 
               ^ (IData)(vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr)))) {
        ++(vlSymsp->__Vcoverage[4724]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4725]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4726]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4727]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4728]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4729]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4730]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4731]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4732]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4733]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4734]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4735]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4736]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4737]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4738]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4739]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4740]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4741]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4742]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4743]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4744]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4745]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4746]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4747]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4748]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4749]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4750]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4751]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4752]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4753]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4754]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4755]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4756]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4757]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4758]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4759]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4760]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4761]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4762]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4763]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                  ^ vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4764]);
        vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__RASStack__DOT__io_spec_pop_addr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelfRef.io_out_s2_full_pred_0_targets_1 = vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1)))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1919]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1920]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1921]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1922]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelfRef.io_out_s2_full_pred_1_targets_1 = vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1)))) {
        ++(vlSymsp->__Vcoverage[2020]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2021]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2022]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2023]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2024]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2025]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2043]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2044]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2045]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2046]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2047]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2048]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2049]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2050]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2051]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2052]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2053]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2054]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2055]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2056]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2057]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2058]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2059]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2060]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelfRef.io_out_s2_full_pred_2_targets_1 = vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1)))) {
        ++(vlSymsp->__Vcoverage[2157]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2158]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2159]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2160]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2161]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2162]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2163]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2164]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2165]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2166]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2167]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2168]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2169]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2170]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2171]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2172]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2173]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2174]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2175]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2176]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2177]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2178]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2179]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2180]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2181]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2182]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2183]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2184]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2185]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2186]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2187]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2188]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2189]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2190]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2191]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2192]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2193]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2194]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2195]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2196]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2197]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelfRef.io_out_s2_full_pred_3_targets_1 = vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1;
    if ((1U & ((IData)(vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1) 
               ^ (IData)(vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1)))) {
        ++(vlSymsp->__Vcoverage[2294]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffffffeULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1)))));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 1U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2295]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffffffdULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 2U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2296]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffffffbULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 3U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2297]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffffff7ULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 4U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2298]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffffffefULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 5U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2299]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffffffdfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 6U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2300]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffffffbfULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 7U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2301]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffffff7fULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 8U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2302]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffffeffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 9U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2303]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffffdffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0xaU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2304]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffffbffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0xbU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2305]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffff7ffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0xcU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2306]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffffefffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0xdU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2307]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffffdfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0xeU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2308]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffffbfffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0xfU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2309]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffff7fffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x10U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2310]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffeffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x11U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2311]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffdffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x12U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2312]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffbffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x13U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2313]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffff7ffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x14U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2314]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffefffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x15U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2315]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffdfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x16U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2316]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffbfffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x17U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2317]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffff7fffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x18U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2318]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffeffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x19U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2319]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffdffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2320]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffbffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2321]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fff7ffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2322]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffefffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2323]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffdfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2324]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffbfffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2325]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ff7fffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x20U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2326]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1feffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x21U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2327]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fdffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x22U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2328]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fbffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x23U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2329]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1f7ffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x24U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2330]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1efffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x25U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2331]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1dfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x26U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2332]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1bfffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x27U)) ^ (IData)((vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2333]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x17fffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                  ^ vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2334]);
        vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0xffffffffffULL & vlSelfRef.RAS__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.RAS__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelfRef.RAS__DOT__RASStack__DOT___commit_stack_ctr_T_2 
        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_24)));
    vlSelfRef.RAS__DOT__RASStack__DOT___commit_stack_ctr_T 
        = (0xffU & ((IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_24) 
                    - (IData)(1U)));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_56 = ((7U 
                                                   > (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_24)) 
                                                  & (((0x28fU 
                                                       >= 
                                                       (0x3ffU 
                                                        & ((IData)(0x29U) 
                                                           * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__nsp))))
                                                       ? 
                                                      (0x1ffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelfRef.RAS__DOT__RASStack__DOT___GEN_3[
                                                                           (((IData)(0x28U) 
                                                                             + 
                                                                             (0x3ffU 
                                                                              & ((IData)(0x29U) 
                                                                                * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__nsp)))) 
                                                                            >> 5U)])) 
                                                           << 
                                                           ((0U 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(0x29U) 
                                                                 * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__nsp))))
                                                             ? 0x20U
                                                             : 
                                                            ((IData)(0x40U) 
                                                             - 
                                                             (0x1fU 
                                                              & ((IData)(0x29U) 
                                                                 * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__nsp)))))) 
                                                          | (((0U 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(0x29U) 
                                                                   * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__nsp))))
                                                               ? 0ULL
                                                               : 
                                                              ((QData)((IData)(
                                                                               vlSelfRef.RAS__DOT__RASStack__DOT___GEN_3[
                                                                               (((IData)(0x1fU) 
                                                                                + 
                                                                                (0x3ffU 
                                                                                & ((IData)(0x29U) 
                                                                                * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__nsp)))) 
                                                                                >> 5U)])) 
                                                               << 
                                                               ((IData)(0x20U) 
                                                                - 
                                                                (0x1fU 
                                                                 & ((IData)(0x29U) 
                                                                    * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__nsp)))))) 
                                                             | ((QData)((IData)(
                                                                                vlSelfRef.RAS__DOT__RASStack__DOT___GEN_3[
                                                                                (0x1fU 
                                                                                & (((IData)(0x29U) 
                                                                                * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__nsp)) 
                                                                                >> 5U))])) 
                                                                >> 
                                                                (0x1fU 
                                                                 & ((IData)(0x29U) 
                                                                    * (IData)(vlSelfRef.RAS__DOT__RASStack__DOT__nsp)))))))
                                                       : 0ULL) 
                                                     == 
                                                     ((0x51fU 
                                                       >= 
                                                       (0x7ffU 
                                                        & ((IData)(0x29U) 
                                                           * 
                                                           (0x1fU 
                                                            & (vlSelfRef.io_update_bits_meta[0U] 
                                                               >> 0xcU)))))
                                                       ? 
                                                      (0x1ffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[
                                                                           (((IData)(0x28U) 
                                                                             + 
                                                                             (0x7ffU 
                                                                              & ((IData)(0x29U) 
                                                                                * 
                                                                                (0x1fU 
                                                                                & (vlSelfRef.io_update_bits_meta[0U] 
                                                                                >> 0xcU))))) 
                                                                            >> 5U)])) 
                                                           << 
                                                           ((0U 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(0x29U) 
                                                                 * 
                                                                 (0x1fU 
                                                                  & (vlSelfRef.io_update_bits_meta[0U] 
                                                                     >> 0xcU)))))
                                                             ? 0x20U
                                                             : 
                                                            ((IData)(0x40U) 
                                                             - 
                                                             (0x1fU 
                                                              & ((IData)(0x29U) 
                                                                 * 
                                                                 (0x1fU 
                                                                  & (vlSelfRef.io_update_bits_meta[0U] 
                                                                     >> 0xcU))))))) 
                                                          | (((0U 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(0x29U) 
                                                                   * 
                                                                   (0x1fU 
                                                                    & (vlSelfRef.io_update_bits_meta[0U] 
                                                                       >> 0xcU)))))
                                                               ? 0ULL
                                                               : 
                                                              ((QData)((IData)(
                                                                               vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[
                                                                               (((IData)(0x1fU) 
                                                                                + 
                                                                                (0x7ffU 
                                                                                & ((IData)(0x29U) 
                                                                                * 
                                                                                (0x1fU 
                                                                                & (vlSelfRef.io_update_bits_meta[0U] 
                                                                                >> 0xcU))))) 
                                                                                >> 5U)])) 
                                                               << 
                                                               ((IData)(0x20U) 
                                                                - 
                                                                (0x1fU 
                                                                 & ((IData)(0x29U) 
                                                                    * 
                                                                    (0x1fU 
                                                                     & (vlSelfRef.io_update_bits_meta[0U] 
                                                                        >> 0xcU))))))) 
                                                             | ((QData)((IData)(
                                                                                vlSelfRef.RAS__DOT__RASStack__DOT___GEN_0[
                                                                                (0x3fU 
                                                                                & (((IData)(0x29U) 
                                                                                * 
                                                                                (0x1fU 
                                                                                & (vlSelfRef.io_update_bits_meta[0U] 
                                                                                >> 0xcU))) 
                                                                                >> 5U))])) 
                                                                >> 
                                                                (0x1fU 
                                                                 & ((IData)(0x29U) 
                                                                    * 
                                                                    (0x1fU 
                                                                     & (vlSelfRef.io_update_bits_meta[0U] 
                                                                        >> 0xcU))))))))
                                                       : 0ULL)));
    RAS__DOT__RASStack__DOT____VdfgRegularize_haeaa5fee_0_7 
        = ((IData)(vlSelfRef.RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
           & (0U != (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_24)));
    vlSelfRef.RAS__DOT__RASStack__DOT___BOS_new_ptr_T_6 
        = vlSelfRef.RAS__DOT__RASStack__DOT___BOS_new_ptr_T_16;
    vlSelfRef.RAS__DOT__RASStack__DOT___BOS_new_ptr_T_1 
        = vlSelfRef.RAS__DOT__RASStack__DOT___BOS_new_ptr_T_16;
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_26 = ((IData)(RAS__DOT__RASStack__DOT____VdfgRegularize_haeaa5fee_0_7) 
                                                  & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_25));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_28 = ((IData)(RAS__DOT__RASStack__DOT____VdfgRegularize_haeaa5fee_0_7) 
                                                  & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_27));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_30 = ((IData)(RAS__DOT__RASStack__DOT____VdfgRegularize_haeaa5fee_0_7) 
                                                  & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_29));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_32 = ((IData)(RAS__DOT__RASStack__DOT____VdfgRegularize_haeaa5fee_0_7) 
                                                  & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_31));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_34 = ((IData)(RAS__DOT__RASStack__DOT____VdfgRegularize_haeaa5fee_0_7) 
                                                  & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_33));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_36 = ((IData)(RAS__DOT__RASStack__DOT____VdfgRegularize_haeaa5fee_0_7) 
                                                  & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_35));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_38 = ((IData)(RAS__DOT__RASStack__DOT____VdfgRegularize_haeaa5fee_0_7) 
                                                  & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_37));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_40 = ((IData)(RAS__DOT__RASStack__DOT____VdfgRegularize_haeaa5fee_0_7) 
                                                  & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_39));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_42 = ((IData)(RAS__DOT__RASStack__DOT____VdfgRegularize_haeaa5fee_0_7) 
                                                  & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_41));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_44 = ((IData)(RAS__DOT__RASStack__DOT____VdfgRegularize_haeaa5fee_0_7) 
                                                  & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_43));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_46 = ((IData)(RAS__DOT__RASStack__DOT____VdfgRegularize_haeaa5fee_0_7) 
                                                  & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_45));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_48 = ((IData)(RAS__DOT__RASStack__DOT____VdfgRegularize_haeaa5fee_0_7) 
                                                  & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_47));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_50 = ((IData)(RAS__DOT__RASStack__DOT____VdfgRegularize_haeaa5fee_0_7) 
                                                  & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_49));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_52 = ((IData)(RAS__DOT__RASStack__DOT____VdfgRegularize_haeaa5fee_0_7) 
                                                  & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_51));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_54 = ((IData)(RAS__DOT__RASStack__DOT____VdfgRegularize_haeaa5fee_0_7) 
                                                  & (IData)(vlSelfRef.RAS__DOT__RASStack__DOT___GEN_53));
    vlSelfRef.RAS__DOT__RASStack__DOT___GEN_55 = ((IData)(RAS__DOT__RASStack__DOT____VdfgRegularize_haeaa5fee_0_7) 
                                                  & (0x1e00000U 
                                                     == 
                                                     (0x1e00000U 
                                                      & vlSelfRef.io_update_bits_meta[0U])));
}
