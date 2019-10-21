#include <stdio.h>
#include "palindrome.h"

int main(void)
{
    char vec[30] = "Never odd or even";
    int f;
    f = palindrome(vec);
    printf("%d\n",f);
    return 0;
}