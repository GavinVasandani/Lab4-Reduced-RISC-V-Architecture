module control(
    input logic         EQ,
    input logic [6:0]   instr_opcode,

    // output logic RegWrite,
    output logic[2:0] ALUctrl,
    output logic ALUsrc,
    output logic ImmSrc,
    output logic PCsrc
);


always_comb begin

    case(instr_opcode)
        7'b0010011: begin ALUctrl = 3'b000;
                        //   RegWrite = 1;
                          ALUsrc = 1;
                          ImmSrc = 1;
                          PCsrc = 0;
        end 

    
        7'b1100011: begin ALUctrl = 3'b111;
            // RegWrite = 0;
                          ALUsrc = 0;
                          ImmSrc = 0;
                          PCsrc = ~EQ;
<<<<<<< HEAD
        end

        default: begin
            ALUsrc = 0;
            ImmSrc = 0;
            PCsrc = 0;
=======
>>>>>>> b89e6334c3f89e060bdf614153a69d66e0e54667
        end

    endcase
    
end
    
endmodule
