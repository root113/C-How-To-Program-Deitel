#include <stdio.h>

int integerPower(int x, int y, int result);

int main () {
	int n1,n2,sum;

	printf("Enter base and exponent:\n");  //result always zero
	scanf("%i%i",&n1,&n2);
	
	printf("Sum: %i\n",integerPower(n1,n2,sum));
}

int integerPower(int x, int y, int result) {
	int i,s;
	
	for (i=1; i<=y; i++) {
		s *= x;
	}
	
	result = s;
	return s;
}
