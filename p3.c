#include <stdio.h>

int main()
{
 int Num,t=0,r;
 scanf("%d",&Num);
 
 while(Num)
 {
     r=Num%10;
     t=t*10+r;
     Num=Num/10;
 }
 printf("%d",t);

    return 0;
}
