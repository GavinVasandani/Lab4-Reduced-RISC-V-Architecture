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
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+4,"PCsrc", false,-1);
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBus(c+7,"instr", false,-1, 31,0);
    tracep->pushNamePrefix("PC_top ");
    tracep->declBus(c+12,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+12,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+4,"PCsrc", false,-1);
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBus(c+7,"instr", false,-1, 31,0);
    tracep->declBus(c+8,"PC", false,-1, 31,0);
    tracep->pushNamePrefix("myPCreg ");
    tracep->declBus(c+12,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+4,"PCsrc", false,-1);
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBus(c+8,"PC", false,-1, 31,0);
    tracep->declBus(c+9,"branch_PC", false,-1, 31,0);
    tracep->declBus(c+10,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+11,"next_PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myRom ");
    tracep->declBus(c+12,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+12,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+8,"PC", false,-1, 31,0);
    tracep->declBus(c+7,"instr", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"rom_array", true,(i+-1), 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->PC_top__DOT__myRom__DOT__rom_array[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->ImmOp),32);
    bufp->fullBit(oldp+4,(vlSelf->PCsrc));
    bufp->fullBit(oldp+5,(vlSelf->clk));
    bufp->fullBit(oldp+6,(vlSelf->rst));
    bufp->fullIData(oldp+7,(vlSelf->instr),32);
    bufp->fullIData(oldp+8,(vlSelf->PC_top__DOT__PC),32);
    bufp->fullIData(oldp+9,((vlSelf->PC_top__DOT__PC 
                             + vlSelf->ImmOp)),32);
    bufp->fullIData(oldp+10,(((IData)(4U) + vlSelf->PC_top__DOT__PC)),32);
    bufp->fullIData(oldp+11,(((IData)(vlSelf->PCsrc)
                               ? (vlSelf->PC_top__DOT__PC 
                                  + vlSelf->ImmOp) : 
                              ((IData)(4U) + vlSelf->PC_top__DOT__PC))),32);
    bufp->fullIData(oldp+12,(0x20U),32);
}
