#include <bits/stdc++.h>

using namespace std;

long long gcdex(int n)
{
    long long s=0;
    for(int i=1;i<=n/2;i++)
    {
        s+=i;
        for(int j=i+i+1;j<=n;j++)
        {
            s+=(2*__gcd(i,j));
        }
    }
    return s;
}

int main()
{
    cout << gcdex(200000);
    return 0;
}
