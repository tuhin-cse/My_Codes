#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n ;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int m;cin >> m;
    int b[m];
    for(int i=0;i<m;i++)
        cin >> b[i];
    int r[1001]={0};
    int high =0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        if(b[j]%a[i]==0)
            {
                    int z=b[j]/a[i];
                    r[z]++;
                    if(z>high)
                        high = z;
            }
        }
    }
    cout << r[high] << endl;
    return 0;
}
