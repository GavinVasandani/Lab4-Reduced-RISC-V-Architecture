module pcreg #(
    parameter ADDRESS_WIDTH = 8
)(
    // inputs and corresponding outputs from left to right
    input logic [ADDRESS_WIDTH-1:0] branch_PC,
    input logic [ADDRESS_WIDTH-1:0] inc_PC,
    input logic                     PCsrc,
    input logic                     clk,
    input logic                     rst,
    output logic                     PC
);

// intermediate output from the mux block, should be decided based on the value of PCsrc
logic [ADDRESS_WIDTH-1:0] next_PC

// handles the mux block doubt - should this be non-blocking assignment?
assign next_PC = PCsrc ? branch_PC : inc_PC

// handles the PC register, note that this part is clocked
always_ff @(posedge clk)
    // synchronous reset
    if(rst) PC <= {ADDRESS_WIDTH{1'b0}};
    else    PC <= next_PC;

endmodule
