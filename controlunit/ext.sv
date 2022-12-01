module ext(
    input logic [31:7] imm,

    output logic [31:0] ImmSrc
);

    always_comb begin
        if (ImmSrc) 
            ImmOp = {{20{imm_imm[11]}}, imm_imm};

        else 
            ImmOp = {{19{imm_branch[12]}}, imm_branch};
    end

endmodule
