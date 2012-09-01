#include <stdio.h>

#define odd(x) ((x & 1) ? (x) : (x = (x + 1)))

unsigned long int prime_gen(int start){

	unsigned int k, found = 1;
	
	if(start == 2)
		return 2;

	for(odd(start); ; start += 2, found = 1){		// all even numbers are not prime
		for(k = 2; k < start; ++k)
			if(!(start % k))
				found = 0;
		if(found)
			break;
	}

	return start;
}

int main(){

	long double tmp = 0, aux = 2;

	for(; aux < 1000000; aux = prime_gen(++aux)){
		tmp += aux;
	}

	printf("Result : %Lf\n", tmp);

	return 0;

}


