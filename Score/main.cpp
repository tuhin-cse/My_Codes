#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;cin>>s;

        int x=0,sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='O')
            {
                x++;
                sum+=x;
            }
            if(s[i]=='X')
                x=0;
        }
        cout<<sum<<endl;
    }
    return 0;
}
