#include <iostream>

using namespace std;

int main()
{
    int t,c=0;cin>>t;
    while(t--)
    {
        string s[10];int a[10],l=0;
        for(int i=0;i<10;i++)
        {
            cin>>s[i]>>a[i];
            if(a[i]>l)
                l=a[i];
        }
        cout<<"Case #" << ++c <<":" << endl;
        for(int i=0;i<10;i++)
            if(a[i]==l)
              cout<<s[i]<<endl;
    }
    return 0;
}
