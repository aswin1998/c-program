#include <stdio.h>
#include <string.h>
 
int main()
{
   char Sum[100000];
   int a=0;

   scanf("%s",Sum);
   a=strlen(Sum);
   Sum[a]='.';
   printf("%s",Sum);
   
 
   return 0 ;
}
