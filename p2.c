#include <stdio.h>

int main()
{
 int Num,a=1,i;
 scanf("%d",&Num);
 if(Num<=20)
 {
 
 for(i=1;i<=Num;i++)
 {
    a=a*i;
 }
 printf("%d",a);
}
    return 0;
}
