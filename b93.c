#include <stdio.h>
#include<math.h>

int main()
{
   int N,Ka,a[1000],i,x;
   scanf("%d %d",&N,&Ka);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   x=Ka-1;
             printf("%d",a[x]);
return 0;
}
