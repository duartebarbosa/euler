#include <stdio.h>


int main(){

	register unsigned int i = 2;
	register long int tmp = 0, aux = 0;

	for(; i < 101; i++){
		tmp += (i * i);
		aux += i;
	}
	
	tmp++;
	aux++;
	
	aux = aux * aux;

	printf("Result : %ld\n", aux - tmp);

	return 0;
}
