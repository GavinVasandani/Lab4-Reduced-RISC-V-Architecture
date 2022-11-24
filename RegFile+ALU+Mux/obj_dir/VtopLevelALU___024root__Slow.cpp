// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtopLevelALU.h for the primary calling header

#include "verilated.h"

#include "VtopLevelALU__Syms.h"
#include "VtopLevelALU___024root.h"

void VtopLevelALU___024root___ctor_var_reset(VtopLevelALU___024root* vlSelf);

VtopLevelALU___024root::VtopLevelALU___024root(VtopLevelALU__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VtopLevelALU___024root___ctor_var_reset(this);
}

void VtopLevelALU___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VtopLevelALU___024root::~VtopLevelALU___024root() {
}
