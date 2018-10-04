#include <iostream>

using namespace std;

int main()
{
    int n;cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        if (s=="1"||s=="4"|| s== "78")
            cout << "+" << endl;
        else if(s[s.size()-2]=='3'&&s[s.size()-1]=='5')
            cout << "-" << endl;
        else if(s[0]=='9' &&s[s.size()-1]=='4')
            cout << "*" << endl;
        else
            cout << "?" << endl;
    }
    return 0;
}
