#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=0,i,l;
    scanf("%d",&l);
    char s[l];
    scanf("%s",&s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='S'&&s[i+1]=='F')
            a++;

        if(s[i]=='F'&&s[i+1]=='S')
            b++;

    }
    if(a>b)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
