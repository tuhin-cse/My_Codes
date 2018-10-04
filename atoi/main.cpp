#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=0,c=1;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='-')
        {
            l*=-1;
            break;
        }
        if(s[i]=='+')
            break;
        l+=(s[i]-48)*c;
        c*=10;
    }
    cout << l << endl;
    return 0;
}
