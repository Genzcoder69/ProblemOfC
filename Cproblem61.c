// pattern 23

#include<stdio.h>
void main()
{
    char ch='a'-1;

    for(int i=1; i<=5; i++)
    {
        for(int k=1; k<=5-i; k++)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            printf("%c", ch+j);
        }
        printf("\n");
    }
}