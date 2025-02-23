// pattern 11

#include<stdio.h>
void main()
{
    for(int i=1; i<=10; i++)
    {
        for( int k=1; k<=10-i; k++)
        {
            printf(" ");
        }

        for( int j=i; j>=1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}