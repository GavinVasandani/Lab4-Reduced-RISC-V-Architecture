//Creating ALU module
module alu # (
    parameter Address_Width = 5,
              ALU_Instruction_Width = 10;
              Data_Width = 32;
) (
    //Interface signals
    input logic [Data_Width-1:0] op1, //input op1 into ALU which is output content from a register
    input logic [Data_Width-1:0] op2, //input op2 into ALU which is either 32-bit Imm or 32-bit content from register
    input logic [ALU_Instruction_Width-1:0] ALU_ctrl;
    output logic [Data_Width-1:0] ALUout; //output of ALU is same size as ALU inputs
    output eq; //Eq is probably carry out flag
);

//ALU is not clocked component, it's combinational so:

always_comb begin //ALU implements different arithmetic/logic based on opcode input
    case (ALU_ctrl)
        10 b'0000010011: //Add Immediate: //Change to 1 b'0
            ALUout = op1 + op2;
        10 b'0011100011: //bne instruction: //Change to 1 b'1
            if(op1!=op2) ALUout = //label which is combination of different bits from instruction, but not sure whether ALU assigns this.
        default: $display("Instruction not detected.");
    endcase
end
endmodule

