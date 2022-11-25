module ram #(
    parameter Address_Width = 8, //256 memory spaces in RAM so 2^8, for testing set to 5 bit address width so only have to load 32 values into RAM
    Data_Width = 32 //32 bit value stored in mem location of RAM
)(
    input logic clk,
    input logic WE, //write enable
    input logic [Address_Width-1:0] A, // address, to be taken from output of ALU, 8 bit address so that we can address all 256 mem locations in data mem
    input logic [Data_Width-1:0] WD, // write input, to be taken from rd2
    output logic [Data_Width-1:0] RD // read output
);

logic [DATA_WIDTH-1:0] ram_array [2**ADDRESS_WIDTH-1:0];

//Loading mem locations with some values:
initial begin 
        $display("Initializing RAM with null values (0).");
        $readmemh("ramInputs.mem", ram_array); //modify ramInputs to be 256 0s.
        $display("RAM successfully loaded.");
end;

//check why needed:
initial begin
    A = {ADDRESS_WIDTH{1'b0}};
end

assign RD = ram_array[A];

always_ff @(posedge clk) begin
    if (WE) 
        ram_array[A] <= WD;
        //RD <= ram_array[A];
end
endmodule
    
