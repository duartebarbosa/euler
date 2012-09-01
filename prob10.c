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


/*

// quick version

#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define MILLION 2000000
 
int main( int argc, char* argv[] ) {
	long long unsigned sum;
	int nums[MILLION], i, j;
	sum = 0;
 
	for( i = 0; i < MILLION; i++ )
		nums[i] = 1;
 
	printf("Array complete.\n");
 
	// now we transform the multiples of n into 0, so they don't interfere
	// in the sum:
 
	for( i = 2; i < MILLION; i++ ) {
		if(nums[i]) {
			for( j = i*2; j < MILLION; j += i) {
				nums[j] = 0;
			}
		}	
	}
 
	printf("Removal of compose numbers complete.\n");
 
	for( i = 2; i < MILLION; i++ ) {
		if(nums[i]) {
			sum += i;
			//printf("Summing: %i\n",i);
		}
	}
 
	printf("%llu\n",sum);
 
	return 0;
}

*/
