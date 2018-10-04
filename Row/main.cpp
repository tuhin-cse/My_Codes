#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s ;
    if((s[0]=='0' || s[n-1]=='0' ) && (n&1) )
        {
           cout << "No" << endl;
           return 0;
        }
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='1')
        {
           if(i>0)
           {
               if(s[i-1]=='1')
               {
                   cout << "No" << endl;
                   return 0;
               }
           }
           if(i<n-1)
           {
               if(s[i+1]=='1')
               {
                   cout << "No" << endl;
                   return 0;
               }
           }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
