#include <stdio.h>
#include <stdlib.h>
int main()
{
    int l;
    scanf("%d",&l);
    int a[l],i,j,small,s_small;
    for(i=0;i<l;i++)
        scanf("%d",&a[i]);
    small=a[0];
    for(i=1;i<l;i++)
        {
            if(small>a[i])
                  small=a[i];
        }

    if(small!=a[0])
        s_small=a[0];
    else
    s_small=a[1];
    for(i=1;i<l;i++)
        {
            if(s_small>a[i]&&a[i]!=small)
                  s_small=a[i];
        }

    printf("%d %d",small,s_small);
}
