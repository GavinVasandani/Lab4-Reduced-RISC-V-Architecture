module PC_top #(
        parameter ADDRESS_WIDTH = 32,
    DATA_WIDTH = 32
)(
  input logic [ADDRESS_WIDTH-1:0] ImmOp,
  input logic                     PCsrc,
  input logic                     clk,
  input logic                     rst,
  output logic [DATA_WIDTH-1:0]   instr
);

  logic [ADDRESS_WIDTH-1:0] PC;

pcreg myPCreg (
  .ImmOp(ImmOp),
  .PC(PC),
  .PCsrc(PCsrc),
  .clk (clk),
  .rst (rst)
);

rom myRom (
  .PC(PC),
  .instr(instr)
);

endmodule
