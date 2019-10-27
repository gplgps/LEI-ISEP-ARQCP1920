#include <stdio.h>
#include "asm.h"

int num = 2;

int main(void)
{
    printf("\nnum = %d\nExpected: 3\nResult: %hhd\n", num, check_num());
    num = 5;
    printf("\nnum = %d\nExpected: 4\nResult: %hhd\n", num, check_num());
    num = -3;
    printf("\nnum = %d\nExpected: 2\nResult: %hhd\n", num, check_num());
    num = -10;
    printf("\nnum = %d\nExpected: 1\nResult: %hhd\n", num, check_num());
    return 0;
}