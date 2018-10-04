#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[26],b[26],c[1000];
    scanf("%s %s %s",&a,&b,&c);
    int i,j,k,f;
    for(i=0;c[i]!='\0';i++)
       {
        f=0;
        if(c[i]>='A'&&c[i]<='Z')
          {
           c[i]=tolower(c[i]);
           f=1;
          }
          for(j=0;j<26;j++)
             if(c[i]==a[j])
                 {
                  c[i]=b[j];
                  break;
                 }
         if(f==1)
         {
          c[i]=toupper(c[i]);
         }
         printf("%c",c[i]);
       }
    return 0;
}
