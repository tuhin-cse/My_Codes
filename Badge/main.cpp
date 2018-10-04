#include <iostream>

using namespace std;

int second(int a[],int n,int x)
{
    int z[n]={0};
    int zz;
    z[x]++;
    while(z[x]<2)
    {
        x=a[x];
        z[x]++;
    }
    return x;
}

int main()
{
    int n;
    cin >> n ;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
     for(int i=1;i<n;i++)
        cout << second(a,n+1,i) << " ";
     cout << second(a,n+1,n);
    return 0;
}
