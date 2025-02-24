// Pascal triangle pattern 

#include<stdio.h>
long calc(int);

void main()
{
    int row,pas;
    printf("Enter No. of rows in pascal triangle:>>");
    scanf("%d", &row);

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<=(row-i-1); j++)
            printf(" ");

        for(int j=0; j<=i; j++)
        {
            pas=calc(i)/(calc(j)*calc(i-j));
            printf("%ld ", pas);   // take single space
        }
        printf("\n");
    }
}

long calc(int num)
{
    int x;
    long res=1;
    for(x=1; x<=num; x++)
        res=res*x;
        return(res);
}