#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

bool is_mul(string s,int n)
{
    if(s.size()<18)
    {
        long long zz=(long long)stoll(s);
        if(zz%n==0)
            return true;
        return false;
    }
    string ss="";
    int x,i;
    for( i=0;i<s.size();i++)
    {
        ss+=s[i];
        x=stoi(ss);
        x%=n;
        ss=to_string(x);
    }
    if(x==0)
        return true;
    return false;
}

void solve(int n)
{
    string s="0";
    int i;
    while(true)
    {
       for(i=s.size()-1;i>=0;i--)
       {
        if(s[i]=='0')
        {
             s[i]='9';
             break;
        }
        else if(s[i]=='9')
        {
           while(s[i]=='9')
             {
                s[i]='0';
                if(i>0)
                   i--;
                else
                    break;
             }
            if(i==0)
            {
                s="9"+s;
                break;
            }

            else{
                s[i]='9';
                 break;
            }
        }
      }
      if(is_mul(s,n))
      {
          cout << s << endl;
          break;
      }
    }
}

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        solve(n);
    }
    return 0;
}
