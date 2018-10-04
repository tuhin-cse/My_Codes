#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int t,s=0,x;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x;
        s+=x;
    }
    double d = (double)s/t;
    cout<<setprecision(12)<<d<<endl;
    return 0;
}
