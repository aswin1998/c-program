#include <stdio.h>

int main()
{
       int num,k;
   scanf("%d %d",&num,&k);
   int M[num],i,c,j;
   if((num>=1&&num<=100000)&&(k>=1&&k<=100000))
   {
   for(i=0;i<num;i++)
   {
       
       scanf("%d",&M[i]);
   }
   
      for(j=1;j<=k;j++)
 {
    c=M[num-1];
     for(i=num-1;i>0;i--)
   {
     
     M[i]=M[i-1];
     }
  
   M[0]=c;
   }
  
    for(i=0;i<num;i++)
   {
       
       printf("%d ",M[i]);
   }
   
   }


    return 0;
}
