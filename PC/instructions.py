instructions = [0x0FF00313,  0x00000513,  0x00000593,  0x00058513,  0x00158593,  0xFE659CE3,  0xFE0318E3]

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
