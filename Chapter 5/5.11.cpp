#include <stdio.h>
#include <math.h>

int floor(int);
float roundToInteger(float number);
float roundToTenths(float number);
float roundToHundreths(float number);
float roundToThousands(float number);

int main () {
	int counter=1,i;
	float no;
	
	printf("How many numbers will be entered:\n");
	scanf("%d",&i);
	printf("Enter numbers:\n");
	while (counter<=i) {
		scanf("%f",&no);
		printf("%s%22s%25s%25s\n","Rounded To Integer","Rounded To Tenths","Rounded To Hundreths","Rounded To Thousands");
	    printf("%.4f%23.4f%23.4f%25.4f\n",roundToInteger(no),roundToTenths(no),roundToHundreths(no),roundToThousands(no));
	    puts("");
		counter++;
	}
}

float roundToInteger(float number) {
	float sum;
	sum = floor(number + .5);
	return sum;
}

float roundToTenths(float number) {
	float sum;
	sum = floor(number * 10 + .5) / 10;
	return sum;
}

float roundToHundreths(float number) {
	float sum;
	sum = floor(number * 100 + .5) / 100;
	return sum;
}

float roundToThousands(float number) {
	float sum;
	sum = floor(number * 1000 + .5) / 1000;
	return sum;
}
