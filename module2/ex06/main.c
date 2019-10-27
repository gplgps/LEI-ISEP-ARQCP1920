#include <stdio.h>
#include "asm.h"

short s = 0xAABB;
char byte1 = 1, byte2 = 2;

int main(void){
    short sh;
    printf("%hhx\n", byte1);
    printf("%hhx\n", byte2);
    sh = concatBytes();
    printf("%hx\n", sh);
    return 0;
}