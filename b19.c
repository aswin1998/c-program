#include <stdio.h>
int main()
{
  int a,fact=1,i=1;
  scanf("%d",&a);
  while(i<=a)
  {
      fact=fact*i;
      i++;
  }
  printf("%d",fact);
   return 0;
}
