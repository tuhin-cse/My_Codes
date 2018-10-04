#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, a[100]={0};
    scanf("%d",&l);
    int array[l],i;
    for(i=0;i<l;i++)
    {
        scanf("%d",&array[i]);
        int x=array[i];
        a[x]++;
    }
    for(i=0;i<100;i++)
    {
        if(a[i]>0)
            printf("%d appears %d time\n",i,a[i]);

    }

    return 0;
}
