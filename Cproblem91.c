// Delete an element an array from Array 

#include<stdio.h>
void main()
{
    int arr[10],delete,i,j,n;
    printf("How many elements:>>");
    scanf("%d", &n);
    printf("\nEnter %d elements\n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter number for delete:");
    scanf("%d", &delete);

    for(int i=0; i<n; i++)
    {
        if(arr[i]==delete)break;
    }
    for(j=i; j<n; j++)
    {
        arr[j]=arr[j+1];
    }
    n--;
    printf("\nAfter deletion\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
}