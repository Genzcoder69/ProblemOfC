//  Find perfect right triangle

#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c;
    float x,y,z;
    printf("Enter the values:");
    scanf("%f%f%f", &a,&b,&c);
    x = sqrt((a*a) + (b*b));
    y = sqrt((b*b) + (c*c));
    z = sqrt((c*c) + (a*a));

    if(c==x || a==y || b==z)
    {
        printf("\nRight Triangle");
    }
    else
    {
        printf("\nIt's not a right Triangle");
    }
}