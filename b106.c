#include <stdio.h>
#include<math.h>

int main()
{
 
    int Num,K,i,l=0,a[100];
   scanf("%d %d",&Num,&K);
   
   for(i=0;i<Num;i++)
   {
       scanf("%d",&a[i]);
    }
  for(i=0;i<Num;i++)
   {
if(a[i]%2!=0)
  {
    l++;
      
      if(l==K)
       printf("%d",a[i]);
 }
 }
return 0;
}
