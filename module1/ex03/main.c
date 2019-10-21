#include <stdio.h>
#include "sum_even.h"

int main(void)
{
    int vec[5] = {1, 2, 3, 4, 5}, sum;
    sum = sum_even(vec, 5);
    printf("%d\n", sum);
    return 0;
}