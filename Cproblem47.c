// pattern 9

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number:>>");
    scanf("%d", &n);

    for(int i=n; i>=1; i--)
    {
        for(int k=1; k<=n-i; k++)
        {
            printf(" ");
        }
        
        for(int j=i; j>=1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}