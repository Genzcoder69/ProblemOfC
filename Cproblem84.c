// Find maximum number from array 
#include<stdio.h>
void main()
{
    int i,n,max=0,num[10];
    printf("How many elements?\n");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    printf("maximum=%d", max);
}