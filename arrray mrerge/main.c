#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int a[x],b[y],c[x+y],i,j=0,k=0;
    for(i=0;i<x;i++)
     scanf("%d",&a[i]);
    for(i=0;i<y;i++)
     scanf("%d",&b[i]);
     for(i=0;i<x+y;i++)
     {
     if(a[j]<b[k]&&j<x ){
     c[i]=a[j];
     j++;
     }
     else
     {
     c[i]=b[k];
     k++;
     }
     }
     for(i=0;i<x+y;i++)
    printf(" %d",c[i]);
}
