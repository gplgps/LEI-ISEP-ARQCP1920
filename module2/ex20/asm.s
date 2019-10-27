.section .data
    .global num

.section .text
    .global check_num
check_num:
    # prologue
    pushl %ebp
    movl %esp, %ebp
    pushl %ebx
    pushl %ecx

    movl num, %eax          # number to check is assigned to eax
    cdq                     # converts from eax to edx:eax
    movb $1, %bl            # bl = 1
    cmp $0, %eax            # compare to check positive or negative
    jge add_positive        # if eax >= 0 (positive), jump to add_positive
    jmp check_odd_even      # jump to the odd/even check

add_positive:
    addb $2, %bl            # bl = bl + 2

check_odd_even:
    movl $2, %ecx           # ecx = 2
    idivl %ecx              # eax = edx:eax / ecx (2)
    cmp $0, %edx            # compare to check the division remainder
    jne add_odd             # if remainder != 0, jump to add_odd
    jmp end                 # jump to end

add_odd:
    addb $1, %bl            # bl = bl + 1

end:
    movb %bl, %al           # copies bl to al for a proper return

    # epilogue
    popl %ecx
    popl %ebx
    movl %ebp, %esp
    popl %ebp
    ret
