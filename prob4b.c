#include <stdio.h>

int findpalindrome(long unsigned int orig) {

	unsigned long reversed = 0, n = orig;

	for(;n > 0; n/=10)
		reversed = reversed * 10 + n % 10;

	return orig == reversed;

}


int main(){

	register unsigned int i = 999, j = 999;
	long unsigned int temp = 0, aux = 0;
	
	for(; i > 0; i--, j = 999){
		for(; j > 0; j--){
			temp = i * j;
			if(aux < temp && findpalindrome(temp)) {aux = temp; break;}
		}
	}

	printf("Result : %ld\n", aux);

	return 0;
}
