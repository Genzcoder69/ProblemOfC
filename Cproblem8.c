//  replace all 0 with 1 in a number

#include<stdio.h>
#include<math.h>

void main()
{
    int N = 10200039;
    int rem = 0;
    int i = 0;

    while( N != 0)
    {
        if( N % 10 == 0)
        rem = rem + 1 * pow(10,i);

        else
        rem = rem + ( N % 10) * pow( 10, i);
        N = N/10;
        i++;
    }
    printf("%d", rem);
}