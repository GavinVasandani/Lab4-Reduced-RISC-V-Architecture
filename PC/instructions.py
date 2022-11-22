instructions = [0xFF00313,  0x513,  0x593,  0x58513,  0x158593,  0xFE659CE3,  0xFE0308E3]

# the above list can be modified to generate the rom

# uncomment the code below to test, I tested and this works.

# with open('instructions.mem', 'w') as f:
#     for i in range(2**8):
#         f.write(hex(i))
#         if ((i+1)%16 == 0):
#             f.write("\n")
#         else:
#             f.write(" ")

# before testing with the code above, remember to comment the code that sets up the memory below.

with open('instructions.mem', 'w') as f:
    for instruction in instructions:
        f.write(hex(instruction))
        f.write(' ')
        for i in range(3):
            f.write(hex(0))
            f.write(' ')
