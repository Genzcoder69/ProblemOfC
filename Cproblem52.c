// pattern 14

#include<stdio.h>
void main()
{
    for(int i=1; i<=10; i++)
    {
        for( int k=1; k<i; k++)
        {
            printf(" ");
        }
        for( int j=i; j<=10; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}