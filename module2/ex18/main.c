#include <stdio.h>
#include "asm.h"

int i = 1, n = 5;

int main(void)
{
    printf("A =  4        B =  2\n\ni =  1        n = 5\n");
    printf("Expected: 440\nResult: %lld\n\n", summation());
    i = -1;
    printf("i = -1        n = 5\nExpected: 448\nResult: %lld\n\n", summation());
    return 0;
}