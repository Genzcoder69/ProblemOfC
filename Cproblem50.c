// pattern 12

#include<stdio.h>
void main()
{
    for( int i=5; i>=1; i--)
    {
        for( int j=i; j>=1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}