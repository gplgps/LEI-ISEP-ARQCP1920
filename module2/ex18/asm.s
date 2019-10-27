.section .data
    .global i
    .global n
    .equ A, 4
    .equ B, 2

.section .text
    .global summation
summation:
    # prologue
    pushl %ebp
    movl %esp, %ebp
    pushl %ebx
    pushl %ecx          # not required
    pushl %esi
    pushl %edi

    movl i, %ebx        # ebx is always i
    movl n, %ecx        # ecx is temporarily n
    movl $0, %esi       # esi and edi will store the result until the
    movl $0, %edi       # end of the summation
    movl i, %eax        # eax starts as i (could be movl %ebx, %eax)

    jmp while_loop      # begin the while loop (this line can be discarted)

while_loop:  
    cmpl %ecx, %ebx     # compare to check if i is greater than n
    jg end              # if i > n, then jump to end

    imull %ebx          # eax = eax * ebx (i^2 = i * i)
    
    movl $A, %ecx       # ecx = A constant
    imull %ecx          # eax = i^2 * A
    imull %ecx          # eax = i^2 * A^2 
    movl $B, %ecx       # ecx = B constant
    idivl %ecx          # eax = i^2 * A*2 / B


    movl n, %ecx        # ecx is temporarily n
    addl %eax, %esi     # edi:esi = edi:esi + edx:eax
    adcl %edx, %edi     
    incl %ebx           # i++
    movl %ebx, %eax     # eax becomes current i
    movl $0, %edx       # edx si cleared
    
    jmp while_loop

end:
    movl %esi, %eax     # edi:esi is copied into edx:eax
    movl %edi, %edx


    # epilogue
    popl %edi
    popl %esi
    popl %ecx           # not required
    popl %ebx
    movl %ebp, %esp
    popl %ebp
    ret
