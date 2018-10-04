#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,ts="";
    cin >> s;
    for(int i=0;i<s.size();i++)
        if(s[i]!='+')
          ts+=s[i];
    sort(ts.begin(),ts.end());
    for(int i=0;i<ts.size()-1;i++)
        cout << ts[i] << "+" ;
    cout << ts[ts.size()-1] << endl;
    return 0;
}
