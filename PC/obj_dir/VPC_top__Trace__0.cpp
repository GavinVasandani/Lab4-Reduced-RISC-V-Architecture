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
        bufp->chgCData(oldp+0,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[0]),8);
        bufp->chgCData(oldp+1,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[1]),8);
        bufp->chgCData(oldp+2,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[2]),8);
        bufp->chgCData(oldp+3,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[3]),8);
        bufp->chgCData(oldp+4,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[4]),8);
        bufp->chgCData(oldp+5,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[5]),8);
        bufp->chgCData(oldp+6,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[6]),8);
        bufp->chgCData(oldp+7,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[7]),8);
        bufp->chgCData(oldp+8,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[8]),8);
        bufp->chgCData(oldp+9,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[9]),8);
        bufp->chgCData(oldp+10,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[10]),8);
        bufp->chgCData(oldp+11,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[11]),8);
        bufp->chgCData(oldp+12,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[12]),8);
        bufp->chgCData(oldp+13,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[13]),8);
        bufp->chgCData(oldp+14,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[14]),8);
        bufp->chgCData(oldp+15,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[15]),8);
        bufp->chgCData(oldp+16,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[16]),8);
        bufp->chgCData(oldp+17,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[17]),8);
        bufp->chgCData(oldp+18,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[18]),8);
        bufp->chgCData(oldp+19,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[19]),8);
        bufp->chgCData(oldp+20,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[20]),8);
        bufp->chgCData(oldp+21,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[21]),8);
        bufp->chgCData(oldp+22,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[22]),8);
        bufp->chgCData(oldp+23,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[23]),8);
        bufp->chgCData(oldp+24,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[24]),8);
        bufp->chgCData(oldp+25,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[25]),8);
        bufp->chgCData(oldp+26,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[26]),8);
        bufp->chgCData(oldp+27,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[27]),8);
    }
    bufp->chgIData(oldp+28,(vlSelf->ImmOp),32);
    bufp->chgBit(oldp+29,(vlSelf->PCsrc));
    bufp->chgBit(oldp+30,(vlSelf->clk));
    bufp->chgBit(oldp+31,(vlSelf->rst));
    bufp->chgIData(oldp+32,(vlSelf->instr),32);
    bufp->chgIData(oldp+33,(vlSelf->PC_top__DOT__PC),32);
    bufp->chgIData(oldp+34,((vlSelf->ImmOp + vlSelf->PC_top__DOT__PC)),32);
    bufp->chgIData(oldp+35,(((IData)(4U) + vlSelf->PC_top__DOT__PC)),32);
    bufp->chgIData(oldp+36,(((IData)(vlSelf->PCsrc)
                              ? (vlSelf->ImmOp + vlSelf->PC_top__DOT__PC)
                              : ((IData)(4U) + vlSelf->PC_top__DOT__PC))),32);
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
