.section .data
    .global i
    .global j

.section .text
    .global asm_f
    .global asm_f2
    .global asm_f3
    .global asm_f4
asm_f:
    # prologue
    pushl %ebp
    movl %esp, %ebp

    movl i, %eax            # copied i variable to eax
    movl j, %ecx            # copied j variable to ecx

    cmp %ecx, %eax          # compared eax and ecx
    je step_1               # if eax == ecx, jump to step_1

    movl $0, %edx           # cleared edx
    addl %ecx, %eax         # eax = eax + ecx
    subl $1, %eax           # eax = eax - 1   

    jmp end                 # jump to epilogue 

step_1:
    subl %ecx, %eax         # eax = eax - ecx
    addl $1, %eax           # eax = eax + 1
    jmp end                 # jump to epilogue



asm_f2:
    # prologue
    pushl %ebp
    movl %esp, %ebp

    movl i, %eax
    movl j, %ecx

    cmp %ecx, %eax
    jg step_2a              # if eax > ecx, jump to step_2a

    addl $1, %ecx           # ecx = ecx + 1

    jmp step_2b             # jump to last step on b

step_2a:
    subl $1, %eax           # eax = eax - 1

step_2b:
    imull %ecx              # edx:eax = eax * ecx
    jmp end                 # jump to epilogue



asm_f3:
    # prologue
    pushl %ebp
    movl %esp, %ebp

    movl i, %eax
    movl j, %ecx

    cmp %ecx, %eax
    jge step_3a             # if eax >= ecx, jump to step_3a

    addl %eax, %ecx         # ecx = ecx + eax
    movl %ecx, %eax         # eax gets the same value as ecx
    addl $2, %eax           # eax = eax + 2
    jmp step_3b             # jump to last step


step_3a:
    imull %eax, %ecx        # ecx = eax * ecx
    addl $1, %eax           # eax = eax + 1

step_3b:                    # assuming that eax is g and ecx is h
    movl $0, %edx
    idivl %ecx
    jmp end



asm_f4:
    # prologue
    pushl %ebp
    movl %esp, %ebp

    movl i, %eax
    movl j, %ecx

    movl %ecx, %edx         # making the edx as the sum of i and j
    addl %eax, %edx         # without making eax and ecx change their values

    cmp $10, %edx           # internal operation to activate EFLAGS (edx - 10)
    jl step_4a              # if edx < 10 (i + j < 10), then jump to step_4a
    imull %ecx, %ecx        # ecx = ecx * ecx
    movl %ecx, %eax         # eax gets the same value as ecx
    movl $3, %ecx           # ecx = ecx + 3
    movl $0, %edx           # clearing edx
    idivl %ecx              # eax = edx:eax / ecx
    jmp end

step_4a:
    imull %eax              # eax = eax * eax
    movl $4, %edx           # edx = 4
    imull %edx              # eax = eax * edx

end:
    # epilogue
    movl %ebp, %esp
    popl %ebp
    ret
