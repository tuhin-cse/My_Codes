#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; int n;
    cin >> n >> s;
    while(true)
    {
        int f=0;
        for(int i=1;i<n;i++)
        {
          if((s[i]== 'a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u' || s[i]== 'y' ) &&
              (s[i-1]== 'a' || s[i-1]== 'e' || s[i-1]== 'i' || s[i-1]== 'o' || s[i-1]== 'u' || s[i-1]== 'y' ))
              {
                  string s1=s.substr(0,i);
                  string s2=s.substr(i+1,s.size());
                  s=s1+s2;
                  f=1;n--;
              }
        }
        if(f==0)
            break;
    }
    cout << s << endl;
    return 0;
}
