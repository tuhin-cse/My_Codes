#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    gets(a);
    int i;
    for(i=0;a[i]!='\0';i++)
      {
       if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')
          continue;
       else
       {
        a[i]=tolower(a[i]);
        printf(".%c",a[i]);

       }



      }
    return 0;
}
