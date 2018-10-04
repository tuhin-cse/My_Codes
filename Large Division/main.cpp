#include <bits/stdc++.h>

using namespace std;

bool devide(string s,long long d)
{
    int carry,c=1;
    string ss="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
        ss+=s[i];
        stringstream sin(ss);
        sin >> carry ;
        carry = carry % d;
        ostringstream in;
        in << carry;
        ss= in.str();
        }
    }
    if(carry==0)
        return true;
    return false;
}

int main()
{
    long long t,d,c=0;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> s >> d ;
       // cout << s.size() << endl;
        if(devide(s,d))
            cout << "Case " << ++c << ": divisible" << endl;
        else
            cout << "Case " << ++c << ": not divisible" << endl;
    }
    return 0;
}
