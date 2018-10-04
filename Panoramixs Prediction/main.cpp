#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    bool a[1000];
    memset(a,true,sizeof(a));
    a[0]=a[1]=false;
    for(int i=2;i*i<=100;i++)
    {
        for(int j=i*i;j<1000;j+=i)
        {
           a[j]=false;
        }
    }
    int n,m;
    cin>>n>>m;
    if(a[n]==true&&a[m]==true)
    {
        for(int i=n+1;i<m;i++)
        {
            if(a[i]==true)
            {
                cout<<"NO"<<endl;
                return 0;
            }

        }
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;

    return 0;
}
