// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(wr_en,0,0);
    VL_OUT8(Eq,0,0);
    VL_OUT8(alusrc,0,0);
    VL_OUT8(aluCtrl,2,0);
    CData/*0:0*/ top__DOT__write_en;
    CData/*2:0*/ top__DOT__ALU_ctrl;
    CData/*0:0*/ top__DOT__EQ;
    CData/*7:0*/ top__DOT__myPC__DOT__PC;
    CData/*7:0*/ top__DOT__myPC__DOT__myPCreg__DOT__next_PC;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(trash,31,0);
    VL_OUT(a0,31,0);
    VL_OUT(extout,31,0);
    IData/*31:0*/ top__DOT__PC_instr;
    IData/*31:0*/ top__DOT__write_data;
    IData/*31:0*/ top__DOT__ImmOp;
    IData/*31:0*/ top__DOT__ALU__DOT__rd1;
    IData/*31:0*/ top__DOT__ALU__DOT__ALUOp2;
    IData/*31:0*/ top__DOT__ALU__DOT__dinTest;
    VlUnpacked<IData/*31:0*/, 256> top__DOT__myPC__DOT__myRom__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__ALU__DOT__regFile1__DOT__regFile_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
