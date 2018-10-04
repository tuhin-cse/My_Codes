#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int x=1,z=n,i=1,j;
        while(n>x)
        {
            n-=x;
            i++;
            x+=(log10(i)+1);
        }
        int m=1;
        cout << n << " " << i << endl;
        while(n>((int)log10(m)+1))
        {
           n-= ((int)log10(m++)+1);
        }
        string s=to_string(m);
        cout << s[n-1] << endl;
    }
    return 0;
}
