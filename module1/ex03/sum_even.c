#include <stdio.h>

/*
Analiza os primeiros n elementos, soma os
elementos pares de p e retorna o valor final
*/
int sum_even(int *p, int num)
{
    int sum = 0, i;
    for (i = 0; i < num; i++)
    {
        if (*(p + i) % 2 == 0)
        {
            sum += *(p + i);
        }
    }

    return sum;
}