// Reverse an Array
#include<stdio.h>
#define MAX 50
void main()
{
    int arr[MAX],n,reverse;
    printf("Enter size of array:>>");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<n/2; i++)
    {
        reverse=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=reverse;
    }
    printf("\nArray after reversing:  \n");
    for(int i=0; i<n; i++)
    {
        printf("%d  ", arr[i]);
    }
}