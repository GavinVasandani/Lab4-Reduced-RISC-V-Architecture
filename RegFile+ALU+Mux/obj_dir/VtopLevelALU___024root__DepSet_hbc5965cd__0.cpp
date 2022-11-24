// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtopLevelALU.h for the primary calling header

#include "verilated.h"

#include "VtopLevelALU___024root.h"

VL_INLINE_OPT void VtopLevelALU___024root___sequent__TOP__0(VtopLevelALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLevelALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLevelALU___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__topLevelALU__DOT__regFile1__DOT__regFile_array__v0;
    IData/*31:0*/ __Vdlyvval__topLevelALU__DOT__regFile1__DOT__regFile_array__v0;
    CData/*0:0*/ __Vdlyvset__topLevelALU__DOT__regFile1__DOT__regFile_array__v0;
    // Body
    __Vdlyvset__topLevelALU__DOT__regFile1__DOT__regFile_array__v0 = 0U;
    if (vlSelf->regFileWen) {
        __Vdlyvval__topLevelALU__DOT__regFile1__DOT__regFile_array__v0 
            = vlSelf->topLevelALU__DOT__dinTest;
        __Vdlyvset__topLevelALU__DOT__regFile1__DOT__regFile_array__v0 = 1U;
        __Vdlyvdim0__topLevelALU__DOT__regFile1__DOT__regFile_array__v0 
            = vlSelf->rd;
    }
    vlSelf->topLevelALU__DOT__rd1 = vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array
        [vlSelf->rs1];
    vlSelf->topLevelALU__DOT__rd2 = vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array
        [vlSelf->rs2];
    if (__Vdlyvset__topLevelALU__DOT__regFile1__DOT__regFile_array__v0) {
        vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[__Vdlyvdim0__topLevelALU__DOT__regFile1__DOT__regFile_array__v0] 
            = __Vdlyvval__topLevelALU__DOT__regFile1__DOT__regFile_array__v0;
    }
}

VL_INLINE_OPT void VtopLevelALU___024root___combo__TOP__0(VtopLevelALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLevelALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLevelALU___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->topLevelALU__DOT__ALUOp2 = ((IData)(vlSelf->ALUSrc)
                                         ? vlSelf->ImmOp
                                         : vlSelf->topLevelALU__DOT__rd2);
    if (vlSelf->ALU_ctrl) {
        if (VL_LIKELY(vlSelf->ALU_ctrl)) {
            vlSelf->topLevelALU__DOT__dinTest = 0U;
            vlSelf->eq = (0U == (vlSelf->topLevelALU__DOT__rd1 
                                 - vlSelf->topLevelALU__DOT__ALUOp2));
        } else {
            VL_WRITEF("Instruction not detected.\n");
        }
    } else {
        vlSelf->topLevelALU__DOT__dinTest = (vlSelf->topLevelALU__DOT__rd1 
                                             + vlSelf->topLevelALU__DOT__ALUOp2);
        vlSelf->eq = 0U;
    }
}

void VtopLevelALU___024root___eval(VtopLevelALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLevelALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLevelALU___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VtopLevelALU___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    VtopLevelALU___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void VtopLevelALU___024root___eval_debug_assertions(VtopLevelALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLevelALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLevelALU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rs1 & 0xe0U))) {
        Verilated::overWidthError("rs1");}
    if (VL_UNLIKELY((vlSelf->rs2 & 0xe0U))) {
        Verilated::overWidthError("rs2");}
    if (VL_UNLIKELY((vlSelf->rd & 0xe0U))) {
        Verilated::overWidthError("rd");}
    if (VL_UNLIKELY((vlSelf->regFileWen & 0xfeU))) {
        Verilated::overWidthError("regFileWen");}
    if (VL_UNLIKELY((vlSelf->ALUSrc & 0xfeU))) {
        Verilated::overWidthError("ALUSrc");}
    if (VL_UNLIKELY((vlSelf->ALU_ctrl & 0xfeU))) {
        Verilated::overWidthError("ALU_ctrl");}
}
#endif  // VL_DEBUG
