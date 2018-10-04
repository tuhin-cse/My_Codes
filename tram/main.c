#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,l,x=0,y=0,t=0,tm;
    scanf("%d",&l);
    for (i=0;i<l;i++)
      {
        scanf("%d %d",&a,&b);
        x=x+a;
        y=y+b;
        tm=y-x;
        if(tm>t)
          t=tm;
      }
      printf("%d",t);
    return 0;
}
