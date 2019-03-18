#include <stdio.h>
#include<math.h>

int main()
{
   int L,B,Ha,vol,total,area;
   scanf("%d %d %d",&L,&B,&Ha);
   total=L*B + B*Ha + Ha*L;
   area=2*total;
   vol=L*B*Ha;
   printf("%d %d",area,vol);
   

    return 0;
}
