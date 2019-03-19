#include <stdio.h>

int main()
{
    char Saa[1000];
   int N,c,i;
   scanf("%s %d",Saa,&N);
   c=strlen(Saa);
   
for(i=c;i>N;i--)
{
    
    
    printf("%c",Saa[i]);
}

   
    return 0;
}
