#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a['{']={0},n,k;
    scanf("%d %d",&n,&k);
    char s[1000];
    scanf("%s",&s);
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        char z=s[i];
        a[z]++;
    }
    char d;
    for(d='a';d<='z';d++)
    {
        int y=a[d];
        if(k<y)
         {
             printf("NO\n");
             return 0;
         }
    }
    printf("YES\n");
    return 0;
}
