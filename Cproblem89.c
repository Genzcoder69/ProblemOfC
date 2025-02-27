// count number of positive,negative and zero element present in an array 

#include<stdio.h>
void main()
{
    int n,pos=0,neg=0,zero=0,arr[10];
    printf("How many numbers:>>");
    scanf("%d", &n);
    printf("\nEnter %d integer elements\n",n);
    for(int i=0; i<n; i++)
    {
        printf("\n");
        scanf("%d", &arr[i]);
        if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    printf("\nPositive elements=%d\n", pos);
    printf("\nNegative elements=%d\n", neg);
    printf("\nZero elements=%d\n", zero);
}