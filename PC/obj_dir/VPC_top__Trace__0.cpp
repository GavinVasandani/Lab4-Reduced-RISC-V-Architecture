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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[1]),32);
    }
    bufp->chgIData(oldp+2,(vlSelf->ImmOp),32);
    bufp->chgBit(oldp+3,(vlSelf->PCsrc));
    bufp->chgBit(oldp+4,(vlSelf->clk));
    bufp->chgBit(oldp+5,(vlSelf->rst));
    bufp->chgIData(oldp+6,(vlSelf->instr),32);
    bufp->chgIData(oldp+7,(vlSelf->PC_top__DOT__PC),32);
    bufp->chgIData(oldp+8,((vlSelf->PC_top__DOT__PC 
                            + vlSelf->ImmOp)),32);
    bufp->chgIData(oldp+9,(((IData)(4U) + vlSelf->PC_top__DOT__PC)),32);
    bufp->chgIData(oldp+10,(((IData)(vlSelf->PCsrc)
                              ? (vlSelf->PC_top__DOT__PC 
                                 + vlSelf->ImmOp) : 
                             ((IData)(4U) + vlSelf->PC_top__DOT__PC))),32);
}

void VPC_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root__trace_cleanup\n"); );
    // Init
    VPC_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPC_top___024root*>(voidSelf);
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
}
