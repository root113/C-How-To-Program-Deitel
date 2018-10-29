#include <stdio.h>

int main (void) {
	int accNo1=5000,accNo2=3000,accNo3=7500,info;
	
	printf("Enter a number (1-3) to get the Client's info:\n");
	scanf("%i", &info);
	
	switch (info) {
		case 1:
			printf("1st Client's credit limit before crisis: 5000$\n Now: 2500$\n Owe to bank: 2500$\n");
			break;
		case 2:
			printf("2nd Client's credit limit before crisis: 3000$\n Now: 1500$\n Owe to bank: 1500$\n");
			break;
		case 3:
			printf("2nd Client's credit limit before crisis: 7500$\n Now: 3750$\n Owe to bank: 3750$\n");
			break;
	}
}
