//  print 1 to n number

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of N:>>");
    scanf("%d", &n);
    for( int i =1; i<=n; i++)
    {
        printf("\n%d", i);
    }
}