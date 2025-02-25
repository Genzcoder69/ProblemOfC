// odd and even of an array 
#include<stdio.h>
#define MAX 50

void main()
{
    int i,n,arr[MAX];
    printf("Enter size of Array:");
    scanf("%d",&n);
    printf("Enter %d positive elements\n",n);
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n\nEven numbers: ");

    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d  ",arr[i]);
        }
    }
    printf("\nOdd numbers: ");
    for(i=0; i<n; i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d  ",arr[i]);
        }
    }
}