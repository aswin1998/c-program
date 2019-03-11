#include <stdio.h>

int main(void) {
  int n,i,a=1,b=1,m;
  scanf("%d",&n);
  printf("%d\t%d\t",a,b);
  for(i=2;i<n;i++)
  {
    m=a+b;
    a=b;
    b=m;
    printf("%d\t",m);
    
  }
  return 0;
}
