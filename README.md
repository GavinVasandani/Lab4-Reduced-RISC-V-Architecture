# Lab4-Reduced-RISC-V-Architecture

## Part 1: PC Block + Instruction Memory

- ### Functioning

  - **Counter & Mux:** The PC block is responsible for smooth progressing of the program. It consists of a counter (called a program counter) which moves up in increments depending upon outputs from a mux block. The mux block in question takes inputs depending on if the operation requires a branch/jump (where the address to jump to is specified in the instruction) or a regular operation. These two functions are handled by **branch_PC** and **inc_PC** as shown below.

    **insert picture of mux block here.**

  - **Instruction Memory:** Apart from the counter and mux block, there is also a memory (in this particular use case we have used a ROM, but a RAM would work perfectly fine as well. Typically a RAM would be implemented in case of a Von Neumann architecture where we require dynamic access to the memory location in case it needs to be changed mid-program). The memory block currently contains 256 addresses, with 32 bit instruction words stored in each of these addresses. The reasoning for this decision will be made clear in subsequent sections.

    **insert picture of memory block here.**

  - **PC Register:** To avoid a combinational loop, a register is added between the mux and the memory block. This is because at cycle 0, PC is required to determine PC. In case there was no PC register in between, this would latch and cause a combinational loop. The register initially contains 0, so this will not hamper the functioning of the program.

    **insert picture of PC reg here**

- ### PC Register & Counter & Mux
  The **pcreg** module handled the creation of a register and the mux based on the picture above, it handled the mux block, as well as the pc register. The mux block depends on **PCsrc**, a control input. When **PCsrc** is high, the program counter accepts input from the branch component. When **PCsrc** is low, the program counter increments by 4 (due to byte addressing). This can be seen in the code snippet below:
  ```systemverilog
  assign branch_PC = PC + ImmOp;
  assign inc_PC = PC + 8'h4;

  assign next_PC = PCsrc ? branch_PC : inc_PC;  
  ```
   The program counter ensures a one cycle delay between input PC (to calculate the increment and subsequent PC) and the output PC (which is pushed forward to the instruction memory as well as used as input PC for the next cycle). This is implemented with the code below (synchronously):
  ```systemverilog
  always_ff @(posedge clk)
    if(rst) PC <= {ADDRESS_WIDTH{1'b0}};
    else    PC <= next_PC;  
  ```

- ### Instruction Memory
---

- ## **Common bugs**

  *These are the bugs that appears multiple times in the project*

  - ";" or "," is not required for the last **input/output**, same for using module in high level module.

  ```systemverilog
  PC myPC(
      .ImmOp  (ImmOp),
      .PCsrc  (Pc_src),
      .clk    (clk),
      .rst    (rst),
      .instr   (PC_instr)
  );
  ```

  - Make sure that module name matches the name of .sv file
  - ";" has to be added to every logic variable created.

  ```systemverilog
  logic PC_src;
  logic [4:0] rs1;
  logic [4:0] rs2;
  logic [4:0] rd;
  ```
