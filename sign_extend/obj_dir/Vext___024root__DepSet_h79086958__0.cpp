// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vext.h for the primary calling header

#include "verilated.h"

#include "Vext___024root.h"

VL_INLINE_OPT void Vext___024root___sequent__TOP__0(Vext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vext___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->sign_ext__DOT__imm = (0xfffU & ((IData)(vlSelf->ImmSrc)
                                             ? (vlSelf->inst 
                                                >> 0x14U)
                                             : ((0x800U 
                                                 & (vlSelf->inst 
                                                    >> 0x14U)) 
                                                | ((0x400U 
                                                    & (vlSelf->inst 
                                                       << 3U)) 
                                                   | ((0x3f0U 
                                                       & (vlSelf->inst 
                                                          >> 0x15U)) 
                                                      | (0xfU 
                                                         & (vlSelf->inst 
                                                            >> 8U)))))));
    vlSelf->ImmOp = (((- (IData)((1U & ((IData)(vlSelf->sign_ext__DOT__imm) 
                                        >> 0xbU)))) 
                      << 0xcU) | (IData)(vlSelf->sign_ext__DOT__imm));
}

void Vext___024root___eval(Vext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vext___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vext___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vext___024root___eval_debug_assertions(Vext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vext___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->ImmSrc & 0xfeU))) {
        Verilated::overWidthError("ImmSrc");}
}
#endif  // VL_DEBUG
