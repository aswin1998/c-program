#include <stdio.h>
#include <math.h>

int main()
{
int a,m;
	scanf("%d %d",&a,&m);
	int i,X,l=0;
	while(a>0)
	{
		X=a%10;
		if(X==m)
		{
			l+=1;
		}
		a=a/10;
	}
	printf("%d",l);
	return 0;
}
