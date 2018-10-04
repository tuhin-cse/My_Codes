#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t,i,j;
    scanf("%d",&n);
    t=n-1;
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<n;j++)
          {
            t+=i+1;
          }
    }
    t+=n;
    printf("%d",t);

    return 0;
}
