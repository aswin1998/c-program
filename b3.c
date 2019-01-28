#include <stdio.h>

void main()
{
    char a;
    printf("enter the letter");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
        printf("vowel");
    }
    else
    {
        printf("consonent");
    }
    getch();
}
