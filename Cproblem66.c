// pattern 28
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of N:>>");
    scanf("%d", &n);

    for(int i=1; i<=5; i++)
    {
        for(int k=1; k<=n-i; k++)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }

    for(int i=n-1; i>=1; i--)
    {
        for(int k=1; k<=n-i; k++)
        {
            printf(" ");
        }
        for(int j=i; j>=1; j--)
        {
            printf(" *");
        }
        printf("\n");
    }
}