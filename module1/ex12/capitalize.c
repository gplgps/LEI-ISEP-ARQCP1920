#include <stdio.h>

/*
Torna a primeira letra de cada palavra maiúscula. Todas as palavras são delimitadas por um espaço.
*/
void capitalize(char *str)
{
    //Verifica se o primeiro caracter é minúsculo, passando para maiúscula
    if (*str > 96 && *str < 123)
    {
        *str = *str - 32;
    }
    str++;

    //Verifica se o primeiro carater das restantes palavras são minúsculos, passando para maiúsculas.
    while (*str != '\0')
    {
        if (*str > 96 && *str < 123 && *(str-1) == ' ') //Verifica se é minúscula e se o carater anterior é um espaço (caractér delimitador)
        {
            *str = *str - 32;
        }
        str++;
    }
}