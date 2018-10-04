#include <stdio.h>

int main()
{
    int A,B,C,D,e,f;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    e=A+B;
    f=C+D;
    if(B>C&&D>A&&f>e&&C>0&&D>0&&A%2==0)
       printf("Valores aceitos\n");
    else
       printf("Valores nao aceitos\n");
    return 0;
}
