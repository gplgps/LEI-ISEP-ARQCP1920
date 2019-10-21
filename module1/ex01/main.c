#include <stdio.h>

int main(void)
{
    int x = 5;
    int* xPtr = &x;
    float y = *xPtr + 3;
    int vec[] = {10, 11, 12, 13};

    printf("x = %d\ny = %f\n", x, y);
    printf("Address of x: %p\nAddress of xPtr: %p\n", &x, &xPtr);
    printf("Value pointed by xPtr: %d\n", *xPtr); 
    printf("Address of vec: %p\n", vec);
    printf("Values present on vec:\n[0]: %d\n[1]: %d\n[2]: %d\n[3]: %d\n", vec[0], vec[1], vec[2], vec[3]);
    printf("Addresses of vec items:\n[0]: %p\n[1]: %p\n[2]: %p\n[3]: %p\n", &vec[0], &vec[1], &vec[2], &vec[3]);
    return 0;
}