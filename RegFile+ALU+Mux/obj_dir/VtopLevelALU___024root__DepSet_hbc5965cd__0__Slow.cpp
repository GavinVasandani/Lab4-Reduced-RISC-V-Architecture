// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtopLevelALU.h for the primary calling header

#include "verilated.h"

#include "VtopLevelALU___024root.h"

VL_ATTR_COLD void VtopLevelALU___024root___initial__TOP__0(VtopLevelALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLevelALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLevelALU___024root___initial__TOP__0\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h83cfa321__0;
    // Body
    VL_WRITEF("Initializing regFile with null values (0).\n");
    __Vtemp_h83cfa321__0[0U] = 0x2e6d656dU;
    __Vtemp_h83cfa321__0[1U] = 0x70757473U;
    __Vtemp_h83cfa321__0[2U] = 0x6c65496eU;
    __Vtemp_h83cfa321__0[3U] = 0x65676669U;
    __Vtemp_h83cfa321__0[4U] = 0x72U;
    VL_READMEM_N(true, 32, 32, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h83cfa321__0)
                 ,  &(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array)
                 , 0, ~0ULL);
    VL_WRITEF("regFile successfully loaded.\n");
}

VL_ATTR_COLD void VtopLevelALU___024root___eval_initial(VtopLevelALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLevelALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLevelALU___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    VtopLevelALU___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void VtopLevelALU___024root___combo__TOP__0(VtopLevelALU___024root* vlSelf);

VL_ATTR_COLD void VtopLevelALU___024root___eval_settle(VtopLevelALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLevelALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLevelALU___024root___eval_settle\n"); );
    // Body
    VtopLevelALU___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VtopLevelALU___024root___final(VtopLevelALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLevelALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLevelALU___024root___final\n"); );
}

VL_ATTR_COLD void VtopLevelALU___024root___ctor_var_reset(VtopLevelALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLevelALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLevelALU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rs1 = VL_RAND_RESET_I(5);
    vlSelf->rs2 = VL_RAND_RESET_I(5);
    vlSelf->rd = VL_RAND_RESET_I(5);
    vlSelf->regFileWen = VL_RAND_RESET_I(1);
    vlSelf->ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->ImmOp = VL_RAND_RESET_I(32);
    vlSelf->ALU_ctrl = VL_RAND_RESET_I(1);
    vlSelf->eq = VL_RAND_RESET_I(1);
    vlSelf->topLevelALU__DOT__rd1 = VL_RAND_RESET_I(32);
    vlSelf->topLevelALU__DOT__rd2 = VL_RAND_RESET_I(32);
    vlSelf->topLevelALU__DOT__ALUOp2 = VL_RAND_RESET_I(32);
    vlSelf->topLevelALU__DOT__dinTest = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
