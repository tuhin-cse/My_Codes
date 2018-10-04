#include <bits/stdc++.h>

using namespace std;
int a[1001][1001];

void pascel()
{
    long long sum;
    for(int i=0;i<=1000;i++)
    {
        a[0][i]=1;
    }
    for(int i=1;i<=1000;i++)
    {
        sum=0;
        for(int j=0;j<=1000;j++)
        {
           sum=(sum+a[i-1][j])%1000000000;
           a[i][j]=sum;
        }
    }
}

int main()
{
    pascel();
    int n,t;
    cin >> t ;
    while(t--)
    {
        cin >> n;
        cout << a[n][0];
        for(int i=n-1,j=1;i>=0;i--,j++)
            cout << " " << a[i][j];
        cout << endl;
    }

    return 0;
}
