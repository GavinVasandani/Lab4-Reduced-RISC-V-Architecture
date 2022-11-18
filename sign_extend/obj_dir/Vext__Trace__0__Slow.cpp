// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vext__Syms.h"


VL_ATTR_COLD void Vext___024root__trace_init_sub__TOP__0(Vext___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vext___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBus(c+2,"inst", false,-1, 31,0);
    tracep->declBit(c+3,"ImmSrc", false,-1);
    tracep->declBus(c+4,"ImmOp", false,-1, 31,0);
    tracep->pushNamePrefix("sign_ext ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBus(c+2,"inst", false,-1, 31,0);
    tracep->declBit(c+3,"ImmSrc", false,-1);
    tracep->declBus(c+4,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+5,"imm", false,-1, 11,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vext___024root__trace_init_top(Vext___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vext___024root__trace_init_top\n"); );
    // Body
    Vext___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vext___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vext___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vext___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vext___024root__trace_register(Vext___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vext___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vext___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vext___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vext___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vext___024root__trace_full_sub_0(Vext___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vext___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vext___024root__trace_full_top_0\n"); );
    // Init
    Vext___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vext___024root*>(voidSelf);
    Vext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vext___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vext___024root__trace_full_sub_0(Vext___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vext___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullIData(oldp+2,(vlSelf->inst),32);
    bufp->fullBit(oldp+3,(vlSelf->ImmSrc));
    bufp->fullIData(oldp+4,(vlSelf->ImmOp),32);
    bufp->fullSData(oldp+5,(vlSelf->sign_ext__DOT__imm),12);
}
