// marksheet using if else statement

#include<stdio.h>
void main()
{
    int rollNo;
    char name[100];
    float eng,hin,phy,chem,math,total,percentage;
    
    printf("Enter the rollNo:");
    scanf("%d", &rollNo);
    printf("Enter the name:");
    scanf("%s", &name);
    printf("Enter the eng mark:");
    scanf("%f",&eng);
    printf("Enter the hin marks:");
    scanf("%f", &hin);
    printf("Enter the phy marks:");
    scanf("%f", &phy);
    printf("Enter the chem marks:");
    scanf("%f", &chem);
    printf("Enter the math marks:");
    scanf("%f", &math);

    total = eng+hin+phy+chem+math;
    printf("Total is >>> %f\n", total);
    percentage = total/5;
    printf("Percentage >>> %f\n", percentage);
    
    if( percentage<40)
    {
        printf("\nFail");
    }
    else if( percentage < 50 && percentage > 40)
    {
        printf("\nGrade C");
    }
    else if(percentage < 70 && percentage > 50)
    {
        printf("\nGrade B");
    }
    else if(percentage < 80 && percentage > 70)
    {
        printf("\nGrade A");
    }
    else if(percentage < 100 && percentage > 80)
    {
        printf("\nTopper");
    }
    if( eng<30 ||hin<30 || phy<30 || chem<30 || math<30)
    {
        printf("\nFail");
    }
    else
    {
        printf("\nPass");
    }
}