#include <stdio.h>


int line( int, char );
int square( int, char );
int triangle( int, char );
int diamond( int, char );


int main()
{
    line(5, '#');
    square(5, '#'); 
    triangle(5, '#');
    diamond(5, '#');

    return 0;
}


int line(int a, char c)
{
    int i;
    
    for(i=0; i<a; i++) {
        printf("%c", c);;
    }
    
    printf("\n\n");
}



int square(int a, char c)
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


int triangle(int a, char c)
{
    int i, j;
    
    for(i=0; i<a; i++) {
        for(j=0; j<a-i-1; j++) {
            printf(" ");
        }
        for(j=0; j<i+1+i; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
    
    printf("\n");
}


int diamond(int a, char c)
{
    int i, j;
    
    for(i=0; i<a; i++) {
        for(j=0; j<a-i-1; j++) {
            printf(" ");
        }
        for(j=0; j<i+1+i; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
    
    for(i=a-1; i>=0; i--) {
        for(j=0; j<a-i-1; j++) {
            printf(" ");
        }
        for(j=0; j<i+1+i; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
    
    printf("\n");
}

