.section .data
    .global num

.section .text
    .global steps
steps:
    # prologue
    pushl %ebp
    movl %esp, %ebp
    pushl %ebx

    movl num, %eax      # eax becomes initial number
    movl $3, %ebx       # ebx = 3
    imull %ebx          # eax = eax * 3

    addl $6, %eax       # eax = eax + 6
    adcl $0, %edx       # edx = edx + 0 + CF (carry flag)

    movl $3, %ebx       # ebx = 3
    idivl %ebx          # eax = edx:eax / 3

    addl $12, %eax      # eax = eax + 12
    adcl $0, %edx       # edx = edx + 0 + CF

    subl num, %eax      # eax = eax - initial number
    sbbl $0, %edx       # edx = edx - 0 - CF

    subl $1, %eax       # eax = eax + 1
    
    # all the lines between prologue and epilogue could be replaced with
    # movl $13, %eax
    # 😊

    # epilogue
    popl %ebx
    movl %ebp, %esp
    popl %ebp
    ret
