#include <iostream>

using namespace std;

int main()
{
    unsigned long long a,s,o;
    while(cin>>a)
    {
        s=0;
        long long x=(a+1)/2;
        x=((x*x)*2)-1;
        s=x+x+x-6;
       cout<<s<<endl;
    }
    return 0;
}
