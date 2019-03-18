#include <stdio.h>
#include<string.h>
int main()
{
    
    char ab[100];
	int i,l;
	scanf("%s",ab);
	l=strlen(ab);
	for(i=0;i<l;i++)
	{
		if(ab[i]>='0' &&ab[i]<='9')
		{
		    printf("%c",ab[i]);
		}
	}
    return 0;
}
