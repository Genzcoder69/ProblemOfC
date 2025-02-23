// pattern 6

#include<stdio.h>
void main()
{
    for(int i=10; i>=1; i--)
    {
        for( int j=10; j>=i; j--)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
}