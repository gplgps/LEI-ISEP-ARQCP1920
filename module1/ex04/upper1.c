#include <stdio.h>

/*
Verifica cada caracter em str e passa de minúsculo para maiúsculo,
caso a letra seja minúscula, subtraindo 32 ao seu valor decimal ASCII.
*/
void upper1(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > 96 && str[i] < 123)
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
}