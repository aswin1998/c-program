#include<stdio.h>
int main()
{
int a,b,m,i,c=0;
scanf("%d",&m);
for(i=0;i<m;i++)
{
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        c++;
    }
}
printf("%d",c);

}
