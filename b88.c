#include <stdio.h>

int main()
{
    int N,Ma,max,lcm,i;
    scanf("%d %d",&N,&Ma);
    max=N>Ma?N:Ma;
    for(i=0;i<max;i++)
    {
        if(max%N==0 && max%Ma==0)
        {
            lcm=max;
            break;
        }
        max++;
    }
    

    printf("%d",lcm);
return 0;
}
