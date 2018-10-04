#include <bits/stdc++.h>

using namespace std;

int lcm(int a,int b)
{
    return (a/__gcd(a,b))*b;
}

int main()
{
    int a,b,c,t,z;
    cin >> t ;
    while(t--)
    {
        cin >> a >> c ;
        if(c%a!=0)
        {
            cout << "NO SOLUTION" << endl;
            continue;
        }
        b=c/a;
        z=b;
        while(true)
        {
            if(lcm(a,b)==c)
                break;
            b+=z;
        }
        cout << b << endl;

    }


    return 0;
}
