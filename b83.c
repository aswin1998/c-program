#include <stdio.h>
#include<string.h>
int main()
{
     int N,a;
   char ch;

       scanf("%d %c %d",&N,&ch,&a);
       if(ch=='/')
       {
           printf("%d\n",(N/a));
       }
       else
       {
           printf("%d\n",(N%a));
       }

	return 0;
}
