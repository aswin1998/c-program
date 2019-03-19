#include <stdio.h>
#include <string.h>
 
int main()
{
   char sum[100000];
   int i,a=0;

   scanf("%s",sum);
   a=strlen(sum);
   for(i=a;i>=0;i--)
   {
       printf("%c",sum[i]);
   }
 
   
 
   return 0 ;
}
