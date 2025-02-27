// Insert an element in an array

#include<stdio.h>
void main()
{
    int n,insert,position,arr[10];
    printf("How many elements:>>");
    scanf("%d", &n);
    printf("\nEnter %d elements: \n", n);
    for(int i=0; i<n; i++)
    {
        printf("\n");
        scanf("%d", &arr[i]);
    }
    printf("\nEnter number to be inserted:");
    scanf("%d", &insert);
    printf("\nEnter position:");
    scanf("%d", &position);
    
    for(int i=n; i>position; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[position]=insert;
    n++;
    printf("\nArray after insertion\n");
    for(int i=0; i<n; i++)
    {
        printf("\n%d\n", arr[i]);
    }
}