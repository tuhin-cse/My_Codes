#include <stdio.h>
#include <stdlib.h>

main()
{
    int a,b,c,d,e,f;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==c&&b==d)
         printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

    else
    {
      if(a>c)
        c=c+24;

      e=c-a;
        if(b>d)
        {
            d=d+60;
            e=e-1;
        }
       f=d-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
    }
    return 0;
}
