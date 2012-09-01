#include <stdio.h>

int main(){

	register unsigned int n = 2;
	unsigned long long long int dividend = 600851475143;
	
	while (n < dividend){
		if (dividend % n == 0){
			dividend = dividend / n;
		}
		n++;
	}

	printf("Result : %d\n", dividend);

	return 0;
}
