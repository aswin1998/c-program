#include <stdio.h>
#include <string.h>

int main(){
    char a[10];
    int i,f=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='0' || a[i]=='1')
        {
            f=1;
        }
        else
        {
            f=0;
            break;
        }
    }
    

if(f==1) {
        printf("yes");
    }    
    else {
        printf("no");
    }
    return 0;
}
