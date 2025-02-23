//  Largest value using Nested if else statement 
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the number:");
    scanf("%d%d%d", &a,&b,&c);
    
    if( a > b && a > c)
    {
        printf("A is greater than all");
    }
    if( b > a && b > c)
    {
        printf("B is greater than all");
    }
    if( c > a && c > b)
    {
        printf("C is greater than all");
    }
}