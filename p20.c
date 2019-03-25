
#include <stdio.h>
#include<string.h>

int main()
{
       char NUMm[100000];
int i;
gets(NUMm);

for(i=0;NUMm[i]!='\0';i++)
{
  
  if(NUMm[i]=='Z' )
  printf("C");
  else if(NUMm[i]=='Y')
  printf("B");
  else if(NUMm[i]=='X')
  printf("A");
  else
    
  printf("%c",NUMm[i]+3);
    

    
    
}
    return 0;
}
