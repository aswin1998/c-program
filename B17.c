  
#include<stdio.h>
 
int main() 
{
int n,a,b=0,result;
printf("\n enter the number:");
scanf("%d",&n);
result=n;
while(n!=0)
{
a=n%10;
b=b+(a*a*a);
n=n/10;
}
if(result==b)
printf("\n %d is an Armstrong number",result);
else
printf("\n %d is not an Armstrong number",result);
return 0;
}
