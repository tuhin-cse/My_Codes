#include <bits/stdc++.h>

using namespace std;

bool divisable(string s ,int r)
{
    int a,b,x,gcd;
    stringstream sin(s);
    sin >> a >> b ;
    a-=r;
    b-=r;
    gcd=__gcd(a,b);
    if(gcd<2)
       return false;
    while(sin >> x)
    {
        if(x==0)
            break;
        if((x-r)%gcd!=0)
            return false;
    }
    cout << gcd << endl;
    return true;
}

void solve(string s)
{
    for(int i=0; ;i++)
    {
        if(divisable(s,i))
            break;
    }
}
int main()
{
    string s;
    while(getline(cin , s))
    {
        if(s=="0")
            break;
        solve(s);
    }
    return 0;
}
