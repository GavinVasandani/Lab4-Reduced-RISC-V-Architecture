// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPC_top.h for the primary calling header

#include "verilated.h"

#include "VPC_top___024root.h"

VL_ATTR_COLD void VPC_top___024root___initial__TOP__0(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_he5f77a3e__0;
    // Body
    VL_WRITEF("Loading rom.\n");
    __Vtemp_he5f77a3e__0[0U] = 0x2e6d656dU;
    __Vtemp_he5f77a3e__0[1U] = 0x696f6e73U;
    __Vtemp_he5f77a3e__0[2U] = 0x72756374U;
    __Vtemp_he5f77a3e__0[3U] = 0x696e7374U;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_he5f77a3e__0)
                 ,  &(vlSelf->PC_top__DOT__myRom__DOT__rom_array)
                 , 0, ~0ULL);
    VL_WRITEF("Rom successfully loaded.\n");
    vlSelf->PC_top__DOT__PC = 0U;
}

VL_ATTR_COLD void VPC_top___024root___settle__TOP__0(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->instr = vlSelf->PC_top__DOT__myRom__DOT__rom_array
        [vlSelf->PC_top__DOT__PC];
    vlSelf->PC_top__DOT__myPCreg__DOT__next_PC = (0xffU 
                                                  & ((IData)(vlSelf->PCsrc)
                                                      ? 
                                                     ((IData)(vlSelf->PC_top__DOT__PC) 
                                                      + vlSelf->ImmOp)
                                                      : 
                                                     ((IData)(4U) 
                                                      + (IData)(vlSelf->PC_top__DOT__PC))));
}

VL_ATTR_COLD void VPC_top___024root___eval_initial(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___eval_initial\n"); );
    // Body
    VPC_top___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VPC_top___024root___eval_settle(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___eval_settle\n"); );
    // Body
    VPC_top___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VPC_top___024root___final(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___final\n"); );
}

VL_ATTR_COLD void VPC_top___024root___ctor_var_reset(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->ImmOp = VL_RAND_RESET_I(32);
    vlSelf->PCsrc = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->instr = VL_RAND_RESET_I(32);
    vlSelf->PC_top__DOT__PC = VL_RAND_RESET_I(8);
    vlSelf->PC_top__DOT__myPCreg__DOT__next_PC = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->PC_top__DOT__myRom__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(32);
    }
}
