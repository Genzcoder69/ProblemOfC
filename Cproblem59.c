//  pattern 21

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the Number:>>");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d", j*j);
        }
        printf("\n");
    }
}