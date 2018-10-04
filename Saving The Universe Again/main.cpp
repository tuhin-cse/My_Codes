#include <iostream>

using namespace std;

int c;

void solve(int n,string s)
{
    int count =0 ,shoot = 1,swap=0 ;
    for(int i=0;i<s.size();i++)
    {
       if(s[i]=='C')
          shoot*=2;
       else if(s[i]=='S')
          count+=shoot;
       if(count > n && shoot!=1)
       {
         while(s[i]!='C')
           {
             i--;
           }
           char temp=s[i];
           s[i]=s[i+1];
           s[i+1]=temp;
           i=-1;
           count =0 ;shoot = 1;swap++;

       }
        else if(count > n && shoot ==1 )
        {
          cout << "Case #" << ++c << ": IMPOSSIBLE" << endl;
          return;
        }
    }

    cout << "Case #" << ++c << ": "<<swap << endl;

}

int main()
{
    c=0;
    int t,n;
    cin >> t;
    string s;
    while(t--)
      {
        cin >> n >> s ;
        solve(n,s);
      }
}

