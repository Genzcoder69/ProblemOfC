//  find day using switch statement

#include<stdio.h>
void main()
{
    int day;
    printf("Enter day number:");
    scanf("%d", &day);

    switch ( day )
    {
        case 1:
        {
            printf("MONDAY\n");
            break;
        }
        case 2:
        {
            printf("TUESDAY\n");
            break;
        }
        case 3:
        {
            printf("WEDNESDAY\n");
            break;
        }
        case 4:
        {
            printf("THURSDAY\n");
            break;
        }
        case 5:
        {
            printf("FRIDAY\n");
            break;
        }
        case 6:
        {
            printf("SATURDAY\n");
            break;
        }
        case 7:
        {
            printf("SUNDAY\n");
            break;
        }
        default:
        {
            printf("INVALID DAY\n");
        }
    }
    printf("HAVE A NICE DAY\n");
}