# Lab4-Reduced-RISC-V-Architecture
## Common bugs

*These are the bugs that appears multiple times in the project*

1. ";" or "," is not required for the last **input/output**, same for using module in high level module.

```
PC myPC(
    .ImmOp  (ImmOp),
    .PCsrc  (Pc_src),
    .clk    (clk),
    .rst    (rst),
    .instr   (PC_instr)
);
```

2. please make sure that module name match the name of .sv file
3. ";" has to be added to every logic variable created

```
logic PC_src;
logic [4:0] rs1;
logic [4:0] rs2;
logic [4:0] rd;
```

4. all 
