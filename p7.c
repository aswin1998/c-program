#include <stdio.h>
#include<string.h>
int main()
{
       char sum[30];
       int i,l,t;
       
       scanf("%s",sum);
      l=strlen(sum); 
       for(i=0;i<l-1;i++)
       {
         if(i%2==0)
           {
               t=sum[i];
               sum[i]=s[i+1];
               sum[i+1]=t;
            }
       }

printf("%s",sum);
    return 0;
}
