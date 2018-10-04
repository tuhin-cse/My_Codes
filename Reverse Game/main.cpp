#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        n--;
        int z = ceil(n/2.0);
       // cout << z << endl;
        if(k>=z)
        {
            cout << (n-k)*2 << endl;
        }
        else
        {
            cout << 2*k+1 << endl;
        }
    }
}
