#include <stdio.h>
int main()
{
  
  int m,K,i,c;
  int a[10];
  scanf("%d%d",&m,&K);
  for(i=0;i<m;i++)
  {
      scanf("%d",&a[i]);
  }
  count=0;
  for(i=0;i<m;i++)
  {
      if(a[i]==K)
      {
          c++;
      }
  }
  printf("%d",c);
	
return 0;
}
