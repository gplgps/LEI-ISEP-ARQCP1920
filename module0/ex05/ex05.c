#include <stdio.h>

int string_to_int(char *str);

int main(void)
{
	char str[6] = "1234";
	
	int n;
	n = string_to_int(str);
	printf("%d\n", n);
	
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
