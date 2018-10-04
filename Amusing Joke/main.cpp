#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2,s3; int a['{']={0} ,b['{']={0};

    getline(cin , s1);
    for(int j=0;j<s1.size();j++)
    {
            a[s1[j]]++;
    }
    getline(cin , s2);
    for(int j=0;j<s2.size();j++)
    {
            a[s2[j]]++;
    }
    getline(cin , s3);
    for(int j=0;j<s3.size();j++)
    {
            b[s3[j]]++;
    }
    for(char c='A';c<='Z';c++)
        if(a[c]!=b[c])
         {
              cout << "NO" << endl;
               return 0;
         }

    cout << "YES" << endl;
    return 0;
}
