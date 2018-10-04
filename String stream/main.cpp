#include <bits/stdc++.h>

using namespace std;

void solve(string s)
{
    stringstream sss(s);
    int h,m,ss,v=0;
    char c;
    sss >> h >> c >> m >> c >> ss ;
    while(sss >> v);
    cout << h << " " << m << " " << ss <<  " " << v ;
}

int main()
{
    string s;
    while(getline(cin,s))
    {
        solve(s);
    }
    return 0;
}
