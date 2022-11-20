// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol.h for the primary calling header

#include "verilated.h"

#include "Vcontrol___024root.h"

VL_ATTR_COLD void Vcontrol___024root___initial__TOP__0(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_he8d6983c__0;
    VlWide<3>/*95:0*/ __Vtemp_hed0c68ad__0;
    // Body
    VL_WRITEF("Loading rom.\n");
    __Vtemp_he8d6983c__0[0U] = 0x2e6d656dU;
    __Vtemp_he8d6983c__0[1U] = 0x696f6e73U;
    __Vtemp_he8d6983c__0[2U] = 0x72756374U;
    __Vtemp_he8d6983c__0[3U] = 0x696e7374U;
    VL_READMEM_N(true, 32, 2, 4294967295, VL_CVT_PACK_STR_NW(4, __Vtemp_he8d6983c__0)
                 ,  &(vlSelf->top__DOT__myPC__DOT__myRom__DOT__rom_array)
                 , 4294967295, ~0ULL);
    VL_WRITEF("Initializing regFile with null values (0).\n");
    __Vtemp_hed0c68ad__0[0U] = 0x2e6d656dU;
    __Vtemp_hed0c68ad__0[1U] = 0x46696c65U;
    __Vtemp_hed0c68ad__0[2U] = 0x726567U;
    VL_READMEM_N(true, 32, 32, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_hed0c68ad__0)
                 ,  &(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vcontrol___024root___settle__TOP__0(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___settle__TOP__0\n"); );
    // Body
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
    if ((0U == (IData)(vlSelf->top__DOT__ALU_ctrl))) {
        vlSelf->top__DOT__write_data = (vlSelf->top__DOT__ALU__DOT__rd1 
                                        + vlSelf->top__DOT__ALU__DOT__ALUOp2);
    } else if (VL_LIKELY((7U == (IData)(vlSelf->top__DOT__ALU_ctrl)))) {
        vlSelf->top__DOT__EQ = (vlSelf->top__DOT__ALU__DOT__rd1 
                                == vlSelf->top__DOT__ALU__DOT__ALUOp2);
    } else {
        VL_WRITEF("Instruction not detected.\n");
    }
}

VL_ATTR_COLD void Vcontrol___024root___eval_initial(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___eval_initial\n"); );
    // Body
    Vcontrol___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vcontrol___024root___eval_settle(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___eval_settle\n"); );
    // Body
    Vcontrol___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vcontrol___024root___final(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___final\n"); );
}

VL_ATTR_COLD void Vcontrol___024root___ctor_var_reset(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->write_en = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC_instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALU_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALU_ctrl = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmSrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__myPC__DOT__next_PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__myPC__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__myPC__DOT__myPCreg__DOT__next_PC = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__myPC__DOT__myRom__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__ALU__DOT__rd1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALU__DOT__rd2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALU__DOT__ALUOp2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALU__DOT__ALUsrc = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__sign_extend__DOT__imm = VL_RAND_RESET_I(12);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
