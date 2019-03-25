#include <stdio.h>

int main()
{
    int Num,K,i,j,b,l=0;
scanf("%d %d",&Num,&K);
int a[N+K];
for(i=0;i<N;i++)
{
     scanf("%d",&a[i]);
}
 
  for(i=Num;i<N+K;i++)
{
  
    scanf("%d",&a[i]);
   l++;
      b=a[0];
   for(j=1;j<Num+l;j++)
{
  if(b<a[j])
   b=a[j];
 }

printf("%d ",b);

}
return 0;
}
