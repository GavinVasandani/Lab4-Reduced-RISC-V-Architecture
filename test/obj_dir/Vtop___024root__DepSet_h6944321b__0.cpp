// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__ALU__DOT__regFile1__DOT__regFile_array__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__ALU__DOT__regFile1__DOT__regFile_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ALU__DOT__regFile1__DOT__regFile_array__v0;
    // Body
    __Vdlyvset__top__DOT__ALU__DOT__regFile1__DOT__regFile_array__v0 = 0U;
    if (vlSelf->top__DOT__write_en) {
        __Vdlyvval__top__DOT__ALU__DOT__regFile1__DOT__regFile_array__v0 
            = vlSelf->top__DOT__write_data;
        __Vdlyvset__top__DOT__ALU__DOT__regFile1__DOT__regFile_array__v0 = 1U;
        __Vdlyvdim0__top__DOT__ALU__DOT__regFile1__DOT__regFile_array__v0 
            = (0x1fU & (vlSelf->top__DOT__PC_instr 
                        >> 0x14U));
    }
    vlSelf->top__DOT__ALU__DOT__rd1 = vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array
        [(0x1fU & (vlSelf->top__DOT__PC_instr >> 0xfU))];
    vlSelf->top__DOT__ALU__DOT__rd2 = vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array
        [(0x1fU & (vlSelf->top__DOT__PC_instr >> 0x14U))];
    vlSelf->top__DOT__myPC__DOT__PC = ((IData)(vlSelf->rst)
                                        ? 0U : (IData)(vlSelf->top__DOT__myPC__DOT__myPCreg__DOT__next_PC));
    if (__Vdlyvset__top__DOT__ALU__DOT__regFile1__DOT__regFile_array__v0) {
        vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[__Vdlyvdim0__top__DOT__ALU__DOT__regFile1__DOT__regFile_array__v0] 
            = __Vdlyvval__top__DOT__ALU__DOT__regFile1__DOT__regFile_array__v0;
    }
    vlSelf->a0 = vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array
        [0xaU];
    vlSelf->top__DOT__PC_instr = vlSelf->top__DOT__myPC__DOT__myRom__DOT__rom_array
        [vlSelf->top__DOT__myPC__DOT__PC];
    vlSelf->trash = vlSelf->top__DOT__PC_instr;
    if ((0x13U == (0x7fU & vlSelf->top__DOT__PC_instr))) {
        vlSelf->alusrc = 1U;
        vlSelf->top__DOT__write_en = 1U;
        vlSelf->top__DOT__ALU_ctrl = 0U;
        vlSelf->top__DOT__sign_extend__DOT__imm = (0xfffU 
                                                   & (vlSelf->top__DOT__PC_instr 
                                                      >> 0x14U));
    } else {
        vlSelf->alusrc = 0U;
        if ((0x63U == (0x7fU & vlSelf->top__DOT__PC_instr))) {
            vlSelf->top__DOT__write_en = 0U;
            vlSelf->top__DOT__ALU_ctrl = 7U;
        }
        vlSelf->top__DOT__sign_extend__DOT__imm = (0xfffU 
                                                   & ((0x800U 
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
                                                                  >> 8U))))));
    }
    vlSelf->top__DOT__ImmOp = (((- (IData)((1U & ((IData)(vlSelf->top__DOT__sign_extend__DOT__imm) 
                                                  >> 0xbU)))) 
                                << 0xcU) | (IData)(vlSelf->top__DOT__sign_extend__DOT__imm));
    vlSelf->top__DOT__ALU__DOT__ALUOp2 = ((0x13U == 
                                           (0x7fU & vlSelf->top__DOT__PC_instr))
                                           ? vlSelf->top__DOT__ImmOp
                                           : vlSelf->top__DOT__ALU__DOT__rd2);
    vlSelf->wr_en = vlSelf->top__DOT__write_en;
    vlSelf->ctrlalu = vlSelf->top__DOT__ALU_ctrl;
    vlSelf->extout = vlSelf->top__DOT__ImmOp;
    if ((0U == (IData)(vlSelf->top__DOT__ALU_ctrl))) {
        vlSelf->top__DOT__ALUout = (vlSelf->top__DOT__ALU__DOT__rd1 
                                    + vlSelf->top__DOT__ALU__DOT__ALUOp2);
    } else if (VL_LIKELY((7U == (IData)(vlSelf->top__DOT__ALU_ctrl)))) {
        vlSelf->top__DOT__EQ = (vlSelf->top__DOT__ALU__DOT__rd1 
                                == vlSelf->top__DOT__ALU__DOT__ALUOp2);
    } else {
        VL_WRITEF("Instruction not detected.\n");
    }
    vlSelf->aluout = vlSelf->top__DOT__ALUout;
    vlSelf->Eq = vlSelf->top__DOT__EQ;
    vlSelf->top__DOT__myPC__DOT__myPCreg__DOT__next_PC 
        = (0xffU & (((0x13U != (0x7fU & vlSelf->top__DOT__PC_instr)) 
                     & ((0x63U == (0x7fU & vlSelf->top__DOT__PC_instr)) 
                        & (~ (IData)(vlSelf->top__DOT__EQ))))
                     ? ((IData)(vlSelf->top__DOT__myPC__DOT__PC) 
                        + vlSelf->top__DOT__ImmOp) : 
                    ((IData)(4U) + (IData)(vlSelf->top__DOT__myPC__DOT__PC))));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
