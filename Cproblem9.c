//  convert binary into decimal

#include<stdio.h>
void main()
{
    int N = 10110;
    int a=1;
    int rem=0;

    while( N != 0)
    {
        rem = rem + ( N % 10) * a;
        N = N/10;
        a = a*2;
    }
    printf("%d", rem);
}