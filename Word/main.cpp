#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=0,u=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            u++;
        else
            l++;
    }
    if(u>l)
    {
        for(int i=0;i<s.size();i++)
            if(s[i]>'Z')
                s[i]=toupper(s[i]);
    }
    else
     for(int i=0;i<s.size();i++)
            if(s[i]<'a')
                s[i]=tolower(s[i]);

    cout<<s<<endl;
    return 0;
}
