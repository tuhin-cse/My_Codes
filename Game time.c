#include <stdio.h>
#include <stdlib.h>

main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b)
      b=b+24;
    if(a==b)
        printf("O JOGO DUROU 24 HORA(S)");

    else
    {
        a=b-a;
        printf("O JOGO DUROU %d HORA(S)",a)

    }

    printf("%d",a);
    return 0;
}
