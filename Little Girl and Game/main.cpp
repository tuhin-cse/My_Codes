#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s ;
    cin >> s;

    string ss=s;
    reverse(ss.begin(),ss.end());

    if(ss==s)
    {
        cout << "First" << endl;
        return 0;
    }

    int a['{']={0};int z=0,tz=1;
    for(int i=0;i<s.size();i++)
        a[s[i]]++;
    for(int i=0;i<s.size();i++)
    {
        if( a[s[i]]%2==1)
            z+=a[s[i]];
        if(( a[s[i-1]]%2==1 ) && ( a[s[i]]%2==0))
            {
                 z-=tz; tz=0;
            }
    }


    z%2==0 ? cout << "First" << endl : cout << "Second" << endl ;
    return 0;
}
