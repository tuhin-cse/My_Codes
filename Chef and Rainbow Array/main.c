#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,i;
    int x[100];
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        int l,j,c=0;
        scanf("%d",&l);
        for(j=0;j<l;j++)
        {
            scanf("%d",&x[i]);
        }
        for(j=0;j<l;j++)
        {
         if(x[j]!=x[l-(1+j)]||x[j]>7)
                c=1;
        }
        if(c==1)
            printf("no\n");
        else
            printf("yes\n");

    }
    return 0;
}
