//Creating data cache module
module dataCache # (
    parameter RAM_Address_Width = 32,
    DATA_WIDTH = 32,
    //BYTE_WIDTH = 8,
    CACHE_DATA_WIDTH = 57, //32 bit for data, 1 bit for flag, 24 bit for tag
    CACHE_ADDRESS_WIDTH = 6 //needs to be 64 caches as data cache capacity is 256 bytes so 256/4 = 64 32-bit words need to be stored so 64 caches, so 6 bit cache address width

)(

//Interface signals:

    //Input:
    input logic clk,
    input logic [RAM_Address_Width-1:0] A,
    input logic flagMissIn,
    input logic [DATA_WIDTH-1:0] DataIn, //if hit then no need to write DataIn which takes 1 clock cycle, 
    //but reading when we have miss will be combinational so quicker if we have hit.
    //So still take in DataIn but don't always need to use it.
    //To get dataIn we read from RAM which is still combinational
    //but if reading to DataIn what's the point of using cache
    //input logic CacheWriteEN, //enable to write cache
    output logic [DATA_WIDTH-1:-0] DataOut,  //outputted if miss
    output logic flagMissOut //outputs 1 if miss, 0 if hit
);

//Cache can store 256 bytes so 256 mem locations storing bytes:
//Cache array stores 60-bit word: 32-bit for data, 27-bit tag, 1 bit for V, and cache size is 256 caches
logic [CACHE_DATA_WIDTH-1:0] cache_array [2**CACHE_ADDRESS_WIDTH-1:0];

//example: 8 caches so 3 bit cache_address_width so 1+cache_address_width = 4 so A[4:2] is used to refer to cache
//Cache to refer to:
logic [CACHE_ADDRESS_WIDTH-1:0] cache_address;
assign cache_address = A[(1+CACHE_ADDRESS_WIDTH):2]; //so 6 bit for cach e address in this case

//Word at cache: //Check if allowed to do values chronologically
logic [CACHE_DATA_WIDTH-1:0] cache_data;
assign cache_data = cache_array[cache_address]; //this is entire 57 bit data stored in cache

typedef enum {S0, S1} my_state;
my_state current_state, next_state; //2 variables of type my_state which can be either s0 or s1

//state registers
always_ff @(posedge clk)
    current_state <= next_state; //so at pos edge of upcoming cycle current state is assigned next state

//next state logic, so logic to determine next_state val so that it can be assigned to current_state at next cycle
always_comb
    case (current_state)
        S0: if (flagMissIn == 1'b1) next_state = S1;
            else next_state = S0;
        S1: if (flagMissIn == 1'b1) next_state = S1;
            else next_state = S0;
        default: next_state = S1; //default use main mem value
    endcase

//if S0 state then output data value
//flagMiss is input which determines what state to be in

//always_comb - can't be always_comb as we're writing to cache which should be sequential:
always_ff @(posedge clk) 
    case (current_state)
        S0: DataOut = cache_data[31:0];
            flagMissOut = 1'b0;

        S1: cache_data[55:32] <= A[31:[2+CACHE_ADDRESS_WIDTH]];
            cache_data[31:0] <= DataIn;
            cache_data[56] <= 1'b1;
            DataOut = cache_data[31:0]; //so in same cycle outputs Data which is the correct Data
            flagMissOut = 1'b0; //we now have hit so change to next state

endmodule

//if hit then do output data as data in cachine
//if miss then do reassigning of values
//how to initially get flags

//check if V flag is 0, if so then reassign cache data values
//initially v flag is 0 so that cache can be filled with values
//

/*
Steps:
1. Take input address of mem location we're trying to retrieve from data memory
2. Looks at bits needed to determine associated cache to mem location
3. Checks V bit in cache and see if its 0 - empty cache or 1 - filled cache
4. Check tag and compare tag with A[31:5] bits from mem location address
5. If all these conditions same then hit, else miss
6. If miss then output flag saying miss, then make if condition in top level module which evaluates if flag is miss.
7. if miss then call main memory and connect wire from main memory to cache DataIn
8. if miss then write this mem location value and tag to the cache and change V to 1
9. Not sure what DataIn input is by default if we have no miss (maybe make a constant)
