#include <stdio.h>

int main()
{
	char Sum[100];	
	int i;
	
		scanf("%[^\n]s",Sum); 
	
	for(i=0; Sum[i]!='\0'; i++)
	{
if(i==0)
		{
			if((Sum[i]>='a' && Sum[i]<='z'))
				Sum[i]=Sum[i]-32; 
			
		}
		if(Sum[i]==' ')
		{
			i++;
			if(Sum[i]>='a' && Sum[i]<='z')
			{
				Sum[i]=Sum[i]-32; 
				
			}}}
	
	printf("%s",Sum);
	
	return 0;
}
