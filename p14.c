#include <stdio.h>
#include<string.h> 

int main()
{
    int Num,l,i,k;
    scanf("%d",&Num);
    char s[Num],a[Num];
    scanf("%s",s);
l=strlen(s);
for(i=l-1;i>=0;i--)
{
    if(s[i]!='a' && s[i]!='e' && s[i]!='i'&& s[i]!='o'&& s[i]!='u' && s[i]!='A'&&s[i]!='E'
    && s[i]!='I' && s[i]!='O'&& s[i]!='U')
    {
        printf("%c",s[i]);
    }
}



    return 0;
}
