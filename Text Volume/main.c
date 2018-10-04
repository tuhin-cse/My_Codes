#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l;
    scanf("%d",&l);
    char a[l],c;
    int i,j=0,t=0;
    for(i=0;i<l;i++)
        scanf("%c",&a[i]);
    for(i=0;i<l;i++)
    {
       if(a[i]>='A'&&a[i]<='Z')
            t++;
       if(t>j)
         j=t;
       if(a[i]==' ')
         t=0;
    }
    printf("%d",j);
    return 0;
}
