#include <stdio.h>


void side( int );


int main()
{
    int i;
    int number;
    
    for(i=0; i<3; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        
        side(number);      
    }

    return 0;
}


void side(int x)
{
    int i, j;
    
    for(i=0; i<x; i++) {
        for(j=0; j<x; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");
}
