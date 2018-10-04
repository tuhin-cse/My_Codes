#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,ss="";
    cin >> s ;
    for(int i=0;i<s.size();i++)
    {
        ss+=s[i];
        ss=to_string(stoi(ss)%4);
    }
    ss == "0" ? cout << "4" << endl : cout << "0" << endl;
    return 0;
}
