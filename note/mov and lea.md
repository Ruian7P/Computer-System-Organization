### mov
  - copy the data from one place, then paste it to another
  - eg. long t0 = *x;     movq (%rdi), %rax

### lea (load effective address)
  - put the effective address of the operand into the destination register
  - ## Calculate the address without access the memory location ##
  - ````
    long t0 = 3x;  // leaq (%rdi, %rdi, 2) %rax
    ````
    
