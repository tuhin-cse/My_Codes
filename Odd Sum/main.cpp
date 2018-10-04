#include <iostream>

using namespace std;

int main()
{
    int t,i=0;
    cin>>t;
    while(t--)
    {
        int a,b,sum=0;
        cin>>a>>b;
        if(!(a&1))
            a++;
        for(int m=a;m<=b;m+=2)
        {
            sum+=m;
        }

        cout<<"Case "<<++i<<": "<<sum<<endl;
    }
    return 0;
}
