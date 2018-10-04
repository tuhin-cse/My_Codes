#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    int i,f=0;
    scanf("%s",&a);
    if(a[0]>='A'&&a[0]<='Z')
      {
       for(i=1;a[i]!='\0';i++)
         if(a[i]>='a'&&a[i]<='z')
             f=1;
      if(f==1)
          puts(a);
      else
      {
      for(i=0;a[i]!='\0';i++)
        a[i]=tolower(a[i]);
      puts(a);
      }
      }
    else
    {
      for(i=1;a[i]!='\0';i++)
         if(a[i]>='a'&&a[i]<='z')
             f=1;
      if(f==1)
         puts(a);
      else
        {
        a[0]=toupper(a[0]);
        for(i=1;a[i]!='\0';i++)
              a[i]=tolower(a[i]);
        puts(a);

        }
    }
    return 0;
}
