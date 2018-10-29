#include <stdio.h>

int even(int x);

int main () {
	int no,num;
	unsigned int counter=1;
	
	printf("How many numbers will be entered:\n");
	scanf("%d",&no);
	printf("Enter number(s):\n");
	
	while (counter<=no) {
		scanf("%d",&num);
		printf("%d (1 for even 0 for odd)\n",even(num));
		counter++;
	}
}

int even(int x) {
	
	int result;
	
	if (x%2==0) {
		result = 1;
	}
	else {
		result = 0;
	}
	
	return result;
}
