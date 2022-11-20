module PC #(
        parameter ADDRESS_WIDTH = 32,
    DATA_WIDTH = 32
)(
  input logic [ADDRESS_WIDTH-1:0] ImmOp,
  input logic                     PCsrc,
  input logic                     clk,
  input logic                     rst,
  output logic [DATA_WIDTH-1:0]   instr
);

    logic [ADDRESS_WIDTH-1:0] branch_PC;
    logic [ADDRESS_WIDTH-1:0] inc_PC;
    logic [ADDRESS_WIDTH-1:0] next_PC;
    logic [ADDRESS_WIDTH-1:0] PC;

assign branch_PC = PC + ImmOp;
assign inc_PC = PC + 32'h4;

pcreg myPCreg (
  .branch_PC(branch_PC),
  .inc_PC(inc_PC),
  .PCsrc(PCsrc),
  .clk (clk),
  .rst (rst),
  .PC(PC)
  // .next_PC(next_PC)
);

rom myRom (
  .PC(PC),
  .instr(instr)
);

endmodule
