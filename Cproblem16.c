// Convert KM into Meter centimeter or MM

#include<stdio.h>
void main()
{
    int value;
    float convert;
    float km;

    printf("Enter distance in Km:");
    scanf("%f", &km);
    printf("1 for M , 2 for centimeter, 3 for MM:");
    scanf("%d", &value);

    if(value==1)
    {
        convert = km * 1000;
    }
    if(value==2)
    {
        convert = km * 100000;
    }
    if(value==3)
    {
        convert = km * 1000000;
    }
    printf("Answer : %.2f", convert);
}