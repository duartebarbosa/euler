#include <stdio.h>

int divisible(int number){

	register int i = 11;

	for(; i < 21; i++)
		if(number % i)
			return 0;

	return 1;
}


int main(){

	register unsigned int i = 21;

	for(;; i++){
		printf("coco : %d\n", i );
		if(divisible(i))
			break;
	}

	printf("Result : %d\n", i);

	return 0;
}
