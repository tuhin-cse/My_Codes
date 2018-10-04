#include <bits/stdc++.h>

using namespace std;

long long lcmf(long long a,long long b)
{
    return (a/__gcd(a,b))*b;
}

int solve(long long a,long long b,long long l)
{
    long long lcm = lcmf(a,b) ,z,x=1,y=1;
    if(l%lcm==0)
    {
        z=l/lcm;
        if(z==1)
            return z;
        while(a%z==0)
        {
            a/=z;
            x*=z;
        }
        while(b%z==0)
        {
            b/=z;
            y*=z;
        }
        z = z*max(x,y);
        x=z;
        while(true)
        {
          //  cout << z << "  " << lcmf(lcm,z) <<"  "<<l <<endl;
            if(lcmf(lcm,z)==l)
                return z ;
            z+=x;
        }
    }
    return -1;
}

int main()
{
    long long t,a,b,l,c=0;
    cin >> t ;
    while(t--)
    {
        cin >> a >> b >> l;
        l=solve(a,b,l);
        cout << "Case " << ++c << ": ";
        l==-1 ? cout << "impossible" << endl : cout << l << endl ;
    }
    return 0;
}
