#include <stdio.h>

int main()
{
int a;
scanf("%d",&N);
int a[100][100],i,j,c=0;
for(i=1;i<=a;i++)
{for(j=1;j<=a;j++)
    {
         scanf("%d",&a[i][j]);  }}
for(i=0;i<=a;i++)
{
    for(j=0;j<=a;j++)
    {
      if(a[i][j]==1)
      {
          if(a[i-1][j]==0&&a[i][j-1]==0&&a[i][j+1]==0&&a[i+1][j]==0)
       
          {
              c++;
          }
          } }
    }
    printf("%d",c);
}
