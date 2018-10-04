#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;cin>>s;

        int a['{']={0};

        for(int i=0;i<s.size();i++)
        {
            a[s[i]]++;
        }
        if((a['o']>0&&a['n']>0)||(a['o']>0&&a['e']>0)||(a['e']>0&&a['n']>0))
        {
            cout<<"1"<<endl;
        }
        else if((a['t']>0&&a['w']>0)||(a['o']>0&&a['t']>0)||(a['w']>0&&a['o']>0))
        {
            cout<<"2"<<endl;
        }
        else
         cout<<"3"<<endl;
   }
    return 0;
}
