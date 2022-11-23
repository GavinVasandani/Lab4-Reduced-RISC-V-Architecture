module ext(
    input logic [11:0] imm_imm, // imm value when the instruction format is immediate
    input logic [12:0] imm_branch, // imm value when the instruction format is branch
    input logic ImmSrc,
    output logic [31:0] ImmOp
);

    always_comb begin
        if (ImmSrc) 
            ImmOp = {{20{imm_imm[11]}}, imm_imm};

        else 
            ImmOp = {{19{imm_branch[12]}}, imm_branch};
    end

endmodule
