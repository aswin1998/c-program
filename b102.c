#include <stdio.h>

int main()
{
int Num,T=0,i;
	scanf("%d",&Num);
	for(i=1;i<=Num;i++)
	{
	
		if((Num/i==2) && (Num%i==0))
		{
			printf("%d",i);
			T=1;
			break;
		}
	}
	if(T==0)
	{
		printf("%d",Num);
	}
   
    return 0;
}
