#include <stdio.h>
#include <conio.h>
void main()
{
    int a[50],b=3,i,c=0;
    printf("enter the number");
    for(i=0;i<b;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
    if(c<a[i])
    {
    c=a[i];
    }
    }
    printf("%d",c);
    getch();
}
