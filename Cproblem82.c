// find sum of array 

#include<stdio.h>
void main()
{
    int num[10],i,sum=0;
    printf("Enter the 10 number: \n");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &num[i]);
        sum+=num[i];
    }
    printf("sum=%d", sum);
}