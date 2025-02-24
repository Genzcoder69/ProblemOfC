// pattern 32

#include <stdio.h>
void main()
{
    int n;
    printf("Enter no. of rows:>>");
    scanf("%d", &n);
    printf("\n*\n");

    for (int r = 1; r <= n; r++)
    {
        printf("*");
        for (int s = 1; s < r; s++)

            printf(" ");
        printf("*\n");
    }
        for (int j = 1; j <= n + 2; j++)
    
        printf("*");
}