#include <stdio.h>

int main()
{
    int numm,i,j,Tot=0;
scanf("%d",&numm);

if(numm>=2&&numm<=100000)
{
for(i=2;i<=numm;i++)
{
  if(numm%i==0)
    {
        
        
        for(j=2;j<=i/2;j++)
        {
            
            
            if(i%j==0)
            {
                
                Tot=1;
                break;
                
            }
        }
if(Tot==0)
     printf("%d ",i);
}}
}
    return 0;
}
