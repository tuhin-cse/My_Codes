#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,z,c=1;
    cin >> n ;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cin >> z ;
    sort(a,a+n);
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
        {
            c++;
        }
        else
        {
            if(c==z)
            {
                cout << a[i-1] << endl;
                return 0;
            }
            c=1;
        }
    }
    if(c==z)
        cout << a[n-1] << endl;
    return 0;
}
