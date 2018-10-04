#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l;
    scanf("%d",&l);
    int a[l+1],i;
    a[0]=0;
    a[1]=1;
    for(i=2;i<=l;i++)
      a[i]=a[i-1]+a[i-2];

    for(i=1;i<=l;i++)
       printf(" %d",a[i]);
    return 0;
}
