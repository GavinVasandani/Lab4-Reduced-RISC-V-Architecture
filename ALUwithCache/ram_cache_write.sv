//Ram cache module for write
module ram_cache_write # (
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
    input logic flagMiss,

//Output:
    output logic [BYTE_WIDTH-1:0] ram_arrayOut [2**RAM_ADDRESS_WIDTH-1:0],
    output logic [CACHE_DATA_WIDTH-1:0] cache_arrayOut [2**CACHE_ADDRESS_WIDTH-1:0]
);

always_ff @(posedge clk) begin

    if(flagMiss) begin //so executes if we have miss
        cache_array[A[7:2]] <= {1'b1, A[15:8], ram_array[A+3], ram_array[A+2], ram_array[A+1], ram_array[A]};
    end
end

assign ram_arrayOut = ram_array;
assign cache_arrayOut = cache_array;

endmodule

