#include <stdio.h>
#include <math.h>

int floor( int );

int main () {
	int i,counter=1;
	float x,y;
	
	printf("How many numbers will be entered:\n");
	scanf("%d",&i);
	printf("Enter numbers:\n");
	
	while (counter<=i) {
		scanf("%f",&x);
		y = floor( x );
		printf("\n%s%13s\n", "Number", "Rounded");
		printf("%.2f%12.2f\n",x,y);
		puts("");
		counter++;
	}
}
