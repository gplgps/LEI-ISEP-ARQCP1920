#include <stdio.h>

int g_n = 0;
int g_v[100];

int average_array(int v[], int n)
{
	int s = 0, i;
	for (i = 0; i<n;i++)
	{
		s += v[i];
		g_v[g_n] = v[i];
		g_n++;
	}
	return s/n;
}

int average_global_array()
{
	int g_s = 0, i;
	for (i = 0;i < g_n; i++)
	{
		g_s += g_v[i];
	}
	
	return g_s/g_n;
}
	
