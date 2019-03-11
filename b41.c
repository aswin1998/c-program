#include <stdio.h>
int main()
{
 char S[1000];
 int m;
 scanf("%s",&S);
 scanf("%d",&m);
 
 while(m)
 {
     printf("%s\n",S);
     m--;
 }
 return 0;
}
