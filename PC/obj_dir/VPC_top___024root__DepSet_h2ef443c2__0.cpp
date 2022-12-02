// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPC_top.h for the primary calling header

#include "verilated.h"

#include "VPC_top___024root.h"

VL_INLINE_OPT void VPC_top___024root___ico_sequent__TOP__0(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->PC_top__DOT__myPCreg__DOT__next_PC = ((IData)(vlSelf->PCsrc)
                                                   ? 
                                                  (vlSelf->ImmOp 
                                                   + vlSelf->PC_top__DOT__PC)
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->PC_top__DOT__PC));
}

void VPC_top___024root___eval_ico(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VPC_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VPC_top___024root___eval_act(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void VPC_top___024root___nba_sequent__TOP__0(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->PC_top__DOT__PC = ((IData)(vlSelf->rst)
                                ? 0U : vlSelf->PC_top__DOT__myPCreg__DOT__next_PC);
    vlSelf->instr = ((((0x1bU >= (0x1fU & vlSelf->PC_top__DOT__PC))
                        ? vlSelf->PC_top__DOT__myRom__DOT__rom_array
                       [(0x1fU & vlSelf->PC_top__DOT__PC)]
                        : 0U) << 0x18U) | ((((0x1bU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->PC_top__DOT__PC)))
                                              ? vlSelf->PC_top__DOT__myRom__DOT__rom_array
                                             [(0x1fU 
                                               & ((IData)(1U) 
                                                  + vlSelf->PC_top__DOT__PC))]
                                              : 0U) 
                                            << 0x10U) 
                                           | ((((0x1bU 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->PC_top__DOT__PC)))
                                                 ? 
                                                vlSelf->PC_top__DOT__myRom__DOT__rom_array
                                                [(0x1fU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->PC_top__DOT__PC))]
                                                 : 0U) 
                                               << 8U) 
                                              | ((0x1bU 
                                                  >= 
                                                  (0x1fU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->PC_top__DOT__PC)))
                                                  ? 
                                                 vlSelf->PC_top__DOT__myRom__DOT__rom_array
                                                 [(0x1fU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->PC_top__DOT__PC))]
                                                  : 0U))));
    vlSelf->PC_top__DOT__myPCreg__DOT__next_PC = ((IData)(vlSelf->PCsrc)
                                                   ? 
                                                  (vlSelf->ImmOp 
                                                   + vlSelf->PC_top__DOT__PC)
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->PC_top__DOT__PC));
}

void VPC_top___024root___eval_nba(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VPC_top___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VPC_top___024root___eval_triggers__ico(VPC_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPC_top___024root___dump_triggers__ico(VPC_top___024root* vlSelf);
#endif  // VL_DEBUG
void VPC_top___024root___eval_triggers__act(VPC_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPC_top___024root___dump_triggers__act(VPC_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPC_top___024root___dump_triggers__nba(VPC_top___024root* vlSelf);
#endif  // VL_DEBUG

void VPC_top___024root___eval(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VPC_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if ((0x64U < vlSelf->__VicoIterCount)) {
#ifdef VL_DEBUG
                VPC_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("PC_top.sv", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VPC_top___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VPC_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if ((0x64U < vlSelf->__VactIterCount)) {
#ifdef VL_DEBUG
                    VPC_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("PC_top.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VPC_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if ((0x64U < __VnbaIterCount)) {
#ifdef VL_DEBUG
                VPC_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("PC_top.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VPC_top___024root___eval_nba(vlSelf);
        }
    }
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
