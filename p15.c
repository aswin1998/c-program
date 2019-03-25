#include <stdio.h>
#include<string.h>
 int main()
{ 
    char sum[1000],x;
 int i,j,c=0,l=0,a[1000];
 gets(sum);
  for(i=0;sum[i]!='\0';i++)
 {
    c=1;
    for(j=i+1;sum[j]!='\0';j++)
    {
        if(sum[i]!='$'&&sum[j]!='$')
        {
        if(sum[i]==sum[j])
        {
            c++; 
            sum[j]='$';
            
         }
      }
    }
    
    if(sum[i]!='$')
    {
    if(c>l)
    {
    l=c;
  x=sum[i];
  }
  }}
  printf("%c",x);
return 0;
}
