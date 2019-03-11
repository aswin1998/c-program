#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
int m,c,r=0;
scanf("%d",&n);
while(m>0)
{
c=m%10;
r=(r*10)+c;
m=m/10;
//printf("%d",c);
}
m=r;
	while(m!=0)
	{
		r=m%10;
     printf("%d ",r);
    n=n/10;
   
	}
     return 0;
}
