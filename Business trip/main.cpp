#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,m[12];
    cin >> k;
    for(int i=0;i<12;i++)
        cin >> m[i];

    sort(m,m+12);
    int s=0;
    for(int i=11;i>=0;i--)
    {
        if(k<=s)
        {
            cout << 11-i << endl;
            return 0;
        }
        s+=m[i];
    }
    s>=k ? cout << "12" << endl : cout << "-1" << endl;
    return 0;
}
