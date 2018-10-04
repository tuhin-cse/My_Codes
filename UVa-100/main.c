#include <stdio.h>
#include <stdlib.h>

int length(int n)
{
    int c=1;
    while(n!=1)
    {
       c++;
       if(n%2!=0)
         n=3*n+1;
       else
        n/=2;
    }
    return c;
}

int main()
{
    int i,j,x,a,b;
   while(scanf("%d%d",&i,&j)==2&&i>0&&j>0);
    {
        a=0;
        for(x=i;x<=j;x++)
        {
        b=length(x);
        if(b>a)
            a=b;
        }
    printf("%d %d %d\n",i,j,a);
    }

    return 0;
}
