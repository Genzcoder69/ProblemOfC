//  number is prime or not 

#include<stdio.h>
void main()
{
    int i,num,isPrime=0;
    printf("Enter the number:");
    scanf("%d", &num);

    for(i=2; i<=num/2; i++)
    {
        if( num % i == 0)
        {
            isPrime++;
            break;
        }
    }

    if(isPrime==0)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
}