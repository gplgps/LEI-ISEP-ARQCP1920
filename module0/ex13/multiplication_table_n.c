#include <stdio.h>
#include "line.h"

void multiplication_table_n(int n)
{
	int i ;
	for (i = 1; i <= 10; i++)
	{
		line(n, i);
	}
}
