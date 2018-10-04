#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,x,f=0;
    string s="1";
    cin >> a >> b >> x ;
    b--;
    while(x)
    {
        if(s[s.size()-1]=='1')
        {
             s=s+"0";
             a--;
        }
        else
        {
           if(b==0)
           {
               a--;
               f=1;
           }
           else
           {
                s=s+"1";
                b--;
           }
        }
        x--;
    }
    int z=1;
    while(b)
    {
        s="1"+s;
        z++;
        b--;
    }
    while(a)
    {
        s.insert(z,"0");
        a--;
    }
    if(f==1)
        s="0"+s;
    cout <<s << endl;
    return 0;
}
