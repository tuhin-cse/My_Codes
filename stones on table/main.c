#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,i,c=0;
    scanf("%d",&l);
    char a[l],temp;
    scanf("%s",&a);
    temp=a[0];
    for(i=1;a[i]!='\0';i++)
      {
        if(temp==a[i])
            c++;
        temp=a[i];
      }
    printf("%d",c);
    return 0;
}
