// linear search

#include<stdio.h>
void main()
{
    int arr[50],search,c,n;
    printf("Enter the number of elements in array:>>");
    scanf("%d", &n);
    printf("Enter %d integer\n",n);

    for(c=0; c<n; c++)
    scanf("%d", &arr[c]);
    printf("Enter the number to search\n");
    scanf("%d", &search);
    
    for(c=0; c<n; c++)
    {
        if(arr[c] == search)
        {
            printf("%d is present at location %d.\n", search, c+1);
            break;
        }
    }
    if( c == n)
        printf("%d is not present in array.\n", search);
}