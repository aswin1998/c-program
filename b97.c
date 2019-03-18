#include <stdio.h>

int main()
{
    int N,ra,t=0;
    scanf("%d",&N);
    if(N<=1000)
    while(N)
    {
        ra=N%10;
        t=t*10+ra;
        N=N/10;
    }
printf("%d",t);
    return 0;
}
