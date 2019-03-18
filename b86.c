#include <stdio.h>
#include<string.h> 
int main() 
{
    char Sa[1000000];
    int i,j,f=0;
    scanf("%s",Sa);
    for(i=0;Sa[i]!='\0';i++)
    {
        for(j=i+1;Sa[j]!='\0';j++)
        {
            if(Sa[i]==Sa[j])
            {
                printf("No");
                f=1;
                break;
            }
        }
        if(f==1)
        break;
    }
    if(f==0)
    {
        printf("Yes");
    }
    return 0;
}
