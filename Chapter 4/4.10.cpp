#include <stdio.h>

int main (void) {
	
	int numbers,sum=0;
	unsigned int counter=0;
	float avg;
	
	printf("Enter values (type 9999 to exit):\n");
	
    while (numbers!=9999) {
    	scanf("%i", &numbers);
    	if (numbers!=9999) {
    		sum = sum + numbers;
    		counter++;
		}
		else {
			sum = sum;
		}
	}
	
	avg = (float) sum / counter;
	printf("Average is: %.2f\n", avg);
	
}
