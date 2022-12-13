//Ram cache module for read
module ram_cache_read # (
    parameter RAM_ADDRESS_WIDTH = 16, //should be 32
    DATA_WIDTH = 32,
    BYTE_WIDTH = 8,
    CACHE_DATA_WIDTH = 41, //32 bit for data, 8 bit for tag, 1 bit for flag = 41
    CACHE_ADDRESS_WIDTH = 6
) (

//Input:
    input logic clk,
    input logic [RAM_ADDRESS_WIDTH-1:0] A,
    input logic [BYTE_WIDTH-1:0] ram_array [2**RAM_ADDRESS_WIDTH-1:0],
    input logic [CACHE_DATA_WIDTH-1:0] cache_array [2**CACHE_ADDRESS_WIDTH-1:0],

//Output:
    output logic [DATA_WIDTH-1:0] RD,
    output logic [BYTE_WIDTH-1:0] ram_arrayOut [2**RAM_ADDRESS_WIDTH-1:0],
    output logic [CACHE_DATA_WIDTH-1:0] cache_arrayOut [2**CACHE_ADDRESS_WIDTH-1:0],
    output logic flagMiss //1 - cache miss, 0 - cache hit

);

//Initialize RAM values:
initial begin
    $display("Loading ram.");
    $readmemh("sine.mem", ram_array); //65536 values so 16 bits address width
    $display("Ram successfully loaded.");
end;

//Cache to refer to:
logic [CACHE_ADDRESS_WIDTH-1:0] cache_address;
logic [CACHE_DATA_WIDTH-1:0] cache_data;

assign cache_address = A[7:2];
assign cache_data = cache_array[cache_address];

//Combinational read only operations:
//Read from cache:
if(cache_data[40]) begin //so if V is 1
    //$display("Hit V.");
    if(cache_data[39:32]==A[15:8]) begin //compare 8 bit tag in cache to A[15:8] to see if cache contains correct mem location value
        //if true then output data in cache_data
        //$display("Hit Tag.");
        assign RD = cache_data[31:0]; //output immediately that DataOut is 31 bit data stored in cache, as its read its async
        assign flagMiss = 1'b0; //hit
    end
            
    else begin //so if tag is wrong, but V bit is still 1 so no need to reassign that, but still must retrieve data from RAM and output and store this value in cache
        //Read from RAM:
        assign RD = {ram_array[A+3], ram_array[A+2], ram_array[A+1], ram_array[A]};
        assign flagMiss = 1'b1; //miss
    end
end
        
else begin //if V is 0 then must fill cache with values and retrieve data from RAM, V bit is 0 at powerup
    //Read from RAM:
    assign RD = {ram_array[A+3], ram_array[A+2], ram_array[A+1], ram_array[A]};
    assign flagMiss = 1'b1; //miss
end

assign ram_arrayOut = ram_array;
assign cache_arrayOut = cache_array;

endmodule

