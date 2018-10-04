#include <iostream>

using namespace std;

int main()
{
    string s;long t,sum=0,p;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s=="donate")
        {
            cin>>p;
            sum+=p;
        }
        else if(s=="report")
            cout<<sum<<endl;
    }
    return 0;
}
