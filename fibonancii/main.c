#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n+1];
    a[0]=0;
    a[1]=1;

    for(i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }

    for(i=1;i<=n;i++)
        printf("%d ",a[i]);
    return 0;
}
