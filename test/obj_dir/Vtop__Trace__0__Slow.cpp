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
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+67,"rst", false,-1);
    tracep->declBus(c+68,"a0", false,-1, 31,0);
    tracep->declBit(c+69,"wr_en", false,-1);
    tracep->declBit(c+70,"Eq", false,-1);
    tracep->declBit(c+71,"alusrc", false,-1);
    tracep->declBus(c+72,"aluCtrl", false,-1, 2,0);
    tracep->declBus(c+73,"extout", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+74,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+74,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+67,"rst", false,-1);
    tracep->declBus(c+68,"a0", false,-1, 31,0);
    tracep->declBit(c+69,"wr_en", false,-1);
    tracep->declBit(c+70,"Eq", false,-1);
    tracep->declBit(c+71,"alusrc", false,-1);
    tracep->declBus(c+72,"aluCtrl", false,-1, 2,0);
    tracep->declBus(c+73,"extout", false,-1, 31,0);
    tracep->declBit(c+1,"write_en", false,-1);
    tracep->declBus(c+2,"PC_instr", false,-1, 31,0);
    tracep->declBit(c+3,"PC_src", false,-1);
    tracep->declBus(c+4,"rs1", false,-1, 4,0);
    tracep->declBus(c+5,"rs2", false,-1, 4,0);
    tracep->declBus(c+6,"rd", false,-1, 4,0);
    tracep->declBus(c+75,"write_data", false,-1, 31,0);
    tracep->declBit(c+7,"ALUSrc", false,-1);
    tracep->declBus(c+8,"ALU_ctrl", false,-1, 2,0);
    tracep->declBit(c+9,"EQ", false,-1);
    tracep->declBus(c+10,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+11,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+76,"imm_imm", false,-1, 11,0);
    tracep->declBus(c+77,"imm_branch", false,-1, 12,0);
    tracep->declBit(c+12,"MemWrite", false,-1);
    tracep->declBit(c+13,"ResultSrc", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+74,"NumberOfReg", false,-1, 31,0);
    tracep->declBus(c+78,"Address_Width_RegFile", false,-1, 31,0);
    tracep->declBus(c+79,"Address_Width_RAM", false,-1, 31,0);
    tracep->declBus(c+74,"Data_Width", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBus(c+4,"rs1", false,-1, 4,0);
    tracep->declBus(c+5,"rs2", false,-1, 4,0);
    tracep->declBus(c+6,"rd", false,-1, 4,0);
    tracep->declBit(c+1,"regFileWen", false,-1);
    tracep->declBit(c+7,"ALUSrc", false,-1);
    tracep->declBus(c+10,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+14,"ALU_ctrl", false,-1);
    tracep->declBit(c+12,"MemWrite", false,-1);
    tracep->declBit(c+13,"ResultSrc", false,-1);
    tracep->declBit(c+9,"eq", false,-1);
    tracep->declBus(c+15,"rd1", false,-1, 31,0);
    tracep->declBus(c+16,"rd2", false,-1, 31,0);
    tracep->declBus(c+17,"ALUOp2", false,-1, 31,0);
    tracep->declBus(c+18,"ALUout", false,-1, 31,0);
    tracep->declBus(c+19,"dinTest", false,-1, 31,0);
    tracep->declBus(c+20,"ReadData", false,-1, 31,0);
    tracep->pushNamePrefix("alu1 ");
    tracep->declBus(c+78,"Address_Width", false,-1, 31,0);
    tracep->declBus(c+74,"Data_Width", false,-1, 31,0);
    tracep->declBus(c+15,"op1", false,-1, 31,0);
    tracep->declBus(c+17,"op2", false,-1, 31,0);
    tracep->declBit(c+14,"ALU_ctrl", false,-1);
    tracep->declBus(c+18,"ALUout", false,-1, 31,0);
    tracep->declBit(c+9,"eq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+74,"Data_Width", false,-1, 31,0);
    tracep->declBus(c+16,"regOp2", false,-1, 31,0);
    tracep->declBus(c+10,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+7,"ALUSrc", false,-1);
    tracep->declBus(c+17,"ALUOp2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ram1 ");
    tracep->declBus(c+79,"Address_Width", false,-1, 31,0);
    tracep->declBus(c+74,"Data_Width", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+12,"WE", false,-1);
    tracep->declBus(c+21,"A", false,-1, 7,0);
    tracep->declBus(c+16,"WD", false,-1, 31,0);
    tracep->declBus(c+20,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regFile1 ");
    tracep->declBus(c+74,"NumberOfReg", false,-1, 31,0);
    tracep->declBus(c+78,"Address_Width", false,-1, 31,0);
    tracep->declBus(c+74,"Data_Width", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBus(c+4,"rs1", false,-1, 4,0);
    tracep->declBus(c+5,"rs2", false,-1, 4,0);
    tracep->declBus(c+6,"rd", false,-1, 4,0);
    tracep->declBit(c+1,"en", false,-1);
    tracep->declBus(c+19,"din", false,-1, 31,0);
    tracep->declBus(c+15,"rd1", false,-1, 31,0);
    tracep->declBus(c+16,"rd2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+22+i*1,"regFile_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("resultMux1 ");
    tracep->declBus(c+74,"Data_Width", false,-1, 31,0);
    tracep->declBus(c+18,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+20,"ReadData", false,-1, 31,0);
    tracep->declBit(c+13,"ResultSrc", false,-1);
    tracep->declBus(c+19,"Result", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("control_unit ");
    tracep->declBus(c+54,"op", false,-1, 6,0);
    tracep->declBus(c+55,"funct3", false,-1, 2,0);
    tracep->declBit(c+56,"funct75", false,-1);
    tracep->declBit(c+9,"Zero", false,-1);
    tracep->declBit(c+3,"PCSrc", false,-1);
    tracep->declBit(c+13,"ResultSrc", false,-1);
    tracep->declBit(c+12,"MemWrite", false,-1);
    tracep->declBus(c+8,"ALUControl", false,-1, 2,0);
    tracep->declBit(c+7,"ALUSrc", false,-1);
    tracep->declBus(c+11,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+1,"RegWrite", false,-1);
    tracep->declBit(c+57,"Branch", false,-1);
    tracep->declBus(c+58,"ALUOp", false,-1, 1,0);
    tracep->pushNamePrefix("a ");
    tracep->declBit(c+59,"op5", false,-1);
    tracep->declBus(c+55,"funct3", false,-1, 2,0);
    tracep->declBit(c+56,"funct75", false,-1);
    tracep->declBus(c+58,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+8,"ALUControl", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m ");
    tracep->declBus(c+54,"op", false,-1, 6,0);
    tracep->declBus(c+11,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+57,"Branch", false,-1);
    tracep->declBit(c+13,"ResultSrc", false,-1);
    tracep->declBit(c+12,"MemWrite", false,-1);
    tracep->declBit(c+7,"ALUSrc", false,-1);
    tracep->declBit(c+1,"RegWrite", false,-1);
    tracep->declBus(c+58,"ALUOp", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("myPC ");
    tracep->declBus(c+79,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+74,"IMMOP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+74,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+10,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+3,"PCsrc", false,-1);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+67,"rst", false,-1);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBus(c+60,"PC", false,-1, 7,0);
    tracep->declBus(c+61,"ImmOp_intermed", false,-1, 7,0);
    tracep->pushNamePrefix("myPCreg ");
    tracep->declBus(c+79,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"ImmOp", false,-1, 7,0);
    tracep->declBit(c+3,"PCsrc", false,-1);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+67,"rst", false,-1);
    tracep->declBus(c+60,"PC", false,-1, 7,0);
    tracep->declBus(c+62,"branch_PC", false,-1, 7,0);
    tracep->declBus(c+63,"inc_PC", false,-1, 7,0);
    tracep->declBus(c+64,"next_PC", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myRom ");
    tracep->declBus(c+79,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+74,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"PC", false,-1, 7,0);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sign_extend ");
    tracep->declBus(c+65,"imm", false,-1, 31,7);
    tracep->declBus(c+11,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+10,"ImmExt", false,-1, 31,0);
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
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__write_en));
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__PC_instr),32);
    bufp->fullBit(oldp+3,(((IData)(vlSelf->top__DOT__EQ) 
                           & (IData)(vlSelf->top__DOT__control_unit__DOT__Branch))));
    bufp->fullCData(oldp+4,((0x1fU & (vlSelf->top__DOT__PC_instr 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+5,((0x1fU & (vlSelf->top__DOT__PC_instr 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+6,((0x1fU & (vlSelf->top__DOT__PC_instr 
                                      >> 7U))),5);
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__ALUSrc));
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__ALU_ctrl),3);
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__EQ));
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__ImmOp),32);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__ImmSrc),2);
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__MemWrite));
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__ResultSrc));
    bufp->fullBit(oldp+14,((1U & (IData)(vlSelf->top__DOT__ALU_ctrl))));
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__ALU__DOT__rd1),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__ALU__DOT__rd2),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__ALU__DOT__ALUOp2),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__ALU__DOT__ALUout),32);
    bufp->fullIData(oldp+19,(((IData)(vlSelf->top__DOT__ResultSrc)
                               ? vlSelf->top__DOT__ALU__DOT__ram1__DOT__ram_array
                              [(0xffU & vlSelf->top__DOT__ALU__DOT__ALUout)]
                               : vlSelf->top__DOT__ALU__DOT__ALUout)),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__ALU__DOT__ram1__DOT__ram_array
                             [(0xffU & vlSelf->top__DOT__ALU__DOT__ALUout)]),32);
    bufp->fullCData(oldp+21,((0xffU & vlSelf->top__DOT__ALU__DOT__ALUout)),8);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[0]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[1]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[2]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[3]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[4]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[5]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[6]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[7]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[8]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[9]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[10]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[11]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[12]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[13]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[14]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[15]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[16]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[17]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[18]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[19]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[20]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[21]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[22]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[23]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[24]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[25]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[26]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[27]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[28]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[29]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[30]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[31]),32);
    bufp->fullCData(oldp+54,((0x7fU & vlSelf->top__DOT__PC_instr)),7);
    bufp->fullCData(oldp+55,((7U & (vlSelf->top__DOT__PC_instr 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+56,((1U & (vlSelf->top__DOT__PC_instr 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__control_unit__DOT__Branch));
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__control_unit__DOT__ALUOp),2);
    bufp->fullBit(oldp+59,((1U & (vlSelf->top__DOT__PC_instr 
                                  >> 5U))));
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__myPC__DOT__PC),8);
    bufp->fullCData(oldp+61,((0xffU & vlSelf->top__DOT__ImmOp)),8);
    bufp->fullCData(oldp+62,((0xffU & ((IData)(vlSelf->top__DOT__myPC__DOT__PC) 
                                       + vlSelf->top__DOT__ImmOp))),8);
    bufp->fullCData(oldp+63,((0xffU & ((IData)(4U) 
                                       + (IData)(vlSelf->top__DOT__myPC__DOT__PC)))),8);
    bufp->fullCData(oldp+64,((0xffU & (((IData)(vlSelf->top__DOT__EQ) 
                                        & (IData)(vlSelf->top__DOT__control_unit__DOT__Branch))
                                        ? ((IData)(vlSelf->top__DOT__myPC__DOT__PC) 
                                           + vlSelf->top__DOT__ImmOp)
                                        : ((IData)(4U) 
                                           + (IData)(vlSelf->top__DOT__myPC__DOT__PC))))),8);
    bufp->fullIData(oldp+65,((vlSelf->top__DOT__PC_instr 
                              >> 7U)),25);
    bufp->fullBit(oldp+66,(vlSelf->clk));
    bufp->fullBit(oldp+67,(vlSelf->rst));
    bufp->fullIData(oldp+68,(vlSelf->a0),32);
    bufp->fullBit(oldp+69,(vlSelf->wr_en));
    bufp->fullBit(oldp+70,(vlSelf->Eq));
    bufp->fullBit(oldp+71,(vlSelf->alusrc));
    bufp->fullCData(oldp+72,(vlSelf->aluCtrl),3);
    bufp->fullIData(oldp+73,(vlSelf->extout),32);
    bufp->fullIData(oldp+74,(0x20U),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__write_data),32);
    bufp->fullSData(oldp+76,(vlSelf->top__DOT__imm_imm),12);
    bufp->fullSData(oldp+77,(vlSelf->top__DOT__imm_branch),13);
    bufp->fullIData(oldp+78,(5U),32);
    bufp->fullIData(oldp+79,(8U),32);
}
