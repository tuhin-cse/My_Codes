 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,s=1;
    scanf("%d",&a);
    c=a;
       while(a!=0)
       {
          a=a/10;
          s=s*10;
       }
       while(s!=1)
       {
        d=c%s;
         printf("%d\n",d);
         s=s/10;
       }

}
