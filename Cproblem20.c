//  check alphanumeric character

#include<stdio.h>
#include<ctype.h>

void main()
{
    char c;
    printf("Enter the character:");
    scanf("%c", &c);

    if( isalnum(c))
    {
        printf("Alphanumeric character.");
    }
    else
    {
        printf("Not an Alphanumeric character.");
    }
}