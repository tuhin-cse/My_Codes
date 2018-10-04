#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[200];
    gets(a);
    int i,m=0,c=0;
    for(i=0;a[i]!='\0';i++)
      {
        if((a[i]>='A'&&a[i]<='z')||(a[i]>='1'&&a[i]<='9'))
                c=1;
        if(c==1)
        {
        if(a[i-1]==' '&&a[i]==' ')
             continue;
        if(a[i]==' ')
          m++;
        if(((a[i]>='A'&&a[i]<='z')||a[i]>='0'&&a[i]<='9')&&a[i+1]=='\0')
          m++;
        }
      }
    printf("%d",m);
    return 0;
}
