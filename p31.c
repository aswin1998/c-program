#include <stdio.h>

int main()
{

int i,a;
char b[10000];
gets(s);

for(i=0;b[i]!='\0';i++)
{   
   if(b[i]=='(')
    
    a++;
    else if(b[i]==')')
    a--;    
 }
 if(a==0)
 printf("yes");
 else
 printf("no"); 
}
