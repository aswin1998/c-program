#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str1[20],str2[20];
	int id,flag=1;
	scanf("%s %s",str1,str2);
	for(id=0;str2[id]!='\0';id++)
	{
		if(str2[id]=='b'||str2[id]=='a'||str2[id]=='n'||str2[id]=='a'||str2[id]=='n'||str2[id]=='a')
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}

}
