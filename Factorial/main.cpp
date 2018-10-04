#include <iostream>

using namespace std;

int solve(long long n)
{
    long long c2=0,c5=0;
    for(long long i=2;i<=n;i*=2)
        c2+=(n/i);
    for(long long i=5;i<=n;i*=5)
        c5+=(n/i);
    return min(c2,c5);
}

int main()
{
    long long t,n;
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        cout << solve(n) << endl;

    }
    return 0;
}
