#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int l,i,j;
    scanf("%d",&l);
    char a[l][105];
    for(i=0;i<l;i++)
       {
        scanf("%s",&a[i]);
       }
    for(i=0;i<l;i++)
       {
        j=strlen(a[i]);
        if(j>10)
            printf("%c%d%c\n",a[i][0],(j-2),a[i][j-1]);
        else
         puts(a[i]);

       }
    return 0;
}
