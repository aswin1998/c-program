#include <stdio.h>

int main()
{
    int a,b,f=0;
    scanf("%d",&a);
    for(b=1;b<a/2;b++)
    {
        if(a%b==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
return 0;
}
