#include <stdio.h>

float calculateCharges(float x, float h);

int main () {
	float c1,c2,c3,sum1,sum2,sum3,total,totalHour;
	
	printf("Enter hours for three customers:\n");
	scanf("%f%f%f", &c1,&c2,&c3);
	
	printf("\n%s%11s%20s\n", "Car", "Hour", "Charge");
	printf("1%13.2f%18.2f\n",c1,calculateCharges(sum1,c1));
	printf("2%13.2f%18.2f\n",c2,calculateCharges(sum2,c2));
	printf("3%13.2f%18.2f\n",c3,calculateCharges(sum3,c3));
	total = (float) calculateCharges(sum1,c1) + calculateCharges(sum2,c2) + calculateCharges(sum3,c3);
	totalHour = (float) c1 + c2 + c3;
	printf("TOTAL%9.2f%18.2f\n",totalHour,total);
}

float calculateCharges(float x, float h) {
    
    float sum;
    
	if (h<=3) {
		x = (float) 2.0;
	}
	else {
		x = (float) 2.0 + ((h-3) * 0.5);
	}
	if (x<=10) {
		sum = x;
	}
	else {
		x = 10.0;
		sum = x;
	}
	
	return sum;
}
