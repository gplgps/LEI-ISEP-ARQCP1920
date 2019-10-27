#include <stdio.h>
#include "asm.h"

int num = 5;

int main(void)
{
    printf("Expected in all: 13\n");
    printf("Result for 5: %d\n", steps());
    num  = -3;
    printf("Result for -3: %d\n", steps());
    return 0;
}