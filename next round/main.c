#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,n;
    scanf("%d %d",&l,&n);
    int a[l],i,c=0;
    for (i=0;i<l;i++)
      scanf("%d",&a[i]);
    for (i=0;i<l;i++)
       if(a[i]>=a[n]&&a[i]>0)
           c++;
    printf("%d",c);
    return 0;
}
