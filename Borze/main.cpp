#include <iostream>

using namespace std;

int main()
{
    string s,n="";
    cin>>s;
    for(int i=0;i<s.size(); )
    {
        if(s[i]=='.')
        {
            n+='0';
            i++;

        }
        else if(s[i]=='-'&&s[i+1]=='.')
        {
            n+='1';
            i+=2;
        }
        else if(s[i]=='-'&&s[i+1]=='-')
        {
            n+='2';
            i+=2;
        }
    }
    cout<<n<<endl;
    return 0;
}
