#include <stdio.h>
#include <stdlib.h>

int main () {
	float product,total,wSal;
	int day,no,amount;
	
	printf("How much sold in a day: \n");
	scanf("%i", &amount);
	printf("Enter the product number: \n");
	scanf("%i", no);
	
	switch (no) {
		case 1:
			product = 2.98;
			total = (float) product * amount;
			wSal = total * 7;
			printf("Product's price: %fTL\n", product);
			printf("Earning: %f\n", total);
			printf("Salary/week: %f\n", wSal);
			break;
		case 2:
			product = 4.5;
			total = (float) product * amount;
			wSal = total * 7;
			printf("Product's price: %fTL\n", product);
			printf("Earning: %f\n", total);
			printf("Salary/week: %f\n", wSal);
			break;
		case 3:
			product = 9.98;
			total = (float) product * amount;
			wSal = total * 7;
			printf("Product's price: %fTL\n", product);
			printf("Earning: %f\n", total);
			printf("Salary/week: %f\n", wSal);
			break;
		case 4:
			product = 4.49;
			total = (float) product * amount;
			wSal = total * 7;
			printf("Product's price: %fTL\n", product);
			printf("Earning: %f\n", total);
			printf("Salary/week: %f\n", wSal);
			break;
		case 5:
			product = 6.87;
			total = (float) product * amount;
			wSal = total * 7;
			printf("Product's price: %fTL\n", product);
			printf("Earning: %f\n", total);
			printf("Salary/week: %f\n", wSal);
			break;
		default:
			printf("No such product found!\n");
			break;
	}
}
