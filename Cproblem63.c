// pattern 25

#include<stdio.h>
void main()
{
    char ch='A'-1;
    for(int i=5; i>=1; i--)
    {
        for(int j=i; j>=1; j--)
        {
            printf("%c",ch+j);
        }
        printf("\n");
    }
}