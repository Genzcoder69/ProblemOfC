// Find sum of odd number of N numbers

#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter Number:>>");
    scanf("%d", &n);

    for( i=1; i<=n; i=i+2)
    {
        sum = sum+i;
    }
    printf("sum = %d", sum);
}