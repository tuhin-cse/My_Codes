#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[20000],b;
    int i,j=1;
    gets(a);
    b=a[0];
    for(i=1;a[i]!='\0';i++)
     {
       if(a[i]==b)
         {
           j++;
         }
       else
         {
           b=a[i];
           j=1;
         }
         if(j>6)
             break;
     }
     if(j>6)
        printf("YES");
    else
      printf("NO");
    return 0;
}
