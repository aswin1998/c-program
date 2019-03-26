#include<stdio.h>
#include<math.h>
#define piu 3.14
int main()
{
   int num;
   float res;
   scanf("%d",&num);
   res=sin(num*piu/180);
   printf("%0.1f",res);
   return 0;
}
