#include <stdio.h>

int main()
{
    int L1,L2,ia;
scanf("%d %d",&L1,&L2);
if((L1>=1&&L1<=100000)&&(L2>=1&&L2<=100000))
{

for(ia=1;;ia++)
{
    if(ia%L1==0&&ia%L2==0)
    {
        
        printf("%d",ia);
        break;
    }
    
}
}

    return 0;
}
