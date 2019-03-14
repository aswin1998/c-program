#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    int i, a=0;
    scanf("%s", str);

for(i=0;str[i]!='\0';i++)
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
   
   { 
       a=1;
    break;
   }
}
    
    if (a==1) {
        printf(" yes");
    }    
    else {
        printf("no");
    }
    return 0;
}
