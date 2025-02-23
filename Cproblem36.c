//  Find LCM and HCF of given numbers

#include<stdio.h>
void main()
{
    int a,b,g,i,lcm,hcf;
    printf("Enter the Number:>>");
    scanf("%d%d", &a,&b);

    if( a > b)
        g=a;
    else
        g=b;

        for ( i=g; i<=(a*b); i++)
        {
            if(( i % a == 0) && ( i % b == 0))
            {
                lcm = 1;
                break;
            }
        }
        printf("\n The LCM of given numbers is:>> %d", lcm);
        hcf = (a*b)/lcm;
        printf("\n The HCF of given numbers is:>> %d", hcf);
}