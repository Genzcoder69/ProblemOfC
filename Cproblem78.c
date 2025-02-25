// sum of even series 
#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter any No.>>");
    scanf("%d", &n);
    for(int i=1; i<n; i=i+2)
    {
        printf("%d+", i);
        sum=sum+i;
    }
    printf("%d",n);
    printf("\nSum=%d", sum+n);
}