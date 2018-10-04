#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string s[t],temp;
    for(int i=0;i<t;i++)
    {
        cin>>s[i];
        getline(cin,temp);
    }
    sort(s,s+t);
    string a=s[0];
    int c=1;
    for(int i=1;i<t;i++)
    {
        if(a!=s[i])
        {
            cout<<a<<" "<<c<<endl;
            a=s[i];
            c=1;
        }
        else
          c++;
    }
    cout<<a<<" "<<c<<endl;
    return 0;
}
