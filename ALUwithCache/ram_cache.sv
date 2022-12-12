//Combined ram cache module
//Check whether cache is also byte addressed (Don't think it is)
module ram_cache # (
    parameter RAM_ADDRESS_WIDTH = 32,
    DATA_WIDTH = 32,
    BYTE_WIDTH = 8,
    CACHE_DATA_WIDTH = 57,
    CACHE_ADDRESS_WIDTH = 6
)(

//Interface signals:

    //Input:
    input logic clk,
    input logic [RAM_ADDRESS_WIDTH-1:0] A,
    input logic WE, //write enable
    input logic [DATA_WIDTH-1:0] WD, //write input (DataIn)
    input logic [1:0] dataType, //input signal where 00: word, 01: byte, 10: half word

    //Output:
    output logic [DATA_WIDTH-1:0] RD //DataOut
);

//Initializing RAM and RAM variables:
logic [BYTE_WIDTH-1:0] ram_array [2**RAM_ADDRESS_WIDTH-1:0]; //each mem location of array stores a byte-width so 8 bits

//Initializing Cache and cache variables:
logic [CACHE_DATA_WIDTH-1:0] cache_array [2**CACHE_ADDRESS_WIDTH-1:0];

//Cache to refer to:
logic [CACHE_ADDRESS_WIDTH-1:0] cache_address;

//assign cache_address = A[(1+CACHE_ADDRESS_WIDTH):2]; //so 6 bit for cach e address in this case

//Word at cache: //Check if allowed to do values chronologically
logic [CACHE_DATA_WIDTH-1:0] cache_data;
//assign cache_data = cache_array[cache_address]; //this is entire 57 bit data stored in cache

//Checking if writing to RAM instruction: No need to write to Cache if writing to RAM
always_ff @(posedge clk) begin
    cache_address <= A[(1+CACHE_ADDRESS_WIDTH):2];
    cache_data <= cache_array[cache_address];
    if (WE) begin
        //synchronous write
            case (dataType)
                2'b00: begin //write word to mem location given by A
                    ram_array[A] <= WD[7:0]; //LS Byte
                    ram_array[A+1] <= WD[15:8];
                    ram_array[A+2] <= WD[23:16];
                    ram_array[A+3] <= WD[31:24]; //MS Byte
                end
                2'b01: begin //write byte to mem location given by A
                    ram_array[A] <= WD[7:0];
                end
                2'b10: begin
                    ram_array[A] <= WD[7:0]; //LS Byte
                    ram_array[A+1] <= WD[15:8];
                end
                default: $display("No dataType selected. Please choose word, byte or halfword.");
            endcase
        end

    else begin 
        if(cache_data[56]) begin //so if V is 1
            if(cache_data[55:32]==A[31:8]) begin //compare 24 bit tag in cache to A[31:5] to see if cache contains correct mem location value
                //if true then output data in cache_data
                RD <= cache_data[31:0]; //output immediately that DataOut is 31 bit data stored in cache, as its read its async
            end
            else begin //so if tag is wrong, but V bit is still 1 so no need to reassign that, but still must retrieve data from RAM and output and store this value in cache
                //Read from RAM:
                RD <= {ram_array[A+3], ram_array[A+2], ram_array[A+1], ram_array[A]};
 
                cache_data[55:32] <= A[31:8]; //assigning correct tag
                cache_data[31:0] <= RD; //asigning correct data value
                
            end
        end
        else begin //if V is 0 then must fill cache with values and retrieve data from RAM, V bit is 0 at powerup
            //Read from RAM:
            RD <= {ram_array[A+3], ram_array[A+2], ram_array[A+1], ram_array[A]};

            //always_ff @(posedge clk) begin 
                cache_data[55:32] <= A[31:8]; //writing tag
                cache_data[31:0] <= RD; //writing data value
                cache_data[56] <= 1; //writing v bit
            //end
        end
    end
end

endmodule


//Currently RAM only outputs word and cache only stores word, no byte or halfword.
//RAM can store word, half word or byte.
