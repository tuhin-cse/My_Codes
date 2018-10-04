#include<stdio.h>
main()
{
    int m1,s1,m2,s2,h,m,s,x;
    scanf("%d:%d %d:%d",&m1,&s1,&m2,&s2);
    x=(m1*60)+s1+(m2*60)+s2;
    h=x/3600;
    m=(x-3600*h)/60;
    s=(x-3600*h)%60;
    printf("%d:%d:%d",h,m,s);
    return 0;
}
