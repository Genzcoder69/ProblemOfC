// Find how many times a number present in an array

#include<stdio.h>
#define MAX 100
void main()
{
    int n,item,arr[MAX],a[MAX],count=0;
    printf("Enter the number:>> ");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter elements you wants to search: ");
    scanf("%d", &item);
    for(int i=0; i<n; i++)
    {
        if(arr[i]==item)
        {
            a[count]=i+1;
            count++;
        }
    }

    if(count!=0)
    {
        printf("\nItem found at  ");
        for(int i=0; i<count; i++)
        {
            printf("%d", a[i]);
        }
    }
    else
    {
        printf("\nItem not found");
    }
}