#include <iostream>
#incluse<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int c['{']={0};
    char a[1000];
    while(gets(a))
    {
        int f=0;
        for(int i=0;a[i]!=' ';i++)
        {
            c[a[i]++;
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
