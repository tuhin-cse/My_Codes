#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1,*f2;

    f1 = fopen("/home/tuhin/tuhin.txt","w");

    int c;
    while(scanf("%d",&c)==1)
        fprintf(f1,"%d ",c);

    fclose(f1);

    f1= fopen("/home/tuhin/tuhin.txt","r");
    f2= fopen("/home/tuhin/tuhin_copy.txt","w");

    char x;

    while(fscanf(f1,"%d",&c)==1)
        fprintf(f2,"%d ",c);

    fclose(f2);

    f2= fopen("/home/tuhin/tuhin_copy.txt","r");
    while(fscanf(f2,"%d",&c)==1)
        printf("%d ",c);

}
