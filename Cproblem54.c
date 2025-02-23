// pattern 16
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the Number:>>");
    scanf("%d", &n);

    for(int i=1; i<=5; i++)
    {
        for(int k=1; k<=n-i; k++)
        {
            printf(" ");
        }

        for(int j=1; j<=i; j++)
        {
            printf(" %d", i);
        }
        printf("\n");
    }
}