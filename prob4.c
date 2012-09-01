#include <stdio.h>

long unsigned int temp = 0;
int flag = 1;


int findpalindrome(long unsigned int i) {

	int array[6], k = 0;
	long unsigned j = i;

	for(; k < 5; k++){
		array [k] = i % 10;
		i /= 10;
	}

	printf("coco: %ld ", j);
	
	if(array[0] == array[5] && array[1] == array[4] && array[2] == array[3]){
		temp = j;
		flag = 0;
	}
	return 0;
}


int main(){

	register unsigned int i = 999, j = 999;

	for(; flag && i > 0; i--, j = 999){
		for(; flag && j > 0; j--){
			findpalindrome(i * j);		
		}
	}

	printf("Result : %ld\n", temp);

	return 0;
}
