#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  int m,a[100],i,b,j;
   scanf("%d",&m);
 for(i=0;i<m;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<m;i++)
 {
   for(j=i+1;j<m;j++)
   {
     if(a[i]>a[j])
  b=a[i];
  a[i]=a[j];
  a[j]=b;
  
   }
 }
 for(i=0;i<m;i++)
{
  printf("%d\t",a[i]);
}
     return 0;
}
