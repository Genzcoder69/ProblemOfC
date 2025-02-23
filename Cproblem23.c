//  calculator using else if 

#include<stdio.h>
void main()
{
    char operator;
    float a,b,result;

    printf("Enter value of A::");
    scanf("%f", &a);
    printf("Enter value of B::");
    scanf("%f", &b);
    printf("operator:");
    fflush(stdin);
    scanf("%c", &operator);

    if( operator == '+')
    {
        result = a+b;
        printf("Result:: %.2f", result);
    }
    else if( operator == '-')
    {
        result = a-b;
        printf("Result:: %.2f", result);
    }
    else if( operator == '*')
    {
        result=a*b;
        printf("Result:: %.2f", result);
    }
    else if( operator == '/')
    {
        result=a/b;
        printf("Result:: %.2f", result);
    }
    else
    {
        printf("Invalid choice");
    }
}