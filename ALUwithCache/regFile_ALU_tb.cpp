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

    /*
    //Initial simulation inputs:
    //8 input logic:
    //test instruction 1: addi a1,a0,255 same as addi a1,zero,255 - works.
    top->clk = 1;
    top->rs1 = 0x1; //5 bit binary input so for a0 reg address is 00000
    top->rs2 = 0x3; //irrelevant for addi operation
    top->rd = 0x0; //a1 reg address
    top->regFileWen = 1;
    top->trigger = 0;
    top->ALUSrc = 1; //as using we're immediate
    top->ImmOp = 0xFF; //which is 255 //32 bit binary or 8 bit hex
    top->ALU_ctrl = 0000; //add operation so 0
    top->MemWrite = 0;
    top->dataType = 00; //irrelevant for addi operation
    top->SrcSel = 0;
    top->newPC = 0x0;
    top->JumpSel = 0;
    //change test to addi a0,a1,255 to test that a0 reg can't be written to.
    */

    /*
    //test instruction 2: bne a1, a0, xxxx - works.
    //expected output: eq = 1
    top->clk = 1;
    top->rs1 = 0x0; //5 bit binary input so for a0 reg address is 00000
    top->rs2 = 0x1; //5 bit binary input so for a1 reg address is 00001
    top->rd = 0x3; //not rewriting register value so don't care
    top->regFileWen = 0; //not rewriting register so 0
    top->trigger = 0;
    top->ALUSrc = 0; //as we're using register value so 0
    top->ImmOp = 0xFF; //which is 255, don't care
    top->ALU_ctrl = 0001; //bne operation so 1
    top->MemWrite = 0;
    top->dataType = 00;
    top->SrcSel = 0;
    top->JumpSel = 0;
    */

    /*
    //test instruction 3: lw a2, 0(a1) so a2 = mem[a1+0],
    //do lw a2, 2(a1) assign a2 = 0 initially, a1 = 0x01 so 0x01+2 = 0x03 and mem[0x03] assign 3
    //so expected a2 value is 3 - works.
    top->clk = 1;
    top->rs1 = 0x1; //a1 address given by rs1
    top->rs2 = 0x2; //not relevant aka don't care
    top->rd = 0x0; //write to a0
    top->regFileWen = 1; //as we're doing a0 = mem[a1+0]
    top->ALUSrc = 1; //we want to add immediate (offset) to rs1 to get effective address, assign 0 if adding value from 2 registers
    top->ImmOp = 0x1; //offset from base given by ImmOp, assumed ImmOp is after sign extension so its 32 bits
    top->ALU_ctrl = 0; //add operation
    top->MemWrite = 0; //Not rewriting mem location in RAM
    top->ResultSrc = 1; //ReadData is being assigned to register a0, if doing addi instruction then ResultSrc = 0
    */

    /*
    //test instruction 4: xor rd, rs1, rs2, so: xor a1, a0, a2
    top->clk = 1;
    top->rs1 = 0x0; //5 bit binary input so for a0 reg address is 00000
    top->rs2 = 0x2; //reg at address 0x2 is assigned 1, so xor output = 1 so rd value should = 1
    top->rd = 0x1; //a1 reg address
    top->regFileWen = 1;
    top->trigger = 0;
    top->ALUSrc = 0; //as using we're register value
    top->ImmOp = 0xFF; //irrelevant
    top->ALU_ctrl = 1001; //xor operation
    top->MemWrite = 0;
    top->dataType = 00; //irrelevant for addi operation
    top->SrcSel = 0;
    top->newPC = 0x0;
    top->JumpSel = 0;
    */

    /*
    //lw a2, 2(a1) so a2 = mem[a1+2],
    //do lw a2, 2(a1) assign a2 = 0 initially, a1 = 0x01 so 0x01+2 = 0x03 (check if 0 indexed array) if not then 0x04 and mem[0x03] assign 3
    //so expected a2 value is 3 - works.
    top->clk = 1;
    top->rs1 = 0x1; //a1 address given by rs1
    top->rs2 = 0x8; //not relevant aka don't care
    top->rd = 0x2; //write to a2
    top->regFileWen = 1; //as we're doing a2 = mem[a1+2]
    top->trigger = 0;
    top->ALUSrc = 1; //we want to add immediate (offset) to rs1 to get effective address, assign 0 if adding value from 2 registers
    top->ImmOp = 0x2; //offset from base given by ImmOp, assumed ImmOp is after sign extension so its 32 bits
    top->ALU_ctrl = 0000; //add operation
    top->MemWrite = 0; //Not rewriting mem location in RAM
    top->dataType = 00;
    top->SrcSel = 1;
    top->newPC = 0x0;
    top->JumpSel = 0;
    top->flagInitial = 0;
    //top->ResultSrc = 1; //ReadData is being assigned to register a0, if doing addi instruction then ResultSrc = 0
    */

    /*
    //Instructions to test cache:
    //Writing to main memory:
    //sw rs2, imm(rs1)
    //sw a2, 2(0x01) so mem[0x01+2] = a2, where a2 is data at register 2 given by address 0x02 so:
    //load a2 with 5, assumed 0 indexing so 3rd value in reg is a2 given by 0x02
    //expected value at 0x03 main memory is a2 value (5)
    //rs1 + immOp, value @ rs2 directly sent to RAM
    //rs1 in sw instruction is value stored at reg given by address rs1, so if a1 then 0x01 address and value at that register is used in mem[xxx + ImmOp]
    top->clk = 1;
    top->rs1 = 0x1; //0x01 address register contains value (1)
    top->rs2 = 0x2; //a2 address given by rs2
    top->rd = 0x07; //don't care
    top->regFileWen = 0; //not writing to reg
    top->trigger = 0;
    top->ALUSrc = 1; //we want to add immediate (offset) to rs1 to get effective address, assign 0 if adding value from 2 registers
    top->ImmOp = 0x2; //offset from base given by ImmOp, assumed ImmOp is after sign extension so its 32 bits
    top->ALU_ctrl = 0000; //add operation
    top->MemWrite = 0x1; //Writing to RAM
    top->dataType = 00; //Writing word
    top->SrcSel = 1; //irelevant as we aren't writing to rd so no effect
    top->newPC = 0x0; //irelevant as we aren't writing to rd so no effect
    top->JumpSel = 0; //irelevant as we aren't writing to rd so no effect
    */

    //Fetch from main memory:
    //lw rd, imm(rs1), so:
    //lw a2, 2(0x1) so a2 = mem[0x1+2], so rd = address of a2 (0x2), rs1 is address to reg a1 (0x1) that contains data val (1)
    //immOp = 2, expected output is a2 reg = value at mem location 0x3 (6)
    top->clk = 1;
    top->rs1 = 0x1; //0x01 address register contains value (1)
    top->rs2 = 0x7; //don't care
    top->rd = 0x2; //address of reg to write to
    top->regFileWen = 1; //writing to reg
    top->trigger = 0;
    top->ALUSrc = 1; //we want to add immediate (offset) to rs1 to get effective address, assign 0 if adding value from 2 registers
    top->ImmOp = 0x2; //offset from base given by ImmOp, assumed ImmOp is after sign extension so its 32 bits
    top->ALU_ctrl = 0000; //add operation
    top->MemWrite = 0; //Not writing to RAM
    top->dataType = 00; //Writing word
    top->SrcSel = 1; //want ReadData value that's outputted from RAM
    top->newPC = 0x0;
    top->JumpSel = 0; //want ReadData value that's outputted from RAM

    /*
    //jal rd, imm20
    //do jal a1, xxx
    //a1 expected to be newPC aka PC+4
    top->clk = 1;
    top->rs1 = 0x0; //irrelevant
    top->rs2 = 0x3; //irrelevant
    top->rd = 0x1; //not rewriting register value so don't care
    top->regFileWen = 1; //not rewriting register so 0
    top->trigger = 0;
    top->ALUSrc = 0; //irrelevant as using PC+4
    top->ImmOp = 0xFF; //irrelevant
    top->ALU_ctrl = 0001; //irrelevant
    top->MemWrite = 0; //irrelevant
    top->dataType = 00; //irrelevant
    top->SrcSel = 0; //irrelevant
    top->newPC = 0xFFFF; //newPC value to store in rd (reg 1)
    top->JumpSel = 1; //select newPc (PC+4) to assign to register rd
    */

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