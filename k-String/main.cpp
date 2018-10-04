#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int k,ck['{']={0};


    char a[1005],temp[1005];
    scanf("%d %s",&k,&a);
    int i;
    for( i=0;a[i]!='\0';i++)
    {
        char c=a[i];
        ck[c]++;
    }
    int l1=i;
    int minimum=10000;
    for(char m='a';m<='z';m++)
    {
        if(ck[m]==0)
            continue;
        if(ck[m]<k)
        {
            printf("-1\n");
            return 0;
        }
        if(ck[m]<minimum)
            minimum=ck[m];
    }

    for(char m='a';m<='z';m++)
    {
        int f=ck[m]%k;
        if(f!=0)
        {
            f=ck[m]%minimum;
            if(f!=0)
            {
            printf("-1\n");
            return 0;
            }
        }
        f=ck[m]/k;
        ck[m]=(int)f;
    }
    int cn=0;
    for(char m='a';m<='z';m++)
    {
        for(int n=1;n<=ck[m];n++)
        {
            temp[cn]=m;
            cn++;
        }
    }
    temp[cn]='\0';
    k=l1/cn;
    while(k--)
        printf("%s",temp);
    printf("\n");

    return 0;
}
