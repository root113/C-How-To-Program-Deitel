#include <stdio.h>
#include <math.h>

int main (void) {
	
	double amount,principal=1000.00,rate=.05;
	int counter;
	unsigned int year;
	
	printf("%4s%21s\n", "Year", "Amount on deposit");
	
	for (counter=1; counter<=11; counter++) {
		for (year=1; year<=10; ++year) {
		    amount = principal * pow(1.0 + rate,year);
		    printf("%4u%21.2f\n", year,amount);
	    }
	    rate += .01;
	    printf("\n");
	    counter++;
	}
	
}
