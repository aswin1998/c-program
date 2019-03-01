#include<stdio.h>
int main()
{
int i,n,a,b,sum=0;
printf("\n Enter the number of arithmetic progression");
scanf("%d",&n);
printf("\n Enter a and d values");
scanf("%d%d",&a,&b);
for(i=1;i<=n;i++)
{
sum=sum+(a+(i*b));
}
  printf("\nResult is %d",sum);
return 0;
}
