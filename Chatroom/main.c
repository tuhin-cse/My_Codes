#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j=0,c=0;
    char S[100],h[5]="hello";
    scanf("%s",&S);
    for(i=0;S[i]!='\0';i++)
      if(h[j]==S[i])
          j++;
    if(j==5)
      printf("YES");
    else
      printf("NO");
    return 0;
}
