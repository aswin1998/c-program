#include <stdio.h>
#include <conio.h>
void main()
{
    char a[100]="hello";
    int b,i;
    printf("enter the count");
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        printf("%s",a);
    }
    getch();
}
