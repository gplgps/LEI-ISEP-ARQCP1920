#include <stdio.h>

int string_to_int(char *str);

int main(void)
{
	char str1[11];
	char str2[11];
	printf("Insira o primeiro valor: ");
	scanf("%10s",str1);
	printf("Insira o segundo valor: ");
	scanf("%10s",str2);
	
	int a;
	int b;
	a = string_to_int(str1);
	b = string_to_int(str2);
	float c;
	c = (a+b)/2.0f;
	printf("\nA média entre estes 2 valores é %.2f\n",c);
	
	return 0;
}

int string_to_int(char *str)
{
	int convertedNum = 0;
	int i = 0;
	while (str[i] != '\0')
	{
		int ia = str[i] - '0';
		convertedNum = convertedNum*10 + ia;
		i++;
	}
	
	return convertedNum;
}
