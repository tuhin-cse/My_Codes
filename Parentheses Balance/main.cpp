#include <iostream>
#include <stack>

using namespace std;

int main()
{   int t; cin>>t;  getchar();
    while(t--)
    {
        string s;  int f=0;  stack <char> c;
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {   if(s[i]=='['||s[i]=='(')
            {
                c.push(s[i]);
            }
            else
            {
                if(!c.empty())
                {
                  if(s[i]==')'&&c.top()=='(')
                    c.pop();
                  if(s[i]==']'&&c.top()=='[')
                    c.pop();
                }
                else
                {
                   cout << "No" << endl; f=1;  break;
                }
            }
        }
        if(f==1)
            continue;
        c.empty()?cout << "Yes" << endl : cout << "No" << endl;
    }
    return 0;
}
