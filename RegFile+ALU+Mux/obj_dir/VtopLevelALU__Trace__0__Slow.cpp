// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VtopLevelALU__Syms.h"


VL_ATTR_COLD void VtopLevelALU___024root__trace_init_sub__TOP__0(VtopLevelALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLevelALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLevelALU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBus(c+36,"rs1", false,-1, 4,0);
    tracep->declBus(c+37,"rs2", false,-1, 4,0);
    tracep->declBus(c+38,"rd", false,-1, 4,0);
    tracep->declBit(c+39,"regFileWen", false,-1);
    tracep->declBit(c+40,"ALUSrc", false,-1);
    tracep->declBus(c+41,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+42,"ALU_ctrl", false,-1);
    tracep->declBit(c+43,"eq", false,-1);
    tracep->pushNamePrefix("topLevelALU ");
    tracep->declBus(c+46,"NumberOfReg", false,-1, 31,0);
    tracep->declBus(c+47,"Address_Width", false,-1, 31,0);
    tracep->declBus(c+46,"Data_Width", false,-1, 31,0);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBus(c+36,"rs1", false,-1, 4,0);
    tracep->declBus(c+37,"rs2", false,-1, 4,0);
    tracep->declBus(c+38,"rd", false,-1, 4,0);
    tracep->declBit(c+39,"regFileWen", false,-1);
    tracep->declBit(c+40,"ALUSrc", false,-1);
    tracep->declBus(c+41,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+42,"ALU_ctrl", false,-1);
    tracep->declBit(c+43,"eq", false,-1);
    tracep->declBus(c+1,"rd1", false,-1, 31,0);
    tracep->declBus(c+2,"rd2", false,-1, 31,0);
    tracep->declBus(c+44,"ALUOp2", false,-1, 31,0);
    tracep->declBus(c+45,"dinTest", false,-1, 31,0);
    tracep->pushNamePrefix("alu1 ");
    tracep->declBus(c+47,"Address_Width", false,-1, 31,0);
    tracep->declBus(c+46,"Data_Width", false,-1, 31,0);
    tracep->declBus(c+1,"op1", false,-1, 31,0);
    tracep->declBus(c+44,"op2", false,-1, 31,0);
    tracep->declBit(c+42,"ALU_ctrl", false,-1);
    tracep->declBus(c+45,"ALUout", false,-1, 31,0);
    tracep->declBit(c+43,"eq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+46,"Data_Width", false,-1, 31,0);
    tracep->declBus(c+2,"regOp2", false,-1, 31,0);
    tracep->declBus(c+41,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+40,"ALUSrc", false,-1);
    tracep->declBus(c+44,"ALUOp2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regFile1 ");
    tracep->declBus(c+46,"NumberOfReg", false,-1, 31,0);
    tracep->declBus(c+47,"Address_Width", false,-1, 31,0);
    tracep->declBus(c+46,"Data_Width", false,-1, 31,0);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBus(c+36,"rs1", false,-1, 4,0);
    tracep->declBus(c+37,"rs2", false,-1, 4,0);
    tracep->declBus(c+38,"rd", false,-1, 4,0);
    tracep->declBit(c+39,"en", false,-1);
    tracep->declBus(c+45,"din", false,-1, 31,0);
    tracep->declBus(c+1,"rd1", false,-1, 31,0);
    tracep->declBus(c+2,"rd2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+3+i*1,"regFile_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VtopLevelALU___024root__trace_init_top(VtopLevelALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLevelALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLevelALU___024root__trace_init_top\n"); );
    // Body
    VtopLevelALU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VtopLevelALU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VtopLevelALU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VtopLevelALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VtopLevelALU___024root__trace_register(VtopLevelALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLevelALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLevelALU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VtopLevelALU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VtopLevelALU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VtopLevelALU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VtopLevelALU___024root__trace_full_sub_0(VtopLevelALU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VtopLevelALU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLevelALU___024root__trace_full_top_0\n"); );
    // Init
    VtopLevelALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VtopLevelALU___024root*>(voidSelf);
    VtopLevelALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VtopLevelALU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VtopLevelALU___024root__trace_full_sub_0(VtopLevelALU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLevelALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLevelALU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->topLevelALU__DOT__rd1),32);
    bufp->fullIData(oldp+2,(vlSelf->topLevelALU__DOT__rd2),32);
    bufp->fullIData(oldp+3,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[0]),32);
    bufp->fullIData(oldp+4,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[1]),32);
    bufp->fullIData(oldp+5,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[2]),32);
    bufp->fullIData(oldp+6,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[3]),32);
    bufp->fullIData(oldp+7,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[4]),32);
    bufp->fullIData(oldp+8,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[5]),32);
    bufp->fullIData(oldp+9,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[6]),32);
    bufp->fullIData(oldp+10,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[7]),32);
    bufp->fullIData(oldp+11,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[8]),32);
    bufp->fullIData(oldp+12,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[9]),32);
    bufp->fullIData(oldp+13,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[10]),32);
    bufp->fullIData(oldp+14,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[11]),32);
    bufp->fullIData(oldp+15,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[12]),32);
    bufp->fullIData(oldp+16,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[13]),32);
    bufp->fullIData(oldp+17,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[14]),32);
    bufp->fullIData(oldp+18,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[15]),32);
    bufp->fullIData(oldp+19,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[16]),32);
    bufp->fullIData(oldp+20,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[17]),32);
    bufp->fullIData(oldp+21,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[18]),32);
    bufp->fullIData(oldp+22,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[19]),32);
    bufp->fullIData(oldp+23,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[20]),32);
    bufp->fullIData(oldp+24,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[21]),32);
    bufp->fullIData(oldp+25,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[22]),32);
    bufp->fullIData(oldp+26,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[23]),32);
    bufp->fullIData(oldp+27,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[24]),32);
    bufp->fullIData(oldp+28,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[25]),32);
    bufp->fullIData(oldp+29,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[26]),32);
    bufp->fullIData(oldp+30,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[27]),32);
    bufp->fullIData(oldp+31,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[28]),32);
    bufp->fullIData(oldp+32,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[29]),32);
    bufp->fullIData(oldp+33,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[30]),32);
    bufp->fullIData(oldp+34,(vlSelf->topLevelALU__DOT__regFile1__DOT__regFile_array[31]),32);
    bufp->fullBit(oldp+35,(vlSelf->clk));
    bufp->fullCData(oldp+36,(vlSelf->rs1),5);
    bufp->fullCData(oldp+37,(vlSelf->rs2),5);
    bufp->fullCData(oldp+38,(vlSelf->rd),5);
    bufp->fullBit(oldp+39,(vlSelf->regFileWen));
    bufp->fullBit(oldp+40,(vlSelf->ALUSrc));
    bufp->fullIData(oldp+41,(vlSelf->ImmOp),32);
    bufp->fullBit(oldp+42,(vlSelf->ALU_ctrl));
    bufp->fullBit(oldp+43,(vlSelf->eq));
    bufp->fullIData(oldp+44,(vlSelf->topLevelALU__DOT__ALUOp2),32);
    bufp->fullIData(oldp+45,(vlSelf->topLevelALU__DOT__dinTest),32);
    bufp->fullIData(oldp+46,(0x20U),32);
    bufp->fullIData(oldp+47,(5U),32);
}
