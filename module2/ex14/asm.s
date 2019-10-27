.section .data
base:
    .int 5
    .global base
height:
    .int 6
    .global height

.section .text
    .global getArea
getArea:
    # prologue
    pushl %ebp
    movl %esp, %ebp
    pushl %ebx

    movl base, %eax     # eax = base
    movl height, %ebx   # ebx = height
    mul %ebx            # edx:eax = base * height
    movl $2, %ebx       # ebx = 2
    div %ebx            # eax = edx:eax / 2
    
    # epilogue
    popl %ebx
    movl %ebp, %esp
    popl %ebp
    ret
