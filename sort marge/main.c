#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,i,j=0,k=0;
    scanf("%d",&l);
    int a[l],b[l],c[2*l];

    for(i=0;i<l;i++)
         scanf("%d",&a[i]);
    for(i=0;i<l;i++)
         scanf("%d",&b[i]);

    for(i=0;i<2*l;i++)
        {
         if(a[j]<b[k])
           {
            c[i]=a[j];
            j++;
           }
        else
           {
            c[i]=b[k];
            k++;
           }
        }

     for(i=0;i<2*l;i++)
        printf(" %d",c[i]);
    return 0;
}
