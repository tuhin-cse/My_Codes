#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<char> h;
    h.push('o');
    h.push('l');
    h.push('l');
    h.push('e');
    h.push('h');
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
        if(!h.empty())
        {
            if(s[i]==h.top())
                h.pop();
        }
        else
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    h.empty() ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}
