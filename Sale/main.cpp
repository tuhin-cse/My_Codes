#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    cin >> m >>n ;
    int a[m];
    for(int i=0;i<m;i++)
        cin >> a[i];
    sort (a,a+m);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
            break;
        sum+=a[i];
    }
    sum*=(-1);
    cout << sum << endl;
    return 0;
}
