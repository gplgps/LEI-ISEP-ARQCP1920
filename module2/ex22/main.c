#include <stdio.h>
#include "fs.h"
#include "asm.h"

int i = 1, j = 2, h,g, r;

int main(void)
{
    printf("i = 1, j = 2\n\nIn C:\n");
    printf("Result of f:  %d\n", f());
    printf("Result of f2: %d\n", f2());
    i = 1;
    j = 2;
    printf("Result of f3: %d\n", f3());
    printf("Result of f4: %d\n", f4());
    printf("\nIn Assembly IA-32:\n");
    printf("Result of f:  %d\n", asm_f());
    printf("Result of f2: %d\n", asm_f2());
    printf("Result of f3: %d\n", asm_f3());
    printf("Result of f4: %d\n", asm_f4());
    return 0;
}