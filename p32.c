#include <stdio.h>

int main()
{
int m,K;
   scanf("%d",&m);
   scanf("%d",&K);
   int a[m],i,c=0;
   for(i=0;i<m;i++)
   {
       scanf("%d",&a[i]);
   }
for(i=0;i<m;i++)
   {
  if(a[i]==K)
      {
          c++;
    }
}
if(c!=0)
printf("Yes");
else
printf("No");
}
