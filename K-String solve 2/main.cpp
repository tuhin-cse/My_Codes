#include <iostream>

using namespace std;

int main()
{
    int k,a['{']={0};
    cin>>k;
    string s;
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
    {
        a[s[i]]++;
    }
    for(char c='a';c<='z';c++)
    {
        if(a[c]%k)
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    for(int i=0;i<k;i++)
    {
        for(char c='a';c<='z';c++)
        {
            for(int j=0;j<a[c]/k;j++)
                cout<<c;
        }
    }
    cout<<"\n";
}
