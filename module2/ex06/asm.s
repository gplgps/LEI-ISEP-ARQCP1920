.section .data
    .global s
    .global byte1
    .global byte2

.section .text
    .global swapBytes
    .global concatBytes
    concatBytes:
    # prologue
    pushl %ebp
    movl %esp, %ebp

    movb byte1, %al     # byte1 becomes the lowest significative byte
    movb byte2, %ah     # byte2 becomes the highest significative byte

    # epilogue
    movl %ebp, %esp
    popl %ebp
    ret
