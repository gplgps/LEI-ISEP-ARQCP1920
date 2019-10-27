#include <stdio.h>
#include "asm.h"
unsigned int op1 = 0, op2 = 5;

int main(void)
{
    printf("Expected: 0\nResult: %u\n\n", test_flags());
    op1 = 2147483647;
    op2 = 1;
    printf("Expected: 1\nResult: %u\n\n", test_flags());
    return 0;
}