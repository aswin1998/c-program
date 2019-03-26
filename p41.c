#include <stdio.h>
int main() 
{
	int num,k,i,res=1;
	scanf("%d %d",&num,&k);
	for(i=1;i<=num;i++)
	{
	    res=res*k;
	    if(res==num)
	    {
	        printf("yes..its the power of %d\n",k);
	        break;
	    }
	}
	if(res>n)
	{
	    printf("no");
	}
	return 0;
}
