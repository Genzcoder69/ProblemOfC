// pattern 27

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of N:>>");
    scanf("%d",&n);
    for(int i=0; i<=n; i++)
    {
        for(int k=n; k>=i; k--)
        {
            printf("  ");
        }
        for(int j=i; j>=0; j--)
        {
            printf(" %d",j);
        }
        for(int j=1; j<=i; j++)
        {
            printf(" %d",j);
        }
        printf("\n");
    }
}