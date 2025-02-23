// Even or odd 
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    if( n % 2 == 1 )
    {
        printf("Number is ODD");
    }
    else
    {
        printf("Number is EVEN");
    }
}