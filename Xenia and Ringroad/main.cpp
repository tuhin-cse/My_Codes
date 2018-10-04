#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m;
    cin >> n >> m;
    long long a[m];
    for(int i=0;i<m;i++)
        cin >> a[i];
    long long step=0,z=1;
    for(int i=0;i<m;i++)
    {
        if(z>a[i])
        {
            step+=((n-z)+a[i]);
            z=a[i];
        }
        else
          {
              step+=(a[i]-z);
              z=a[i];
          }
    }
    cout << step << endl;
    return 0;
}
