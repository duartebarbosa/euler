#include <stdio.h>


int prime(int i){

	int tmp = 2;
	for(; tmp != i; tmp += 2){
		if(i % tmp)
			return 0;
	}
	
	return 1;
}


int main(){

	register unsigned int i = 3, tmp = 0;

	for(; tmp != 10001; i += 2 ){
		printf("coco : %d\n", i );

		if(prime(i))
			tmp++;

	}

	printf("Result : %d\n", i);

	return 0;
}
