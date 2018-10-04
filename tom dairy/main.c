#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int c,i,j,p;
    scanf("%d",&c);

    char a[c][100];
    for(i = 0; i<c;i++)
    {
        scanf("%s",&a[i]);
    }
    for(i = 0; i<c;i++)
    {
        p=0;
        for(j=0;j<i;j++)
        {
            if(j==i)
                break;
            if(strcmp(a[i],a[j])==0)
            {
                printf("YES\n");
                p=1;
            }
            if(p==1)
                break;
        }
        if(p!=1)
            printf("NO\n");
    }
    return 0;
}
