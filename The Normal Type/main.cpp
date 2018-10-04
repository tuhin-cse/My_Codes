#include <bits/stdc++.h>

using namespace std;

long long fac(int n)
{
    long long res=1;
    for(int i=2;i<=n;i++)
        res*=i;
    return res;
}

int main()
{
    int n ,t=1;
    cout << fac(3);
    cin >> n ;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    long long c=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
            t++;
        else
        {
            c+=fac(t);
            t=1;
        }
    }
    c+=fac(t);
    cout << t << endl;
    return 0;
}
