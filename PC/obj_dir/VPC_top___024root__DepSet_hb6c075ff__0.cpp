// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPC_top.h for the primary calling header

#include "verilated.h"

#include "VPC_top___024root.h"

VL_INLINE_OPT void VPC_top___024root___sequent__TOP__0(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->PC_top__DOT__PC = ((IData)(vlSelf->rst)
                                ? 0U : vlSelf->PC_top__DOT__myPCreg__DOT__next_PC);
    vlSelf->instr = vlSelf->PC_top__DOT__myRom__DOT__rom_array
        [(1U & ((IData)(1U) + vlSelf->PC_top__DOT__PC))];
}

VL_INLINE_OPT void VPC_top___024root___combo__TOP__0(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->PC_top__DOT__myPCreg__DOT__next_PC = ((IData)(vlSelf->PCsrc)
                                                   ? 
                                                  (vlSelf->PC_top__DOT__PC 
                                                   + vlSelf->ImmOp)
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->PC_top__DOT__PC));
}

void VPC_top___024root___eval(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VPC_top___024root___sequent__TOP__0(vlSelf);
    }
    VPC_top___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void VPC_top___024root___eval_debug_assertions(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->PCsrc & 0xfeU))) {
        Verilated::overWidthError("PCsrc");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
