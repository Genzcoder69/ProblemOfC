// pattern 10

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number:>>");
    scanf("%d", &n);

    for(int i=5; i>=1; i--)
    {
        for(int k=1; k<=n-i; k++)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            printf(" %d", j);
        }
        printf("\n");
    }
}