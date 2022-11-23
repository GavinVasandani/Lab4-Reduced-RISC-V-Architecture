# Lab4-Reduced-RISC-V-Architecture

# Part 1: PC Block + Instruction Memory

- ## Functioning

  - **Counter & Mux:** The PC block is responsible for smooth progressing of the program. It consists of a counter (called a program counter) which moves up in increments depending upon outputs from a mux block. The mux block in question takes inputs depending on if the operation requires a branch/jump (where the address to jump to is specified in the instruction) or a regular operation. These two functions are handled by branch_PC and inc_PC as shown below.

    **insert picture of mux block here.**

  - **Instruction Memory:** Apart from the counter and mux block, there is also a memory (in this particular use case we have used a ROM, but a RAM would work perfectly fine as well. Typically a RAM would be implemented in case of a Von Neumann architecture where we require dynamic access to the memory location in case it needs to be changed mid-program). The memory block currently contains 256 addresses, with 32 bit instruction words stored in each of these addresses. The reasoning for this decision will be made clear in subsequent sections.

    **insert picture of memory block here.**

  - **PC Register:** To avoid a combinational loop, a register is added between the mux and the memory block. This is because at cycle 0, PC is required to determine PC. In case there was no PC register in between, this would latch and cause a combinational loop. The register initially contains 0, so this will not hamper the functioning of the program.

    **insert picture of PC reg here**

- ## PC Register

---

- ## Common bugs

  *These are the bugs that appears multiple times in the project*

  - ";" or "," is not required for the last **input/output**, same for using module in high level module.

  ```
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

  ```
  logic PC_src;
  logic [4:0] rs1;
  logic [4:0] rs2;
  logic [4:0] rd;
  ```
