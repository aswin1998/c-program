#include <stdio.h>
#include<math.h>

int main()
{
   int N,i,total=0,ab[1000];
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&ab[i]);
   }
   for(i=0;i<N;i++)
{
    total+=ab[i];
}
  printf("%d",total);
   

    return 0;
}
