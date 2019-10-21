#include <stdio.h>
#include "where_is.h"

int main(void)
{
    char str[] = "Uma frase";
    char c = 'a';
    int size = 0;
    while (str[size] != '\0')
    {
        size++;
    }
    int pos[size];
    int count, i;
    count = where_is(str, c, pos);
    printf("It was found %d times.\n", count);
    for (i = 0; i < count; i++)
    {
        printf("%d\n",pos[i]);
    }
    return 0;
}