#include <bits/stdc++.h>

using namespace std;

void solve(long long a,long long x)
{
    long long i,j;
    if(a==0)
    {
        cout << a << endl;
    }
    else
    {
        i=(a/x)*x;
        j=(a/x)*x+x;
        i < j ? cout << i << endl : cout << j << endl;
    }
}

int main()
{
    long long t,a,b,x;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> x ;
        solve(pow(a,b),x);
    }
    return 0;
}
