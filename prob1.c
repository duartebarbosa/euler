#include <stdio.h>

int main(){

	int i = 0, temp = 0;

	for(; i < 1000; i++){
		if( !( i % 3) || !( i % 5) )
			temp += i;

	}

	printf("Result : %d\n", temp);

	return 0;
}
