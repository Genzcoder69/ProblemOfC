// pattern 26

#include<stdio.h>
void main()
{
    char ch='A'-1;
    for(int i=5; i>=1; i--)
    {
        for(int j=1; j<i; j++)
        {
            printf(" ");
        }
        for(int k=5; k>=i; k--)
        {
            printf("%5c", ch+k);
        }
        printf("\n");
    }

    for(int c=65; c<=122; c++)
    {
        printf("%c", c);
        printf(" ");
    }
}