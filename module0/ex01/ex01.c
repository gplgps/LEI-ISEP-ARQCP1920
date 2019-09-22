#include <stdio.h>

int  main(void){ 

	char c='a';
	int n = -14; 
	unsigned int u = 10; 
	long l = 31681654; 
	short s = 69; 
	long long ok=6154641356498791; 
	float f = 69.420f; 
	double d = 1000.0354313;
	printf("%d %d %u %d %d %d %d %d \n", sizeof(c), sizeof(n), sizeof(u), sizeof(l), sizeof(s), sizeof(ok), sizeof(f), sizeof(d));
  
	return 0;

}