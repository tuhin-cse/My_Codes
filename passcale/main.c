#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,i,j;
    scanf("%d",&l);
    int a[l+1],b[l+1];
    for(i=0;i<=l;i++)
       {
       a[i]=0;
       b[i]=0;
       }
    a[1]=1;
    for(i=1;i<=l;i++)
      {
       for(j=1;j<=i;j++)
         b[j]=a[j-1]+a[j];
       for (j=l-i;j>0;j--)
           printf("  ");
       for(j=1;j<=i;j++)
         printf(" %3d",b[j]);
       for(j=1;j<=i;j++)
          a[j]=b[j];
       printf("\n");
      }
    return 0;
}
