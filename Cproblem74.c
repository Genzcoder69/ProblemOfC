// Rhombus pattern

#include<stdio.h>
void main()
{
    int i,c,s,n,num;
    printf("Enter maximum number:>>");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        for(s=num-i; s>=1; s--)
        printf(" ");
        printf("*", i);

        for(s=i*2; s>1; s--)
        printf(" ");
        printf("*", i);
        printf("\n");
    }

    for(i=1, n=num-1; i<num; i++,n--)
    {
        for(s=i; s>=1; s--)
        printf(" ");
        printf("*",n);

        for(s=n*2; s>1; s--)
        printf(" ");
        printf("*",n);
        printf("\n");
    }
}