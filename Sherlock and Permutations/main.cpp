#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n,m,nm,mod = 1000000007;
    int r,gcd;
    cin >> t ;
    while(t--)
    {
        nm=1;
        cin >> n >> m;
        m--;
        if(m<n)
            swap(m,n);
        int a[n];
        for(int i=0;i<n;i++)
            a[i]=i+1;
        for(int i=m+1;i<=m+n;i++)
        {
            r=i;
            for(int j=0;j<n;j++)
            {
               gcd= __gcd(r,a[j]);
               while(gcd>1)
               {
                   r/=gcd;
                   a[j]/=gcd;
                   gcd= __gcd(r,a[j]);
               }
            }

            nm=(nm*r)%mod;
        }

        cout << nm%mod << endl;

    }
    return 0;
}
