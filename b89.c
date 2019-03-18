#include <stdio.h>
#include<string.h>
int main()
{
  
  char Sa[100],X;
   int i,j,l;
   scanf("%s",Sa);
   l=strlen(Sa);
  
   for(i=0;i<l-1;i++)
   {
       for(j=i+1;j<l;j++)
       {
        if(Sa[i]>Sa[j])
        {
            X=Sa[i];
            Sa[i]=Sa[j];
            Sa[j]=X;
        }
       }
   }
   printf("%s",Sa);
    

	return 0;
}
