#include <iostream>

using namespace std;

int main()
{
    long long a,b,i;
    while(cin>>a>>b && a>0 && b>0)
    {
        int c=0;
        for(i=1;i*i<=b;i++)
        {
            if(i*i>=a)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
