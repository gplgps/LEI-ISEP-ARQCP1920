#include <stdio.h>
#include "asm.h"

unsigned int base;
unsigned int height;

int main(void)
{
    printf("Expected: 15\nResult: %u\n\n", getArea());
    base = 7;
    height = 8;
    printf("Expected: 28\nResult: %u\n\n", getArea());
    return 0;
}