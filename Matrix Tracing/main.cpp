#include <bits/stdc++.h>

using namespace std;
long long fac[1000010];

void factorial(long long n, long long p)
{
    fac[0] = 1;
    for (long long i=1 ; i<=n; i++)
        fac[i] = fac[i-1]*i%p;
}

long long power(long long x, long long y, long long p)
{
    long long res = 1;

    x = x % p;

    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

long long modInverse(long long n, long long p)
{
    return power(n, p-2, p);
}
long long nCrModPFermat(long long n, long long r, long long p)
{

   if (r==0)
      return 1;
    return (fac[n]* modInverse(fac[r], p) % p *
            modInverse(fac[n-r], p) % p) % p;
}
int main()
{
    long long t,n,m,nm,mod = 1000000007;
    factorial(1000000,mod);
    long long r,gcd;
    cin >> t ;
    while(t--)
    {
        nm=1;
        cin >> n >> m;
        if(n>m)
            swap(n,m);
        n=(n-2)+m;
        m--;

        cout << nCrModPFermat(n,m,mod) << endl;

    }
    return 0;
}
