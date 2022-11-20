//Creating ALU module
module regFileALU# (
    parameter 
            // Address_Width = 5,
            //ALU_Instruction_Width = 1;
            Data_Width = 32
) (
    //Interface signals
    input logic [Data_Width-1:0] op1, //input op1 into ALU which is output content from a register
    input logic [Data_Width-1:0] op2, //input op2 into ALU which is either 32-bit Imm or 32-bit content from register
    //input logic [ALU_Instruction_Width-1:0] ALU_ctrl,
    input logic [2:0] ALU_ctrl,
    output logic [Data_Width-1:0] ALUout, //output of ALU is same size as ALU inputs
    output logic eq //Eq is probably carry out flag
);

//ALU is not clocked component, it's combinational so:

always_comb begin //ALU implements different arithmetic/logic based on opcode input
    case (ALU_ctrl)
        3'b000: //Add Immediate:
            ALUout = op1 + op2; /* eq is irrelevant here as instruction for adding the two inputs would not need to consider/evaluate eq,
            so eq can be any value here */
            /* Similarly for bne, ALUout is irrelevant as only eq will be evaluated to check whether to jump to label or not */
        3'b111: //bne instruction:
            if(op1!=op2) eq = 0; //Eq is evaluated and if 0 and bne instruction then label is assigned
            else eq = 1;
        default: $display("Instruction not detected.");
    endcase
end
endmodule

