#include <stdio.h>

/*
Pega em cada elemento de vec1 e atribui o seu valor para vec2,
para os primeiros n elementos
*/
void copy_vec(int *vec1,int *vec2, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        *(vec2 + i) = *(vec1 + i);
    }
}