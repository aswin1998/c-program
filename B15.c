#include <stdio.h>
#include<math.h>
int main(void) {
int a,b;
scanf("%d %d",&a,&b);
for(int i=a+1;i<b;i++)
{
	if((i%2)==0)
	{
		printf("%d\n",i);
	}
}
	return 0;
}
