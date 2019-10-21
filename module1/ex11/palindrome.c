#include <stdio.h>

/*
Verifica se a expressão é palíndrome, ingorando quaisquer espaços, pontos ('.')
e vírgulas (',') presentes na expressão.
A expressão é analizada por 2 pointers, sendo um deles criado no início da função
e é percorrido até ao seu final.
*/
int palindrome(char *str)
{
    char *str2 = &*str; //criação de um pointer, apontado para o início de str
    
    //Percorre o pointer até ao final da expressão str
    while (*str2 != '\0')
    {
        str2++;
    }
    str2--;

    //Verifica se algum dos pontadores está a apontar para um espaço,
    //ponto final ou vírgula
    if (*str == ' ' || *str == '.' || *str == ',')
    {
        str++;
    }
    if (*str2 == ' ' || *str2 == '.' || *str2 == ',')
    {
        str2--;
    } 

    while ((str != str2) && (str + 1) != str2) //Verifica se os pointers estão a apontar para a mesma referência, ou referências vizinhas
    {
        if (*str != *str2 && (*str + 32) != *str2 && *str != (*str2 + 32)) // Compara se os carateres são iguais, insensíveis a maiúsculas ou minúsculas
        {
            return 0;
        }
        str++;
        str2--;
        //Verifica se algum dos pontadores está a apontar para um espaço,
        //ponto final ou vírgula
        while (*str == ' ' || *str == '.' || *str == ',')
        {
            str++;
        }
        while (*str2 == ' ' || *str2 == '.' || *str2 == ',')
        {
            str2--;
        } 
    }
    
    return 1;
}