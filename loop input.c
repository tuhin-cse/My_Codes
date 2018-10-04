#include<stdio.h>
main()
{
    int i=0,n;
    float s=0,a;
    for( ; ;)
       {
        scanf("%d",&n);
        if(n==7)
            continue;

        if(n==0)
            break;
        if(s>100)
            break;
        s=s+n;
        i    ++;
        }
    a=s/i;
    printf("%.2f",a);
    return 0;
}
