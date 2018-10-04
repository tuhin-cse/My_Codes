#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t,c=0;
    string s;
    stack<char> st;

    cin >> t;
    while(t--)
    {
      vector<int> v;
      cin >> s;
      int sq=0;
      for(int i=s.size()-1;i>=0;i--)
      {
        if(s[i]== '>' || s[i]== ')' || s[i]== '}' || s[i]== ']'  )
        {
            char c=s[i];
            st.push(c);
        }
        else
            {
            if(!st.empty())
                {
                 if(s[i]=='<' && st.top()=='>')
                    {
                    sq+=2;
                    st.pop();
                    }
                    else if(s[i]=='(' && st.top()==')')
                    {
                      sq+=2;
                      st.pop();
                    }
                    else if(s[i]=='{' && st.top()=='}')
                    {
                      sq+=2;
                      st.pop();
                    }
                    else if(s[i]=='[' && st.top()==']')
                    {
                    sq+=2;
                    st.pop();
                     }
                    else
                    {
                      sq=0;
                      while(st.empty()!=true)
                            st.pop();
                    }
                   }
                  else
                  {
                     sq=0;
                  }
                }
            if(!st.empty())
                v.push_back(0);
            else
               v.push_back(sq);
            if(st.empty())
                sq=0;
        }
        cout << "Case " << ++c << ":" << endl;
        for(int i=v.size()-1;i>=0;i--)
           cout << v[i] << endl;
    }
    return 0;
}
