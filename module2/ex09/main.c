#include <stdio.h>
#include "asm.h"

char A = 2;
short B = 3;
int C = -6, D = 5;

int main(void)
{
    printf("%lld \n", sum_and_subtract());    
    return 0;
}
