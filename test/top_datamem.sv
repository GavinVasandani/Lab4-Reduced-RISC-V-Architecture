// this is for the final CPU (lw operation), you need to add logic for ResultSrc into the control unit before implementing sw.
module top_datamem(
    parameter ADDRESS_WIDTH = 32,
    DATA_WIDTH = 32
)(
    input logic clk,
    input logic WE,
    input logic [ADDRESS_WIDTH-1:0] A,
    input logic [DATA_WIDTH-1:0] WD,
    input logic ResultSrc,
    output logic [DATA_WIDTH-1:0] Result
)

    logic [DATA_WIDTH-1:0] RD;

    ram myram(clk, WE, A, WD, RD);

    assign Result = ResultSrc ? RD : A;

endmodule
