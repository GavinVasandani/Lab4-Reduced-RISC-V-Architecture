module ram #(
    parameter ADDRESS_WIDTH = 32,
    DATA_WIDTH = 32
)(
    input logic clk,
    input logic WE,
    input logic [ADDRESS_WIDTH-1:0] A, // address, to be taken from output of ALU
    input logic [DATA_WIDTH-1:0] WD, // write output, to be taken from rd2
    output logic [DATA_WIDTH-1:0] RD // read output
);

logic [DATA_WIDTH-1:0] ram_array [2**ADDRESS_WIDTH-1:0];

initial begin
    A = {ADDRESS_WIDTH{1'b0}}
end

always_ff @(posedge clk) begin
    if (WE) 
        ram_array[A] <= WD;
        RD <= ram_array[A];
end
endmodule
    
