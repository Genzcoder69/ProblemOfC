// sum of digits of a 5 digit number

#include<stdio.h>
void main()
{
    int a,n,num;
    int sum=0;

    printf("Enter a five digit number:");
    scanf("%d", &num);

    a = num % 10;
    n = num/10;
    sum = sum + a;
    
    a = n%10;
    n = n/10;
    sum = sum + a;

    a = n%10;
    n = n/10;
    sum = sum + a;

    a = n%10;
    n = n/10;
    sum = sum + a;

    a = n%10;
    sum = sum + a;

    printf("The sum of 5 digits of %d is %d\n", num, sum);

}