#include <stdio.h>
int main() 
{
    int m,i,a[10000];
    
scanf("%d",&m);

for(i=0;i<m;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<m;i++)
{
    printf("%d %d \n",a[i],i);
}
    
return 0;
}
