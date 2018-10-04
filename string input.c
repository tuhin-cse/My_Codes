#include<stdio.h>
main()
{
    char a[20],i;
    scanf("%s",&a);
    for(i=0;a[i]<='\0';i++);
    {
        printf("%c",a[i]);
    }
}
