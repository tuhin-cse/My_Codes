#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l,i,j,f[500001];
    cin >> l;
    int a[l],p[500001],d[500001];

    for(i=0;i<l;i++)
    {
        cin >> a[i];
        p[a[i]]=-1;
        d[a[i]]=-1;
        f[a[i]]=0;
    }
    for(i=0;i<l;i++)
    {
        if(p[a[i]]==-1)
        {
            p[a[i]]=i;
        }
        else
        {
            j=i-p[a[i]];
            p[a[i]]=j;
            if(d[a[i]]==-1)
                d[a[j]]=j;
            else if(j==d[a[i]])
                f[a[i]]++;
            else if(j!=d[a[i]]  && f[a[i]]<=1)
                d[a[j]]=j;
        }
    }
    sort(a,a+l);
    int c=0;
    for(int i=0;i<l;i++)
    {
        if(a[i]!=a[i+1])
            c++;
        if(d[a[i]]==-1)
            d[a[i]]=0;
    }
    cout << c << endl;
    for(int i=0;i<l;i++)
       if(a[i]!=a[i+1])
        {
          cout << a[i] << " " << d[a[i]] << endl;
        }

    return 0;
}
