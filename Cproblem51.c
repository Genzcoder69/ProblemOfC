// pattern 13

#include<stdio.h>
void main()
{
    for( int i=10; i>=1; i--)
    {
        for( int k=1; k<i; k++)
        {
            printf(" ");
        }
        for( int j=i; j<=5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}