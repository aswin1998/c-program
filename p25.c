#include <stdio.h>
#include<string.h>

int main()
{
   char sum[20];
   int i,l,flag;
   scanf("%s",sum);
   l=strlen(sum);
   for(i=0;i<l;i++)
   {
       if(sum[i]>='0'   && sum[i]<='9')
       {
           flag=1;
       }
       else
       {
           flag=0;
       }
   }
       if(flag==1)
       printf("yes");
       else
       printf("no");
   

    return 0;
}
