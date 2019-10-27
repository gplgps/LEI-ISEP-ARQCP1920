.section .data
    .global op1
    .global op2

.section .text
    .global test_flags
test_flags:
    # prologue
    pushl %ebp
    movl %esp, %ebp
    pushl %ebx

    movl op1, %eax      # eax = op1
    movl op2, %ebx      # ebx = op2
    addl %ebx, %eax     # eax = eax + ebx
    jo with_overflow    # jumps to with_overflow if OF = 1
    jc with_carry       # jumps to with_carry if CF = 1
    movl $0, %eax       # eax = 0
    jmp end             # jumps to epilogue

with_overflow:
    movl $1, %eax       # eax = 1 (this line could be removed)

with_carry:
    movl $1, %eax       # eax = 1

end:
    
    # epilogue
    popl %ebx
    movl %ebp, %esp
    popl %ebp
    ret
