#include <stdio.h>

/*
Verifica cada caracter em str e passa de minúsculo para maiúsculo,
caso a letra seja minúscula, subtraindo 32 ao seu valor decimal ASCII.
Neste caso, o avanço na pela array é feito pelo próprio pointer.
*/
void upper2(char *str)
{
    while (*str != '\0')
    {
        if (*str > 96 && *str < 123)
        {
            *str = *str - 32;
        }
        str++;
    }
}