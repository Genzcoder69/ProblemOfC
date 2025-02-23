// calculate reverse of a number

#include<stdio.h>
void main()
{
    int n,reversed=0;
    printf("Enter the numbers:");
    scanf("%d",&n);

    reversed += (n % 10) * 10000;
    n /= 10;
    reversed += (n % 10) * 1000;
    n /= 10;
    reversed += (n % 10) * 100;
    n /= 10;
    reversed += (n % 10) * 10;
    n /= 10;
    reversed += n;

    printf("Reversed number is: %d\n", reversed);
}