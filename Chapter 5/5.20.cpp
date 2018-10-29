#include <stdio.h>


int fillCharacter( int, char );


int main()
{
    fillCharacter(5, '#'); 
    return 0;
}


int fillCharacter(int a, char c)
{
    int i, j;
    
    for(i=0; i<a; i++) {
        for(j=0; j<a; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
    
    printf("\n");
}
