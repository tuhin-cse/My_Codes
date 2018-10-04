#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin >> n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
    }
    sort(s,s+n);
    int high=0,c=0;
    string r=s[0];
    for(int i=1;i<n;i++)
    {
        if(s[i-1]==s[i])
        {
           c++;
           if(c>high)
            {
                high = c;
                r = s[i-1];
            }
        }
         else
            c=0;

    }
    cout << r << endl;
}
