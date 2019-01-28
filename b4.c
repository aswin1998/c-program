#include <stdio.h>

void main()
{
    char a;
    printf("enter the letter");
    scanf("%c",&a);
    if((a>='a' && a<='z')||(a>='A' && a<='Z'))
    {
        printf("Alphabet");
    }
    else 
    {
        printf("no");
    }
    getch();
}
