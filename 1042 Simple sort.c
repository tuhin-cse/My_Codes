#include <stdio.h>
#include <stdlib.h>

main()
{
    int a,b,c,d,e,f,t;
    scanf("%d %d %d",&a,&b,&c);
    d=a;
    e=b;
    f=c;
    if(a<b)
    {
        t=a;
        a=b;
        b=t;
    }
    if(a<c)
    {
        t=a;
        a=c;
        c=t;
    }
    if(b<c)
    {
        t=b;
        b=c;
        c=t;
    }
    printf("%d\n%d\n%d\n \n%d\n%d\n%d\n",c,b,a,d,e,f);
    return 0;
}
