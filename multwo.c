#include <stdio.h>
void main() 
{    

    int a, b, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // calculate the sum
    sum = a * b;      
    
    printf("%d + %d = %d", a, b, sum);
}
