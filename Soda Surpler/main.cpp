#include <iostream>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b,c,cn=0;
        cin>>a>>b>>c;
        int s=a+b;
        while(s>=c)
        {
            s-=c;
            s++;
            cn++;
        }
        cout<< cn<<endl;
    }
    return 0;
}
