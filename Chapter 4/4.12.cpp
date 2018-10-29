#include <stdio.h>

int main (void) {
	
	int i,sum;
	
	for (i=2; i<=30; i++) {
		if (i%2==0) sum = sum + i;
	}
	
	sum = sum - 1;
	printf("The addition between all even numbers till thirty is: %i\n", sum);
	
}
