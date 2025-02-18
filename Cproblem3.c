// find the area of the triangle 

#include<stdio.h>
#include<math.h>

void main()
{
    float a,b,c,sp,area;

    printf("Enter sides of triangle:");
    scanf("%f%f%f", &a,&b,&c);

    sp = (a+b+c)/2;
    area = sqrt(sp*(sp-a)* (sp-b)* (sp-c));
    printf("Area of triangle = %f\n", area);

}