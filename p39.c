#include <stdio.h>
int main()
{
	int num,i,p=2,result=1;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	    result=result*p;
	    if(result==num)
	    {
	        printf("yes");
	        break;
	    }
	    else
	    {
	        continue;
	    }
	}
	if(result!=num)
	{
	    printf("no");
	}
	
	return 0;
}
