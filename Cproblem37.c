// break statement 

#include<stdio.h>
void main()
{
    for( int i = 1; i<=10; i++)
    {
        if( i == 5)
        {
            break;
        }
        printf("%d\t", i);
    }
}