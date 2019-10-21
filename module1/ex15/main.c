#include <stdio.h>
#include "populate.h"
#include "check.h"
#include "inc_nsets.h"

int nsets = 0;

int main(void)
{
    int vec[100], i;
    populate(vec, 100, 20);
    for (i = 0; i < 98; i++){
        if (check(*(vec + i), vec[i+1], vec[i+2]) == 1)
        {
            inc_nsets();
        }
    }
    printf("Valid sets: %d\n", nsets);
    return 0;
}