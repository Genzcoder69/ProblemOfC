//  Given character is vowel or not using switch case 

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character:>>");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a':
        case 'i':
        case 'o':
        case 'u':
        case 'e':
        case 'A':
        case 'I':
        case 'O':
        case 'U':
        case 'E':

        printf("\n %c is vowel.", ch);
        break;
        default :
        printf("\n %c is not a vowel.", ch);
        break;
    }
}