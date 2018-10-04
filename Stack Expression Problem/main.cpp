#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack <int> num;
    stack <char> ch;
    string s; getline(cin , s);
    for(int i=0;i<s.size();i++)
    {

        if(s[i]>= '0' && s[i] <= '9')
        {
            string ts="";
            while(s[i]>='0' && s[i] <= '9')
            {
                ts+=s[i];
                i++;
            }
            i--;
            int x=stoi(ts);
            num.push(x);
            if(!ch.empty())
            {
                if(ch.top()=='*' || ch.top()=='/')
                {
                int a=num.top(); num.pop();
                int b=num.top(); num.pop();
                ch.top() == '/' ? b=b/a : b=a*b ;
                num.push(b); ch.pop();
                }
                else if(ch.top()=='-')
                {
                    int a=num.top(); num.pop();
                    a=a*(-1); num.push(a);
                    ch.pop() ; ch.push('+');
                }
            }
        }
        else if(s[i]=='[' || s[i]=='{' || s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
        {
              if((s[i]=='[' || s[i]=='{' || s[i]=='(' )&&i>0)
                    {
                        if(s[i-1]>='0' && s[i-1] <= '9')
                         ch.push('*');
                    }
             ch.push(s[i]);
        }
        else if(s[i]==']' || s[i]=='}' || s[i]==')')
        {
            while(ch.top()!='[' && ch.top()!='{' && ch.top()!='(')
            {
                int a=num.top(); num.pop();
                int b=num.top(); num.pop();
                if(ch.top()=='*' || ch.top()== '/')
                {
                    ch.top()=='/' ? b=b/a : b=b*a;
                    num.push(b);ch.pop();
                }
               else if(ch.top()=='+' || ch.top()== '-')
                {
                    ch.top()=='-' ? b=b-a : b=b+a;
                    num.push(b);ch.pop();
                }
            }
            ch.pop();
        }
    }
    while(!ch.empty())
     {
       int a=num.top(); num.pop();
       int b=num.top(); num.pop();
        if(ch.top()=='*' || ch.top()== '/')
        {
        ch.top()=='/' ? b=b/a : b=b*a;
        num.push(b);ch.pop();
        }
        else if(ch.top()=='+' || ch.top()== '-')
        {
        ch.top()=='-' ? b=b-a : b=b+a;
        num.push(b);ch.pop();
        }
    }
    cout << num.top() << endl;
    return 0;
}
