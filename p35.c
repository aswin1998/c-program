#include <stdio.h>
#include<string.h>

int main()
{
char S[1000];
    int i,j,c=0;
    scanf("%[^\n]s",S);
    for(i=0;S1[i]!=NULL;i++)
    {
        c=0;
    for(j=i+1;S[j]!=NULL;j++)
    {
        if(S[i]==S[j] )  
        {
         c++;
         S[j]='*';
        }
    }
    if(c==0)
    {
        if(S[i]!=' ' && S[i]!='*')
        {
        printf("%c ",S[i]);
        }
    }
    }

    return 0;
}
