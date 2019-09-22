#include <stdio.h>

int count(int *vec, int n, int value);

int main(void)
{
	int n,i, value;
	printf("Insira o nº de valores a ler: ");
	scanf("%d", &n);
	printf("Insira o número que pretende que seja contado: ");
	scanf("%d", &value);
	printf("Inicie a inserção de %d números: ", n);
	int vec[n];
	for(i = 0; i<n; i++)
	{
		int v;
		scanf("%d", &v);
		vec[i] = v;
	}
	int cunt;
	cunt = count(vec, n, value);
	printf("\nO número %d foi lido %d vezes.\n", value, cunt);
	
	return 0;
}

int count(int *vec, int n, int value)
{
	int count = 0;
	int i;
	for (i = 0; i < n; i++)
	{
		if (vec[i] == value){
			count++;
		}
	}
	return count;
}
