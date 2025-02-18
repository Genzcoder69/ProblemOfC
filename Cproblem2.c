//  reverse digit of 5 digit numbers

#include<stdio.h>
void main()
{
    int a,n,b;
    long int revnum = 0;

    printf("Enter 5 digit numbers:");
    scanf("%d", &n);

    a = n %10;
    n = n/10;
    revnum = revnum + a*10000l;

    a = n %10;
    n = n/10;
    revnum = revnum + a*1000;

    a = n %10;
    n = n/10;
    revnum = revnum + a*100;

    a = n %10;
    n = n/10;
    revnum = revnum + a*10;

    a = n %10;
    revnum = revnum + a;
    printf("The reversed number is %d", revnum);
}