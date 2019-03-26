#include <stdio.h>
int main()
{
    int pn,a,i,j,perimeter,area,flag=0;
	scanf("%d %d",&pn,&a);
	for(i=1;i<=(pn/2);i++)
	{
	    for(j=1;j<=(pn/2);j++)
	{
	    perimeter=2*(i+j);
	    area=i*j;
	    if(perimeter==p && area==a)
	    {
	        printf("yes");
	        flag=1;
	        break;
	    }
	}
	if(flag==1)
	    break;
	}
	if(flag==0)
	{
	    printf("no");
	}
	
}
