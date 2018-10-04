#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",&a,&b);
    int i;
    for (i=0;a[i]!='\0';i++)
        {
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
        }
    if(strcmp(a,b)==0)
        printf("0");
    else if (strcmp(a,b)>0)
        printf("1");
    else if (strcmp(a,b)<0)
        printf("-1");
    return 0;
}
