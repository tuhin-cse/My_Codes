#include <stdio.h>
#include <stdlib.h>

main()
{
    char a[20],b[20],c[20];
    scanf("%s %s %s",&a,&b,&c);
    if(a[0]=='v')
    {
        if(b[0]=='a')
        {
            if(c[0]=='c')
                printf("aguia\n");

             if(c[0]=='o')
                printf("pomba\n");

        }
        if(b[0]=='m')
        {
            if(c[0]=='h')
                printf("vaca\n");

             if(c[0]=='o')
                printf("homen\n");

        }
    }
    if(a[0]=='i')
    {
        if(b[0]=='i')
        {
            if(c[3]=='a')
                printf("pulga\n");

             if(c[3]=='b')
                printf("lagarta\n");

        }
        if(b[0]=='a')
        {
            if(c[0]=='h')
                printf("sanguessuga\n");

             if(c[0]=='o')
                printf("minhoca\n");

        }
    }
    return 0;

}
