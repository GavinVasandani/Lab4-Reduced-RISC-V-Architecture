module rom #(
    parameter ADDRESS_WIDTH = 32,// should be 32 bits but having some trouble accommodating memory.
    DATA_WIDTH = 8 // data width of each instruction has to be 32 to accommodate all possible instructions
)(
    input logic [ADDRESS_WIDTH-1:0] PC,
    output logic [31:0]   instr
);

logic [DATA_WIDTH-1:0] rom_array [27:0];

initial begin
    $display("Loading rom.");
    $readmemh("instructions.mem", rom_array);
    $display("Rom successfully loaded.");
end;

// asynchronous assignment, should be blocking
assign instr = {rom_array[PC], rom_array[PC+1], rom_array[PC+2], rom_array[PC+3]};

endmodule
