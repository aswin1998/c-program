#include <stdio.h>

int main() {
	char a[10000];
	int b,c;
	scanf("%s",a);
	for(c=0;a[c]!='\0';c++)
	{
		
		b=a[c];
		if(b%2!=0)
		{
			printf("%c ",a[c]);	
		}
	}
	return 0;
}
