#include <stdio.h>
int main() 
{
int n,j;
scanf("%d",&n);
int flag=1;
for(j=2;j<n/2;j++)
{

    if(n%j==0)
    {
       flag=0;
    }
    else
    {
       flag=1;
    }
}
if(flag==1)
{
    printf("prime");
}
else
{
    printf("not prime");
}
}
