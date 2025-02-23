// Swaping two numbers without using any extra variable

#include<stdio.h>
void main()
{
    int x = 10;
    int y = 20;

    printf("x: %d, y: %d\n", x,y);

    x = x+y;
    y = x-y;
    x = x-y;
    printf("x:%d, y:%d\n", x,y);
}