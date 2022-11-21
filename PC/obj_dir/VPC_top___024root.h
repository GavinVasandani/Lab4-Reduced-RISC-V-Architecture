// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPC_top.h for the primary calling header

#ifndef VERILATED_VPC_TOP___024ROOT_H_
#define VERILATED_VPC_TOP___024ROOT_H_  // guard

#include "verilated.h"

class VPC_top__Syms;

class VPC_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(PCsrc,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(ImmOp,31,0);
    VL_OUT(instr,31,0);
    IData/*31:0*/ PC_top__DOT__PC;
    IData/*31:0*/ PC_top__DOT__myPCreg__DOT__next_PC;
    VlUnpacked<IData/*31:0*/, 2> PC_top__DOT__myRom__DOT__rom_array;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VPC_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPC_top___024root(VPC_top__Syms* symsp, const char* name);
    ~VPC_top___024root();
    VL_UNCOPYABLE(VPC_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
