module ext(
    input logic [31:7] imm,
    input logic [1:0]  ImmSrc,

    output logic[31:0] ImmExt,
);

    always_comb 
        case(ImmSrc)
            2'b00:
                ImmExt = {20{imm[31]}, imm[31:20]};
            
            2'b01:
                ImmExt = {20{imm[31]}, imm[31:25], imm[11:7]};

        endcase

endmodule
