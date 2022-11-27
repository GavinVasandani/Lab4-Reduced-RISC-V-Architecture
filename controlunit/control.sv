module control(
    input logic         EQ,
    input logic [6:0]   instr_opcode,

    output logic RegWrite,
    output logic[2:0] ALUctrl,
    output logic ALUsrc,
    output logic ImmSrc,
    output logic PCsrc
);


always_comb begin

    ALUctrl = funct3;

    case(instr_opcode)
        7'b0010011: begin ALUctrl = 3'b000;
                          RegWrite = 1;     //addi
                          ALUsrc = 1;
                          ImmSrc = 1;
                          PCsrc = 0;
        end 

    
        7'b1100011: begin ALUctrl = 3'b111;     //bne
                          ALUsrc = 0;
                          ImmSrc = 0;
                          PCsrc = ~EQ;
        end


        7'b0000011: begin ALUctrl = 3'b000;
                          RegWrite = 0;     //lw
                          ALUsrc = 1;
                          ImmSrc = 1;
                          PCsrc = 0;
        end


        default: begin
            ALUsrc = 0;
            ImmSrc = 0;
            PCsrc = 0;
        end

    endcase
    
end
    
endmodule
