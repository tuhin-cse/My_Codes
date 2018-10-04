#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[100],temp;
    scanf("%s",&a);
    int i,j,k;
    k=strlen(a);
    for (i=0;i<(k-2);i+=2)
    {
      for(j=2+i;j<k;j+=2)
        {
          if(a[i]>a[j])
           {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
           }
        }

    }
    puts(a);
    return 0;
}
