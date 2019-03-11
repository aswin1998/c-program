#include <stdio.h>
#include <string.h>

int main(void)
{
int c=0,n,i;
char b[200];
scanf("%[^\n]%*c",b);
n=strlen(b);
for(i=0;i<=n;i++)
{
if(b[i]>=48 && b[i]<=57)
{
  c++;
}
}
printf("%d",c);
  return 0;
}
