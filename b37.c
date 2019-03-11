#include <stdio.h>
#include <string.h>

int main(void) {
int a,c,i,n;
scanf("%d\t%d",&a,&c);
i=a;
a=c;
c=i;
printf("%d\t%d",a,c);
  return 0;
}
