#include <stdio.h>

void main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a==0)
    {
        printf("zero");
    }
    else if(a<0)
    {
        printf("negative");
    }
    else if(a>0)
    {
        printf("positive");
    }
    getch();
}
