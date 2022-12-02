module top#(
    parameter ADDRESS_WIDTH = 32,
    DATA_WIDTH = 32
)(
    input logic             clk,
    input logic             rst,
    output logic [ADDRESS_WIDTH-1:0] a0,
    output logic wr_en,
    output logic Eq,
    output logic alusrc,
    output logic[2:0] aluCtrl,
    output logic[31:0] extout

);

    logic write_en;
    logic [DATA_WIDTH-1:0] PC_instr;
    logic PC_src;
    logic [4:0] rs1;
    logic [4:0] rs2;
    logic [4:0] rd;
    logic [DATA_WIDTH-1:0] write_data;
    logic ALUSrc;
    logic [2:0] ALU_ctrl;
    logic EQ;
    logic [DATA_WIDTH-1:0] ImmOp;
    logic [1:0]  ImmSrc;
    logic [11:0] imm_imm;
    logic [12:0] imm_branch;
    logic MemWrite;
    logic ResultSrc;

    assign rs1 = PC_instr[19:15];
    assign rs2 = PC_instr[24:20];
    assign rd  = PC_instr[11:7];

PC_top myPC(
    .ImmOp  (ImmOp),
    .PCsrc  (PC_src),
    .clk    (clk),
    .rst    (rst),
    .instr   (PC_instr)
);

ext sign_extend(
    .imm    (PC_instr[31:7]),
    .ImmSrc (ImmSrc),
    .ImmExt  (ImmOp)
);

control control_unit(
    .op     (PC_instr[6:0]),
    .funct3 (PC_instr[14:12]),
    .funct75(PC_instr[30]),
    .Zero     (EQ),
    
    .RegWrite   (write_en),
    .ALUControl (ALU_ctrl),
    .ALUSrc     (ALUSrc),
    .ImmSrc     (ImmSrc),
    .PCSrc      (PC_src),
    .ResultSrc  (ResultSrc),
    .MemWrite   (MemWrite)
);
topLevelALU ALU(
    .clk    (clk),
    .rs1    (rs1),
    .rs2    (rs2),
    .rd     (rd),
    .regFileWen (write_en),
    .ALUSrc (ALUSrc),
    .ImmOp  (ImmOp),
    .ALU_ctrl (ALU_ctrl),
    .MemWrite (MemWrite),
    .ResultSrc (ResultSrc),
    //----output-----------
    .eq     (EQ)
);

//assign aluout = ALUout;
assign aluCtrl = ALU_ctrl;
assign wr_en = write_en;
assign Eq = EQ;
assign extout = ImmOp;
assign alusrc = ALUSrc;


endmodule


//johnny sb

