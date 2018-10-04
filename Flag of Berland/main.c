#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a,b,i,j,k;
    scanf("%d %d",&a,&b);
    char s[a][b];
    for(i=0;i<a;i++)
        scanf("%s",&s[i]);
    for(i=0;i<a;i++)
    {
        k=i+1;
       if(strcmp(s[i],s[k])==0)
       {
        printf("NO\n");
        return 0;
       }
       i++;
    }
    printf("YES\n");

    return 0;
}
