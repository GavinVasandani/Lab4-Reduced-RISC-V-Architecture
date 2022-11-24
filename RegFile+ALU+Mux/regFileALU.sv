//Creating ALU module
module regFileALU # (
    parameter Address_Width = 5,
              //ALU_Instruction_Width = 1;
              Data_Width = 32
) (
    //Interface signals
    input logic [Data_Width-1:0] op1, //input op1 into ALU which is output content from a register
    input logic [Data_Width-1:0] op2, //input op2 into ALU which is either 32-bit Imm or 32-bit content from register
    //input logic [ALU_Instruction_Width-1:0] ALU_ctrl,
    input logic ALU_ctrl,
    output logic [Data_Width-1:0] ALUout, //output of ALU is same size as ALU inputs
    output logic eq //Eq is probably carry out flag
);

//ALU is not clocked component, it's combinational so:

always_comb begin //ALU implements different arithmetic/logic based on opcode input
    case (ALU_ctrl) //ALU is combinational, async so normal = is fine for variable assignments
        1'b0: begin//Add Immediate:
            ALUout = op1 + op2; /* eq is irrelevant here as instruction for adding the two inputs would not need to consider/evaluate eq,
            so eq can be any value here */
            /* Similarly for bne, ALUout is irrelevant as only eq will be evaluated to check whether to jump to label or not */
            eq = 0; //technically eq is don't care, and as branch = 0 for non-branching instructions then regardless of eq value we don't branch
        end
        1'b1: begin//bne instruction:
            ALUout = 0; //ALUout is don't care, but if we assign it some value as instruction is bne/beq then regFile write = 0 and memWrite = 0 so no effect of ALUout
            if((op1-op2)==0) eq = 1; //so if op1-op2 is 0 then means the operands are equal so eq = 1, else operands are not equal so eq=0
            else eq = 0;
            //ALUOut is don't care.
        end
        default: $display("Instruction not detected.");
    endcase
end
endmodule

