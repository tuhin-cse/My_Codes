#include <iostream>

using namespace std;

int main()
{
    int t,ca=0;cin>>t;

    while(t--)
    {
        long a,s=0;cin>>a;
        s=a;
        do
        {
            int ss=0;
            while(s)
            {
                int x=s%10;ss+=(x*x);s/=10;
            }
            s=ss;
        }while(s>9);
        if(s==1)
            cout<<"Case #"<<++ca<<": "<<a<<" is a Happy number."<<endl;
        else
            cout<<"Case #"<<++ca<<": "<<a<<" is an Unhappy number."<<endl;
    }
    return 0;
}
