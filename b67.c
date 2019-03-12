#include <stdio.h>

int main()
{
    int m;
	scanf("%d",&m);
	while(m!=0)
	{
		if(m%10==0)
		{
			printf("%d",m);
			break;
		}
		m++;
	}
return 0;
}
