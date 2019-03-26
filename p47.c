#include <stdio.h>
int main()
{
    int am,b,c,sum=0;
	  scanf("%d %d %d",&am,&b,&c);
    sum=am+b+c;
    if(sum==180)
    {
        printf("yes..it forms traingle");
    }
    else
    {
        printf("they cant be the interior angles of the triangle");
    }
	
}
