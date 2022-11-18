// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vext.h for the primary calling header

#include "verilated.h"

#include "Vext___024root.h"

VL_ATTR_COLD void Vext___024root___settle__TOP__0(Vext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vext___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->ImmOp = (((- (IData)((1U & ((IData)(vlSelf->sign_ext__DOT__imm) 
                                        >> 0xbU)))) 
                      << 0xcU) | (IData)(vlSelf->sign_ext__DOT__imm));
}

VL_ATTR_COLD void Vext___024root___eval_initial(Vext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vext___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vext___024root___eval_settle(Vext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vext___024root___eval_settle\n"); );
    // Body
    Vext___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vext___024root___final(Vext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vext___024root___final\n"); );
}

VL_ATTR_COLD void Vext___024root___ctor_var_reset(Vext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vext___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->ImmSrc = VL_RAND_RESET_I(1);
    vlSelf->ImmOp = VL_RAND_RESET_I(32);
    vlSelf->sign_ext__DOT__imm = VL_RAND_RESET_I(12);
}
