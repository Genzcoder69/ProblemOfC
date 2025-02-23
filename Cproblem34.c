//  multiplication table of number

#include<stdio.h>
void main()
{
    int i,num,result;
    printf("Enter the number:>>");
    scanf("%d", &num);

    for( i = 1; i<=10; i++)
    {
        result = num*i;
        printf("%d*%d= %d\n", num,i,result);
    }
}