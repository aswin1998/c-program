#include <stdio.h>
int main()
{
    int num,i,count=0;
	scanf("%d",&num);
    for(i=num;i>=2;i--)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count>=2)
    {
        printf("yes..%d is further divisible",n);
    }
    else
    {
        printf("no");
    }
	return 0;
}
