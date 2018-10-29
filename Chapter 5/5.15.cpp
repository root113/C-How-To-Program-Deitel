#include <stdio.h>
#include <math.h>

double hypotenuse(double hyp, double a, double b);

int main () {
	double x,y,h;
	
	printf("Enter two sides for triangle:\n");
	scanf("%lf%lf",&x,&y);
	
	printf("Hypotenuse is: %.2lf",hypotenuse(h,x,y));
}

double hypotenuse(double hyp, double a, double b) {
	
	hyp = sqrt( (a * a) + (b * b));
	return hyp;
}
