#include <stdio.h>

int main (void) {
	
	unsigned long long factorial=1;
	int i;
	
	for (i=1; i<=10; ++i) {
		factorial *= i;
		printf("%li! = %li\n", i,factorial);
	}
	
}
