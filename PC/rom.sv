module rom #(
    parameter ADDRESS_WIDTH = 8,// should be 32 bits but having some trouble accommodating memory.
    DATA_WIDTH = 32 // data width of each instruction has to be 32 to accommodate all possible instructions
)(
    input logic [ADDRESS_WIDTH-1:0] PC,
    output logic [DATA_WIDTH-1:0]   instr
);

logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];

initial begin
    $display("Loading rom.");
    $readmemh("instructions.mem", rom_array);
    $display("Rom successfully loaded.");
end;

// asynchronous assignment, should be blocking
assign instr = rom_array[PC];

endmodule
