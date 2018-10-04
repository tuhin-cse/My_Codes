#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,c=0;
    cin >> n >> k;
    int a[n],b[n],max=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    for(int i=0;i<k;i++)
    {
        max+=a[i];
    }
    cout << max << endl;
    int x=0;
    for(int i=0;i<k-1;i++)
    {
        for( ;x<n;x++)
        {
            for(int j=0;j<k;j++)
            {
                if(b[x]==a[i])
                    cout << x << " ";
            }
        }
    }
    cout << n-x ;
    return 0;
}
