#include <stdio.h>
#include "average.h"

int main(){
	
	int n;
	int v1[2] = { 2, 11 };

	n = average_array(v1, 2);

	printf("average =%d\n", n);
	
	int v2[3] = { 4, 3, 5};

	n = average_array(v2, 3);

	printf("average =%d\n", n);
	printf("global average = %d\n",average_global_array());
	return 0;
}
