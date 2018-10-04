#include <stdio.h>
#include <stdlib.h>
#include<string.h>
//Codeforces-236A
int main()
{
    char a[100];
    scanf("%s",&a);
    if(strlen(a)%2==0)
      printf("CHAT WITH HER");
    else
      printf("IGNORE HIM");
    return 0;
}
