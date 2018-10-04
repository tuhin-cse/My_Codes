#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *f;
    char c;
    int i;
    f=fopen("INPUT","w");

    while((c=getchar())!=EOF)
        putc(c,f);

    fclose(f);

    f=fopen("INPUT","r");

    while((c=getc(f))!=EOF)
        printf("%c",c);

    fclose(f);

}
