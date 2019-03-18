#include <stdio.h>

int main()
{
    int N,pro=1;
    scanf("%d",&N);
    if(N<=1000000000)
    while(N)
    {
        pro = pro * (N % 10);

             N = N/ 10;
    }
printf("%d",pro);
    return 0;
}
