#include <bits/stdc++.h>

using namespace std;

int knapsack(vector<int> b,vector<int> w,int mw)
{
    int a[b.size()+1][mw+1];

    for(int i=0;i<=b.size();i++)
        a[i][0]=0;

    for(int i=0;i<=mw;i++)
        a[0][i]=0;

    for(int i=1;i<=b.size();i++)
    {
        for(int j=1;j<=mw;j++)
        {
            if(j>=w[i-1])
            {
                if(b[i-1]+a[i-1][j-w[i-1]]>a[i-1][j])
                      a[i][j]=b[i-1]+a[i-1][j-w[i-1]];
                else
                    a[i][j]=a[i-1][j];
            }
            else
                 a[i][j]=a[i-1][j];
        }
    }

    for(int i=0;i<=mw;i++)
    {
        for(int j=0;j<=b.size();j++)
            cout << a[j][i] << " ";
        cout << endl;
    }
    vector<int> v;
    for(int i=b.size();i>0;i--)
    {
        for(int j=mw;j>0;j--)
        {
            if(a[i-1][j-w[i-1]]+b[i-1]==a[i][j])
            {
                v.push_back(i-1);
                i--;
                j-=w[i];
            }
            else
                i--;
        }
    }
    for(int i=v.size()-1;i>=0;i--)
        cout << "("<< w[v[i]] <<"," << b[v[i]] << ") ";
}

int main()
{
    int n,x,y,mw;
    cin >> n >> mw;
    vector<int> w,b;
    for(int i=0;i<n;i++)
    {
        cin >> x >> y;
        w.push_back(x);
        b.push_back(y);

    }
    knapsack(b,w,mw);

    return 0;
}
