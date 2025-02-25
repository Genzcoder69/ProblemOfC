// sum of power series

#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter the number:>>");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        sum=sum+(i*i);
    }
    printf("sum=%d", sum);
}