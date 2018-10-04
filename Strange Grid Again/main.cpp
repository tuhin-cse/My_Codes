#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long  r,c;
    cin >> c >> r;
    if(c%2==0)
    {
        cout << (long long)(10*ceil(c/2.0)-1)-((5-r)*2) << endl;
    }
    else
      cout << (long long)(10*ceil(c/2.0)-2)-((5-r)*2) << endl;
}
