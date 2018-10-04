#include <bits/stdc++.h>

using namespace std;

long long sopd(long long  n)
{
    long long  sqrtn=sqrt(n),sum=1;
    for(long long  i=2;i<sqrtn;i++)
    {
        if(n%i==0)
        {
            sum+=i;
            sum+=(n/i);
        }
    }
    if(n%sqrtn==0 && sqrtn!=1)
    {
        if(sqrtn*sqrtn==n)
            sum+=sqrtn;
        else
        {
            sum+=sqrtn;
            sum+=(n/sqrtn);
        }
    }
    return sum;
}

int main()
{
    long long  n ,t;
    cin >> t ;
    while (t--)
    {
        cin >> n ;
        cout << sopd(n) << endl;
    }

    return 0;
}
