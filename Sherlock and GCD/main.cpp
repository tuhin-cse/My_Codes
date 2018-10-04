#include <bits/stdc++.h>

using namespace std;

void solve(int a[],int n)
{
    sort(a,a+n);
    for(int i=0;i<n;i++)
    int gcd=a[0];
    for(int i=1;i<n;i++)
    {
         gcd=__gcd(gcd,a[i]);
    }
    gcd==1 ? cout << "YES" << endl:
             cout <<  "NO" << endl;
}

int main()
{
    int t , n;
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        solve(a,n);

    }
    return 0;
}
