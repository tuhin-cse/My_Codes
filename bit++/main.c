#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int i,l,x=0;
    char a[3];
    scanf("%d",&l);
    for(i=0;i<l;i++)
      {
          scanf("%s", &a);


    if((a[0] == '+' && a[1] == '+' && a[2] == 'X') || (a[0] == 'X' && a[1] == '+' && a[2] == '+'))
    {
        x++;
    }
    else x--;

      }
     printf("%d",x);


    return 0;
}
