#include <stdio.h>
#include "asm.h"

short s = 0xAABB;

int main(void){
    short sh;
    printf("%hd\n", s);
    printf("%hx\n", s);
    sh = swapBytes();
    printf("%hd\n", sh);
    printf("%hx\n", sh);
    s = 0x0001;
    printf("%hd\n", s);
    printf("%hx\n", s);
    sh = swapBytes();
    printf("%hd\n", sh);
    printf("%hx\n", sh);
    return 0;
}