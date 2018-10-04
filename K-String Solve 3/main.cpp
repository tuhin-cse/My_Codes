#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c;
    int k;
    cin>>k>>a;
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i+=k)
    {
        b+=a[i];
    }
    for(int i=0;i<k;i++)
    {
        c+=b;
    }
    b=c;
    sort(b.begin(),b.end());
    if(a!=b)
        cout<<"-1"<<endl;
    else
        cout<<c<<endl;
}
