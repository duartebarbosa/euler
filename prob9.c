#include <stdio.h>

int istriple(int a, int b, int c){

	if(a*a + b*b == c*c)
		return a + b + c == 1000;

	return 0;
}

int main(){

	int a = 1, b = 1, c = 1;

	for(;;c++, b = 1){
		for(; b < c; b++, a = 1)
			for(; a < b; a++)
				if(istriple(a, b, c)){
					printf("Result : %d\n", a * b * c);
					return 0;
				}
	}

	return 1;
}
