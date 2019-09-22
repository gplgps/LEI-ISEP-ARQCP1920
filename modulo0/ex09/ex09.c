#include <stdio.h>

void base_check(char *str);

int main(void)
{
	char s1[] = "1234";
	char s2[] = "789";
	char s3[] = "0xA0F1C2";
	char s4[] = "10110110";
	base_check(s1);
	base_check(s2);
	base_check(s3);
	base_check(s4);
	
	return 0;
}

void base_check(char *str)
{
	int base = 2;
	if(str[0] == '0' && str[1] == 'x')
	{
		printf("O número é hexadecimal\n");
		return;
	}
	else
	{
		int i = 0;
		while (str[i] != '\0')
		{
			if (str[i] > '1')
			{
				base = 8;
				if (str[i] > '7')
				{
					base = 10;
					printf("O número é decimal\n");
					return;
				}
			}
			i++;
		}
	}
	if (base == 2)
	{
		printf("O número é binário\n");
		return;
	}
	else
	{
		printf("O número é octal\n");
	}
}
