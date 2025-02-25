// sum of series 1 + 1/2 + 1/3 +.......n

#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter any no.>>");
    scanf("%d", &n);
    printf("1");
    for(int i=2; i<=n-1; i++)
        printf(" 1/%d +", i);
    for(int i=1; i<=n; i++)
    sum=sum+i;
        printf(" 1/%d", n);
    printf("\nSum=1/%d", sum+1/n);
}