// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VtopLevelALU.h"
#include "VtopLevelALU__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VtopLevelALU::VtopLevelALU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VtopLevelALU__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rs1{vlSymsp->TOP.rs1}
    , rs2{vlSymsp->TOP.rs2}
    , rd{vlSymsp->TOP.rd}
    , regFileWen{vlSymsp->TOP.regFileWen}
    , ALUSrc{vlSymsp->TOP.ALUSrc}
    , ALU_ctrl{vlSymsp->TOP.ALU_ctrl}
    , eq{vlSymsp->TOP.eq}
    , ImmOp{vlSymsp->TOP.ImmOp}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VtopLevelALU::VtopLevelALU(const char* _vcname__)
    : VtopLevelALU(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VtopLevelALU::~VtopLevelALU() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VtopLevelALU___024root___eval_initial(VtopLevelALU___024root* vlSelf);
void VtopLevelALU___024root___eval_settle(VtopLevelALU___024root* vlSelf);
void VtopLevelALU___024root___eval(VtopLevelALU___024root* vlSelf);
#ifdef VL_DEBUG
void VtopLevelALU___024root___eval_debug_assertions(VtopLevelALU___024root* vlSelf);
#endif  // VL_DEBUG
void VtopLevelALU___024root___final(VtopLevelALU___024root* vlSelf);

static void _eval_initial_loop(VtopLevelALU__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VtopLevelALU___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VtopLevelALU___024root___eval_settle(&(vlSymsp->TOP));
        VtopLevelALU___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VtopLevelALU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VtopLevelALU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VtopLevelALU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VtopLevelALU___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VtopLevelALU::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VtopLevelALU::final() {
    VtopLevelALU___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VtopLevelALU::hierName() const { return vlSymsp->name(); }
const char* VtopLevelALU::modelName() const { return "VtopLevelALU"; }
unsigned VtopLevelALU::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VtopLevelALU::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VtopLevelALU___024root__trace_init_top(VtopLevelALU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VtopLevelALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VtopLevelALU___024root*>(voidSelf);
    VtopLevelALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VtopLevelALU___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VtopLevelALU___024root__trace_register(VtopLevelALU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VtopLevelALU::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VtopLevelALU::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VtopLevelALU___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
