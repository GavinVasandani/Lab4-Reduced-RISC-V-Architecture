module ext(
    // input clk,
    // input logic [31:0] inst,
    input logic [11:0] imm_imm, // imm value when the instruction format is immediate
    input logic [11:0] imm_branch, // imm value when the instruction format is branch
    input logic ImmSrc,
    output logic [31:0] ImmOp
);

    logic [11:0] imm;

    always_comb begin
        if (ImmSrc) 
        imm = imm_imm;

        else 
        imm = imm_branch;



        ImmOp = {{20{imm[11]}}, imm[11:0]};
    end

endmodule
    


