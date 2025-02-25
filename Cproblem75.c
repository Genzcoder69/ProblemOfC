//  floyd's triangle pattern 
#include<stdio.h>
void main()
{
    int range,k=1;
    printf("Enter the range:>>");
    scanf("%d", &range);
    printf("floyd's triangle\n\n");
    for(int i=1; i<=range; i++)
    {
        for(int j=1; j<=i; j++, k++)
            printf(" %d",k);
            printf("\n");
    }
}