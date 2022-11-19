module top#(
    parameter ADDRESS_WIDTH = 8,
    DATA_WIDTH = 32
)(
    input logic             clk,
    input logic             rst,
    //don't need write function yet, so used this as input
    input logic             write_en,

    output logic            a0,

);

    logic [ADDRESS_WIDTH-1:0] PC_instr,
    logic PC_src,
    logic [4:0] rs1,
    logic [4:0] rs2,
    logic [4:0] rd,
    // logic write_en,
    logic [DATA_WIDTH-1:0] write_data ,
    logic ALU_src,
    logic ALU_ctrl,
    logic EQ,
    logic a0,
    logic [DATA_WIDTH-1:0] ImmOp,
    logic ImmSrc,

    assign rs1 = PC_instr[19:15]
    assign rs2 = PC_instr[24:20]
    

PC myPC(
    .ImmOp  (ImmOp),
    .PCsrc  (Pc_src)
    .clk    (clk),
    .rst    (rst),

    .inst   (PC_instr),
);

topLevelALU ALU(
    .clk    (clk),
    .rs1    (rs1),
    .rs2    (rs2),
    .rd     (rd),
    .en     (write_en),
    .din    (write_data),
    .ALUSrc (ALU_src),
    .ALU_ctrl (ALU_ctrl),

    .ALUout (write_data),
    .eq     (EQ),
    .a0     (a0),
);

ext sign_extend(
    .clk    (clk),
    .inst   (PC_instr),
    .ImmSrc (ImmSrc),

    .ImmOp  (ImmOp),
);

control_unit control_unit(
    .EQ     (EQ),
    .instr  (PC_instr),

    .ALUctrl    (ALU_ctrl),
    .ALUsrc     (ALU_src),
    .ImmSrc     (ImmSrc),
    .Pcsrc      (PC_src),
);


endmodule