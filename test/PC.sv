module PC #(
        parameter ADDRESS_WIDTH = 8,
        IMMOP_WIDTH = 32, // just a workaround at the moment, will work fine for now but need to figure out why memory alloation isn't taking place accurately.
    DATA_WIDTH = 32
)(
  input logic [IMMOP_WIDTH-1:0] ImmOp,
  input logic                     PCsrc,
  input logic                     clk,
  input logic                     rst,
  output logic [DATA_WIDTH-1:0]   instr
);

  logic [ADDRESS_WIDTH-1:0] PC;
  logic [ADDRESS_WIDTH-1:0] ImmOp_intermed;

  assign ImmOp_intermed = ImmOp[ADDRESS_WIDTH-1:0];

pcreg myPCreg (
  .ImmOp(ImmOp_intermed),
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
