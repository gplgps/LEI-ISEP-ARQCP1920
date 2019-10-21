#include <stdio.h>

/*
Lê o valor absoluto de n notas presentes em
grades e regista o nº de ocorrências dessas notas em freq
*/
void frequencies(float *grades, int n, int *freq)
{
    int i;
    //Inicializa o vetor freq a 0
    for (i = 0;i <21; i++)
    {
        *(freq + i) = 0;    
    }
    for (i = 0;i < n;i++)
    {
        *(freq + (int) *grades) += 1;
        grades++;
    }
}