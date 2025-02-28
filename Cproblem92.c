// Ascending and descending order in Array

#include<stdio.h>
void main()
{
    int arr[10],change[10],i,j,temp;
    for(i=0; i<10; i++)
    {
        printf("Enter value of %d elements:", i+1);
        scanf("%d" , &arr[i]);
        change[i]=arr[i];
    }
    for(i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nOriginal\tAscending\tDescending");
    for(i=0, j=9; i<10; i++, j--)
    {
        printf("\n%d\t\t%d\t\t%d", change[i],arr[i],arr[j]);
    }
    
}