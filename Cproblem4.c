// find largest number among three numbers

#include<stdio.h>
void main()
{
    int a,b,c;
    
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("Enter the value of c:");
    scanf("%d", &c);
    
    if( a > b && a > c)
    {
        printf("%d", a);
    }
    else if( b > a && b > c)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }
}