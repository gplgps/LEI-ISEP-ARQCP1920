#include <stdio.h>
#include "average.h"

int main(){
	
	int n = 2;
	int v[2] = { 1, 3 };

	n = average_array(v, n);

	printf("average =%d\n", n);
	return 0;
}
