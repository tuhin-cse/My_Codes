#include <stdio.h>
#include <stdlib.h>

main()
{
    int a,b,t;
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        t=a;
        a=b;
        b=t;
    }
    if(a%b==0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
    return 0;
}
