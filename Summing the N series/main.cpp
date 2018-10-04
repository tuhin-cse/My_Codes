#include <bits/stdc++.h>

using namespace std;

void solve(long long n)
{
    long long mod=pow(10,9)+7;
    n%=mod;
    cout << (n*n)%mod << endl;
}

int main()
{
    long long t,n;

    cin >> t;
    while(t--)
    {
        cin >> n ;
        solve(n);
    }
}
