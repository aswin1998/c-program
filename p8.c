include<stdio.h>
#include<string.h>
int main()
{
char sum[1000000];
int i;
scanf("%[^\n]",sum);
if(sum[0]>='a'&&s[0]<='z')
{
sum[0]-=32;
}
for(i=0;sum[i]!='\0';i++)
{
if(sum[i]== ' '&& sum[i+1]>='a' && sum[i+1]<='z')
{
sum[i+1]=sum[i+1]-32;
}
else
{
if(sum[i]== ' '&&sum[i+1]>='A' && sum[i+1]<='Z')
sum[i+1]=sum[i+1]+32;
}
}
printf("%s",sum);
return 0;
}
