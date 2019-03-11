#include <stdio.h>

int main()
{
    int b[20],i,m=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }
    
    for(i=0;i<10;i++)
    {
        if(b[i]>m)
        {
            m=b[i];
        }
    }
    printf("%d",m);
    return 0;
}
