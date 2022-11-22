// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPC_top.h for the primary calling header

#include "verilated.h"

#include "VPC_top__Syms.h"
#include "VPC_top___024root.h"

void VPC_top___024root___ctor_var_reset(VPC_top___024root* vlSelf);

VPC_top___024root::VPC_top___024root(VPC_top__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPC_top___024root___ctor_var_reset(this);
}

void VPC_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPC_top___024root::~VPC_top___024root() {
}
