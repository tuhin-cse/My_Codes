#include <iostream>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
   // cin>>n;
    while(cin>>a)
    {
      long long carry=0;
      string s="1";
      for(int i=1;i<=a;i++)
      {
          for(int j=s.size()-1;j>=0;j--)
          {
              long long x=s[j]-48;
              long long z=((x*i)+carry)%10;
              s[j]=z+48;
              carry=((x*i)+carry)/10;
              if(j==0&&carry!=0)
              {
                  s=to_string(carry)+s;
                  carry=0;
              }
          }
      }
      cout << a << "!" << endl;
      cout << s << endl;
    }
    return 0;
}
