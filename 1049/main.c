#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    char a[20],b[20],c[20];
    scanf("%s %s %s",&a,&b,&c);
    if(0==(a,"vertebrado"))
    {
        if(0==strcmp(b,"ave"))
        {
            if(0==(c,"carnivoro"))
                printf("aguia\n");

             if(c=="onivoro")
                printf("pomba\n");

        }
        if(b=='mamifero')
        {
            if(c=='herbivoro')
                printf("vaca\n");

             if(c=='onivoro')
                printf("homen\n");

        }
    }
    if(a=='invertebrado')
    {
        if(b=='inseto')
        {
            if(c=='hematofago')
                printf("pulga\n");

             if(c=='herbivoro')
                printf("lagarta\n");

        }
        if(b=='anelideo')
        {
            if(c=='hematofago')
                printf("sanguessuga\n");

             if(c=='onivoro')
                printf("minhoca\n");

        }
    }
    return 0;

}
