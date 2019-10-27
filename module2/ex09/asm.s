.section .data
    .global A 
    .global B 
    .global C 
    .global D 

.section .text
    .global sum_and_subtract
    sum_and_subtract:
    # prologue
    pushl %ebp
    movl %esp, %ebp
    pushl %ebx

    movsbl A, %ebx      # ebx = A, with A being converted from 8 to 32 bits (signed)
    movl C, %eax        # ebx = C
    addl %ebx, %eax     # eax = C + A
    adcl $0, %edx       # edx = edx + 0 + CF (for large values)
    movl D, %ebx        # ebx = D
    subl %ebx, %eax     # eax = eax - D (C + A - D)
    sbbl $0, %edx       # edx = edx - 0 - CF (for large values)
    movswl B, %ebx      # ebx = B, with B being converted from 16 to 32 bits (signed)
    addl %ebx, %eax     # eax = eax + B (C + A - D + B)
    adcl $0, %edx       # edx = edx + 0 + CF (for large values)
    cdq                 # converts from eax to edx:eax and mantains the signal

    # epilogue
    popl %ebx
    movl %ebp, %esp
    popl %ebp
    ret
