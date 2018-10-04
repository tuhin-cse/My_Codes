#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b)
    {
        if(a<0||b<0)
            break;
        c=a-b;
        if(c<0)
            c*=(-1);
        int x=100-c;
        if(x<c)
            c=x;
        cout<<c<<endl;
    }
    return 0;
}
