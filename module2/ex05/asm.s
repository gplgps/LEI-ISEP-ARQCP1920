.section .data
    .global s

.section .text
    .global swapBytes
    swapBytes:
    # prologue
    pushl %ebx
    pushl %ebp
    movl %esp, %ebp

    movw s, %ax     # ax = s (16 bits)
    movb %ah, %bl   # bl (temp 8 bit registry) = ah (highest significative byte) 
    movb %al, %ah   # ah = al (lowest significative byte)
    movb %bl, %al   # al = bl

    # epilogue
    movl %ebp, %esp
    popl %ebp
    popl %ebx
    ret
