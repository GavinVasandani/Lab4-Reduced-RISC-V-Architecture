module top#(
    parameter ADDRESS_WIDTH = 32,
    DATA_WIDTH = 32
)(
    input logic             clk,
    input logic             rst,
    //don't need write function yet, so used this as input
    output [31:0]   trash,
    output logic [ADDRESS_WIDTH-1:0] a0,


    output logic wr_en,
    output logic Eq,
    output logic alusrc,
    output logic[2:0] aluCtrl,
    output logic[31:0] extout,
    output logic [DATA_WIDTH - 1:0] aluout


);

    logic             write_en;
    logic [DATA_WIDTH-1:0] PC_instr;
    logic PC_src;
    logic [4:0] rs1;
    logic [4:0] rs2;
    logic [4:0] rd;
    logic [DATA_WIDTH-1:0] write_data;
    logic ALU_src;
    logic [2:0] ALU_ctrl;
    logic EQ;
    logic [DATA_WIDTH-1:0] ImmOp;
    logic [DATA_WIDTH-1:0] ALUout;

    logic [11:0] imm_imm;
    logic [11:0] imm_branch;

    assign rs1 = PC_instr[19:15];
    assign rs2 = PC_instr[24:20];
    assign rd  = PC_instr[24:20];
    

    assign trash = PC_instr;
PC myPC(
    .ImmOp  (ImmOp),
    .PCsrc  (PC_src),
    .clk    (clk),
    .rst    (rst),
    .instr   (PC_instr)
);

assign imm_imm = PC_instr[31:20];
assign imm_branch = {PC_instr[31],PC_instr[7],PC_instr[30:25],PC_instr[11:8],1'b0};

ext sign_extend(
    //.clk    (clk),
    // .inst   (PC_instr),
    .imm_imm (imm_imm),
    .imm_branch (imm_branch),
    .ImmSrc (ImmSrc),
    .ImmOp  (ImmOp)
);

control control_unit(
    .EQ     (EQ),
    .instr_opcode  (PC_instr[6:0]),
    .RegWrite   (write_en),
    .ALUctrl    (ALU_ctrl),
    .ALUsrc     (ALU_src),
    .ImmSrc     (ImmSrc),
    .PCsrc      (PC_src)
);
topLevelALU ALU(
    .clk    (clk),
    .rs1    (rs1),
    .rs2    (rs2),
    .rd     (rd),
    .en     (write_en),
    .din    (write_data),
    .ALUSrc (ALU_src),
    .ImmOp  (ImmOp),
    .ALU_ctrl (ALU_ctrl),
    .ALUout (ALUout),
    .eq     (EQ),
    .a0     (a0)
);

assign aluout = ALUout;
assign aluCtrl = ALU_ctrl;
assign wr_en = write_en;
assign Eq = EQ;
assign extout = ImmOp;
assign alusrc = ALU_src;


endmodule
