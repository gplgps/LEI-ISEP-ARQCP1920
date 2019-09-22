#include <stdio.h>

int average_array(int v[], int n)
{
	int a = 0, i;
	for (i = 0; i<n;i++)
	{
		a = a + v[i];
	}
	return a/n;
}
