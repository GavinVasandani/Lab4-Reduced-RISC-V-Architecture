#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"


int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    Vtop* top = new Vtop;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("top.vcd");



    top->inst = 0b11111110000000000001111110000000;
    top->ImmSrc = 0;

    for (i=0; i<18; i++){

        for (clk=0; clk<2; clk++){
            tfp->dump (2*i + clk);
            top->clk = !top->clk;
            top->eval();
        }   

        // if top->clk == 5:





        if (Verilated::gotFinish()) 
            exit(0);                // ... exit if finish OR 'q' pressed
        

    }
    tfp->close();
    exit(0);
}



