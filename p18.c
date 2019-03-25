#include <stdio.h>

int main()
{
char str[6]={'k','a','b','a','l','i'};
   char sum[20][20];
   int i,j,k,c=0,N,x=0,l;

  scanf("%d",&N);
 
   for(i=0;i<N;i++)
   {
        scanf("%s",sum[i]);
    }

  for(i=0;i<N;i++)
  {
      l=strlen(sum[i]);
   
      
      for(j=0;j<l;j++)
      {
          for(k=0;k<6;k++)
          {
            if(sum[i][j]==str[k])
            {
              c++;
          
              break;
            }
          }
      }
      
      if(c==l&& l==6)
      {
          x++;
            

      }
      c=0;
      l=0;
  }
  
  
  printf("%d",x);

   

    return 0;
}
