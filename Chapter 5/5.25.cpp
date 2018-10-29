#include <stdio.h>


float smallestFloat( float, float, float );



int main()
{
    float a, b, c;
    
    printf("Enter 3 floats separated by spaces: ");
    scanf("%f%f%f", &a, &b, &c);
    printf("The smallest number is = %f\n", smallestFloat(a,b,c));

    return 0;
}


float smallestFloat( float a, float b, float c )
{
    float smallest = a;
    
    if(b < smallest)
        smallest = b;
    if(c < smallest)
        smallest = c;
    
    return smallest;
}

