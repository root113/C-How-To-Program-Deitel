#include <stdio.h>

int main () {
	
	int determinant,numbers,sum=0;
	unsigned int counter=1;
	
	printf("Enter the determinant number:\n");
	scanf("%i", &determinant);
	printf("Enter numbers:\n");
	
	while (counter<=determinant) {
		scanf("%i", &numbers);
		sum = sum + numbers;
		counter++;
	}
	
	sum = sum + determinant;
	printf("Sum is: %i\n", sum);
	
}
