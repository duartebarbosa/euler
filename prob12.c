#include <stdio.h>

int retrieveNumberOfFactors(int number){
	int i = 1, result = 0;
	printf("triangle number: %d\n", number);
	for(; i <= number; i++)
		if((number % i) == 0)
			result++;

	return result;
}


int retrieveTriangleNumberByIndex(int index) {
	int i = 2, result = 1;

	if(index <= 0)
		return -1;

	for(; i <= index; i++)
		result += i;

	return result;
}

int prim(int tal){
	int i = 1, summa = 0;

	for(;i<tal;i++){
		if(tal%i==0){
			if((i*i)>tal){
				summa*=2;
				break;
			}
			else if((i*i)==tal){
				summa*=2;
				summa++;
				break;
			}
			else{
				summa++;
			}
		}
	}
	return summa;
}

	
int main() {
	int i = 1, tal=0;
	while(1){
		tal += i;
		if(prim(tal) > 500){
			printf("i:%d, tal:%d\n", i, tal);
			break;
		}
		i++;
	}
}

