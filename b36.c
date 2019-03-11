#include <stdio.h>
int main()
{
    
    char s[1000];
    int l=0,m,t=0;
    
    scanf("%[^\n]",s);

 
 for(m=0;s[m]!='\0';m++)
 {
     if(s[m]>='0' && s[m]<='9'|| s[m]>='A' && s[m]<='Z'||  s[m]>='a' && s[m]<='z'||s[m]==' ' )
         l++;
     else
       t++; 
 }
 
  printf("%d",t);
    return 0;
}
