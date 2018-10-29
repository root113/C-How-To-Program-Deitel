#include <stdio.h>

int multiple(int x, int y);

int main () {
	int n1,n2;
	
	printf("Type the numbers:\n");
	scanf("%i%i",&n1,&n2);
	
	printf("(1 for yes 0 for no) %i\n",multiple(n1,n2));
}

int multiple (int x, int y) {
	int sum;
	
	if (y%x==0) {
		sum = 1;
	}
	else {
		sum = 0;
	}
	
	return sum;
}
