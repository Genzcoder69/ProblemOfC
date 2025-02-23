// Find character type without inbuilt function 

#include<stdio.h>
void main()
{
    char c;
    printf("Enter the character:");
    scanf("%c", &c);
    
    if( c >= 48 && c <= 57)
    {
        printf("Number.");
    }
    else if( c >= 65 && c <= 90)
    {
        printf("Uppercase character.");
    }
    else if( c >= 97 && c <= 122)
    {
        printf("Lowercase character.");
    }
    else
    {
        printf("Other symbol.");
    }
}