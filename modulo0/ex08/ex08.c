#include <stdio.h>

int integer_part(char *str);
int fractional_part(char *str);

int main(void)
{
	char str[]= "123.456";
	int x_int = integer_part(str);
	int x_frac = fractional_part(str);
	printf("%d.%d\n", x_int, x_frac);
	
	return 0;
}

int integer_part(char *str)
{
	int convertedInt = 0;
	int i = 0;
	while (str[i] != '\0' && str[i] !='.')
	{
		int ia = str[i] - '0';
		convertedInt = convertedInt*10 + ia;
		i++;
	}
	
	return convertedInt;
}

int fractional_part(char *str)
{
	int convertedFrac = 0;
	int i = 1;
	while (str[i-1] != '.')
	{
		i++;
	}
	while (str[i] != '\0')
	{
		int ia = str[i] - '0';
		convertedFrac = convertedFrac*10 + ia;
		i++;
	}
	
	return convertedFrac;
}
