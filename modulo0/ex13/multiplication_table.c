#include <stdio.h>
#include "multiplication_table_n.h"

void multiplication_table(void)
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		multiplication_table_n(i);
		printf("\n");
	}
}
