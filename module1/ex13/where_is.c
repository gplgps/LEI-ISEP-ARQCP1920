#include <stdio.h>

/*
Verifica se os caracteres de str são iguais a c,
registando a sua posição em str no vetor p
*/
int where_is(char *str, char c, int *p)
{
    int pos = 0, count = 0;
    while (*str != '\0'){
        if (*str == c)
        {
            *p = pos;
            count++;
            p++;
        }
        str++;
        pos++;
    }
    return count;
}