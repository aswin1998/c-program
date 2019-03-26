#include <stdio.h>
int main() 
{
	int num,a[10],i,count=0,j;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=i+1;i<num,j<num;i++,j++)
    {
        if(a[i]>a[j])
        {
            count=0;
            break;
        }
        else
        {
            count=1;
        }
    }
    if(count==1)
    {
        printf("yes...sorted order");
    }
    else
    {
        printf("no");
    }
	return 0;
}
