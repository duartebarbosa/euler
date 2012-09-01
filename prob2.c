#include <stdio.h>

long int fibonacci[400] = {0};

int main(){

	register unsigned int i = 2;
	long int tmp = 0;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for(; i < 32; i++){
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		if(!( fibonacci[i] & 1))
			tmp += fibonacci[i];
	}

	printf("Result : %ld\n", tmp + 2);

	return 0;
}
