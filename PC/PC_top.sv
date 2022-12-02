module PC_top #(
        parameter ADDRESS_WIDTH = 32, // just a workaround at the moment, will work fine for now but need to figure out why memory allocation isn't taking place accurately.
    DATA_WIDTH = 32
)(
  input logic [ADDRESS_WIDTH-1:0] ImmOp,
  input logic                     PCsrc,
  input logic                     clk,
  input logic                     rst,
  output logic [DATA_WIDTH-1:0]   instr
);

  logic [ADDRESS_WIDTH-1:0] PC;

pcreg myPCreg(ImmOp, PCsrc, clk, rst, PC);

rom myRom(PC, instr);

endmodule
