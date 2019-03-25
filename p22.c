
#include <stdio.h>

int main()
{

 int Num,K,max,GR=1,i;
    scanf("%d %d",&Num,&K);
    max = ((Num<K) ? Num : K);

    for(i=1; i<=max; i++)
    {
    
        if(Num%i==0 && K%i==0)
        {
            GR = i;
        }
    }

    printf("%d",GR);

return 0;
}
