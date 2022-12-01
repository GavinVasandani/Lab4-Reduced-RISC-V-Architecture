module control(
    input logic [6:0]   op,
    input logic [2:0]   funct3,
    input logic         funct75,
    input logic         Zero,

    output logic        PCSrc,
    output logic        ResultSrc,
    output logic        MemWrite,
    output logic [2:0]  ALUControl,
    output logic        ALUSrc,
    output logic [1:0]  ImmSrc,
    output RegWrite
);

logic Branch;

always_comb begin

    mainDecoder m(op, Branch, ResultSrc, MemWrite, ALUSrc, RegWrite, ALUOp);
    ALUDecoder a(op[5], funct3, funct75, ALUOp, ALUControl);

    PCSrc = Zero & Branch;
    
end
    
endmodule
