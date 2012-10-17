#include <stdio.h>

#define odd_even(x) ((x) & 1)			/* return 1 in odd number, 0 in even number. */
#define MAX(a, b) ((a) < (b) ? (b) : (a))		/* find the maximum a number. */

int count[1000000];

int main() {

	unsigned long x, tmp = 999999, i = 0, result = 0;

	while ((x = tmp) != 0){
		loop:
			if(x == 1){
				tmp--;
				continue;
			}

			if(odd_even(x))
				x = 3 * x + 1; //n += (n<<1) + 1;
			else
				x = x / 2;
		
			count[tmp] += 1;			
			goto loop;
	}

	for(; i < 1000000; i++)
		result = MAX(result, count[i]);

	for(i = 0; i < 1000000; i++)
		printf("%lu: %d\n", i, count[i]);
		
	printf("result: %lu\n", result);

	return 0;
}
