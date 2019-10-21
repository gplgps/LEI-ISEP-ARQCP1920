#include <stdio.h>
#include "upper2.h"

int main(void)
{
    char str[] = "Teste teSte testE.";
    upper2(str);
    printf("%s\n", str);
    return 0;
}