//  factorial of a number
#include<stdio.h>
void main()
{
    int i,n;
    unsigned long long int ans = 1;
    printf("Enter a number:");
    scanf("%d", &n);

    for( i = 1; i<=n; i++)
    {
        ans = ans * i;
    }
    printf("Factorial of %d is %lld\n", n,ans);
}