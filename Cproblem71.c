// pattern 33

#include<stdio.h>
void main()
{
    int n,k=1;
    char ch='A';
    printf("\n\nEnter the number of Rows:>>");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++)
    {
        if((i%2)==0)
        {
            for(int j=1; j<=i; j++)
            {
                printf("%d", k);
                k++;
            }
        }

        else 
        {
            for(int j=1; j<=i; j++)
            {
                printf("%c", ch);
                ch++;
            }
        }
        printf("\n");
    }
}