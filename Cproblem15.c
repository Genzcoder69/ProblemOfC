// finding  perfect square

#include<stdio.h>
#include<math.h>

void main()
{
    int a,n;
    printf("Enter the number:");
    scanf("%d", &n);
    a=sqrt(n);

    if( n-(a*a)==0)
    {
        printf("It is perfect square.");
    }
    else
    {
        printf("It is not a perfect square.");
    }
}