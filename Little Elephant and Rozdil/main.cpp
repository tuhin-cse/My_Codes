#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,x,c=0,low=9999999999,in;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x<low)
        {
            low=x;
            c=1;
            in=i+1;
        }
        else if(low==x)
        {
            c++;
        }
    }
    c > 1 ? cout << "Still Rozdil" << endl : cout << in << endl;
    return 0;
}
