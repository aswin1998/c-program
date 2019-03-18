#include <stdio.h>
 int main() 
{
	int Na,arr[60],i;
	scanf("%d",&Na);
	for(i=1;i<=Na;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=Na;i++)
	{
		if(i!=arr[i])
		{
			printf("\n%d",i-1);
			break;
		}
	}
 
	return 0;
}
