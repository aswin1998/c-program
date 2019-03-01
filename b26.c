#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  int c,a[100],i,b,j;
   scanf("%d",&c);
 for(i=0;i<c;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<c;i++)
 {
   for(j=i+1;j<c;j++)
   {
     if(a[i]>a[j])
  b=a[i];
  a[i]=a[j];
  a[j]=b;
  
   }
 }
 for(i=0;i<c;i++)
{
  printf("%d\t",a[i]);
}
     return 0;
}
