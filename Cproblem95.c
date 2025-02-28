// selection sort

#include<stdio.h>
void main()
{
    int arr[100],n,c,d,position,swap;
    printf("Enter number of elements:>>");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);
    for(c=0; c<n; c++)
    scanf("%d", &arr[c]);

    for(c=0; c<(n-1); c++)
    {
        position=c;
        for(d=c+1; d<n; d++)
        {
            if(arr[position] > arr[d])
            position=d;
        }
        if(position!=c)
        {
            swap = arr[c];
            arr[c]= arr[position];
            arr[position]=swap;
        }
    }
    printf("Sorted list in ascending order:\n");

    for(c=0; c<n; c++)
    {
        printf("%d\n", arr[c]);
    }
}