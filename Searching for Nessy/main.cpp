#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        x=(int)x/3;
        y=(int)y/3;

        int c=x*y;
        cout<<c<<endl;
    }
    return 0;
}
