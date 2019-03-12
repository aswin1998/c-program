#include <stdio.h>

int main()
{
    int N,M,b,rem,sum=0;
    scanf("%d %d",&N,&M);
    b=N*M;
    if((b%2)==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
return 0;    
}
