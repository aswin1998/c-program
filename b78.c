#include<stdio.h>
int main()
{
    int i,v,f=0;
    scanf ("%d",&v);
        if (v%13 == 0)
        {
            f=1;
        }
    if(f==1)
    printf("yes");
    else
    printf("no");
    return 0;
}
