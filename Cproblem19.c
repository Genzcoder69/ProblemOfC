//  check vowel or not

#include<stdio.h>
void main()
{
    char c;
    printf("Enter the character:");
    scanf("%c", &c);

    if(c=='a'|| c=='i'|| c=='o'|| c=='u' || c=='e'|| c=='A' || c=='I'|| c=='O'|| c=='U'|| c=='E')
    {
        printf("Number is vowel.");
    }
    else
    {
        printf("Number is consonant.");
    }
}