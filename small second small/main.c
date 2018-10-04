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

    s_small=a[l-1];
    for(j=l-1;j>=0;j--)
        {
       if(s_small<a[j]||s_small>small)
            small=a[j];
        }

    printf("%d %d",small,s_small);



}
