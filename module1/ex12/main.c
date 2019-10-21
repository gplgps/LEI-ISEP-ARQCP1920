#include <stdio.h>
#include "capitalize.h"

int main(void)
{
    char vec[] = "É certo que vamos tirar 20 a ARQCP.";
    capitalize(vec);
    printf("%s\n", vec);

    return 0;
}