// pattern 4

#include<stdio.h>
void main()
{
    for ( int i=10; i>=1; i--)
    {
        for ( int j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}