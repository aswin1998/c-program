#include <stdio.h>

int main()
{
int i;
 char a[100000];
 gets(a);
for(i=0;a[i]!='\0';i=i+3)
 {
     printf("%c",a[i]);
 }
}
