#include <stdio.h>
#include<math.h>

int main()
{
    int m,sum=0,i;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}
