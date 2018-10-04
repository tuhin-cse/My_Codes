#include <iostream>

using namespace std;

int main()
{
    int t,m=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        if(i==0)
        {
            m+=a;
            continue;
        }
        while(a<=m)
        {
            a+=b;
        }
        m=a;


    }
    cout<<m<<endl;
    return 0;
}
