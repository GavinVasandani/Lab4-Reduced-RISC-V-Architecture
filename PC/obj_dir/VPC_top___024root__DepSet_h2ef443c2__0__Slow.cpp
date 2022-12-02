// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPC_top.h for the primary calling header

#include "verilated.h"

#include "VPC_top___024root.h"

VL_ATTR_COLD void VPC_top___024root___eval_static(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void VPC_top___024root___eval_initial__TOP(VPC_top___024root* vlSelf);

VL_ATTR_COLD void VPC_top___024root___eval_initial(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___eval_initial\n"); );
    // Body
    VPC_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VPC_top___024root___eval_initial__TOP(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_he8d6983c__0;
    // Body
    vlSelf->PC_top__DOT__PC = 0U;
    VL_WRITEF("Loading rom.\n");
    __Vtemp_he8d6983c__0[0U] = 0x2e6d656dU;
    __Vtemp_he8d6983c__0[1U] = 0x696f6e73U;
    __Vtemp_he8d6983c__0[2U] = 0x72756374U;
    __Vtemp_he8d6983c__0[3U] = 0x696e7374U;
    VL_READMEM_N(true, 8, 28, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_he8d6983c__0)
                 ,  &(vlSelf->PC_top__DOT__myRom__DOT__rom_array)
                 , 0, ~0ULL);
    VL_WRITEF("Rom successfully loaded.\n");
}

VL_ATTR_COLD void VPC_top___024root___eval_final(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void VPC_top___024root___eval_triggers__stl(VPC_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPC_top___024root___dump_triggers__stl(VPC_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VPC_top___024root___eval_stl(VPC_top___024root* vlSelf);

VL_ATTR_COLD void VPC_top___024root___eval_settle(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VPC_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if ((0x64U < vlSelf->__VstlIterCount)) {
#ifdef VL_DEBUG
                VPC_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("PC_top.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VPC_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPC_top___024root___dump_triggers__stl(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPC_top___024root___stl_sequent__TOP__0(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___stl_sequent__TOP__0\n"); );
    // Body
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

VL_ATTR_COLD void VPC_top___024root___eval_stl(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VPC_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPC_top___024root___dump_triggers__ico(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPC_top___024root___dump_triggers__act(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPC_top___024root___dump_triggers__nba(VPC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

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
    vlSelf->PC_top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->PC_top__DOT__myPCreg__DOT__next_PC = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 28; ++__Vi0) {
        vlSelf->PC_top__DOT__myRom__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__VstlIterCount = 0;
    vlSelf->__VicoIterCount = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__VactIterCount = 0;
    vlSelf->__VactContinue = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
