//Register file is just special type of RAM component so copy RAM template code:

module regFile # (
    parameter NumberOfReg = 32,
              Address_Width = 5, //32 registers so address size is 5 bits
              Data_Width = 32; //32-bit data
) (
    //Interface signals:
    //Assign input and output variables and their size:
    input logic clk,
    input logic [Address_Width-1:0] rs1, //32 registers so 5 bit address, rs1 is 1st source reg, arithmetic input
    input logic [Address_Width-1:0] rs2, //rs2 is 2nd source reg, arithmetic input
    input logic [Address_Width-1:0] rd, //rd is destination reg to store arithmetic output
    input logic en, //Enable to determine whether we can write to register file or not
    input logic [Data_Width-1:0] din, //Data in which takes in ALU output to write to register rd. Registers hold 32 bit word so din is 32 bits
    output logic [Data_Width-1:0] rd1, //32 bit word that is stored in register that is outputted to ALU for operation
    output logic [Data_Width-1:0] rd2, //32 bit word that is stored in register that is outputted to ALU for operation
    output logic [Data_Width-1:0] a0; //Outputs data stored in a0 register

);

//Creating array of 32 32-bit registers:
logic [Data_Width-1:0] regFile_array [2**Address_Width-1:0]; //So 32-bit regfile with registers labelled 0 to 31

//Registers in regfile are not initialized to anything so neither contents = 0 or contents are empty, so add rst which sets all content values to 0
initial begin 
        $display("Initializing regFile with null values (0).");
        $readmemh("regFile.mem", regFile_array); 
end;

//Register file is sequential (clocked) so only at rising edge we output the value stored at register given by regFile_array[rs1]
always_ff @ (posedge clk) 
    //At rising edge do:
    rd1 <= regFile_array [rs1];
    rd2 <= regFile_array [rs2];
    if (en) begin
        regFile_array[rd] = din; //so at rising edge also the din is stored at register given by address rd
    end

endmodule
//So this is all code for the regfile
