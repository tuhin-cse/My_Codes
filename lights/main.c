#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000],i,j,n,x;
    scanf("%d %d",&n,&x);
    for(j=0;j<1000;j++)
         a[j]=0;

    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            for(j=0;j<1000;j++)
             a[j]=1;
        }
        if(i>0)
        {
            for(j=i+1;j<1000;j=(j+i+1))
                a[j]=0;
        }
    }
    if(a[x]==1)
        printf("On");
      if(a[x]==0)
        printf("Off");

    return 0;
}
