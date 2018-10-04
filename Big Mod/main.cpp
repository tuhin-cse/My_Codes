#include <bits/stdc++.h>

using namespace std;

int bigmod(long long a,long long b,int m)
{
    long long p=1;
    while(b)
    {
        if(b%2==1)
            p=(p*a)%m;
        a=(a*a)%m;
        b/=2;
    }
    return p;
}

int main()
{

    long long a,b,m;
    while(cin >> a >> b >> m)
        cout << bigmod(a,b,m);
    return 0;
}
