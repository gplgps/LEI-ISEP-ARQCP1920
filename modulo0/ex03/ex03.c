#include <stdio.h>
#define K 30

void calcular_media(int *vec);
void fill_array(int	*vec);

int main(void){
	
	int vec[K];
	fill_array(vec);
	calcular_media(vec);
	return 0;
}

void fill_array(int *vec){
	
	printf("Insira 30 valores inteiros, seguidos de ENTER.\n");
	int i,n;
	for(i = 0; i < K;i++){
		scanf("%i", &n);
		vec[i] = n;
	}
	
}

void calcular_media(int *vec){
	int soma = 0;
	int i=0;
	for (i = 0; i < K;i++){
		soma = soma + vec[i];
	}
	double media = (float)soma/K;
	printf("A média dos números inseridos é %f.\n",media);
}
