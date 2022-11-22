// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+54,"clk", false,-1);
    tracep->declBit(c+55,"rst", false,-1);
    tracep->declBit(c+56,"write_en", false,-1);
    tracep->declBus(c+57,"trash", false,-1, 31,0);
    tracep->declBus(c+58,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+59,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+54,"clk", false,-1);
    tracep->declBit(c+55,"rst", false,-1);
    tracep->declBit(c+56,"write_en", false,-1);
    tracep->declBus(c+57,"trash", false,-1, 31,0);
    tracep->declBus(c+58,"a0", false,-1, 31,0);
    tracep->declBus(c+1,"PC_instr", false,-1, 31,0);
    tracep->declBit(c+2,"PC_src", false,-1);
    tracep->declBus(c+3,"rs1", false,-1, 4,0);
    tracep->declBus(c+4,"rs2", false,-1, 4,0);
    tracep->declBus(c+4,"rd", false,-1, 4,0);
    tracep->declBus(c+5,"write_data", false,-1, 31,0);
    tracep->declBit(c+6,"ALU_src", false,-1);
    tracep->declBus(c+7,"ALU_ctrl", false,-1, 2,0);
    tracep->declBit(c+8,"EQ", false,-1);
    tracep->declBus(c+9,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+6,"ImmSrc", false,-1);
    tracep->declBus(c+10,"imm_imm", false,-1, 11,0);
    tracep->declBus(c+11,"imm_branch", false,-1, 11,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+60,"Address_Width", false,-1, 31,0);
    tracep->declBus(c+59,"Data_Width", false,-1, 31,0);
    tracep->declBit(c+54,"clk", false,-1);
    tracep->declBus(c+3,"rs1", false,-1, 4,0);
    tracep->declBus(c+4,"rs2", false,-1, 4,0);
    tracep->declBus(c+4,"rd", false,-1, 4,0);
    tracep->declBit(c+56,"en", false,-1);
    tracep->declBus(c+5,"din", false,-1, 31,0);
    tracep->declBit(c+6,"ALUSrc", false,-1);
    tracep->declBus(c+9,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+7,"ALU_ctrl", false,-1, 2,0);
    tracep->declBus(c+5,"ALUout", false,-1, 31,0);
    tracep->declBit(c+8,"eq", false,-1);
    tracep->declBus(c+58,"a0", false,-1, 31,0);
    tracep->declBus(c+12,"rd1", false,-1, 31,0);
    tracep->declBus(c+13,"rd2", false,-1, 31,0);
    tracep->declBus(c+14,"ALUOp2", false,-1, 31,0);
    tracep->pushNamePrefix("alu1 ");
    tracep->declBus(c+59,"Data_Width", false,-1, 31,0);
    tracep->declBus(c+12,"op1", false,-1, 31,0);
    tracep->declBus(c+14,"op2", false,-1, 31,0);
    tracep->declBus(c+7,"ALU_ctrl", false,-1, 2,0);
    tracep->declBus(c+5,"ALUout", false,-1, 31,0);
    tracep->declBit(c+8,"eq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+59,"Data_Width", false,-1, 31,0);
    tracep->declBus(c+13,"regOp2", false,-1, 31,0);
    tracep->declBus(c+9,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+6,"ALUSrc", false,-1);
    tracep->declBus(c+14,"ALUOp2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regFile1 ");
    tracep->declBus(c+60,"Address_Width", false,-1, 31,0);
    tracep->declBus(c+59,"Data_Width", false,-1, 31,0);
    tracep->declBit(c+54,"clk", false,-1);
    tracep->declBus(c+3,"rs1", false,-1, 4,0);
    tracep->declBus(c+4,"rs2", false,-1, 4,0);
    tracep->declBus(c+4,"rd", false,-1, 4,0);
    tracep->declBit(c+56,"en", false,-1);
    tracep->declBus(c+5,"din", false,-1, 31,0);
    tracep->declBus(c+12,"rd1", false,-1, 31,0);
    tracep->declBus(c+13,"rd2", false,-1, 31,0);
    tracep->declBus(c+58,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+15+i*1,"regFile_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("control_unit ");
    tracep->declBit(c+8,"EQ", false,-1);
    tracep->declBus(c+47,"instr_opcode", false,-1, 6,0);
    tracep->declBus(c+7,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+6,"ALUsrc", false,-1);
    tracep->declBit(c+6,"ImmSrc", false,-1);
    tracep->declBit(c+2,"PCsrc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myPC ");
    tracep->declBus(c+61,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"IMMOP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+9,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+2,"PCsrc", false,-1);
    tracep->declBit(c+54,"clk", false,-1);
    tracep->declBit(c+55,"rst", false,-1);
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->declBus(c+48,"PC", false,-1, 7,0);
    tracep->declBus(c+49,"ImmOp_intermed", false,-1, 7,0);
    tracep->pushNamePrefix("myPCreg ");
    tracep->declBus(c+61,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+49,"ImmOp", false,-1, 7,0);
    tracep->declBit(c+2,"PCsrc", false,-1);
    tracep->declBit(c+54,"clk", false,-1);
    tracep->declBit(c+55,"rst", false,-1);
    tracep->declBus(c+48,"PC", false,-1, 7,0);
    tracep->declBus(c+50,"branch_PC", false,-1, 7,0);
    tracep->declBus(c+51,"inc_PC", false,-1, 7,0);
    tracep->declBus(c+52,"next_PC", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myRom ");
    tracep->declBus(c+61,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+48,"PC", false,-1, 7,0);
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sign_extend ");
    tracep->declBit(c+54,"clk", false,-1);
    tracep->declBus(c+10,"imm_imm", false,-1, 11,0);
    tracep->declBus(c+11,"imm_branch", false,-1, 11,0);
    tracep->declBit(c+6,"ImmSrc", false,-1);
    tracep->declBus(c+9,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+53,"imm", false,-1, 11,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__PC_instr),32);
    bufp->fullBit(oldp+2,(((0x13U != (0x7fU & vlSelf->top__DOT__PC_instr)) 
                           & ((0x63U == (0x7fU & vlSelf->top__DOT__PC_instr)) 
                              & (~ (IData)(vlSelf->top__DOT__EQ))))));
    bufp->fullCData(oldp+3,((0x1fU & (vlSelf->top__DOT__PC_instr 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+4,((0x1fU & (vlSelf->top__DOT__PC_instr 
                                      >> 0x14U))),5);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__write_data),32);
    bufp->fullBit(oldp+6,((0x13U == (0x7fU & vlSelf->top__DOT__PC_instr))));
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__ALU_ctrl),3);
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__EQ));
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__ImmOp),32);
    bufp->fullSData(oldp+10,((vlSelf->top__DOT__PC_instr 
                              >> 0x14U)),12);
    bufp->fullSData(oldp+11,(((0x800U & (vlSelf->top__DOT__PC_instr 
                                         >> 0x14U)) 
                              | ((0x400U & (vlSelf->top__DOT__PC_instr 
                                            << 3U)) 
                                 | ((0x3f0U & (vlSelf->top__DOT__PC_instr 
                                               >> 0x15U)) 
                                    | (0xfU & (vlSelf->top__DOT__PC_instr 
                                               >> 8U)))))),12);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__ALU__DOT__rd1),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__ALU__DOT__rd2),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__ALU__DOT__ALUOp2),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[0]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[1]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[2]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[3]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[4]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[5]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[6]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[7]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[8]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[9]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[10]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[11]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[12]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[13]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[14]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[15]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[16]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[17]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[18]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[19]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[20]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[21]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[22]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[23]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[24]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[25]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[26]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[27]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[28]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[29]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[30]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[31]),32);
    bufp->fullCData(oldp+47,((0x7fU & vlSelf->top__DOT__PC_instr)),7);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__myPC__DOT__PC),8);
    bufp->fullCData(oldp+49,((0xffU & vlSelf->top__DOT__ImmOp)),8);
    bufp->fullCData(oldp+50,((0xffU & ((IData)(vlSelf->top__DOT__myPC__DOT__PC) 
                                       + vlSelf->top__DOT__ImmOp))),8);
    bufp->fullCData(oldp+51,((0xffU & ((IData)(4U) 
                                       + (IData)(vlSelf->top__DOT__myPC__DOT__PC)))),8);
    bufp->fullCData(oldp+52,((0xffU & (((0x13U != (0x7fU 
                                                   & vlSelf->top__DOT__PC_instr)) 
                                        & ((0x63U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__PC_instr)) 
                                           & (~ (IData)(vlSelf->top__DOT__EQ))))
                                        ? ((IData)(vlSelf->top__DOT__myPC__DOT__PC) 
                                           + vlSelf->top__DOT__ImmOp)
                                        : ((IData)(4U) 
                                           + (IData)(vlSelf->top__DOT__myPC__DOT__PC))))),8);
    bufp->fullSData(oldp+53,(vlSelf->top__DOT__sign_extend__DOT__imm),12);
    bufp->fullBit(oldp+54,(vlSelf->clk));
    bufp->fullBit(oldp+55,(vlSelf->rst));
    bufp->fullBit(oldp+56,(vlSelf->write_en));
    bufp->fullIData(oldp+57,(vlSelf->trash),32);
    bufp->fullIData(oldp+58,(vlSelf->a0),32);
    bufp->fullIData(oldp+59,(0x20U),32);
    bufp->fullIData(oldp+60,(5U),32);
    bufp->fullIData(oldp+61,(8U),32);
}
