// Simple matrix in array

#include<stdio.h>
void main()
{
    int a[3][3];
    int i,j;
    printf("Enter value:>>");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n The matrix is ::: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d    ", a[i][j]);
        }
        printf("\n");
    }
}