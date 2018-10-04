#include<stdio.h>
#include<string.h>
main()
{
    char a[10][100],temp[100];      /*declaring ten string data
                                       type in a matrix array*/
    int i,j;
    for(i=0;i<10;i++)               /*taking ten string as input
                                   without spaces*/
    {
      scanf("%s[^\n]",&a[i]);
    }
    for(i=0;i<10;i++)
            {
                for(j=i+1;j<10;j++)        /*sorting   strings in order to
                                          first characters of the strings*/
                {
                    if(strcmp(a[i],a[j])>0)
                    {
                        strcpy(temp,a[i]);    //Exchangeing strings if condition works
                        strcpy(a[i],a[j]);
                        strcpy(a[j],temp);
                    }
                }
        }
    printf("\nIn lexicografical order: ");
    for(i=0;i<10;i++)                     //printing by order
    {
         puts(a[i]);
    }
}
