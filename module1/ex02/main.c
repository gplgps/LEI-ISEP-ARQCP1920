#include <stdio.h>
#include "copy_vec.h"

int main(void)
{
    int vec1[5] = {0, 1 ,3 ,5 ,4}, i;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", vec1[i]);
    }
    int vec2[5];
    copy_vec(vec1, vec2, 5);
    printf("\n------------\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", vec2[i]);
    }
    printf("\n");
    return 0;
}