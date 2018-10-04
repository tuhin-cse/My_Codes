#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        int c=0;
        cin >> n ;
        if(n%2==0)
            c=1;
        for(long long i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                if(i%2==0)
                    c++;
                if((i*i)!=n && (n/i)%2==0)
                    c++;
            }
        }
        cout << c << endl;
    }
}
