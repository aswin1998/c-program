#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    int i, l;
    int d= 0;
    scanf("%s", str);
    
    l = strlen(str);
    
    for(i=0;i < l ;i++){
        if(str[i] != str[l-i-1]){
            d= 1;
            break;
   }
}
    
    if (d==0) {
        printf(" yes");
    }    
    else {
        printf("no");
    }
    return 0;
}
