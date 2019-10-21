#include <stdio.h>

/*
Verifica se os 3 valores passados são sucessivamente crescentes
*/
int check(int x, int y, int z)
{
    if (x < y && y < z)
    {
        return 1;
    }
    return 0;
}