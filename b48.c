#include <stdio.h>
int main()
{
    int N,a[10000],i,sum=0,b;
    scanf("%d",&N);
    
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<N;i++)
    {
        sum+=a[i];
    }
    b=sum/N;
    printf("%d",b);
    return 0;
}
