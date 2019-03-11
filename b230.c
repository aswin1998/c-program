#include <stdio.h>
#include <string.h>

int main(void)
{
int c=0,m,i;
char a[200];
scanf("%[^\n]%*c",a);
m=strlen(a);
for(i=0;i<=m;i++)
{
if(a[i]==' ')
{
  c++;
}
}
printf("%d",c);
  return 0;
}
