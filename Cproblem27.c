//  operator as case in switch case 
#include<stdio.h>
void main()
{
    float a,b,result;
    char operator;
    printf("Enter the value of A:");
    scanf("%f", &a);
    printf("Enter the value of B:");
    scanf("%f", &b);
    printf("Operator:");
    fflush(stdin);
    scanf("%c", &operator);

    switch (operator)
    {
    case '+':
        result = a+b;
        break;
    
    case '-':
        result = a-b;
        break;
    case '*':
        result = a*b;
        break;
    case '/':
        result = a/b;
        break;
    default:
        printf("Error");
        break;
    }

    printf("RESULT: %f", result);
}