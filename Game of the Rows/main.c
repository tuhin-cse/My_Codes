#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int i,x,c=0;
    n*=4;
    for(i=0;i<k;i++)
    {
        int t;
        scanf("%d",&t);
        x=t/2;
        if(t%2!=0)
           x++;
        c+=x;

    }
    if(c<=n)
        printf("YES");
    else
        printf("NO");
    return 0;
}
