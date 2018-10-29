#include <stdio.h>

int main (void) {
	
	int i,sum;
	
	for (i=3; i<=15; i++) {
		if (i%2!=0) sum = sum * i;
	}
	
	printf("Sum is: %i\n", sum);
}
