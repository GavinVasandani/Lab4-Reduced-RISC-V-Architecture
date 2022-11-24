#include "VtopLevelALU.h" //class template to use is from VtopLevelALU.h
#include "verilated.h"
#include "verilated_vcd_c.h"


int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    VtopLevelALU* top = new VtopLevelALU;
    //Create instance of class VtopLevelALU

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("topLevelALU.vcd"); //C++ executable of the system verilog file

    //Initial simulation inputs:
    //9 input logic:
    //test instruction: addi a1,a0,255 same as addi a1,zero,255
    top->clk = 1;
    top->rs1 = 00000; //5 bit binary input so for a0 reg address is 00000
    top->rs2 = 00011; //irrelevant for addi operation
    top->rd = 00001; //a1 reg address
    top->regFileWen = 1;
    top->ALUSrc = 1; //as using we're immediate
    top->ImmOp = 0xFF; //which is 255
    top->ALU_ctrl = 0; //add operation so 0

    for (i=0; i<300; i++){

        for (clk=0; clk<2; clk++){
            tfp->dump (2*i + clk);
            top->clk = !top->clk;
            top->eval();
        }  

        if (Verilated::gotFinish()) 
            exit(0);                // ... exit if finish OR 'q' pressed
        

    }
    tfp->close();
    exit(0);
}