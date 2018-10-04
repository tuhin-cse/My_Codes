#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long sum=0,n,a,b,c;
        cin>>n;
        while(n--)
        {
            cin>>a>>b>>c;
            if(b!=0)
              sum+=(a*c);
        }
        cout<<sum<<endl;
    }
    return 0;
}
