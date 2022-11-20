// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcontrol__Syms.h"


void Vcontrol___024root__trace_chg_sub_0(Vcontrol___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcontrol___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_chg_top_0\n"); );
    // Init
    Vcontrol___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol___024root*>(voidSelf);
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcontrol___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcontrol___024root__trace_chg_sub_0(Vcontrol___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__myPC__DOT__myRom__DOT__rom_array[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__myPC__DOT__myRom__DOT__rom_array[1]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__PC_instr),32);
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__PC_src));
        bufp->chgCData(oldp+4,((0x1fU & (vlSelf->top__DOT__PC_instr 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+5,((0x1fU & (vlSelf->top__DOT__PC_instr 
                                         >> 0x14U))),5);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__write_data),32);
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__ALU_src));
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__ALU_ctrl),3);
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__EQ));
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__ImmOp),32);
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__ImmSrc));
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__ALU__DOT__rd1),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__ALU__DOT__rd2),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__ALU__DOT__ALUOp2),32);
        bufp->chgBit(oldp+15,((1U & (IData)(vlSelf->top__DOT__ALU_ctrl))));
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[0]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[1]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[2]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[3]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[4]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[5]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[6]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[7]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[8]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[9]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[10]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[11]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[12]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[13]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[14]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[15]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[16]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[17]),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[18]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[19]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[20]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[21]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[22]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[23]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[24]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[25]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[26]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[27]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[28]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[29]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[30]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__ALU__DOT__regFile1__DOT__regFile_array[31]),32);
        bufp->chgIData(oldp+48,((vlSelf->top__DOT__myPC__DOT__PC 
                                 + vlSelf->top__DOT__ImmOp)),32);
        bufp->chgIData(oldp+49,(((IData)(4U) + vlSelf->top__DOT__myPC__DOT__PC)),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__myPC__DOT__PC),32);
        bufp->chgIData(oldp+51,(((IData)(vlSelf->top__DOT__PC_src)
                                  ? (vlSelf->top__DOT__myPC__DOT__PC 
                                     + vlSelf->top__DOT__ImmOp)
                                  : ((IData)(4U) + vlSelf->top__DOT__myPC__DOT__PC))),32);
        bufp->chgSData(oldp+52,(vlSelf->top__DOT__sign_extend__DOT__imm),12);
    }
    bufp->chgBit(oldp+53,(vlSelf->clk));
    bufp->chgBit(oldp+54,(vlSelf->rst));
    bufp->chgBit(oldp+55,(vlSelf->write_en));
    bufp->chgIData(oldp+56,(vlSelf->a0),32);
}

void Vcontrol___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_cleanup\n"); );
    // Init
    Vcontrol___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol___024root*>(voidSelf);
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
