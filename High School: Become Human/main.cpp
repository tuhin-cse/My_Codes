#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b;
    cin >> a >> b;

   // cout << pow(a,b) << " " << pow(b,a) << endl;
     if(a==b)
     {
         cout << "=" << endl;
         return 0;
     }
    if(b==1 || b ==1)
    {
        a>b ? cout << ">" << endl:cout << "<" << endl;
        return 0;
    }
    if(a<=3&& b<=3)
    {
       a>b ? cout << ">" << endl:cout << "<" << endl;
       return 0;
    }
    a>b ? cout << "<" << endl:cout << ">" << endl;
    return 0;
}
