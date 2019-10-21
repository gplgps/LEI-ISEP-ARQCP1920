#include <stdio.h>
#include "frequencies.h"

int main(void)
{
    int i;
    float f[11] = {8.23, 12.25, 16.45, 12.45, 10.05, 6.45, 14.45, 0.0, 12.67, 16.23, 18.75};
    int freq[21];
    frequencies(f, 11, freq);
    for (i = 0; i< 21 ;i++){
        printf("%d students have received the %d grade \n", freq[i], i);
    }
    return 0;
}