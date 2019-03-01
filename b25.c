#include <stdio.h>
int main() 
{
    int b,a[1000],i,j,t,x;
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<b;i++)
    {
        for(j=i;j<b;j++)
        {
        if(a[i]>a[j])
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }}}
    if(b%2==0)
{
x=(a[b-1/2]+(a[b/2]))/2;
}
else
{
x=a[b/2];
}
printf("%d",x);

return 0;
}
