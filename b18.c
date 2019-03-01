#include<stdio.h>
int main()
{
    int m,i,sum,rem,a,b;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        m=i;
        sum=0;
    while(m!=0)
    {
        rem=m%10;
        sum=sum+rem*rem*rem;
        m=m/10;
    }
    if(sum==i)
    {
    printf("%d\t",i);
    }
    }
}
