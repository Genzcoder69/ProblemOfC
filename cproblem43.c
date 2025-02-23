// pattern 5

#include<stdio.h>
void main()
{
    for ( int i=1; i<=10; i++)
    {
        for ( int j=10; j>=i; j--)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
}