#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[1000];
    gets(a);
    int k;
    scanf("%d",&k);
    int l=strlen(a);
    if(k>l)
    {
        printf("impossible\n");
        return 0;
    }
    int z;
    int i,j,c=0;
    for(i=0;a[i]!='\0';i++)
        for(j=i+1;a[j]!='\0';j++)
              if(a[i]==a[j])
                 c++;
    z=l-c;
    if(z>=l)
        printf("0\n");
    else
       printf("%d\n",l-z);
    return 0;
}
