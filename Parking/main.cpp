#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;cin >> t;
    while(t--)
    {
        int l;cin >> l ;
        int a[l];
        for(int i=0;i<l;i++)
            cin>> a[i];
        sort(a,a+l);
        cout << (a[l-1]-a[0])*2 << endl;
    }
    return 0;
}
