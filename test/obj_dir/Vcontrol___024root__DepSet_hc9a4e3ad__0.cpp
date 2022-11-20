// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol.h for the primary calling header

#include "verilated.h"

#include "Vcontrol___024root.h"

VL_INLINE_OPT void Vcontrol___024root___sequent__TOP__0(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__ALU__DOT__rd1 = vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array
        [(0x1fU & (vlSelf->top__DOT__PC_instr >> 0xfU))];
    vlSelf->top__DOT__ALU__DOT__rd2 = vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array
        [(0x1fU & (vlSelf->top__DOT__PC_instr >> 0x14U))];
    if (vlSelf->write_en) {
        vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[vlSelf->top__DOT__rd] 
            = vlSelf->top__DOT__write_data;
    }
    vlSelf->top__DOT__sign_extend__DOT__imm = (0xfffU 
                                               & ((IData)(vlSelf->top__DOT__ImmSrc)
                                                   ? 
                                                  (vlSelf->top__DOT__PC_instr 
                                                   >> 0x14U)
                                                   : 
                                                  ((0x800U 
                                                    & (vlSelf->top__DOT__PC_instr 
                                                       >> 0x14U)) 
                                                   | ((0x400U 
                                                       & (vlSelf->top__DOT__PC_instr 
                                                          << 3U)) 
                                                      | ((0x3f0U 
                                                          & (vlSelf->top__DOT__PC_instr 
                                                             >> 0x15U)) 
                                                         | (0xfU 
                                                            & (vlSelf->top__DOT__PC_instr 
                                                               >> 8U)))))));
    vlSelf->top__DOT__myPC__DOT__PC = ((IData)(vlSelf->rst)
                                        ? 0U : vlSelf->top__DOT__myPC__DOT__myPCreg__DOT__next_PC);
    vlSelf->top__DOT__ImmOp = (((- (IData)((1U & ((IData)(vlSelf->top__DOT__sign_extend__DOT__imm) 
                                                  >> 0xbU)))) 
                                << 0xcU) | (IData)(vlSelf->top__DOT__sign_extend__DOT__imm));
    vlSelf->top__DOT__PC_instr = vlSelf->top__DOT__myPC__DOT__myRom__DOT__rom_array
        [(1U & ((IData)(1U) + vlSelf->top__DOT__myPC__DOT__PC))];
    vlSelf->top__DOT__ALU__DOT__ALUOp2 = ((IData)(vlSelf->top__DOT__ALU__DOT__ALUsrc)
                                           ? vlSelf->top__DOT__ALU__DOT__rd2
                                           : vlSelf->top__DOT__ImmOp);
    if ((0x13U == (0x7fU & vlSelf->top__DOT__PC_instr))) {
        vlSelf->top__DOT__ALU_src = 1U;
        vlSelf->top__DOT__ImmSrc = 1U;
        vlSelf->top__DOT__PC_src = 0U;
        vlSelf->top__DOT__ALU_ctrl = (7U & (vlSelf->top__DOT__PC_instr 
                                            >> 0xcU));
    } else if ((0x63U == (0x7fU & vlSelf->top__DOT__PC_instr))) {
        vlSelf->top__DOT__ALU_src = 0U;
        vlSelf->top__DOT__ImmSrc = 0U;
        vlSelf->top__DOT__PC_src = 1U;
    }
    vlSelf->top__DOT__myPC__DOT__myPCreg__DOT__next_PC 
        = ((IData)(vlSelf->top__DOT__PC_src) ? (vlSelf->top__DOT__myPC__DOT__PC 
                                                + vlSelf->top__DOT__ImmOp)
            : ((IData)(4U) + vlSelf->top__DOT__myPC__DOT__PC));
    if ((1U & (IData)(vlSelf->top__DOT__ALU_ctrl))) {
        if (VL_LIKELY((1U & (IData)(vlSelf->top__DOT__ALU_ctrl)))) {
            vlSelf->top__DOT__EQ = (vlSelf->top__DOT__ALU__DOT__rd1 
                                    == vlSelf->top__DOT__ALU__DOT__ALUOp2);
        } else {
            VL_WRITEF("Instruction not detected.\n");
        }
    } else {
        vlSelf->top__DOT__write_data = (vlSelf->top__DOT__ALU__DOT__rd1 
                                        + vlSelf->top__DOT__ALU__DOT__ALUOp2);
    }
}

void Vcontrol___024root___eval(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcontrol___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vcontrol___024root___eval_debug_assertions(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->write_en & 0xfeU))) {
        Verilated::overWidthError("write_en");}
}
#endif  // VL_DEBUG
