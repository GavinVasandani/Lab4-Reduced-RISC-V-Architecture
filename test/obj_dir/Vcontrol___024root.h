// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcontrol.h for the primary calling header

#ifndef VERILATED_VCONTROL___024ROOT_H_
#define VERILATED_VCONTROL___024ROOT_H_  // guard

#include "verilated.h"

class Vcontrol__Syms;

class Vcontrol___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(write_en,0,0);
    CData/*0:0*/ top__DOT__PC_src;
    CData/*4:0*/ top__DOT__rd;
    CData/*0:0*/ top__DOT__ALU_src;
    CData/*2:0*/ top__DOT__ALU_ctrl;
    CData/*0:0*/ top__DOT__EQ;
    CData/*0:0*/ top__DOT__ImmSrc;
    CData/*0:0*/ top__DOT__ALU__DOT__ALUsrc;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*11:0*/ top__DOT__sign_extend__DOT__imm;
    VL_OUT(a0,31,0);
    IData/*31:0*/ top__DOT__PC_instr;
    IData/*31:0*/ top__DOT__write_data;
    IData/*31:0*/ top__DOT__ImmOp;
    IData/*31:0*/ top__DOT__myPC__DOT__next_PC;
    IData/*31:0*/ top__DOT__myPC__DOT__PC;
    IData/*31:0*/ top__DOT__myPC__DOT__myPCreg__DOT__next_PC;
    IData/*31:0*/ top__DOT__ALU__DOT__rd1;
    IData/*31:0*/ top__DOT__ALU__DOT__rd2;
    IData/*31:0*/ top__DOT__ALU__DOT__ALUOp2;
    VlUnpacked<IData/*31:0*/, 2> top__DOT__myPC__DOT__myRom__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__ALU__DOT__regFile1__DOT__regFile_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcontrol__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcontrol___024root(Vcontrol__Syms* symsp, const char* name);
    ~Vcontrol___024root();
    VL_UNCOPYABLE(Vcontrol___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
