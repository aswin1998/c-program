#include <stdio.h>
#include<string.h>
int main()
{
	int num,k,i,j;
	char a[10],temp;
	scanf("%s",a);
	n=strlen(a);
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
	    temp=a[num-1];
        for(j=num-2;j>=0;j--)
 	{
	   a[j+1]=a[j];
	}
	    a[0]=temp;
	   
	} printf("%s",a);

}
