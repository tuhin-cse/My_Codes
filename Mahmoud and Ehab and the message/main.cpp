#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,m,x,z;
    cin >> n >> k >> m ;
    string s[n],mm;
    int c[n],sum=0;
    for(int i=0;i<n;i++)
        cin >> s[i];
    for(int i=0;i<n;i++)
        cin >> c[i];
    for(int i=0;i<k;i++)
    {
        cin >> x;
        int a[x],b[x];
        for(int i=0;i<x;i++)
        {
            cin >> a[i];
            a[i]--;
            b[i]=c[a[i]];
        }
        sort(b,b+x);
        for(int i=0;i<x;i++)
            c[a[i]]=b[0];
    }
    for(int i=0;i<m;i++)
    {
        cin >> mm;
        for(int j=0;j<n;j++)
        {
            if(mm==s[j])
            {
                 sum +=c[j];
                 c[j]=0;
                 break;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
