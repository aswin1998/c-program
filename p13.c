#include <stdio.h>
 int main()
{
int n;
	int Num,s=0,r,a;
	scanf("%d",&Num);
	while(Num>0)
	{
		r=Num%10;
		a=r*r;
		s=s+a;
		Num=Num/10;
	}
	printf("%d",s);
    return 0;
}
