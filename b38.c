#include <stdio.h>
#include <string.h>

int main(void) {
int a,c,i;
scanf("%d\t%d",&a,&c);
c=c^a;
a=c^a;
c=c^a;
printf("%d\t%d",a,c);
  return 0;
}
