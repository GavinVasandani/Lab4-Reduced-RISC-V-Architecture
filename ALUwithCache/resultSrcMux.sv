//Mux determining which result to send to regfile to write to register, either output from data memory or ALU output
module resultSrcMux #(
    parameter Data_Width = 32,
    BYTE_WIDTH = 8, 
    RAM_ADDRESS_WIDTH = 16
) (
    //Interface signals
    input logic [Data_Width-1:0] ALUResult,
    input logic [Data_Width-1:0] ReadData,
    input logic SrcSel,
    //input logic [BYTE_WIDTH-1:0] ram_array [2**RAM_ADDRESS_WIDTH-1:0],
    output logic [Data_Width-1:0] OutputSrcMux
    //output logic [Data_Width-1:0] Mux_RAM_array_output
); //TEST if the ram_array that's passed on keeps its values

assign OutputSrcMux = (SrcSel) ? ReadData:ALUResult;
//so MuxSelect ? Output if mux select 1:Output if mux select 0

//assign Mux_RAM_array_output = ram_array[4]; //so RAM is passed on between modules

endmodule

