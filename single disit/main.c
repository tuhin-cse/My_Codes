#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,t;
    scanf("%d",&a);
    while(a>10)
    {
      b=a;
      int s=0;
      while(b!=0)
       {
        t=b%10;
        s=s+t;
        b=b/10;
       }
       a=s;
    }
    printf("%d",a);
    return 0;
}
