// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPC_top__Syms.h"


VL_ATTR_COLD void VPC_top___024root__trace_init_sub__TOP__0(VPC_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+29,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+30,"PCsrc", false,-1);
    tracep->declBit(c+31,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+33,"instr", false,-1, 31,0);
    tracep->pushNamePrefix("PC_top ");
    tracep->declBus(c+38,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+38,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+29,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+30,"PCsrc", false,-1);
    tracep->declBit(c+31,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+33,"instr", false,-1, 31,0);
    tracep->declBus(c+34,"PC", false,-1, 31,0);
    tracep->pushNamePrefix("myPCreg ");
    tracep->declBus(c+38,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+29,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+30,"PCsrc", false,-1);
    tracep->declBit(c+31,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+34,"PC", false,-1, 31,0);
    tracep->declBus(c+35,"branch_PC", false,-1, 31,0);
    tracep->declBus(c+36,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+37,"next_PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myRom ");
    tracep->declBus(c+38,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+39,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+34,"PC", false,-1, 31,0);
    tracep->declBus(c+33,"instr", false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+1+i*1,"rom_array", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPC_top___024root__trace_init_top(VPC_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root__trace_init_top\n"); );
    // Body
    VPC_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPC_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPC_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPC_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPC_top___024root__trace_register(VPC_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPC_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPC_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPC_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPC_top___024root__trace_full_sub_0(VPC_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPC_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root__trace_full_top_0\n"); );
    // Init
    VPC_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPC_top___024root*>(voidSelf);
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPC_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPC_top___024root__trace_full_sub_0(VPC_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[4]),8);
    bufp->fullCData(oldp+6,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[5]),8);
    bufp->fullCData(oldp+7,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[6]),8);
    bufp->fullCData(oldp+8,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[7]),8);
    bufp->fullCData(oldp+9,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[8]),8);
    bufp->fullCData(oldp+10,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[9]),8);
    bufp->fullCData(oldp+11,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[10]),8);
    bufp->fullCData(oldp+12,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[11]),8);
    bufp->fullCData(oldp+13,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[12]),8);
    bufp->fullCData(oldp+14,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[13]),8);
    bufp->fullCData(oldp+15,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[14]),8);
    bufp->fullCData(oldp+16,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[15]),8);
    bufp->fullCData(oldp+17,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[16]),8);
    bufp->fullCData(oldp+18,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[17]),8);
    bufp->fullCData(oldp+19,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[18]),8);
    bufp->fullCData(oldp+20,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[19]),8);
    bufp->fullCData(oldp+21,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[20]),8);
    bufp->fullCData(oldp+22,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[21]),8);
    bufp->fullCData(oldp+23,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[22]),8);
    bufp->fullCData(oldp+24,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[23]),8);
    bufp->fullCData(oldp+25,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[24]),8);
    bufp->fullCData(oldp+26,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[25]),8);
    bufp->fullCData(oldp+27,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[26]),8);
    bufp->fullCData(oldp+28,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[27]),8);
    bufp->fullIData(oldp+29,(vlSelf->ImmOp),32);
    bufp->fullBit(oldp+30,(vlSelf->PCsrc));
    bufp->fullBit(oldp+31,(vlSelf->clk));
    bufp->fullBit(oldp+32,(vlSelf->rst));
    bufp->fullIData(oldp+33,(vlSelf->instr),32);
    bufp->fullIData(oldp+34,(vlSelf->PC_top__DOT__PC),32);
    bufp->fullIData(oldp+35,((vlSelf->ImmOp + vlSelf->PC_top__DOT__PC)),32);
    bufp->fullIData(oldp+36,(((IData)(4U) + vlSelf->PC_top__DOT__PC)),32);
    bufp->fullIData(oldp+37,(((IData)(vlSelf->PCsrc)
                               ? (vlSelf->ImmOp + vlSelf->PC_top__DOT__PC)
                               : ((IData)(4U) + vlSelf->PC_top__DOT__PC))),32);
    bufp->fullIData(oldp+38,(0x20U),32);
    bufp->fullIData(oldp+39,(8U),32);
}
