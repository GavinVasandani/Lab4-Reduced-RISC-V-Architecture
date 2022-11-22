// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPC_top__Syms.h"


void VPC_top___024root__trace_chg_sub_0(VPC_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPC_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root__trace_chg_top_0\n"); );
    // Init
    VPC_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPC_top___024root*>(voidSelf);
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPC_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VPC_top___024root__trace_chg_sub_0(VPC_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelf->ImmOp),32);
    bufp->chgBit(oldp+1,(vlSelf->PCsrc));
    bufp->chgBit(oldp+2,(vlSelf->clk));
    bufp->chgBit(oldp+3,(vlSelf->rst));
    bufp->chgIData(oldp+4,(vlSelf->instr),32);
    bufp->chgCData(oldp+5,(vlSelf->PC_top__DOT__PC),8);
    bufp->chgCData(oldp+6,((0xffU & vlSelf->ImmOp)),8);
    bufp->chgCData(oldp+7,((0xffU & ((IData)(vlSelf->PC_top__DOT__PC) 
                                     + vlSelf->ImmOp))),8);
    bufp->chgCData(oldp+8,((0xffU & ((IData)(4U) + (IData)(vlSelf->PC_top__DOT__PC)))),8);
    bufp->chgCData(oldp+9,((0xffU & ((IData)(vlSelf->PCsrc)
                                      ? ((IData)(vlSelf->PC_top__DOT__PC) 
                                         + vlSelf->ImmOp)
                                      : ((IData)(4U) 
                                         + (IData)(vlSelf->PC_top__DOT__PC))))),8);
}

void VPC_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root__trace_cleanup\n"); );
    // Init
    VPC_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPC_top___024root*>(voidSelf);
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
