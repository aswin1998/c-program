#include <stdio.h>
int main()
{
    
    char a[1000000];
    int c=0,l=0,i;
    
    scanf("%[^\n]",a);
c=strlen(a);
 
 for(i=0;i<c;i++)
 {
     if(a[i]==' ')
     {
         l++;
     }
 }
  printf("%d",a-l);
    return 0;
}
