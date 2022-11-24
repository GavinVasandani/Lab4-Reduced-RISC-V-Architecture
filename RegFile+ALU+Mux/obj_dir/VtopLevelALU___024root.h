// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VtopLevelALU.h for the primary calling header

#ifndef VERILATED_VTOPLEVELALU___024ROOT_H_
#define VERILATED_VTOPLEVELALU___024ROOT_H_  // guard

#include "verilated.h"

class VtopLevelALU__Syms;

class VtopLevelALU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rs1,4,0);
    VL_IN8(rs2,4,0);
    VL_IN8(rd,4,0);
    VL_IN8(regFileWen,0,0);
    VL_IN8(ALUSrc,0,0);
    VL_IN8(ALU_ctrl,0,0);
    VL_OUT8(eq,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(ImmOp,31,0);
    IData/*31:0*/ topLevelALU__DOT__rd1;
    IData/*31:0*/ topLevelALU__DOT__rd2;
    IData/*31:0*/ topLevelALU__DOT__ALUOp2;
    IData/*31:0*/ topLevelALU__DOT__dinTest;
    VlUnpacked<IData/*31:0*/, 32> topLevelALU__DOT__regFile1__DOT__regFile_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VtopLevelALU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VtopLevelALU___024root(VtopLevelALU__Syms* symsp, const char* name);
    ~VtopLevelALU___024root();
    VL_UNCOPYABLE(VtopLevelALU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
