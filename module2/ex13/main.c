#include <stdio.h>
#include "asm.h"

unsigned int base = 5, height = 6;

int main(void)
{
    printf("Expected: 15\nResult: %u\n\n", getArea());
    return 0;
}