#include <stdio.h>
#include<string.h>
 int main()
{ 
  int Num,i,j,ma,len=0;
scanf("%d",&Num);

int sa[Num];
for(i=0;i<Num;i++)
{
    scanf("%d",&sa[i]);
}

  for(i=0;i<N;i++)
 {
    len=1;
    for(j=i+1;j<Num;j++)
    {
        if(sa[i]!='$'&&sa[j]!='$')
        {
        if(sa[i]==sa[j])
        {
            len++; 
            sa[j]='$';
            
         }
      }
    }
    
    if(sa[i]!='$')
    {
    
    if(len==1)
    {
 
  ma=sa[i];
  }
  }}
  printf("%d",ma);
return 0;
}
