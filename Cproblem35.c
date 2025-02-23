// HCF and LCM of two numbers

#include<stdio.h>
void main()
{
    int a,b,s,i,hcf,lcm;
    printf("Enter two Numbers:>>");
    scanf("%d %d", &a,&b);

    if( a < b)
        s=a;
    else
        s=b;

    for( i = 1; i<=s; i++)
    {
        if (( a % i == 0) && ( b % i == 0))
        {
            hcf = i;
        }
    }
    printf("\n The HCF of given numbers is = %d", hcf);
    lcm = (a*b) / hcf;
    printf("\n The LCM of given Numbers is = %d", lcm);
}