#include <iostream>

using namespace std;

int main()
{
    int k,l,m,n,x;
    cin>>k>>l>>m>>x>>n;
    int a[n+1]={0};
    for(int i=k;i<=n;i+=k)
    {
        a[i]=1;
    }

    for(int i=l;i<=n;i+=l)
    {
        a[i]=1;
    }
    for(int i=m;i<=n;i+=m)
    {
        a[i]=1;
    }
    for(int i=x;i<=n;i+=x)
    {
        a[i]=1;
    }
    int d=0;
    for(int i=1;i<=n;i++)
        d+=a[i];

    cout<<d<<endl;
    return 0;
}
