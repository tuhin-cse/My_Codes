#include <iostream>
#include <stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char a[1000];
    while(gets(a))
    {
        int c['{']={0};
        int f=0;
        for(int i=0;a[i]!='\0';i++)
        {
            char z=a[i];
            c[z]++;
        }
        for(char m='A';m<='z';m++)
            {
                if(f<c[m])
                    f=c[m];
            }
        for(char m='A';m<='z';m++)
        {
            if(f==c[m])
                cout<<m;
        }
        cout<<" "<<f<<endl;

    }
}
