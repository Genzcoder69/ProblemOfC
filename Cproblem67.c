//  pattern 29

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of N:>>");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==1 || j==1 || i==n || j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}