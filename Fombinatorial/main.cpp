#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,mod,n,q,r,nr;
    cin >> t ;
    while(t--)
    {
        cin >> n >> mod >> q;
        while(q--)
        {
            int p=1;
            cin >> r ;
            nr=n-r;
            if(nr>r)
                swap(nr,r);
            for(int i=r+1;i<=n;i++)
                p*=i;
            for(int j=2;j<=nr;j++)
                p/=j;
            cout << p%mod << endl;
        }
    }
    return 0;
}
