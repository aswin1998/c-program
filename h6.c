#include <stdio.h>
#include <conio.h>
void main()
{
    int j,a,i,b[100],d[100],c,count=0;
    printf("enter the count");
    scanf("%d",&a);
printf("enter the number");

for(i=0;i<a;i++)
{
    scanf("%d",&b[i]);
}
for(i=0;i<a;i++)
{
    d[i]=0;
}
for(j=0;j<a;j++)
{
 for(c=j+1;c<a;c++)
 {
if(b[j]==b[c])    
{
    d[j]=b[j];
    count++;
}
 }
}
for(i=0;i<count;i++)
{
    if(d[i]>0)
    {
    printf("%d",d[i]);
     break;
        
    }
}
    if(count==0)
    {
        printf("unique");
    }
   
getch();
}
