#include <stdio.h>

int main()
{
    int n,a=0;
   scanf("%d",&n);
   while(n)
   {
       n=n/10;
       a++;
}
printf("%d",a);


    return 0;
}
