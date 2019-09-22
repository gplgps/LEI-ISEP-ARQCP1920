#include <stdio.h>

int count_words(char *str);

int main(void)
{
	char str1[30] = " a a a  a  aaaaaa a a a ";
	char str2[18] = "leitão no espeto";
	int i1,i2;
	
	i1 = count_words(str1);
	i2 = count_words(str2);
	
	printf("%d %d\n", i1,i2);

	return 0;
}

int count_words(char *str){
	int words = 0;
	int i = 1;
	while (str[i] != '\0')
	{
		if ((str[i] == ' ' && str[i-1] !=' ') || (str[i] != ' ' && str[i+1] == '\0'))
		{
			words++;
		}
		i++;
	}
	
	return words;
}
