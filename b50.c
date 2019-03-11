#include <stdio.h>
int main()
{
 int m,t=0;
 scanf("%d",&m);
     while(m!=1)
    {
        if(m%2!=0)
        {
            t=1;
        }
        m=m/2;
    }
    if(t==0)
    printf("yes");
    else
    printf("no");
return 0;
}
