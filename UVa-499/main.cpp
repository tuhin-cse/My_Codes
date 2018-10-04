#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    string a;
    while(getline(cin,a))
    {
        int c['{']={0};
        int f=0;
        for(int i=0;i<a.size();i++)
        {
            c[a[i]]++;
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

