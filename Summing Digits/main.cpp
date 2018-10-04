#include <iostream>

using namespace std;

int main()
{
    long long a;
    while(cin>>a)
    {
        int sum;
        if(a==0)
            break;
        while(a>9)
        {
            sum=0;
            while(a)
            {
                int z=a%10;
                sum+=z;
                a/=10;
            }
            a=sum;
        }
        cout<<a<<endl;
    }
    return 0;
}
