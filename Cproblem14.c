// maximum number b/w two numbers
#include<stdio.h>
void main()
{
    int a,b,max;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);

    if(a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    printf("Max is %d", max);
}