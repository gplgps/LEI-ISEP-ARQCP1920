#include <stdio.h>
#include "upper1.h"

int main(void)
{
    char str[] = "Teste teSte testE.";
    upper1(str);
    printf("%s\n", str);
    return 0;
}