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
    int n,t,r;
    cin >> t ;
    while(t--)
    {
        cin >> n >> r;
        cout << a[n-1][r] << endl;;

    }

    return 0;
}
