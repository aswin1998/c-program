#include <stdio.h>
#include<math.h>

int main()
{
 
      int Num,K,y,i,j,min,a[100],x;
   scanf("%d %d",&Num,&K);
   for(i=0;i<Num;i++)
   {
       scanf("%d",&a[i]);
       
   }
   x=Num+1-K;
  for(i=0;i<x;i++)
   {
    min=a[0];
       for(j=1;j<Num;j++)
       {
        if(min<a[j])
           {
               
               min=a[j];
               y=j;
            }
        }
        a[y]=0;
    }
  printf("%d\n",min);
 return 0;
}
