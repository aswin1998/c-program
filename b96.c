#include <stdio.h>
 
int main() 
{
     int Aa, B, C, i, tn;
     int sum = 0,f=0;
 
     scanf("%d %d %d", &Aa,&B,&C);
    
    
     sum = (C * (2 * Aa+ (C - 1)* B ))/ 2;
     tn = Aa + (C - 1) * B;
     for (i = Aa; i <= tn; i = i + B)
     {
f=1;
}
if(f==1)
               printf("%d ", sum);
     

	return 0;
}
