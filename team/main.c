#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,a,b,c,i,j,k,t=0;
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
      scanf("%d %d %d",&a,&b,&c);
      k=a+b+c;
      if(k>=2)
         t++;
    }
    printf("%d",t);
    return 0;
}
