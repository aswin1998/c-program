#include <stdio.h>

int main() {
char d[50];
int l;
scanf("%s",d);
l=strlen(d);
if(l%2==0)
{
    d[l/2]='*';
		d[(l/2)-1]='*';
}
else
{
    d[l/2]='*';
}
printf("%s",d);
	return 0;
}
