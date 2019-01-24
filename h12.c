#include <stdio.h>
#include <conio.h>
void main()
{
    int j,n,p,i,m,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        m=a[0];
        for(j=1;j<i;j++)
        {
            if(m<a[i])
            {
                m=a[j];
                p=j;
                
            }
    }    }
        a[p]=0;
        printf("%d",m);
    getch();
}
