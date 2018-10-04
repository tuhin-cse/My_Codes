#include <iostream>

using namespace std;

bool voel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' )
        return true;
    return false;
}

int main()
{
    string s;
    cin >> s ;
    for(int i=0;i<s.size()-1;i++)
    {
        if(!voel(s[i]) && !(voel(s[i+1])))
        {
            cout << "NO" << endl;
            return 0;

        }

    }
    cout << "YES" << endl;
    return 0;
}
