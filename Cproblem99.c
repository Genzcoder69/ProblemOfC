// Transpose of matrix 

#include<stdio.h>
void main()
{
    int n,a[10][10];
    printf("Enter number:>>");
    scanf("%d", &n);
    printf("Enter %d*%d matrix\n", n,n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d\t", &a[i][j]);
        }
    }
    printf("Transpose matrix:::\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}