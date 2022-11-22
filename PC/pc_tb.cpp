#include "VPC_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h" 

int main(int argc,char **argv, char **env){
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    //init top verilog instance 
    VPC_top* top = new VPC_top;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp= new VerilatedVcdC;
    top->trace (tfp,99);
    tfp->open ("PC_top.vcd");

    // initialize simulation inputs
    top->clk = 1;
    top->rst = 1;
    top->PCsrc = 1; // when in 1 mode, it selectes branch I/O. To use regular increment you need to set PCsrc to 0. 
    top->ImmOp = 0xFFF; // this should increment by -1. It is greater than 8 bits and proves that the PC block works.
    
    //run simulation for many clock cycles
    for (i=0; i<300; i++){ // clock cycles
            //dump variables into VCD file and toggle clock
            for (clk=0; clk<2; clk++) {
                tfp->dump (2*i+clk);
                top->clk = !top->clk;
                top->eval();
            }

            // change input stimuli
            top->rst = (i % 12 == 0);   // resets after every 12th clock cycle
            if (Verilated::gotFinish())  exit(0);
    }
    tfp->close();
    exit(0);

}
