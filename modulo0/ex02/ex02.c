#include <stdio.h>

int sum(int a, int b);

int main(void){
	
	int i;
	int m, n;
	
	do{
		printf("Insira dois valores: \n");
		scanf("%i", &m);
		scanf("%i", &n);
		i = sum(m, n);
		printf("\nA soma é %i\n", i);
	} while (i >=10);
	
	return 0;
	
}

int sum(int a, int b){
	
	int c = a + b;
	
	return c;
	
}
