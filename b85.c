#include <stdio.h>
#include <string.h>
int main()
{
   char h[100];
	int i,l;
	scanf("%s",h);
	l=strlen(h);
	for(i=0;i<l;i++)
	{
		if(i%2==0)
		{
			printf("%c",h[i]);
		}
	}
	printf(" ");
	for(i=0;i<l;i++)
	{
		if(i%2!=0)
		{
			printf("%c",h[i]);
		}
	}
    return 0;
}
