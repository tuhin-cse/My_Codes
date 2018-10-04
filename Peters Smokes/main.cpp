#include <iostream>

using namespace std;

int main()
{
    long t,k;
    while(cin>>t>>k)
    {
        long x=0;
        while(t>=k)
        {
            t-=k;++t;x+=k;
        }
        x+=t;
        cout<<x<<endl;
    }
    return 0;
}
