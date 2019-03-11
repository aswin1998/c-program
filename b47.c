#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
int b[10],n,i,l,s;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&b[i]);
}
l=s=b[0];
for(i=1;i<n;i++)
{
  if(b[i]>l)
  {
    l=b[i];
  }
  if(b[i]<s)
  {
    s=b[i];
  }
}
printf("%d\t%d",s,l);


     return 0;
}
