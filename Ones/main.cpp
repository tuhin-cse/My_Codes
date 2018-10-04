///    UVa-10127 Ones

#include <bits/stdc++.h>
#include <string.h>

using namespace std;

void solve(int n)
{
     string s="";
        int carry;
        for(int i=1;i<1000;i++)
        {
            s+="1";
            carry=stoi(s);
            carry=carry%n;
            s=to_string(carry);

            if(carry==0)
            {
                cout << i << endl;
                return  ;
            }
        }
}

int main()
{
    int n;
    while(cin >> n)
    {
      solve(n);
    }
    return 0;
}
