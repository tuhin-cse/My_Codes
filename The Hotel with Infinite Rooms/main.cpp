#include <iostream>

using namespace std;

int main()
{

    long long a,d;
    while(cin>>a>>d)
    {
        for(long long i=a; ;i++)
        {
            d-=i;
            if(d<=0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
