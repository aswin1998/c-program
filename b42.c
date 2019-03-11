#include<stdio.h>
#include<string.h>
int main()
{
  
  char a[10],c[10];
  int n,m;
  scanf("%s\t%s",a,c);
  n=strlen(a);
  m=strlen(c);
  if(n>m)
  {
    printf("%s",a);
  }
  else if(m>n)
  {
    printf("%s",c);
  }
  else if(n==m)
  {
    printf("%s",a);
  }

}
