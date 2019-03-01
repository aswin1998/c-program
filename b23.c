#include <stdio.h>
    int main()
    {
        int i, j, b, n=3,a[30];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++) 
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j]) 
                {
                    b=a[i];
                    a[i]=a[j];
                    a[j]=b;
                }
            }
        }
    printf("%d",a[n-3]);
        return 0;
    }
