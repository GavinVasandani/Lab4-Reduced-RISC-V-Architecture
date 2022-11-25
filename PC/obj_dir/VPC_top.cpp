// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPC_top.h"
#include "VPC_top__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPC_top::VPC_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VPC_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , PCsrc{vlSymsp->TOP.PCsrc}
    , rst{vlSymsp->TOP.rst}
    , ImmOp{vlSymsp->TOP.ImmOp}
    , instr{vlSymsp->TOP.instr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VPC_top::VPC_top(const char* _vcname__)
    : VPC_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VPC_top::~VPC_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VPC_top___024root___eval_initial(VPC_top___024root* vlSelf);
void VPC_top___024root___eval_settle(VPC_top___024root* vlSelf);
void VPC_top___024root___eval(VPC_top___024root* vlSelf);
#ifdef VL_DEBUG
void VPC_top___024root___eval_debug_assertions(VPC_top___024root* vlSelf);
#endif  // VL_DEBUG
void VPC_top___024root___final(VPC_top___024root* vlSelf);

static void _eval_initial_loop(VPC_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VPC_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VPC_top___024root___eval_settle(&(vlSymsp->TOP));
        VPC_top___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VPC_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPC_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPC_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VPC_top___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VPC_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VPC_top::final() {
    VPC_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VPC_top::hierName() const { return vlSymsp->name(); }
const char* VPC_top::modelName() const { return "VPC_top"; }
unsigned VPC_top::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VPC_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VPC_top___024root__trace_init_top(VPC_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPC_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPC_top___024root*>(voidSelf);
    VPC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VPC_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VPC_top___024root__trace_register(VPC_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPC_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VPC_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
