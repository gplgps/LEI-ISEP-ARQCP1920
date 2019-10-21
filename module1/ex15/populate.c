#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Atribui valores aleatórios de 0 a limit a um vetor
vec constituído por num elementos
*/
void populate(int *vec, int num, int limit)
{
    srand(time(0));
    int i;
    for (i = 0; i < num; i++)
    {
        *(vec + i) = rand() % (limit + 1);
        printf("%d\n", *(vec + i));
    }
}
