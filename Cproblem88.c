//  Swapping of two arrays 
#include<stdio.h>
void main()
{
    int a[5],b[5],c[5];
    printf("Enter first array:>>");
    for(int i=0; i<5; i++)
    scanf("%d", &a[i]);

    printf("Enter second array:>>");
    for(int i=0; i<5; i++)
    scanf("%d", &b[i]);

    for(int i=0; i<5; i++)
    {
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
    }
    printf("\n\nArrays after swapping");
    printf("\nFirst array>>");
    for(int i=0; i<5; i++)
    {
        printf("%d", a[i]);
    }
    printf("\nsecond array");
    for(int i=0; i<5; i++)
    {
        printf("%d", b[i]);
    }
}