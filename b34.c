#include <stdio.h>
int main()
{
    
    char a[1000];
    int l=1,i;
    
    scanf("%[^\n]",a);

 
 for(i=0;a[i]!='\0';i++)
 {
     if(a[i]=='.')
     {
         l++;
     }
 }
  printf("%d",l);
    return 0;
}
