// Sum of 1+2+....+n series

#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter the Number:>>");
    scanf("%d", &n);
    sum=(n * (n+1))/2;
    printf("Sum of the series: ");
    for(int i=1; i<=n; i++)
    {
        if( i!=n)
            printf("%d + ", i);
        else
            printf("%d = %d ", i,sum);
    }
}