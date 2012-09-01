#include "stdio.h"
 
int main(int argc, char** argv){

	unsigned int prime_nb = 2;
	unsigned long i = 5;
	unsigned int k;
	int found;
	for(;;){
		found = 1;
		for(k = 2; k < i; ++k)
			if(!(i % k))
				found = 0;
		if(found)
			++prime_nb;
		if(prime_nb >= 10001)
			break;
		i += 2;		// all even numbers are not prime
	}
	printf("prime number : %ld\n", i);
	return 0;
}
