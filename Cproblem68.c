// pattern 30
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of N:>>");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("* ");
        }
        for(int k=1; k<2*(n-i); k++)
        {
            printf("  ");
        }
        for(int j=1; j<=i; j++)
        {
            if(i==n && j==n);
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}