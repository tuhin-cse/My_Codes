#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3],i=0,t;
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2];
         sort(a,a+3);
        cout<<"Case "<<++i<<": "<<a[1]<<endl;
    }
    return 0;
}
