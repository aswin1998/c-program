#include <stdio.h>
int main()
{
    int m, i, flag = 0;
printf("Enter a positive integer: ");
    scanf("%d", &m);
for(i = 2; i <= m/2; ++i)
    {
        if(m%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (m == 1) 
    {
      printf("1 is neither a prime nor a composite number.");
    }
    else 
    {
        if (flag == 0)
          printf("%d is a prime number.", m);
        else
          printf("%d is not a prime number.", m);
    }
    
    return 0;
}
