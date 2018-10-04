#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s,n;cin >> s >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    int min=999999,z;
    for(int i=0;i<=(n-s);i++)
    {
        z=a[s+i-1]-a[i];
        if(z<min)
            min=z;
    }
    cout << min << endl;
    return 0;
}
