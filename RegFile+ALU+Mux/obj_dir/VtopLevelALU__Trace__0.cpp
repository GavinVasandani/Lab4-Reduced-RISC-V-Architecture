// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VtopLevelALU__Syms.h"


void VtopLevelALU___024root__trace_chg_sub_0(VtopLevelALU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VtopLevelALU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLevelALU___024root__trace_chg_top_0\n"); );
    // Init
    VtopLevelALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VtopLevelALU___024root*>(voidSelf);
    VtopLevelALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VtopLevelALU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VtopLevelALU___024root__trace_chg_sub_0(VtopLevelALU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLevelALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLevelALU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->topLevelALU__DOT__rd1),32);
        bufp->chgIData(oldp+1,(vlSelf->topLevelALU__DOT__rd2),32);
        bufp->chgIData(oldp+2,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[0]),32);
        bufp->chgIData(oldp+3,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[1]),32);
        bufp->chgIData(oldp+4,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[2]),32);
        bufp->chgIData(oldp+5,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[3]),32);
        bufp->chgIData(oldp+6,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[4]),32);
        bufp->chgIData(oldp+7,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[5]),32);
        bufp->chgIData(oldp+8,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[6]),32);
        bufp->chgIData(oldp+9,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[7]),32);
        bufp->chgIData(oldp+10,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[8]),32);
        bufp->chgIData(oldp+11,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[9]),32);
        bufp->chgIData(oldp+12,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[10]),32);
        bufp->chgIData(oldp+13,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[11]),32);
        bufp->chgIData(oldp+14,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[12]),32);
        bufp->chgIData(oldp+15,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[13]),32);
        bufp->chgIData(oldp+16,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[14]),32);
        bufp->chgIData(oldp+17,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[15]),32);
        bufp->chgIData(oldp+18,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[16]),32);
        bufp->chgIData(oldp+19,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[17]),32);
        bufp->chgIData(oldp+20,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[18]),32);
        bufp->chgIData(oldp+21,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[19]),32);
        bufp->chgIData(oldp+22,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[20]),32);
        bufp->chgIData(oldp+23,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[21]),32);
        bufp->chgIData(oldp+24,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[22]),32);
        bufp->chgIData(oldp+25,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[23]),32);
        bufp->chgIData(oldp+26,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[24]),32);
        bufp->chgIData(oldp+27,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[25]),32);
        bufp->chgIData(oldp+28,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[26]),32);
        bufp->chgIData(oldp+29,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[27]),32);
        bufp->chgIData(oldp+30,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[28]),32);
        bufp->chgIData(oldp+31,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[29]),32);
        bufp->chgIData(oldp+32,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[30]),32);
        bufp->chgIData(oldp+33,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[31]),32);
    }
    bufp->chgBit(oldp+34,(vlSelf->clk));
    bufp->chgCData(oldp+35,(vlSelf->rs1),5);
    bufp->chgCData(oldp+36,(vlSelf->rs2),5);
    bufp->chgCData(oldp+37,(vlSelf->rd),5);
    bufp->chgBit(oldp+38,(vlSelf->regFileWen));
    bufp->chgBit(oldp+39,(vlSelf->ALUSrc));
    bufp->chgIData(oldp+40,(vlSelf->ImmOp),32);
    bufp->chgBit(oldp+41,(vlSelf->ALU_ctrl));
    bufp->chgBit(oldp+42,(vlSelf->eq));
    bufp->chgIData(oldp+43,(vlSelf->topLevelALU__DOT__ALUOp2),32);
    bufp->chgIData(oldp+44,(vlSelf->topLevelALU__DOT__dinTest),32);
}

void VtopLevelALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLevelALU___024root__trace_cleanup\n"); );
    // Init
    VtopLevelALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VtopLevelALU___024root*>(voidSelf);
    VtopLevelALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
