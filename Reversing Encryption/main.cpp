#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    string s,subs1,subs2;
    cin >> n >> s;

    //cout << s << endl;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            subs1=s.substr(0,i);
            subs2=s.substr(i,s.size());
           // cout << subs1 << "  " << subs2 << endl;
            reverse(subs1.begin(),subs1.end());
            s="";
            s+=subs1;
            s+=subs2;
        }
    }
    reverse(s.begin(),s.end());
    cout << s << endl;
    return 0;
}
