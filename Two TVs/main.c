#include <stdio.h>
#include <stdlib.h>

int main()
{
    long i;
    scanf("%ld",&i);
    long n[i],r[i];
    long x,y,c=0;
    for(x=0;x<i;x++)
    {
        scanf("%ld %ld",&n[x],&r[x]);
    }
    for(x=0;x<i;x++)
        for(y=x+1;y<i;y++)
         {
           if(n[x]==n[y])
              c++;
           if(c>1)
           {
               printf("NO\n");
                return 0;
           }
         }
    printf("YES\n");
    return 0;
}
