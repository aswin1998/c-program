#include <stdio.h>

int main()
{
    int N,Ms,min,gcd=1,i;
    scanf("%d %d",&N,&Ms);
    min = (N<Ms) ? N : Ms;

    for(i=1; i<=min; i++)
    {
    
        if(N%i==0 && Ms%i==0)
        {
            gcd = i;
        }
    }

    printf("%d",gcd);
return 0;
}
