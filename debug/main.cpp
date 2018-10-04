#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,c=1;
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
        max+=a[n-i-1];
    }
    int pos[k];
    cout << max << endl;
    int x=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[n-i-1]==b[j])
                {
                    pos[x]=j+1;
                    x++;
                    break;
                }
        }
    }
    sort(pos,pos+k);
    x=0;
    for(int i=0;i<k-1;i++)
    {
        if(i==0)
          cout << pos[i] << " ";
        else
            cout << pos[i]-pos[i-1] << " ";
         x=pos[i];
    }
     cout << n-x << endl;
    return 0;
}
